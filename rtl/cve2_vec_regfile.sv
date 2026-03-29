// Copyright (c) 2026
// SPDX-License-Identifier: Apache-2.0
//
// Minimal vector register file for RVV-Lite A.1 on CVE2.
// Separate from scalar RF.
//
// 2R1W LUTRAM-oriented version:
// - duplicated distributed-RAM storage arrays
// - synchronous writes broadcast to both copies
// - two asynchronous 32-bit read ports for vector data
// - tiny separate v0 mask shadow with two bit-read taps so masked execution
//   does not consume either data-read port
// - element-level (32-bit) interface to avoid carrying 256-bit buses

module cve2_vec_regfile #(
  parameter int unsigned VLEN     = 256,
  parameter int unsigned SEW      = 32,
  parameter int unsigned NUM_REGS = 32
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  // Dedicated mask reads from v0 shadow.
  input  logic [$clog2(VLEN/SEW)-1:0]  relem0_i,
  output logic                         mask_bit_o,
  input  logic [$clog2(VLEN/SEW)-1:0]  relem0b_i,
  output logic                         mask_bit_b_o,

  // Two vector data read ports.
  input  logic [$clog2(NUM_REGS)-1:0]  raddr1_i,
  input  logic [$clog2(VLEN/SEW)-1:0]  relem1_i,
  output logic [SEW-1:0]               rdata1_o,
  input  logic [$clog2(NUM_REGS)-1:0]  raddr2_i,
  input  logic [$clog2(VLEN/SEW)-1:0]  relem2_i,
  output logic [SEW-1:0]               rdata2_o,

  // Write port (synchronous), one 32-bit element at a time.
  input  logic                         we_i,
  input  logic [$clog2(NUM_REGS)-1:0]  waddr_i,
  input  logic [$clog2(VLEN/SEW)-1:0]  welem_i,
  input  logic [SEW-1:0]               wdata_i
);

  localparam int unsigned LANES   = VLEN / SEW;
  localparam int unsigned REG_AW  = (NUM_REGS > 1) ? $clog2(NUM_REGS) : 1;
  localparam int unsigned ELEM_AW = (LANES    > 1) ? $clog2(LANES)    : 1;
  localparam int unsigned DEPTH   = NUM_REGS * LANES;
  localparam int unsigned ADDR_W  = REG_AW + ELEM_AW;

  // Duplicate storage to obtain two independent read ports with one logical write port.
  (* ram_style = "distributed" *) logic [SEW-1:0] mem_a [0:DEPTH-1];
  (* ram_style = "distributed" *) logic [SEW-1:0] mem_b [0:DEPTH-1];

  // Tiny v0 mask shadow. This avoids consuming a data-read port just to fetch one mask bit.
  logic [LANES-1:0] v0_mask_q;

  logic [ADDR_W-1:0] raddr1_flat;
  logic [ADDR_W-1:0] raddr2_flat;
  logic [ADDR_W-1:0] waddr_flat;

  assign raddr1_flat = {raddr1_i, relem1_i};
  assign raddr2_flat = {raddr2_i, relem2_i};
  assign waddr_flat  = {waddr_i,  welem_i};

  // Asynchronous data reads with same-cycle read/write bypass.
  always_comb begin
    if (we_i && (waddr_i == raddr1_i) && (welem_i == relem1_i)) begin
      rdata1_o = wdata_i;
    end else begin
      rdata1_o = mem_a[raddr1_flat];
    end
  end

  always_comb begin
    if (we_i && (waddr_i == raddr2_i) && (welem_i == relem2_i)) begin
      rdata2_o = wdata_i;
    end else begin
      rdata2_o = mem_b[raddr2_flat];
    end
  end

  always_comb begin
    if (we_i && (waddr_i == '0) && (welem_i == relem0_i)) begin
      mask_bit_o = wdata_i[0];
    end else begin
      mask_bit_o = v0_mask_q[relem0_i];
    end
  end

  always_comb begin
    if (we_i && (waddr_i == '0) && (welem_i == relem0b_i)) begin
      mask_bit_b_o = wdata_i[0];
    end else begin
      mask_bit_b_o = v0_mask_q[relem0b_i];
    end
  end

  // Synchronous element write.
  // Do not clear the memory arrays on reset.
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      v0_mask_q <= '0;
    end else if (we_i) begin
      mem_a[waddr_flat] <= wdata_i;
      mem_b[waddr_flat] <= wdata_i;
      if (waddr_i == '0) begin
        v0_mask_q[welem_i] <= wdata_i[0];
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
