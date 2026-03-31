module top_zcu104_rvvlite (
  input  logic clk_i,
  input  logic rst_ni
);

  import cve2_pkg::*;
  import prim_ram_1p_pkg::*;

  localparam logic [31:0] BOOT_ADDR          = 32'h0000_0000;
  localparam logic [31:0] HART_ID            = 32'h0000_0000;
  localparam logic [31:0] DM_HALT_ADDR       = 32'h1A11_0800;
  localparam logic [31:0] DM_EXCEPTION_ADDR  = 32'h1A11_1000;

  // ----------------------------
  // Core control / tie-offs
  // ----------------------------
  logic             test_en_i;
  ram_1p_cfg_t      ram_cfg_i;
  logic             fetch_enable_i;
  logic             debug_req_i;

  logic             irq_software_i;
  logic             irq_timer_i;
  logic             irq_external_i;
  logic [15:0]      irq_fast_i;
  logic             irq_nm_i;

  logic             debug_halted_o;
  crash_dump_t      crash_dump_o;
  logic             core_sleep_o;

  // ----------------------------
  // Instruction interface
  // ----------------------------
  logic             instr_req;
  logic             instr_gnt;
  logic             instr_rvalid;
  logic [31:0]      instr_addr;
  logic [31:0]      instr_rdata;
  logic             instr_err;

  // ----------------------------
  // Data interface
  // ----------------------------
  logic             data_req;
  logic             data_gnt;
  logic             data_rvalid;
  logic             data_we;
  logic [3:0]       data_be;
  logic [31:0]      data_addr;
  logic [31:0]      data_wdata;
  logic [31:0]      data_rdata;
  logic             data_err;

  // ----------------------------
  // CV-X-IF tie-offs
  // ----------------------------
  logic             x_issue_valid_o;
  logic             x_issue_ready_i;
  x_issue_req_t     x_issue_req_o;
  x_issue_resp_t    x_issue_resp_i;
  x_register_t      x_register_o;
  logic             x_commit_valid_o;
  x_commit_t        x_commit_o;
  logic             x_result_valid_i;
  logic             x_result_ready_o;
  x_result_t        x_result_i;

  // ----------------------------
  // Simple local memories
  // ----------------------------
  (* ram_style = "block" *) logic [31:0] imem [0:1023];
  (* ram_style = "block" *) logic [31:0] dmem [0:1023];

  logic [9:0] imem_word_addr;
  logic [9:0] dmem_word_addr;

  assign imem_word_addr = instr_addr[11:2];
  assign dmem_word_addr = data_addr[11:2];

  // ----------------------------
  // Constant assignments
  // ----------------------------
  assign test_en_i      = 1'b0;
  assign ram_cfg_i      = '0;
  assign fetch_enable_i = 1'b1;
  assign debug_req_i    = 1'b0;

  assign irq_software_i = 1'b0;
  assign irq_timer_i    = 1'b0;
  assign irq_external_i = 1'b0;
  assign irq_fast_i     = 16'b0;
  assign irq_nm_i       = 1'b0;

  // No external coprocessor
  assign x_issue_ready_i  = 1'b1;
  assign x_issue_resp_i   = '0;
  assign x_result_valid_i = 1'b0;
  assign x_result_i       = '0;

  // Simple always-ready memory model
  assign instr_gnt    = instr_req;
  assign instr_rvalid = instr_req;
  assign instr_err    = 1'b0;
  assign instr_rdata  = imem[imem_word_addr];

  assign data_gnt     = data_req;
  assign data_rvalid  = data_req;
  assign data_err     = 1'b0;
  assign data_rdata   = dmem[dmem_word_addr];

  always_ff @(posedge clk_i) begin
    if (data_req && data_we) begin
      if (data_be[0]) dmem[dmem_word_addr][7:0]   <= data_wdata[7:0];
      if (data_be[1]) dmem[dmem_word_addr][15:8]  <= data_wdata[15:8];
      if (data_be[2]) dmem[dmem_word_addr][23:16] <= data_wdata[23:16];
      if (data_be[3]) dmem[dmem_word_addr][31:24] <= data_wdata[31:24];
    end
  end

  // ----------------------------
  // DUT
  // ----------------------------
  cve2_top #(
    .MHPMCounterNum   (10),
    .MHPMCounterWidth (40),
    .RV32E            (1'b0),
    .RV32M            (RV32MSingleCycle),
    .XInterface       (1'b0)
  ) u_cve2_top (
    .clk_i               (clk_i),
    .rst_ni              (rst_ni),
    .test_en_i           (test_en_i),
    .ram_cfg_i           (ram_cfg_i),
    .hart_id_i           (HART_ID),
    .boot_addr_i         (BOOT_ADDR),

    .instr_req_o         (instr_req),
    .instr_gnt_i         (instr_gnt),
    .instr_rvalid_i      (instr_rvalid),
    .instr_addr_o        (instr_addr),
    .instr_rdata_i       (instr_rdata),
    .instr_err_i         (instr_err),

    .data_req_o          (data_req),
    .data_gnt_i          (data_gnt),
    .data_rvalid_i       (data_rvalid),
    .data_we_o           (data_we),
    .data_be_o           (data_be),
    .data_addr_o         (data_addr),
    .data_wdata_o        (data_wdata),
    .data_rdata_i        (data_rdata),
    .data_err_i          (data_err),

    .x_issue_valid_o     (x_issue_valid_o),
    .x_issue_ready_i     (x_issue_ready_i),
    .x_issue_req_o       (x_issue_req_o),
    .x_issue_resp_i      (x_issue_resp_i),
    .x_register_o        (x_register_o),
    .x_commit_valid_o    (x_commit_valid_o),
    .x_commit_o          (x_commit_o),
    .x_result_valid_i    (x_result_valid_i),
    .x_result_ready_o    (x_result_ready_o),
    .x_result_i          (x_result_i),

    .irq_software_i      (irq_software_i),
    .irq_timer_i         (irq_timer_i),
    .irq_external_i      (irq_external_i),
    .irq_fast_i          (irq_fast_i),
    .irq_nm_i            (irq_nm_i),

    .debug_req_i         (debug_req_i),
    .debug_halted_o      (debug_halted_o),
    .dm_halt_addr_i      (DM_HALT_ADDR),
    .dm_exception_addr_i (DM_EXCEPTION_ADDR),
    .crash_dump_o        (crash_dump_o),

    .fetch_enable_i      (fetch_enable_i),
    .core_sleep_o        (core_sleep_o)
  );

endmodule