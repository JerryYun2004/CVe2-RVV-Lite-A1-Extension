// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCVE2_TOP_H_
#define VERILATED_VCVE2_TOP_H_  // guard

#include "verilated.h"

class Vcve2_top__Syms;
class Vcve2_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcve2_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcve2_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&test_en_i,0,0);
    VL_IN8(&data_rvalid_i,0,0);
    VL_IN8(&data_err_i,0,0);
    VL_IN8(&irq_software_i,0,0);
    VL_IN8(&irq_timer_i,0,0);
    VL_IN8(&irq_external_i,0,0);
    VL_IN8(&irq_nm_i,0,0);
    VL_IN8(&debug_req_i,0,0);
    VL_OUT8(&instr_req_o,0,0);
    VL_IN8(&instr_gnt_i,0,0);
    VL_IN8(&instr_rvalid_i,0,0);
    VL_IN8(&instr_err_i,0,0);
    VL_OUT8(&data_req_o,0,0);
    VL_IN8(&data_gnt_i,0,0);
    VL_OUT8(&data_we_o,0,0);
    VL_OUT8(&data_be_o,3,0);
    VL_OUT8(&x_issue_valid_o,0,0);
    VL_IN8(&x_issue_ready_i,0,0);
    VL_IN8(&x_issue_resp_i,3,0);
    VL_OUT8(&x_commit_valid_o,0,0);
    VL_IN8(&x_result_valid_i,0,0);
    VL_OUT8(&x_result_ready_o,0,0);
    VL_OUT8(&debug_halted_o,0,0);
    VL_OUT8(&rvfi_valid,0,0);
    VL_OUT8(&rvfi_trap,0,0);
    VL_OUT8(&rvfi_halt,0,0);
    VL_OUT8(&rvfi_intr,0,0);
    VL_OUT8(&rvfi_mode,1,0);
    VL_OUT8(&rvfi_ixl,1,0);
    VL_OUT8(&rvfi_rs1_addr,4,0);
    VL_OUT8(&rvfi_rs2_addr,4,0);
    VL_OUT8(&rvfi_rs3_addr,4,0);
    VL_OUT8(&rvfi_rd_addr,4,0);
    VL_OUT8(&rvfi_mem_rmask,3,0);
    VL_OUT8(&rvfi_mem_wmask,3,0);
    VL_OUT8(&rvfi_ext_nmi,0,0);
    VL_OUT8(&rvfi_ext_debug_req,0,0);
    VL_IN8(&fetch_enable_i,0,0);
    VL_OUT8(&core_sleep_o,0,0);
    VL_IN16(&ram_cfg_i,9,0);
    VL_IN16(&irq_fast_i,15,0);
    VL_IN(&hart_id_i,31,0);
    VL_IN(&boot_addr_i,31,0);
    VL_OUT(&instr_addr_o,31,0);
    VL_IN(&instr_rdata_i,31,0);
    VL_OUT(&data_addr_o,31,0);
    VL_OUT(&data_wdata_o,31,0);
    VL_IN(&data_rdata_i,31,0);
    VL_IN(&dm_halt_addr_i,31,0);
    VL_IN(&dm_exception_addr_i,31,0);
    VL_OUT(&rvfi_insn,31,0);
    VL_OUT(&rvfi_rs1_rdata,31,0);
    VL_OUT(&rvfi_rs2_rdata,31,0);
    VL_OUT(&rvfi_rs3_rdata,31,0);
    VL_OUT(&rvfi_rd_wdata,31,0);
    VL_OUT(&rvfi_pc_rdata,31,0);
    VL_OUT(&rvfi_pc_wdata,31,0);
    VL_OUT(&rvfi_mem_addr,31,0);
    VL_OUT(&rvfi_mem_rdata,31,0);
    VL_OUT(&rvfi_mem_wdata,31,0);
    VL_OUT(&rvfi_ext_mip,31,0);
    VL_OUTW(&x_issue_req_o,67,0,3);
    VL_OUTW(&x_register_o,101,0,4);
    VL_OUT64(&x_commit_o,36,0);
    VL_INW(&x_result_i,73,0,3);
    VL_OUTW(&crash_dump_o,127,0,4);
    VL_OUT64(&rvfi_order,63,0);
    VL_OUT64(&rvfi_ext_mcycle,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcve2_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcve2_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcve2_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcve2_top();
  private:
    VL_UNCOPYABLE(Vcve2_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
