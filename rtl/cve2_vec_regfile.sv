// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal vector register file for RVV-Lite A.1 on CVE2.
// Separate from scalar RF.
//
// BRAM-oriented version:
// - synchronous writes
// - registered reads for source vector ports
// - duplicated memory arrays to provide 2 independent read ports + 1 write port
// - v0 kept as a dedicated register so mask use remains simple and safe

module cve2_vec_regfile #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned NUM_REGS = 8
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  // Read ports
  // rdata0_o is the dedicated v0 register (mask/source register 0).
  // rdata1_o/rdata2_o are registered read outputs.
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

  localparam int unsigned REG_AW = $clog2(NUM_REGS);

  // Duplicate storage so each copy can supply an independent registered read port.
  // Keep v0 outside the BRAM-backed arrays to preserve simple mask behavior.
  (* ram_style = "block" *) logic [VLEN-1:0] mem_a [0:NUM_REGS-1];
  (* ram_style = "block" *) logic [VLEN-1:0] mem_b [0:NUM_REGS-1];

  logic [VLEN-1:0] v0_q;
  logic [VLEN-1:0] rdata1_q, rdata2_q;

  // Dedicated v0 output: immediate from the separate register.
  // raddr0_i is kept for interface compatibility; only v0 is supported here.
  assign rdata0_o = v0_q;

  // Registered read + synchronous write.
  // Note: to keep BRAM inference friendly, do not clear the memory arrays on reset.
  // Reset only the small output/state registers.
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      v0_q    <= '0;
      rdata1_q <= '0;
      rdata2_q <= '0;
    end else begin
      if (we_i) begin
        if (waddr_i == '0) begin
          v0_q <= wdata_i;
        end else begin
          mem_a[waddr_i] <= wdata_i;
          mem_b[waddr_i] <= wdata_i;
        end
      end

      if (raddr1_i == '0) begin
        rdata1_q <= v0_q;
      end else begin
        rdata1_q <= mem_a[raddr1_i];
      end

      if (raddr2_i == '0) begin
        rdata2_q <= v0_q;
      end else begin
        rdata2_q <= mem_b[raddr2_i];
      end
    end
  end

  assign rdata1_o = rdata1_q;
  assign rdata2_o = rdata2_q;

  // Temporary Debug Prints
  // always_ff @(posedge clk_i) begin
  //   if (we_i) begin
  //     $display("[VRF-WR] waddr=%0d wdata[31:0]=%h wdata[63:32]=%h wdata[95:64]=%h wdata[127:96]=%h",
  //             waddr_i, wdata_i[31:0], wdata_i[63:32], wdata_i[95:64], wdata_i[127:96]);
  //   end
  // end

endmodule
