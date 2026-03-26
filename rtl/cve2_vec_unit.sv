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
  parameter int unsigned NUM_REGS = 16
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
  input  logic         data_err_i,

  // Reuse scalar EX hardware for vector ALU/multiply ops
  output logic         ex_req_o,
  output logic         ex_is_mul_o,
  output logic [1:0]   ex_alu_op_o,
  output logic [31:0]  ex_operand_a_o,
  output logic [31:0]  ex_operand_b_o,
  input  logic [31:0]  ex_result_i,
  input  logic         ex_valid_i
);

  localparam int unsigned LANES  = VLEN / SEW; // 8 when VLEN=256 and SEW=32
  localparam int unsigned REG_AW = $clog2(NUM_REGS);

  // Latched request
  logic        req_valid_q;
  logic [31:0] instr_q;
  logic [31:0] rs1_q, rs2_q;
  logic [VLEN-1:0]  acc_next;

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

  function automatic logic vreg_idx_valid(input logic [4:0] idx);
    begin
      vreg_idx_valid = (idx < NUM_REGS);
    end
  endfunction

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
    VOP_VAND_VX,
    VOP_VAND_VI,
    VOP_VSRL_VI
  } vop_e;

  vop_e vop_q, vop_d;

function automatic logic instr_vregs_valid(input vop_e op, input logic [31:0] instr);
  logic [4:0] rd_i, rs1_i, rs2_i;
  begin
    rd_i  = instr[11:7];
    rs1_i = instr[19:15];
    rs2_i = instr[24:20];

    unique case (op)
      VOP_VLE32:    instr_vregs_valid = vreg_idx_valid(rd_i);
      VOP_VSE32:    instr_vregs_valid = vreg_idx_valid(rd_i); // store data is in rd/vs3 field
      VOP_VADD_VV:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs1_i) &&
                                         vreg_idx_valid(rs2_i);
      VOP_VADD_VX:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs2_i);
      VOP_VMUL_VX:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs2_i);
      VOP_VAND_VX:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs2_i);
      VOP_VAND_VI:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs2_i);
      VOP_VSRL_VI:  instr_vregs_valid = vreg_idx_valid(rd_i)  &&
                                         vreg_idx_valid(rs2_i);
      default:      instr_vregs_valid = 1'b1;
    endcase
  end
