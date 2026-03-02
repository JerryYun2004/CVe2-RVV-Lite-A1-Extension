// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal vector register file for RVV-Lite A.1 on CVE2.
// Separate from scalar RF.

module cve2_vec_regfile #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned NUM_REGS = 32
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  // Read ports (combinational)
  input  logic [$clog2(NUM_REGS)-1:0] raddr0_i,
  output logic [VLEN-1:0]            rdata0_o,
  input  logic [$clog2(NUM_REGS)-1:0] raddr1_i,
  output logic [VLEN-1:0]            rdata1_o,
  input  logic [$clog2(NUM_REGS)-1:0] raddr2_i,
  output logic [VLEN-1:0]            rdata2_o,

  // Write port (synchronous)
  input  logic                       we_i,
  input  logic [$clog2(NUM_REGS)-1:0] waddr_i,
  input  logic [VLEN-1:0]            wdata_i
);

  logic [VLEN-1:0] vreg_q [NUM_REGS];

  // Combinational reads
  always_comb begin
    rdata0_o = vreg_q[raddr0_i];
    rdata1_o = vreg_q[raddr1_i];
    rdata2_o = vreg_q[raddr2_i];
  end

  integer i;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      for (i = 0; i < NUM_REGS; i++) begin
        vreg_q[i] <= '0;
      end
    end else begin
      if (we_i) begin
        vreg_q[waddr_i] <= wdata_i;
      end
    end
  end

endmodule
