// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal vector register file for RVV-Lite A.1 on CVE2.
// Separate from scalar RF.
//
// LUTRAM-oriented version:
// - synchronous writes
// - asynchronous reads for source vector ports
// - duplicated memory arrays to provide 2 independent read ports + 1 write port
// - v0 kept as a dedicated register so mask use remains simple and safe
//
// This version is intended for small VRFs where Vivado naturally maps storage to
// distributed RAM / LUTRAM rather than true BRAM. The asynchronous read path is
// used deliberately to avoid the extra per-element latency that the registered-
// read BRAM-style version introduced.

module cve2_vec_regfile #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned NUM_REGS = 32
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  // Read ports
  // rdata0_o is the dedicated v0 register (mask/source register 0).
  input  logic [$clog2(NUM_REGS)-1:0]  raddr0_i,
  output logic [VLEN-1:0]              rdata0_o,
  input  logic [$clog2(NUM_REGS)-1:0]  raddr1_i,
  output logic [VLEN-1:0]              rdata1_o,
  input  logic [$clog2(NUM_REGS)-1:0]  raddr2_i,
  output logic [VLEN-1:0]              rdata2_o,

  // Write port (synchronous)
  input  logic                         we_i,
  input  logic [$clog2(NUM_REGS)-1:0]  waddr_i,
  input  logic [VLEN-1:0]              wdata_i
);

  // Duplicate storage so each copy can supply an independent asynchronous read
  // port while sharing the same write port.
  // Keep v0 outside the arrays to preserve simple mask behavior.
  (* ram_style = "distributed" *) logic [VLEN-1:0] mem_a [0:NUM_REGS-1];
  (* ram_style = "distributed" *) logic [VLEN-1:0] mem_b [0:NUM_REGS-1];

  logic [VLEN-1:0] v0_q;

  // Dedicated v0 output: immediate from the separate register.
  // raddr0_i is kept for interface compatibility; only v0 is supported here.
  assign rdata0_o = v0_q;

  // Asynchronous reads from distributed RAM / dedicated v0.
  // If a same-cycle read/write collision happens on a non-zero vector register,
  // bypass the write data so simulation and synthesis behave consistently.
  always_comb begin
    rdata1_o = '0;
    if (raddr1_i == '0) begin
      rdata1_o = v0_q;
    end else if (we_i && (waddr_i == raddr1_i) && (waddr_i != '0)) begin
      rdata1_o = wdata_i;
    end else begin
      rdata1_o = mem_a[raddr1_i];
    end
  end

  always_comb begin
    rdata2_o = '0;
    if (raddr2_i == '0) begin
      rdata2_o = v0_q;
    end else if (we_i && (waddr_i == raddr2_i) && (waddr_i != '0)) begin
      rdata2_o = wdata_i;
    end else begin
      rdata2_o = mem_b[raddr2_i];
    end
  end

  // Synchronous write. Do not clear the memory arrays on reset; only reset the
  // small dedicated v0 register.
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      v0_q <= '0;
    end else begin
      if (we_i) begin
        if (waddr_i == '0) begin
          v0_q <= wdata_i;
        end else begin
          mem_a[waddr_i] <= wdata_i;
          mem_b[waddr_i] <= wdata_i;
        end
      end
    end
  end

endmodule
