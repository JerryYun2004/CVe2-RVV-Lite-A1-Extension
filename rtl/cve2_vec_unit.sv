// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal RVV-Lite A.1 vector unit for CVE2
//
// Requirements implemented:
// - Separate vector register file.
// - SEW fixed to 32, LMUL fixed to 1.
// - VLEN fixed (default 256b => 8 elements).
// - Minimal mask support using v0 (packed bit mask: v0[i] is mask for element i).
// - Tail agnostic: elements >= vl are don't care (we leave them unchanged).
// - Safe/simple uarch: one element per cycle; vector loads/stores are serialized.
// - Internal hardware loop counter (element index) and post-increment address counter for vmem ops.
//
// Supported instruction subset (sufficient for rgba2luma-style kernels):
// - vsetvli / vsetivli / vsetvl  (fixed to SEW=32, LMUL=1, TA=1)
// - vle32.v (unit-stride only)
// - vse32.v (unit-stride only)
// - vadd.vv, vadd.vx
// - vmul.vx
// - vand.vi
// - vsrl.vi

module cve2_vec_unit #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned SEW      = 32,
  parameter int unsigned NUM_REGS = 32
) (
  input  logic         clk_i,
  input  logic         rst_ni,

  // Request from ID stage
  input  logic         req_valid_i,
  input  logic [31:0]  req_instr_i,
  input  logic [31:0]  req_rs1_i,    // scalar x[rs1] value
  input  logic [31:0]  req_rs2_i,    // scalar x[rs2] value (used for vsetvl)
  output logic         req_ready_o,

  // Completion back to ID stage
  output logic         busy_o,
  output logic         done_o,
  output logic         scalar_we_o,
  output logic [4:0]   scalar_waddr_o,
  output logic [31:0]  scalar_wdata_o,

  // Memory interface (direct, shared with scalar LSU via top-level mux)
  output logic         data_req_o,
  input  logic         data_gnt_i,
  output logic [31:0]  data_addr_o,
  output logic         data_we_o,
  output logic [3:0]   data_be_o,
  output logic [31:0]  data_wdata_o,
  input  logic [31:0]  data_rdata_i,
  input  logic         data_rvalid_i,
  input  logic         data_err_i
);

  localparam int unsigned LANES  = VLEN / SEW; // 8 when VLEN=256 and SEW=32
  localparam int unsigned REG_AW = $clog2(NUM_REGS);

  // Latched request
  logic        req_valid_q;
  logic [31:0] instr_q;
  logic [31:0] rs1_q, rs2_q;

  // Instruction fields
  wire [6:0] opcode = instr_q[6:0];
  wire [4:0] rd     = instr_q[11:7];
  wire [2:0] funct3 = instr_q[14:12];
  wire [4:0] rs1    = instr_q[19:15];
  wire [4:0] rs2    = instr_q[24:20];
  wire       vm     = instr_q[25];
  wire [5:0] funct6 = instr_q[31:26];
  wire [4:0] imm5   = instr_q[19:15];

  // vmem fields (LOAD-FP/STORE-FP)
  wire [1:0] mop = instr_q[27:26];
  wire       mew = instr_q[28];
  wire [2:0] nf  = instr_q[31:29];

  // Vector reg indices (minimal)
  wire [4:0] vd  = rd;
  wire [4:0] vs1 = rs1;
  wire [4:0] vs2 = rs2;
  wire [4:0] vs3 = rd; // store data is in rd field for STORE-FP encodings

  // ----------------------
  // Vector register file
  // ----------------------
  logic [VLEN-1:0] v_mask, v_r1, v_r2;
  logic [REG_AW-1:0] raddr0, raddr1, raddr2;
  logic              v_we;
  logic [REG_AW-1:0] v_waddr;
  logic [VLEN-1:0]   v_wdata;

  cve2_vec_regfile #(
    .VLEN(VLEN),
    .NUM_REGS(NUM_REGS)
  ) i_vrf (
    .clk_i   (clk_i),
    .rst_ni  (rst_ni),
    .raddr0_i(raddr0),
    .rdata0_o(v_mask),
    .raddr1_i(raddr1),
    .rdata1_o(v_r1),
    .raddr2_i(raddr2),
    .rdata2_o(v_r2),
    .we_i    (v_we),
    .waddr_i (v_waddr),
    .wdata_i (v_wdata)
  );

  // v0 mask: packed bits, use bit i for element i
  function automatic logic mask_bit(input int unsigned idx);
    mask_bit = v_mask[idx];
  endfunction

  // ----------------------
  // Helpers: element access
  // ----------------------
  function automatic logic [31:0] get_elem32(input logic [VLEN-1:0] vec, input int unsigned idx);
    get_elem32 = vec[idx*32 +: 32];
  endfunction

  function automatic logic [VLEN-1:0] set_elem32(
    input logic [VLEN-1:0] vec,
    input int unsigned idx,
    input logic [31:0] val
  );
    logic [VLEN-1:0] tmp;
    begin
      tmp = vec;
      tmp[idx*32 +: 32] = val;
      return tmp;
    end
  endfunction

  // unit-stride only
  function automatic logic is_unit_stride;
    is_unit_stride = (mop == 2'b00) && (mew == 1'b0) && (nf == 3'b000);
  endfunction

  // ----------------------
  // Minimal decode
  // ----------------------
  typedef enum logic [3:0] {
    VOP_NONE,
    VOP_VSET,
    VOP_VLE32,
    VOP_VSE32,
    VOP_VADD_VV,
    VOP_VADD_VX,
    VOP_VMUL_VX,
    VOP_VAND_VI,
    VOP_VSRL_VI
  } vop_e;

  vop_e vop_q, vop_d;

  localparam logic [6:0] OPC_OPV     = 7'h57;
  localparam logic [6:0] OPC_LOADFP  = 7'h07;
  localparam logic [6:0] OPC_STOREFP = 7'h27;

  localparam logic [2:0] F3_VSET  = 3'b111;
  localparam logic [2:0] F3_OPIVV = 3'b000;
  localparam logic [2:0] F3_OPIVI = 3'b011;
  localparam logic [2:0] F3_OPIVX = 3'b100;
  localparam logic [2:0] F3_W32   = 3'b110;

  // Funct6 values from RVV 1.0
  localparam logic [5:0] F6_VADD = 6'b000000;
  localparam logic [5:0] F6_VMUL = 6'b100101;
  localparam logic [5:0] F6_VAND = 6'b001001;
  localparam logic [5:0] F6_VSRL = 6'b101000;

  function automatic vop_e decode_vop(input logic [31:0] instr);
    logic [6:0] op;
    logic [2:0] f3;
    logic [5:0] f6;
    begin
      op = instr[6:0];
      f3 = instr[14:12];
      f6 = instr[31:26];

      if (op == OPC_OPV && f3 == F3_VSET) return VOP_VSET;

      if (op == OPC_LOADFP && f3 == F3_W32) return VOP_VLE32;
      if (op == OPC_STOREFP && f3 == F3_W32) return VOP_VSE32;

      if (op == OPC_OPV && f3 == F3_OPIVV && f6 == F6_VADD) return VOP_VADD_VV;
      if (op == OPC_OPV && f3 == F3_OPIVX && f6 == F6_VADD) return VOP_VADD_VX;
      if (op == OPC_OPV && f3 == F3_OPIVX && f6 == F6_VMUL) return VOP_VMUL_VX;
      if (op == OPC_OPV && f3 == F3_OPIVI && f6 == F6_VAND) return VOP_VAND_VI;
      if (op == OPC_OPV && f3 == F3_OPIVI && f6 == F6_VSRL) return VOP_VSRL_VI;

      return VOP_NONE;
    end
  endfunction

  // vtype constraints (RVV): only accept SEW=32, LMUL=1, TA=1
  function automatic logic vtype_supported(input logic [10:0] vtypei);
    logic [2:0] vlmul;
    logic [2:0] vsew;
    logic       vta;
    begin
      vlmul = vtypei[2:0];
      vsew  = vtypei[5:3];
      vta   = vtypei[6];
      vtype_supported = (vlmul == 3'b000) && (vsew == 3'b010) && (vta == 1'b1);
    end
  endfunction

  function automatic logic [$clog2(LANES+1)-1:0] compute_vl(input logic [31:0] avl);
    logic [$clog2(LANES+1)-1:0] tmp;
    begin
      if (avl > LANES) tmp = LANES[$clog2(LANES+1)-1:0];
      else tmp = avl[$clog2(LANES+1)-1:0];
      return tmp;
    end
  endfunction

  // ----------------------
  // State
  // ----------------------
  typedef enum logic [2:0] {
    S_IDLE,
    S_ALU,
    S_MEM_REQ,
    S_MEM_WAIT,
    S_DONE
  } state_e;

  state_e state_q, state_d;

  logic [$clog2(LANES+1)-1:0] vl_q, vl_d;            // 0..LANES
  logic [$clog2(LANES)-1:0]   idx_q, idx_d;          // element index
  logic [31:0]                mem_addr_q, mem_addr_d;
  logic [VLEN-1:0]            acc_q, acc_d;          // dest accumulator
  logic                       do_elem;
  logic [31:0]                vset_avl;
  logic [10:0]                vset_vtypei;
  logic [31:0]                alu_a, alu_b, alu_r;

  // handshake to ID
  assign req_ready_o = ~req_valid_q;
  assign busy_o      = req_valid_q;

  // ----------------------
  // Sequential
  // ----------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_valid_q <= 1'b0;
      instr_q     <= 32'd0;
      rs1_q       <= 32'd0;
      rs2_q       <= 32'd0;
      vop_q       <= VOP_NONE;

      state_q     <= S_IDLE;
      vl_q        <= LANES[$clog2(LANES+1)-1:0];
      idx_q       <= '0;
      mem_addr_q  <= 32'd0;
      acc_q       <= '0;
    end else begin
      state_q    <= state_d;
      vl_q       <= vl_d;
      idx_q      <= idx_d;
      mem_addr_q <= mem_addr_d;
      acc_q      <= acc_d;
      vop_q      <= vop_d;

      // accept new request
      if (req_valid_i && req_ready_o) begin
        req_valid_q <= 1'b1;
        instr_q     <= req_instr_i;
        rs1_q       <= req_rs1_i;
        rs2_q       <= req_rs2_i;
      end

      if (state_q == S_DONE) begin
        req_valid_q <= 1'b0;
      end
    end
  end

  // ----------------------
  // Combinational outputs + next state
  // ----------------------
  always_comb begin
    // defaults
    done_o         = 1'b0;
    scalar_we_o    = 1'b0;
    scalar_waddr_o = 5'd0;
    scalar_wdata_o = 32'd0;

    data_req_o     = 1'b0;
    data_addr_o    = 32'd0;
    data_we_o      = 1'b0;
    data_be_o      = 4'b1111;
    data_wdata_o   = 32'd0;

    v_we           = 1'b0;
    v_waddr        = '0;
    v_wdata        = '0;

    // vector reads: v0 for mask, v_r1 and v_r2 vary by op
    raddr0 = '0;                 // v0
    raddr1 = vs1[REG_AW-1:0];     // vs1
    raddr2 = vs2[REG_AW-1:0];     // vs2

    // next-state defaults
    state_d    = state_q;
    vl_d       = vl_q;
    idx_d      = idx_q;
    mem_addr_d = mem_addr_q;
    acc_d      = acc_q;
    vop_d      = vop_q;
    do_elem    = vm ? 1'b1 : mask_bit(idx_q);
    vset_avl   = 32'd0;
    vset_vtypei = 11'd0;
    alu_a      = 32'd0;
    alu_b      = 32'd0;
    alu_r      = 32'd0;

    // when we just accepted a new request, initialize locals
    if (req_valid_i && req_ready_o) begin
      vop_d      = decode_vop(req_instr_i);
      state_d    = S_ALU;
      idx_d      = '0;
      mem_addr_d = req_rs1_i;
      acc_d      = '0;
    end

    // For store, read vs3 as data vector on port1
    if (vop_q == VOP_VSE32) begin
      raddr1 = vs3[REG_AW-1:0];
    end

    // active-element predicate
    do_elem = vm ? 1'b1 : mask_bit(idx_q);

    unique case (state_q)
      S_IDLE: begin
        if (req_valid_q) begin
          state_d = S_ALU;
        end
      end

      S_ALU: begin
        unique case (vop_q)
          VOP_VSET: begin
            // minimal vset semantics:
            // - accept only fixed SEW/LMUL, TA=1 (for vsetvli)
            // - compute vl = min(AVL, LANES)
            // default: vsetvli (AVL in rs1)
            vset_avl    = rs1_q;
            vset_vtypei = instr_q[30:20];

            if (instr_q[31]) begin
              // vsetivli: AVL is uimm[4:0], vtypei is bits[29:20]
              vset_avl    = {27'd0, instr_q[19:15]};
              vset_vtypei = {1'b0, instr_q[29:20]};
            end else if (instr_q[25] && (instr_q[31:26] == 6'b000000)) begin
              // vsetvl: use rs2 as AVL
              vset_avl    = rs2_q;
              vset_vtypei = 11'h000;
            end

            // vsetvli checks vtype
            if (!instr_q[31] && !(instr_q[25] && (instr_q[31:26] == 6'b000000))) begin
              if (!vtype_supported(vset_vtypei)) begin
                // Treat as no-op; decoder should have trapped it as illegal.
                vl_d = vl_q;
              end else begin
                vl_d = compute_vl(vset_avl);
              end
            end else begin
              // vsetivli/vsetvl: fixed semantics
              vl_d = compute_vl(vset_avl);
            end

            // write rd with new vl
            scalar_we_o    = (rd != 5'd0);
            scalar_waddr_o = rd;
            scalar_wdata_o = {{(32-$clog2(LANES+1)){1'b0}}, vl_d};

            done_o  = 1'b1;
            state_d = S_DONE;
          end

          VOP_VADD_VV,
          VOP_VADD_VX,
          VOP_VMUL_VX,
          VOP_VAND_VI,
          VOP_VSRL_VI: begin
            alu_a = get_elem32(v_r2, idx_q); // vs2
            unique case (vop_q)
              VOP_VADD_VV: begin
                alu_b = get_elem32(v_r1, idx_q); // vs1
                alu_r = alu_a + alu_b;
              end
              VOP_VADD_VX: begin
                alu_b = rs1_q;
                alu_r = alu_a + alu_b;
              end
              VOP_VMUL_VX: begin
                alu_b = rs1_q;
                alu_r = alu_a * alu_b;
              end
              VOP_VAND_VI: begin
                alu_b = {27'd0, imm5};
                alu_r = alu_a & alu_b;
              end
              VOP_VSRL_VI: begin
                alu_b = {27'd0, imm5};
                alu_r = alu_a >> alu_b[4:0];
              end
              default: begin
                alu_b = 32'd0;
                alu_r = 32'd0;
              end
            endcase

            if (do_elem) begin
              acc_d = set_elem32(acc_d, idx_q, alu_r);
            end

            if (idx_q == (vl_q - 1'b1)) begin
              v_we    = 1'b1;
              v_waddr = vd[REG_AW-1:0];
              v_wdata = acc_d;
              done_o  = 1'b1;
              state_d = S_DONE;
            end else begin
              idx_d = idx_q + 1'b1;
            end
          end

          VOP_VLE32,
          VOP_VSE32: begin
            if (!is_unit_stride()) begin
              // unsupported addressing => should be illegal; treat as done
              done_o  = 1'b1;
              state_d = S_DONE;
            end else begin
              state_d = S_MEM_REQ;
            end
          end

          default: begin
            done_o  = 1'b1;
            state_d = S_DONE;
          end
        endcase
      end

      S_MEM_REQ: begin
        data_req_o  = 1'b1;
        data_addr_o = mem_addr_q;
        data_be_o   = 4'b1111;

        if (vop_q == VOP_VLE32) begin
          data_we_o    = 1'b0;
          data_wdata_o = 32'd0;
        end else begin
          data_we_o    = 1'b1;
          data_wdata_o = get_elem32(v_r1, idx_q); // v_r1 is vs3 for store
        end

        if (data_gnt_i) begin
          state_d = S_MEM_WAIT;
        end
      end

      S_MEM_WAIT: begin
        if (data_rvalid_i) begin
          if (data_err_i) begin
            // Minimal: stop. (Scalar core may choose to observe bus error elsewhere.)
            done_o  = 1'b1;
            state_d = S_DONE;
          end else begin
            if (vop_q == VOP_VLE32) begin
              if (do_elem) begin
                acc_d = set_elem32(acc_d, idx_q, data_rdata_i);
              end
            end

            // post-increment address
            mem_addr_d = mem_addr_q + 32'd4;

            if (idx_q == (vl_q - 1'b1)) begin
              if (vop_q == VOP_VLE32) begin
                v_we    = 1'b1;
                v_waddr = vd[REG_AW-1:0];
                v_wdata = acc_d;
              end
              done_o  = 1'b1;
              state_d = S_DONE;
            end else begin
              idx_d   = idx_q + 1'b1;
              state_d = S_MEM_REQ;
            end
          end
        end
      end

      S_DONE: begin
        done_o  = 1'b1;
        state_d = S_IDLE;
      end

      default: begin
        state_d = S_IDLE;
      end
    endcase
  end

endmodule
