
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
// - Tail agnostic.
// - Safe/simple uarch.
// - Internal hardware loop counter (element index) and post-increment address counter for vmem ops.
// - Strict reuse of original CVE2 scalar EX hardware for vector ALU/multiply ops.
// - 2R1W VRF support via duplicated LUTRAM: vv ops can read both vector sources
//   in the same cycle, while vx/vi ops keep one-lane-per-cycle issue/retire after pipeline fill.
//
// Supported instruction subset:
// - vsetvli / vsetivli / vsetvl  (fixed to SEW=32, LMUL=1, TA=1)
// - vle32.v (unit-stride only)
// - vse32.v (unit-stride only)
// - vadd.vv, vadd.vx
// - vmul.vv, vmul.vx
// - vand.vx, vand.vi
// - vsrl.vi

module cve2_vec_unit #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned SEW      = 32,
  parameter int unsigned NUM_REGS = 8
) (
  input  logic         clk_i,
  input  logic         rst_ni,

  // Request from ID stage
  input  logic         req_valid_i,
  input  logic [31:0]  req_instr_i,
  input  logic [31:0]  req_rs1_i,
  input  logic [31:0]  req_rs2_i,
  output logic         req_ready_o,

  // Completion back to ID stage
  output logic         busy_o,
  output logic         done_o,
  output logic         scalar_we_o,
  output logic [4:0]   scalar_waddr_o,
  output logic [31:0]  scalar_wdata_o,

  // Memory interface
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

  localparam int unsigned LANES   = VLEN / SEW;
  localparam int unsigned REG_AW  = $clog2(NUM_REGS);
  localparam int unsigned ELEM_AW = (LANES > 1) ? $clog2(LANES) : 1;

  // Latched request
  logic        req_valid_q;
  logic [31:0] instr_q;
  logic [31:0] rs1_q, rs2_q;

  // Instruction fields
  wire [4:0] rd     = instr_q[11:7];
  wire [4:0] rs1    = instr_q[19:15];
  wire [4:0] rs2    = instr_q[24:20];
  wire       vm     = instr_q[25];
  wire [4:0] imm5   = instr_q[19:15];

  // vmem fields
  wire [1:0] mop = instr_q[27:26];
  wire       mew = instr_q[28];
  wire [2:0] nf  = instr_q[31:29];

  wire [4:0] vd  = rd;
  wire [4:0] vs1 = rs1;
  wire [4:0] vs2 = rs2;
  wire [4:0] vs3 = rd;

  function automatic logic vreg_idx_valid(input logic [4:0] idx);
    begin
      vreg_idx_valid = (idx < NUM_REGS);
    end
  endfunction

  // ----------------------
  // Vector register file
  // ----------------------
  logic                 mask_bit_vrf_cur, mask_bit_vrf_next;
  logic [SEW-1:0]       v_rdata_elem1, v_rdata_elem2;
  logic [REG_AW-1:0]    raddr1, raddr2;
  logic [ELEM_AW-1:0]   relem0_cur, relem0_next, relem1, relem2;
  logic                 v_we;
  logic [REG_AW-1:0]    v_waddr;
  logic [ELEM_AW-1:0]   v_welem;
  logic [SEW-1:0]       v_wdata;

  cve2_vec_regfile #(
    .VLEN(VLEN),
    .SEW(SEW),
    .NUM_REGS(NUM_REGS)
  ) i_vrf (
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),
    .relem0_i   (relem0_cur),
    .mask_bit_o (mask_bit_vrf_cur),
    .relem0b_i  (relem0_next),
    .mask_bit_b_o(mask_bit_vrf_next),
    .raddr1_i   (raddr1),
    .relem1_i   (relem1),
    .rdata1_o   (v_rdata_elem1),
    .raddr2_i   (raddr2),
    .relem2_i   (relem2),
    .rdata2_o   (v_rdata_elem2),
    .we_i       (v_we),
    .waddr_i  (v_waddr),
    .welem_i  (v_welem),
    .wdata_i  (v_wdata)
  );

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
    VOP_VMUL_VV,
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
        VOP_VSE32:    instr_vregs_valid = vreg_idx_valid(rd_i);
        VOP_VADD_VV:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs1_i) && vreg_idx_valid(rs2_i);
        VOP_VADD_VX:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs2_i);
        VOP_VMUL_VV:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs1_i) && vreg_idx_valid(rs2_i);
        VOP_VMUL_VX:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs2_i);
        VOP_VAND_VX:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs2_i);
        VOP_VAND_VI:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs2_i);
        VOP_VSRL_VI:  instr_vregs_valid = vreg_idx_valid(rd_i) && vreg_idx_valid(rs2_i);
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
  localparam logic [2:0] F3_VMEM  = 3'b110;

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

      if ((op == OPC_OPV) && (f3 == F3_VSET))   return VOP_VSET;
      if ((op == OPC_LOADFP)  && (f3 == F3_VMEM)) return VOP_VLE32;
      if ((op == OPC_STOREFP) && (f3 == F3_VMEM)) return VOP_VSE32;
      if ((op == OPC_OPV) && (f3 == F3_OPIVV) && (f6 == F6_VADD)) return VOP_VADD_VV;
      if ((op == OPC_OPV) && (f3 == F3_OPIVX) && (f6 == F6_VADD)) return VOP_VADD_VX;
      if ((op == OPC_OPV) && (f3 == F3_OPIVV) && (f6 == F6_VMUL)) return VOP_VMUL_VV;
      if ((op == OPC_OPV) && (f3 == F3_OPIVX) && (f6 == F6_VMUL)) return VOP_VMUL_VX;
      if ((op == OPC_OPV) && (f3 == F3_OPIVX) && (f6 == F6_VAND)) return VOP_VAND_VX;
      if ((op == OPC_OPV) && (f3 == F3_OPIVI) && (f6 == F6_VAND)) return VOP_VAND_VI;
      if ((op == OPC_OPV) && (f3 == F3_OPIVI) && (f6 == F6_VSRL)) return VOP_VSRL_VI;
      return VOP_NONE;
    end
  endfunction

  // Scalar EX operator encoding exported by vec unit.
  localparam logic [1:0] EXOP_ADD = 2'd0;
  localparam logic [1:0] EXOP_AND = 2'd1;
  localparam logic [1:0] EXOP_SRL = 2'd2;

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

  typedef enum logic [2:0] {
    S_IDLE,
    S_ALU_ISSUE,
    S_EX_WAIT,
    S_MEM_REQ,
    S_MEM_WAIT
  } state_e;

  localparam logic [1:0] RSEL_NONE = 2'd0;
  localparam logic [1:0] RSEL_VS1  = 2'd1;
  localparam logic [1:0] RSEL_VS2  = 2'd2;
  localparam logic [1:0] RSEL_VS3  = 2'd3;

  state_e state_q, state_d;

  logic [$clog2(LANES+1)-1:0] vl_q, vl_d;
  logic [$clog2(LANES+1)-1:0] idx_q, idx_d;
  logic [31:0]                mem_addr_q, mem_addr_d;
  logic                       do_elem;
  logic [31:0]                vset_avl;
  logic [10:0]                vset_vtypei;
  logic [31:0]                ex_op_a, ex_op_b;
  logic [31:0]                ex_hold_a_q, ex_hold_a_d;
  logic [31:0]                ex_hold_b_q, ex_hold_b_d;
  logic                       ex_hold_is_mul_q, ex_hold_is_mul_d;
  logic [1:0]                 ex_hold_alu_op_q, ex_hold_alu_op_d;
  logic [ELEM_AW-1:0]         ex_hold_idx_q, ex_hold_idx_d;
  logic [REG_AW-1:0]          ex_hold_vd_q, ex_hold_vd_d;
  logic                       ex_hold_do_q, ex_hold_do_d;
  logic                       cur_valid;
  logic [31:0]                cur_result;
  logic [ELEM_AW-1:0]         read_idx1, read_idx2;
  logic [1:0]                 raddr1_sel, raddr2_sel;
  logic                       done_d;
  logic [ELEM_AW-1:0]         next_idx_e;
  logic                       more_after_commit;

  function automatic logic op_uses_single_vec_read(input vop_e op);
    begin
      op_uses_single_vec_read = (op == VOP_VADD_VX) || (op == VOP_VMUL_VX) ||
                                (op == VOP_VAND_VX) || (op == VOP_VAND_VI) ||
                                (op == VOP_VSRL_VI);
    end
  endfunction

  assign req_ready_o = ~req_valid_q;
  assign busy_o      = req_valid_q;
  assign done_o      = done_d;

  always_comb begin
    relem0_cur  = idx_q[ELEM_AW-1:0];
    relem0_next = idx_q[ELEM_AW-1:0] + 1'b1;

    unique case (raddr1_sel)
      RSEL_VS1: raddr1 = vs1[REG_AW-1:0];
      RSEL_VS2: raddr1 = vs2[REG_AW-1:0];
      RSEL_VS3: raddr1 = vs3[REG_AW-1:0];
      default:  raddr1 = '0;
    endcase

    unique case (raddr2_sel)
      RSEL_VS1: raddr2 = vs1[REG_AW-1:0];
      RSEL_VS2: raddr2 = vs2[REG_AW-1:0];
      RSEL_VS3: raddr2 = vs3[REG_AW-1:0];
      default:  raddr2 = '0;
    endcase

    relem1 = read_idx1;
    relem2 = read_idx2;
  end

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
      ex_hold_a_q      <= 32'd0;
      ex_hold_b_q      <= 32'd0;
      ex_hold_is_mul_q <= 1'b0;
      ex_hold_alu_op_q <= EXOP_ADD;
      ex_hold_idx_q    <= '0;
      ex_hold_vd_q     <= '0;
      ex_hold_do_q     <= 1'b0;
    end else begin
      state_q    <= state_d;
      vl_q       <= vl_d;
      idx_q      <= idx_d;
      mem_addr_q <= mem_addr_d;
      vop_q      <= vop_d;
      ex_hold_a_q      <= ex_hold_a_d;
      ex_hold_b_q      <= ex_hold_b_d;
      ex_hold_is_mul_q <= ex_hold_is_mul_d;
      ex_hold_alu_op_q <= ex_hold_alu_op_d;
      ex_hold_idx_q    <= ex_hold_idx_d;
      ex_hold_vd_q     <= ex_hold_vd_d;
      ex_hold_do_q     <= ex_hold_do_d;

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

  always_comb begin
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
    v_welem        = '0;
    v_wdata        = '0;

    ex_hold_a_d      = ex_hold_a_q;
    ex_hold_b_d      = ex_hold_b_q;
    ex_hold_is_mul_d = ex_hold_is_mul_q;
    ex_hold_alu_op_d = ex_hold_alu_op_q;
    ex_hold_idx_d    = ex_hold_idx_q;
    ex_hold_vd_d     = ex_hold_vd_q;
    ex_hold_do_d     = ex_hold_do_q;

    state_d    = state_q;
    vl_d       = vl_q;
    idx_d      = idx_q;
    mem_addr_d = mem_addr_q;
    vop_d      = vop_q;
    done_d     = 1'b0;
    do_elem    = vm ? 1'b1 : mask_bit_vrf_cur;
    vset_avl    = 32'd0;
    vset_vtypei = 11'd0;
    ex_req_o       = 1'b0;
    ex_is_mul_o    = 1'b0;
    ex_alu_op_o    = EXOP_ADD;
    ex_operand_a_o = 32'd0;
    ex_operand_b_o = 32'd0;
    ex_op_a        = 32'd0;
    ex_op_b        = 32'd0;
    cur_valid      = 1'b0;
    cur_result     = 32'd0;
    read_idx1      = idx_q[ELEM_AW-1:0];
    read_idx2      = idx_q[ELEM_AW-1:0];
    raddr1_sel     = RSEL_NONE;
    raddr2_sel     = RSEL_NONE;
    next_idx_e     = idx_q[ELEM_AW-1:0] + 1'b1;
    more_after_commit = (idx_q != (vl_q - 1'b1));

    if (req_valid_i && req_ready_o) begin
      vop_d      = decode_vop(req_instr_i);
      idx_d      = '0;
      mem_addr_d = req_rs1_i;

      if (!instr_vregs_valid(decode_vop(req_instr_i), req_instr_i)) begin
        state_d = S_ALU_ISSUE;
        vop_d   = VOP_NONE;
      end else begin
        unique case (decode_vop(req_instr_i))
          VOP_VLE32,
          VOP_VSE32: state_d = S_MEM_REQ;
          default:   state_d = S_ALU_ISSUE;
        endcase
      end
    end

    unique case (state_q)
      S_IDLE: begin
      end

      S_ALU_ISSUE: begin
        if ((vop_q != VOP_VSET) && (vl_q == '0)) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else begin
          unique case (vop_q)
            VOP_VSET: begin
              vset_avl    = rs1_q;
              vset_vtypei = instr_q[30:20];

              if (instr_q[31]) begin
                vset_avl    = {27'd0, instr_q[19:15]};
                vset_vtypei = {1'b0, instr_q[29:20]};
              end else if (instr_q[25] && (instr_q[31:26] == 6'b000000)) begin
                vset_avl    = rs2_q;
                vset_vtypei = 11'h000;
              end

              if (!instr_q[31] && !(instr_q[25] && (instr_q[31:26] == 6'b000000))) begin
                if (!vtype_supported(vset_vtypei)) begin
                  vl_d = vl_q;
                end else begin
                  vl_d = compute_vl(vset_avl);
                end
              end else begin
                vl_d = compute_vl(vset_avl);
              end

              scalar_we_o    = (rd != 5'd0);
              scalar_waddr_o = rd;
              scalar_wdata_o = {{(32-$clog2(LANES+1)){1'b0}}, vl_d};
              done_d         = 1'b1;
              state_d        = S_IDLE;
            end

            VOP_VADD_VV,
            VOP_VMUL_VV: begin
              raddr1_sel = RSEL_VS2;
              raddr2_sel = RSEL_VS1;
              read_idx1  = idx_q[ELEM_AW-1:0];
              read_idx2  = idx_q[ELEM_AW-1:0];
              ex_op_a    = v_rdata_elem1;
              ex_op_b    = v_rdata_elem2;

              ex_alu_op_o = EXOP_ADD;
              ex_is_mul_o = (vop_q == VOP_VMUL_VV);
              ex_req_o       = 1'b1;
              ex_operand_a_o = ex_op_a;
              ex_operand_b_o = ex_op_b;

              ex_hold_a_d      = ex_op_a;
              ex_hold_b_d      = ex_op_b;
              ex_hold_is_mul_d = (vop_q == VOP_VMUL_VV);
              ex_hold_alu_op_d = ex_alu_op_o;
              ex_hold_idx_d    = idx_q[ELEM_AW-1:0];
              ex_hold_vd_d     = vd[REG_AW-1:0];
              ex_hold_do_d     = do_elem;
              state_d          = S_EX_WAIT;
            end

            VOP_VADD_VX,
            VOP_VMUL_VX,
            VOP_VAND_VX,
            VOP_VAND_VI,
            VOP_VSRL_VI: begin
              raddr1_sel = RSEL_VS2;
              read_idx1  = idx_q[ELEM_AW-1:0];
              ex_op_a    = v_rdata_elem1;

              unique case (vop_q)
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

              ex_req_o       = 1'b1;
              ex_operand_a_o = ex_op_a;
              ex_operand_b_o = ex_op_b;

              ex_hold_a_d      = ex_op_a;
              ex_hold_b_d      = ex_op_b;
              ex_hold_is_mul_d = (vop_q == VOP_VMUL_VX);
              ex_hold_alu_op_d = ex_alu_op_o;
              ex_hold_idx_d    = idx_q[ELEM_AW-1:0];
              ex_hold_vd_d     = vd[REG_AW-1:0];
              ex_hold_do_d     = do_elem;
              state_d          = S_EX_WAIT;
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
          cur_valid  = ex_valid_i;
          cur_result = ex_result_i;

          // Keep current issued op visible on the reused EX interface.
          ex_req_o       = 1'b1;
          ex_operand_a_o = ex_hold_a_q;
          ex_operand_b_o = ex_hold_b_q;
          ex_is_mul_o    = ex_hold_is_mul_q;
          ex_alu_op_o    = ex_hold_alu_op_q;

          if (cur_valid) begin
            if (ex_hold_do_q) begin
              v_we    = 1'b1;
              v_waddr = ex_hold_vd_q;
              v_welem = ex_hold_idx_q;
              v_wdata = cur_result;
            end

            if (!more_after_commit) begin
              done_d  = 1'b1;
              state_d = S_IDLE;
            end else begin
              idx_d = idx_q + 1'b1;

              if (op_uses_single_vec_read(vop_q)) begin
                // While committing lane i, also read and launch lane i+1.
                // vx/vi paths still need only one vector read even with the 2R1W VRF.
                raddr1_sel = RSEL_VS2;
                read_idx1 = next_idx_e;
                ex_op_a  = v_rdata_elem1;

                unique case (vop_q)
                  VOP_VADD_VX: begin
                    ex_op_b     = rs1_q;
                    ex_alu_op_o = EXOP_ADD;
                    ex_is_mul_o = 1'b0;
                  end
                  VOP_VMUL_VX: begin
                    ex_op_b     = rs1_q;
                    ex_alu_op_o = EXOP_ADD;
                    ex_is_mul_o = 1'b1;
                  end
                  VOP_VAND_VX: begin
                    ex_op_b     = rs1_q;
                    ex_alu_op_o = EXOP_AND;
                    ex_is_mul_o = 1'b0;
                  end
                  VOP_VAND_VI: begin
                    ex_op_b     = {27'd0, imm5};
                    ex_alu_op_o = EXOP_AND;
                    ex_is_mul_o = 1'b0;
                  end
                  VOP_VSRL_VI: begin
                    ex_op_b     = {27'd0, imm5};
                    ex_alu_op_o = EXOP_SRL;
                    ex_is_mul_o = 1'b0;
                  end
                  default: begin
                    ex_op_b     = 32'd0;
                    ex_alu_op_o = EXOP_ADD;
                    ex_is_mul_o = 1'b0;
                  end
                endcase

                ex_req_o       = 1'b1;
                ex_operand_a_o = ex_op_a;
                ex_operand_b_o = ex_op_b;

                ex_hold_a_d      = ex_op_a;
                ex_hold_b_d      = ex_op_b;
                ex_hold_is_mul_d = (vop_q == VOP_VMUL_VX);
                ex_hold_alu_op_d = ex_alu_op_o;
                ex_hold_idx_d    = next_idx_e;
                ex_hold_vd_d     = vd[REG_AW-1:0];
                ex_hold_do_d     = vm ? 1'b1 : mask_bit_vrf_next;
                state_d          = S_EX_WAIT;
              end else if ((vop_q == VOP_VADD_VV) || (vop_q == VOP_VMUL_VV)) begin
                // With 2R1W VRF support, commit lane i and launch lane i+1 in the same cycle.
                raddr1_sel = RSEL_VS2;
                raddr2_sel = RSEL_VS1;
                read_idx1  = next_idx_e;
                read_idx2  = next_idx_e;
                ex_op_a    = v_rdata_elem1;
                ex_op_b    = v_rdata_elem2;
                ex_alu_op_o = EXOP_ADD;
                ex_is_mul_o = (vop_q == VOP_VMUL_VV);

                ex_req_o       = 1'b1;
                ex_operand_a_o = ex_op_a;
                ex_operand_b_o = ex_op_b;

                ex_hold_a_d      = ex_op_a;
                ex_hold_b_d      = ex_op_b;
                ex_hold_is_mul_d = (vop_q == VOP_VMUL_VV);
                ex_hold_alu_op_d = ex_alu_op_o;
                ex_hold_idx_d    = next_idx_e;
                ex_hold_vd_d     = vd[REG_AW-1:0];
                ex_hold_do_d     = vm ? 1'b1 : mask_bit_vrf_next;
                state_d          = S_EX_WAIT;
              end else begin
                state_d = S_ALU_ISSUE;
              end
            end
          end
        end
      end

      S_MEM_REQ: begin
        if (vl_q == '0) begin
          done_d  = 1'b1;
          state_d = S_IDLE;
        end else if (!is_unit_stride()) begin
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
            raddr1_sel    = RSEL_VS3;
            read_idx1     = idx_q[ELEM_AW-1:0];
            data_we_o     = 1'b1;
            data_wdata_o  = v_rdata_elem1;
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
            done_d  = 1'b1;
            state_d = S_IDLE;
          end else begin
            if (vop_q == VOP_VLE32 && do_elem) begin
              v_we    = 1'b1;
              v_waddr = vd[REG_AW-1:0];
              v_welem = idx_q[ELEM_AW-1:0];
              v_wdata = data_rdata_i;
            end

            mem_addr_d = mem_addr_q + 32'd4;

            if (idx_q == (vl_q - 1'b1)) begin
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

endmodule
