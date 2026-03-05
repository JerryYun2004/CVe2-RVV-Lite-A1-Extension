// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcve2_top__pch.h"

//============================================================
// Constructors

Vcve2_top::Vcve2_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcve2_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_en_i{vlSymsp->TOP.test_en_i}
    , irq_software_i{vlSymsp->TOP.irq_software_i}
    , irq_timer_i{vlSymsp->TOP.irq_timer_i}
    , irq_external_i{vlSymsp->TOP.irq_external_i}
    , irq_nm_i{vlSymsp->TOP.irq_nm_i}
    , debug_req_i{vlSymsp->TOP.debug_req_i}
    , instr_req_o{vlSymsp->TOP.instr_req_o}
    , instr_gnt_i{vlSymsp->TOP.instr_gnt_i}
    , instr_rvalid_i{vlSymsp->TOP.instr_rvalid_i}
    , instr_err_i{vlSymsp->TOP.instr_err_i}
    , data_req_o{vlSymsp->TOP.data_req_o}
    , data_gnt_i{vlSymsp->TOP.data_gnt_i}
    , data_rvalid_i{vlSymsp->TOP.data_rvalid_i}
    , data_we_o{vlSymsp->TOP.data_we_o}
    , data_be_o{vlSymsp->TOP.data_be_o}
    , data_err_i{vlSymsp->TOP.data_err_i}
    , x_issue_valid_o{vlSymsp->TOP.x_issue_valid_o}
    , x_issue_ready_i{vlSymsp->TOP.x_issue_ready_i}
    , x_issue_resp_i{vlSymsp->TOP.x_issue_resp_i}
    , x_commit_valid_o{vlSymsp->TOP.x_commit_valid_o}
    , x_result_valid_i{vlSymsp->TOP.x_result_valid_i}
    , x_result_ready_o{vlSymsp->TOP.x_result_ready_o}
    , debug_halted_o{vlSymsp->TOP.debug_halted_o}
    , rvfi_valid{vlSymsp->TOP.rvfi_valid}
    , rvfi_trap{vlSymsp->TOP.rvfi_trap}
    , rvfi_halt{vlSymsp->TOP.rvfi_halt}
    , rvfi_intr{vlSymsp->TOP.rvfi_intr}
    , rvfi_mode{vlSymsp->TOP.rvfi_mode}
    , rvfi_ixl{vlSymsp->TOP.rvfi_ixl}
    , rvfi_rs1_addr{vlSymsp->TOP.rvfi_rs1_addr}
    , rvfi_rs2_addr{vlSymsp->TOP.rvfi_rs2_addr}
    , rvfi_rs3_addr{vlSymsp->TOP.rvfi_rs3_addr}
    , rvfi_rd_addr{vlSymsp->TOP.rvfi_rd_addr}
    , rvfi_mem_rmask{vlSymsp->TOP.rvfi_mem_rmask}
    , rvfi_mem_wmask{vlSymsp->TOP.rvfi_mem_wmask}
    , rvfi_ext_nmi{vlSymsp->TOP.rvfi_ext_nmi}
    , rvfi_ext_debug_req{vlSymsp->TOP.rvfi_ext_debug_req}
    , fetch_enable_i{vlSymsp->TOP.fetch_enable_i}
    , core_sleep_o{vlSymsp->TOP.core_sleep_o}
    , ram_cfg_i{vlSymsp->TOP.ram_cfg_i}
    , irq_fast_i{vlSymsp->TOP.irq_fast_i}
    , hart_id_i{vlSymsp->TOP.hart_id_i}
    , boot_addr_i{vlSymsp->TOP.boot_addr_i}
    , instr_addr_o{vlSymsp->TOP.instr_addr_o}
    , instr_rdata_i{vlSymsp->TOP.instr_rdata_i}
    , data_addr_o{vlSymsp->TOP.data_addr_o}
    , data_wdata_o{vlSymsp->TOP.data_wdata_o}
    , data_rdata_i{vlSymsp->TOP.data_rdata_i}
    , dm_halt_addr_i{vlSymsp->TOP.dm_halt_addr_i}
    , dm_exception_addr_i{vlSymsp->TOP.dm_exception_addr_i}
    , rvfi_insn{vlSymsp->TOP.rvfi_insn}
    , rvfi_rs1_rdata{vlSymsp->TOP.rvfi_rs1_rdata}
    , rvfi_rs2_rdata{vlSymsp->TOP.rvfi_rs2_rdata}
    , rvfi_rs3_rdata{vlSymsp->TOP.rvfi_rs3_rdata}
    , rvfi_rd_wdata{vlSymsp->TOP.rvfi_rd_wdata}
    , rvfi_pc_rdata{vlSymsp->TOP.rvfi_pc_rdata}
    , rvfi_pc_wdata{vlSymsp->TOP.rvfi_pc_wdata}
    , rvfi_mem_addr{vlSymsp->TOP.rvfi_mem_addr}
    , rvfi_mem_rdata{vlSymsp->TOP.rvfi_mem_rdata}
    , rvfi_mem_wdata{vlSymsp->TOP.rvfi_mem_wdata}
    , rvfi_ext_mip{vlSymsp->TOP.rvfi_ext_mip}
    , x_issue_req_o{vlSymsp->TOP.x_issue_req_o}
    , x_register_o{vlSymsp->TOP.x_register_o}
    , x_commit_o{vlSymsp->TOP.x_commit_o}
    , x_result_i{vlSymsp->TOP.x_result_i}
    , crash_dump_o{vlSymsp->TOP.crash_dump_o}
    , rvfi_order{vlSymsp->TOP.rvfi_order}
    , rvfi_ext_mcycle{vlSymsp->TOP.rvfi_ext_mcycle}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcve2_top::Vcve2_top(const char* _vcname__)
    : Vcve2_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcve2_top::~Vcve2_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcve2_top___024root___eval_debug_assertions(Vcve2_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcve2_top___024root___eval_static(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___eval_initial(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___eval_settle(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___eval(Vcve2_top___024root* vlSelf);

void Vcve2_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcve2_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcve2_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcve2_top___024root___eval_static(&(vlSymsp->TOP));
        Vcve2_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcve2_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcve2_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcve2_top::eventsPending() { return false; }

uint64_t Vcve2_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcve2_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcve2_top___024root___eval_final(Vcve2_top___024root* vlSelf);

VL_ATTR_COLD void Vcve2_top::final() {
    Vcve2_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcve2_top::hierName() const { return vlSymsp->name(); }
const char* Vcve2_top::modelName() const { return "Vcve2_top"; }
unsigned Vcve2_top::threads() const { return 1; }
void Vcve2_top::prepareClone() const { contextp()->prepareClone(); }
void Vcve2_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