endfunction

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

  // Minimal EX op encoding for cve2_core mapping
  localparam logic [1:0] EXOP_ADD = 2'd0;
  localparam logic [1:0] EXOP_AND = 2'd1;
  localparam logic [1:0] EXOP_SRL = 2'd2;

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
      if (op == OPC_OPV && f3 == F3_OPIVX && f6 == F6_VAND) return VOP_VAND_VX;
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
    S_EX_WAIT,
    S_MEM_REQ,
    S_MEM_WAIT
  } state_e;

  state_e state_q, state_d;

  logic [$clog2(LANES+1)-1:0] vl_q, vl_d;            // 0..LANES
  logic [$clog2(LANES)-1:0]   idx_q, idx_d;          // element index
  logic [31:0]                mem_addr_q, mem_addr_d;
  logic [VLEN-1:0]            acc_q, acc_d;          // dest accumulator
  logic                       do_elem;
  logic [31:0]                vset_avl;
  logic [10:0]                vset_vtypei;
  logic [31:0]                ex_op_a, ex_op_b;
  logic [31:0] ex_hold_a_q, ex_hold_a_d;
  logic [31:0] ex_hold_b_q, ex_hold_b_d;
  logic        ex_hold_is_mul_q, ex_hold_is_mul_d;
  logic [1:0]  ex_hold_alu_op_q, ex_hold_alu_op_d;
  logic        done_d;

  // handshake to ID
  assign req_ready_o = ~req_valid_q;
  assign busy_o      = req_valid_q;
  assign done_o      = done_d;

  // Vector regfile read addresses
  // Keep these outside the main always_comb so the block that consumes
  // v_mask/v_r1/v_r2 does not also drive raddr0/1/2.
  assign raddr0 = '0;  // v0 mask
  assign raddr1 = (vop_q == VOP_VSE32) ? vs3[REG_AW-1:0] : vs1[REG_AW-1:0];
  assign raddr2 = vs2[REG_AW-1:0];

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
      ex_hold_a_q      <= 32'd0;
      ex_hold_b_q      <= 32'd0;
      ex_hold_is_mul_q <= 1'b0;
      ex_hold_alu_op_q <= EXOP_ADD;
    end else begin
      state_q    <= state_d;
      vl_q       <= vl_d;
      idx_q      <= idx_d;
      mem_addr_q <= mem_addr_d;
      acc_q      <= acc_d;
      vop_q      <= vop_d;
      ex_hold_a_q      <= ex_hold_a_d;
      ex_hold_b_q      <= ex_hold_b_d;
      ex_hold_is_mul_q <= ex_hold_is_mul_d;
      ex_hold_alu_op_q <= ex_hold_alu_op_d;

      // accept new request
      if (req_valid_i && req_ready_o) begin
        req_valid_q <= 1'b1;
        instr_q     <= req_instr_i;
        rs1_q       <= req_rs1_i;
        rs2_q       <= req_rs2_i;
      end

      if (done_d) begin
        req_valid_q <= 1'b0;
      end
    end
  end

  // ----------------------
  // Combinational outputs + next state
  // ----------------------
  always_comb begin
    // defaults
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

    ex_hold_a_d      = ex_hold_a_q;
    ex_hold_b_d      = ex_hold_b_q;
    ex_hold_is_mul_d = ex_hold_is_mul_q;
    ex_hold_alu_op_d = ex_hold_alu_op_q;

    acc_next       = acc_q;

    // next-state defaults
    state_d    = state_q;
    vl_d       = vl_q;
    idx_d      = idx_q;
    mem_addr_d = mem_addr_q;
    acc_d      = acc_q;
    vop_d      = vop_q;
    done_d     = 1'b0;
    do_elem    = vm ? 1'b1 : mask_bit(int'(idx_q));
    vset_avl    = 32'd0;
    vset_vtypei = 11'd0;
    ex_req_o       = 1'b0;
    ex_is_mul_o    = 1'b0;
    ex_alu_op_o    = EXOP_ADD;
    ex_operand_a_o = 32'd0;
    ex_operand_b_o = 32'd0;
    ex_op_a        = 32'd0;
    ex_op_b        = 32'd0;

    // when we just accepted a new request, initialize locals and choose the
    // real first state directly.
    if (req_valid_i && req_ready_o) begin
      vop_d      = decode_vop(req_instr_i);
      idx_d      = '0;
      mem_addr_d = req_rs1_i;
      acc_d      = '0;

      if (!instr_vregs_valid(decode_vop(req_instr_i), req_instr_i)) begin
        // Prevent silent aliasing when NUM_REGS < 32.
        // Treat out-of-range vector register references as a no-op completion.
        state_d = S_ALU;
        vop_d   = VOP_NONE;
      end else begin
        unique case (decode_vop(req_instr_i))
          VOP_VLE32,
          VOP_VSE32: state_d = S_MEM_REQ;

          VOP_VSET,
          VOP_VADD_VV,
          VOP_VADD_VX,
          VOP_VMUL_VX,
          VOP_VAND_VX,
          VOP_VAND_VI,
          VOP_VSRL_VI,
          VOP_NONE: state_d = S_ALU;

          default: state_d = S_ALU;
        endcase
      end
    end

    unique case (state_q)
      S_IDLE: begin
        // stay idle; accept block above chooses next state for new requests
      end

         S_ALU: begin
        if ((vop_q != VOP_VSET) && (vl_q == '0)) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else begin
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

              scalar_we_o    = (rd != 5'd0);
              scalar_waddr_o = rd;
              scalar_wdata_o = {{(32-$clog2(LANES+1)){1'b0}}, vl_d};
              done_d         = 1'b1;
              state_d        = S_IDLE;
            end

            VOP_VADD_VV,
            VOP_VADD_VX,
            VOP_VMUL_VX,
            VOP_VAND_VX,
            VOP_VAND_VI,
            VOP_VSRL_VI: begin
              ex_op_a = get_elem32(v_r2, int'(idx_q)); // vs2

              unique case (vop_q)
                VOP_VADD_VV: begin
                  ex_op_b     = get_elem32(v_r1, int'(idx_q)); // vs1
                  ex_alu_op_o = EXOP_ADD;
                end
                VOP_VADD_VX: begin
                  ex_op_b     = rs1_q;
                  ex_alu_op_o = EXOP_ADD;
                end
                VOP_VMUL_VX: begin
                  ex_op_b     = rs1_q;
                  ex_is_mul_o = 1'b1;
                end
                VOP_VAND_VX: begin
                  ex_op_b     = rs1_q;
                  ex_alu_op_o = EXOP_AND;
                end
                VOP_VAND_VI: begin
                  ex_op_b     = {27'd0, imm5};
                  ex_alu_op_o = EXOP_AND;
                end
                VOP_VSRL_VI: begin
                  ex_op_b     = {27'd0, imm5};
                  ex_alu_op_o = EXOP_SRL;
                end
                default: begin
                  ex_op_b     = 32'd0;
                  ex_alu_op_o = EXOP_ADD;
                end
              endcase
              // Temporary debug prints
              // if (vop_q == VOP_VADD_VV || vop_q == VOP_VMUL_VX || vop_q == VOP_VSRL_VI || vop_q == VOP_VAND_VX || vop_q == VOP_VAND_VI) begin
              //   $display("[VEC-READ] instr=%h vop=%0d idx=%0d vd=%0d vs1=%0d vs2=%0d raddr1=%0d raddr2=%0d elem_r1=%h elem_r2=%h rs1_q=%h",
              //           instr_q, vop_q, idx_q, vd, vs1, vs2, raddr1, raddr2,
              //           get_elem32(v_r1, int'(idx_q)), get_elem32(v_r2, int'(idx_q)), rs1_q);
              // end

              ex_req_o       = 1'b1;
              ex_operand_a_o = ex_op_a;
              ex_operand_b_o = ex_op_b;

              ex_hold_a_d      = ex_op_a;
              ex_hold_b_d      = ex_op_b;
              ex_hold_is_mul_d = (vop_q == VOP_VMUL_VX);
              ex_hold_alu_op_d = ex_alu_op_o;

              // Reused EX ops may complete in the same cycle, including
              // vmul.vx in the current single-cycle multiply configuration.
              // Consume that result here so we do not miss the pulse by
              // unconditionally transitioning to S_EX_WAIT.
              if (ex_valid_i) begin
                if (do_elem) begin
                  acc_next = set_elem32(acc_q, int'(idx_q), ex_result_i);
                end else begin
                  acc_next = acc_q;
                end

                acc_d = acc_next;

                if (idx_q == (vl_q[$bits(idx_q)-1:0] - 1'b1)) begin
                  v_we    = 1'b1;
                  v_waddr = vd[REG_AW-1:0];
                  v_wdata = acc_next;
                  done_d  = 1'b1;
                  state_d = S_IDLE;
                end else begin
                  idx_d   = idx_q + 1'b1;
                  state_d = S_ALU;
                end
              end else begin
                // If the reused EX path does not return valid in the launch
                // cycle, wait here for completion.
                state_d = S_EX_WAIT;
              end
            end

            VOP_VLE32,
            VOP_VSE32: begin
              state_d = S_MEM_REQ;
            end

            default: begin
              done_d  = 1'b1;
              state_d = S_IDLE;
            end
          endcase
        end
      end

      S_EX_WAIT: begin
        if (vl_q == '0) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else begin
          ex_req_o       = 1'b1;
          ex_operand_a_o = ex_hold_a_q;
          ex_operand_b_o = ex_hold_b_q;
          ex_is_mul_o    = ex_hold_is_mul_q;
          ex_alu_op_o    = ex_hold_alu_op_q;

          if (ex_valid_i) begin
            if (do_elem) begin
              acc_next = set_elem32(acc_q, int'(idx_q), ex_result_i);
            end else begin
              acc_next = acc_q;
            end

            acc_d = acc_next;

            if (idx_q == (vl_q[$bits(idx_q)-1:0] - 1'b1)) begin
              v_we    = 1'b1;
              v_waddr = vd[REG_AW-1:0];
              v_wdata = acc_next;
              done_d  = 1'b1;
              state_d = S_IDLE;
            end else begin
              idx_d   = idx_q + 1'b1;
              state_d = S_ALU;
            end
          end
        end
      end

      S_MEM_REQ: begin
        if (vl_q == '0) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else if (!is_unit_stride()) begin
          // unsupported addressing => should be illegal; treat as done
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else begin
          data_req_o  = 1'b1;
          data_addr_o = mem_addr_q;
          data_be_o   = 4'b1111;

          if (vop_q == VOP_VLE32) begin
            data_we_o    = 1'b0;
            data_wdata_o = 32'd0;
          end else begin
            data_we_o    = 1'b1;
            data_wdata_o = get_elem32(v_r1, int'(idx_q)); // v_r1 is vs3 for store
          end

          if (data_gnt_i) begin
            state_d = S_MEM_WAIT;
          end
        end
      end

      S_MEM_WAIT: begin
        if (vl_q == '0) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else if (data_rvalid_i) begin
          if (data_err_i) begin
            // Minimal: stop. (Scalar core may choose to observe bus error elsewhere.)
            done_d  = 1'b1;
            state_d = S_IDLE;
          end else begin
            acc_next = acc_q;

            if (vop_q == VOP_VLE32) begin
              if (do_elem) begin
                acc_next = set_elem32(acc_q, int'(idx_q), data_rdata_i);
              end
              acc_d = acc_next;
            end

            // post-increment address
            mem_addr_d = mem_addr_q + 32'd4;

            if (idx_q == (vl_q[$bits(idx_q)-1:0] - 1'b1)) begin
              if (vop_q == VOP_VLE32) begin
                v_we    = 1'b1;
                v_waddr = vd[REG_AW-1:0];
                v_wdata = acc_next;
              end
              done_d  = 1'b1;
              state_d = S_IDLE;
            end else begin
              idx_d   = idx_q + 1'b1;
              state_d = S_MEM_REQ;
            end
          end
        end
      end

      default: begin
        state_d = S_IDLE;
      end
    endcase
  end

  // Temporary Debug Prints
  // always_ff @(posedge clk_i) begin
  //   if (state_q != S_IDLE || req_valid_q) begin
  //     $display("[VEC] state=%0d idx=%0d vl=%0d ex_req=%0d ex_valid=%0d done=%0d busy=%0d instr=%h",
  //             state_q, idx_q, vl_q, ex_req_o, ex_valid_i, done_o, busy_o, instr_q);
  //   end
  // end

endmodule
