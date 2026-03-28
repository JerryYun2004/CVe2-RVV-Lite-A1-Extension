// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal vector register file for RVV-Lite A.1 on CVE2.
// Separate from scalar RF.
//
// 1R1W LUTRAM-oriented version:
// - one distributed-RAM storage array
// - synchronous writes
// - one asynchronous 32-bit read port for vector data
// - tiny separate mask shadow for v0 bit access so masked execution does not
//   consume the only data-read port
// - element-level (32-bit) interface to avoid carrying 256-bit buses

module cve2_vec_regfile #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned SEW      = 32,
  parameter int unsigned NUM_REGS = 32
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  // Dedicated mask read from v0 shadow.
  input  logic [$clog2(VLEN/SEW)-1:0]  relem0_i,
  output logic                         mask_bit_o,

  // Single vector data read port.
  input  logic [$clog2(NUM_REGS)-1:0]  raddr1_i,
  input  logic [$clog2(VLEN/SEW)-1:0]  relem1_i,
  output logic [SEW-1:0]               rdata1_o,

  // Write port (synchronous), one 32-bit element at a time.
  input  logic                         we_i,
  input  logic [$clog2(NUM_REGS)-1:0]  waddr_i,
  input  logic [$clog2(VLEN/SEW)-1:0]  welem_i,
  input  logic [SEW-1:0]               wdata_i
);

  localparam int unsigned LANES = VLEN / SEW;

  // One LUTRAM-backed storage array.
  (* ram_style = "distributed" *) logic [SEW-1:0] mem [0:NUM_REGS-1][0:LANES-1];

  // Tiny v0 mask shadow. This avoids consuming the only data-read port just to
  // fetch one mask bit. Keep it write-through coherent on v0 writes.
  logic [LANES-1:0] v0_mask_q;

  // Asynchronous data read with same-cycle read/write bypass.
  always_comb begin
    if (we_i && (waddr_i == raddr1_i) && (welem_i == relem1_i)) begin
      rdata1_o = wdata_i;
    end else begin
      rdata1_o = mem[raddr1_i][relem1_i];
    end
  end

  always_comb begin
    if (we_i && (waddr_i == '0) && (welem_i == relem0_i)) begin
      mask_bit_o = wdata_i[0];
    end else begin
      mask_bit_o = v0_mask_q[relem0_i];
    end
  end

  // Synchronous element write.
  // Do not clear the memory array on reset.
  integer i;
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      v0_mask_q <= '0;
    end else begin
      if (we_i) begin
        mem[waddr_i][welem_i] <= wdata_i;
        if (waddr_i == '0) begin
          v0_mask_q[welem_i] <= wdata_i[0];
        end
      end
    end
  end

`ifdef VEC_DEBUG
  always_ff @(posedge clk_i) begin
    if (rst_ni && we_i) begin
      $display("[VRF] w v%0d[%0d] <= %08x", waddr_i, welem_i, wdata_i);
    end
  end
`endif

endmodule
