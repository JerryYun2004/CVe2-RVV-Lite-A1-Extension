// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_top.h for the primary calling header

#include "Vcve2_top__pch.h"

void Vcve2_top___024root___nba_sequent__TOP__1(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___nba_sequent__TOP__1\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cve2_top__DOT__fetch_enable_q = ((IData)(vlSelfRef.rst_ni) 
                                               && (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_d));
    vlSelfRef.cve2_top__DOT__core_busy_q = ((IData)(vlSelfRef.rst_ni) 
                                            && ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ctrl_busy) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                                    | (IData)(vlSelfRef.instr_req_o)) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
    vlSelfRef.cve2_top__DOT__fetch_enable_d = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                                               | (IData)(vlSelfRef.fetch_enable_i));
}

extern const VlUnpacked<CData/*3:0*/, 32> Vcve2_top__ConstPool__TABLE_he88acd25_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vcve2_top__ConstPool__TABLE_h3e80a4e7_0;

void Vcve2_top___024root___nba_sequent__TOP__2(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___nba_sequent__TOP__2\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__perf_branch;
    cve2_top__DOT__u_cve2_core__DOT__perf_branch = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu = 0;
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_5;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_5 = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = 0;
    QData/*32:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = 0;
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = 0;
    QData/*32:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16 = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*33:0*/ __VdfgRegularize_h4af1c392_0_2;
    __VdfgRegularize_h4af1c392_0_2 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    if (vlSelfRef.rst_ni) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
            = (3U & ((IData)(vlSelfRef.instr_rvalid_i)
                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                      : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
            | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
              & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_load = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_store = 0U;
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req) {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_q);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_load_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_store_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id)
            : ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req))
            ? ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : (((- (IData)(
                                                           (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                            >> 0x0000001fU))) 
                                                << 0x00000014U) 
                                               | ((((0x000001feU 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 0x00000014U))))))
                : ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0xfffff000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)
                        : (((- (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 7U))))))
                    : ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))))
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b);
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_load_err) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_store_err));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
               | cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : (((4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   & cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
                : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   ^ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access)
            ? (0x00000fffU & cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)
            : 0U);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = (0x00000003ffffffffULL & (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                              << 2U))
                                          : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                    << 3U))
                                              : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i))) 
                                                     << 4U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                                                     << 1U)))))) 
                                    + (0x00000001ffffffffULL 
                                       & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
                                           ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                           : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                               ? (~ 
                                                  ((QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                   << 1U))
                                               : ((QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                                  << 1U))))));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? ((((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                            << 1U)) | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 1U))) 
                    << 6U) | (((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 1U)) | (1U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 3U))) 
                              << 4U)) | ((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 3U)) 
                                           | (1U & 
                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U))) 
                                          << 2U) | 
                                         ((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 5U)) 
                                          | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 7U))))) 
                 << 0x00000018U) | ((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 7U)) 
                                        | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 9U))) 
                                       << 6U) | (((2U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 9U)) 
                                                  | (1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                        >> 0x0000000bU))) 
                                                 << 4U)) 
                                     | ((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU))) 
                                         << 2U) | (
                                                   (2U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                         >> 0x0000000fU))))) 
                                    << 0x00000010U)) 
               | (((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                              >> 0x0000000fU)) | (1U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x00000011U))) 
                      << 6U) | (((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                        >> 0x00000011U)) 
                                 | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                          >> 0x00000013U))) 
                                << 4U)) | ((((2U & 
                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x00000013U)) 
                                             | (1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x00000015U))) 
                                            << 2U) 
                                           | ((2U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U)) 
                                              | (1U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000017U))))) 
                   << 8U) | (((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000017U)) 
                                | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 0x00000019U))) 
                               << 6U) | (((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 0x00000019U)) 
                                          | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000001bU))) 
                                         << 4U)) | 
                             ((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x0000001bU)) 
                                | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 0x0000001dU))) 
                               << 2U) | ((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x0000001dU)) 
                                         | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x0000001fU))))))
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((QData)((IData)(
                                                                    ((8U 
                                                                      == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                                     & (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                        >> 0x0000001fU)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)
                                                       ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i
                                                       : 
                                                      (- cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)))));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? ((((((((2U & ((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed) 
                            << 1U)) | (1U & (IData)(
                                                    (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 1U)))) 
                    << 6U) | (((2U & ((IData)((cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                               >> 2U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 3U)))) 
                              << 4U)) | ((((2U & ((IData)(
                                                          (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 4U)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 5U)))) 
                                          << 2U) | 
                                         ((2U & ((IData)(
                                                         (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 6U)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 7U)))))) 
                 << 0x00000018U) | ((((((2U & ((IData)(
                                                       (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 8U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 9U)))) 
                                       << 6U) | (((2U 
                                                   & ((IData)(
                                                              (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                               >> 0x0000000aU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                >> 0x0000000bU)))) 
                                                 << 4U)) 
                                     | ((((2U & ((IData)(
                                                         (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x0000000cU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x0000000dU)))) 
                                         << 2U) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                >> 0x0000000eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                                 >> 0x0000000fU)))))) 
                                    << 0x00000010U)) 
               | (((((((2U & ((IData)((cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                       >> 0x00000010U)) 
                              << 1U)) | (1U & (IData)(
                                                      (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x00000011U)))) 
                      << 6U) | (((2U & ((IData)((cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                 >> 0x00000012U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x00000013U)))) 
                                << 4U)) | ((((2U & 
                                              ((IData)(
                                                       (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 0x00000014U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x00000015U)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((IData)(
                                                        (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 0x00000016U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x00000017U)))))) 
                   << 8U) | (((((2U & ((IData)((cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                >> 0x00000018U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x00000019U)))) 
                               << 6U) | (((2U & ((IData)(
                                                         (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x0000001aU)) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x0000001bU)))) 
                                         << 4U)) | 
                             ((((2U & ((IData)((cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                >> 0x0000001cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000001dU)))) 
                               << 2U) | ((2U & ((IData)(
                                                        (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 0x0000001eU)) 
                                                << 1U)) 
                                         | (1U & (IData)(
                                                         (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x0000001fU))))))))
            : (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
        if ((0x00000400U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
            if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                      ? 0U
                                                      : vlSelfRef.hart_id_i);
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                    ? 0U
                                                    : 0x00000023U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x00000602U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
            if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))] 
                                               >> 0x20U));
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))]);
                            } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))]);
                            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))]);
                            } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))]);
                            } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))]);
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
        if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
            if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((2U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                    ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                    : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                    ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                    : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                 >> 2U)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? 0U : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q)
                                        : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? (0x28001048U 
                                               | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                  << 2U))
                                            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                            }
                        }
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr 
                            = ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                         >> 5U))) || 
                               (1U & ((0x00000010U 
                                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                       ? ((1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                >> 2U)) 
                                              || (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))))
                                       : ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                >> 2U)) 
                                              || (1U 
                                                  & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))
                                           : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 2U)))));
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
        if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
            if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                              >> 6U)))) {
                    if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                    ? ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0fU]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0eU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0dU]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0cU]))
                                        : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0bU]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0x0aU])
                                            : ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                        ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 2U)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? (((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0x0fU] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0eU] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0dU] 
                                                   << 8U) 
                                                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0x0cU]))
                                            : (((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0x0bU] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0x0aU] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? (((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
                if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0x0000000fU)));
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000080U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 0x0000000aU)));
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x00000800U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
                                                     >> 5U)));
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
                                                  << 0x00000010U));
                                    }
                                }
                            } else {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                        ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : ((0x80000000U 
                                                & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                   << 0x00000019U)) 
                                               | (0x0000003fU 
                                                  & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                        : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
                if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))];
                } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))];
                } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))];
                } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))];
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = (0xffffe000U | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
                }
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
                if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0x0000000fU)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x0000000aU)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000800U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 5U)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x0000ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                              << 0x00000010U));
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                    } else {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffffff7U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (8U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U)));
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffff7fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00000080U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 3U)));
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffe7ffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00001800U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 9U)));
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffdffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00020000U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000010U)));
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffdfffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00200000U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000015U)));
                    }
                }
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (((0x03a0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
         | ((0x03a1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
            | ((0x03a2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
               | ((0x03a3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                  | ((0x03b0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                     | ((0x03b1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                        | ((0x03b2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                           | ((0x03b3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                              | ((0x03b4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                 | ((0x03b5U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                    | ((0x03b6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                       | ((0x03b7U 
                                           == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                          | ((0x03b8U 
                                              == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                             | ((0x03b9U 
                                                 == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                | ((0x03baU 
                                                    == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                   | ((0x03bbU 
                                                       == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                      | ((0x03bcU 
                                                          == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                         | ((0x03bdU 
                                                             == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                            | ((0x03beU 
                                                                == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)) 
                                                               | (0x03bfU 
                                                                  == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))))))))))))))))))))) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                  [1U]);
    __Vtableidx7 = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0x0000000cU & ((IData)(
                                                       (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 1U)) 
                                               << 2U)) 
                               | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_be 
        = Vcve2_top__ConstPool__TABLE_he88acd25_0[__Vtableidx7];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o)))));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                                            [1U] 
                                                            >> 0x0000001fU))))
                  ? (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                           >> 0x00000020U)))));
    __Vtableidx5 = (((0U != (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                     >> 1U))) << 9U) 
                    | ((0x00000100U & ((((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                          ^ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i) 
                                         >> 0x0000001fU)
                                         ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU) 
                                            ^ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                       >> 0x00000020U)))) 
                                       << 8U)) | ((
                                                   (0U 
                                                    == (IData)(
                                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U))) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vcve2_top__ConstPool__TABLE_h3e80a4e7_0[__Vtableidx5];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_op))
                ? ((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access) 
           & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | ((IData)(((0x0c00U == (0x0c00U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) 
                          & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wr))) 
                 | ((3U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                           >> 8U)) > (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)))));
    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a);
            }
        }
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U)) : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b);
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)));
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
                       | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            }
        }
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
                                | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
            }
        } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
            }
        } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                     | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
                        | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu)));
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_store 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    if (cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                       >> 1U));
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                      [0U]);
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    cve2_top__DOT__u_cve2_core__DOT__perf_branch = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(
                                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U)))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  ((0U 
                                                    == (IData)(
                                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U)))
                                                    ? 6U
                                                    : 1U)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[1U] 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d))
            : (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U])));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)
            ? (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                       >> 1U)) : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_q);
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec_q) {
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid));
            }
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn)
                  ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done)
                  : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec)
                      ? (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
                      : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec;
            }
        } else {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu = 1U;
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                cve2_top__DOT__u_cve2_core__DOT__perf_branch = 1U;
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
            if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                       << 6U) | ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                                        << 2U))) 
                                                 | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec)))))))) {
                if ((0U != (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                             << 6U) | ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                                      << 2U))) 
                                       | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn) 
                                           << 1U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:808: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_id_stage.sv", 808, "");
                    }
                }
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:806: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q));
                    VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_id_stage.sv", 806, "");
                }
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x00000010U 
                                        & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                               >> 1U)))))));
    }
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i 
        = (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn) 
                | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
            & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec)) 
               & ((~ ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                  & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
                     & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err)))))) 
           & ((~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                  & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i))) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_done_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_op_en));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o) 
              | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x0000001fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                          - (IData)(1U)));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
        [0U];
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                               >> 1U)))
                            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                        >> 1U)))
                                     : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                                               ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                ? 0x00000003ffffffffULL : (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_valid_clear)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_q) 
              | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                 | (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)))) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv) 
              | (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done)) 
                  & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
                 | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) 
                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3)) 
                    | ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump) 
                       | ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu) 
                          | (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch)))))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wr) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_5 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_6));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = (((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
            | (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
               | ((3U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                  & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                     | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                        & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn)))))) 
           & (6U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    __VdfgRegularize_h4af1c392_0_2 = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex)
                                       ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                       : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[0U] 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? __VdfgRegularize_h4af1c392_0_2 : (QData)((IData)(
                                                               vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d
                                                               [0U])));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                      >> 0x0000000bU)))) {
            if ((0x00000400U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                          >> 0x0000000aU)))) {
                if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000800U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                          >> 0x0000000aU)))) {
                if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    }
                                }
                            }
                        }
                        if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0 = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    }
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_5) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_5) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
        if (cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d 
                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                  >> 0x0000000fU));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d 
                = (0x0000001fU & 0U);
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d = 0U;
        }
        if (cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d 
                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                  >> 0x00000014U));
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d 
            = (0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_q));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_q;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_q;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d 
            = (0x0000001fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_q));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_17 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x00001ffdU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q))
                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q
                : (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                    >> 2U)) & (IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i))
                ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 5U)) 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_load))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 6U)) 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_store))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000100U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 8U)) 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__perf_branch))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000bU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 0x0000000bU)) 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__wfi_insn_dec))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000010U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 4U)) 
                                         & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_in_ready_comb)))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000aU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 0x0000000aU)) 
                                         & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i) 
                                            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id)))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000cU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 0x0000000cU)) 
                                         & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
                                            & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv)))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 3U)) 
                                         & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec_q) 
                                            & ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                                               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec))))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
              | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id) 
                 | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                    | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q))))));
}

extern const VlWide<8>/*255:0*/ Vcve2_top__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vcve2_top__ConstPool__TABLE_h90cc433a_0;

void Vcve2_top___024root___nba_comb__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___nba_comb__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__clock_en;
    cve2_top__DOT__clock_en = 0;
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__pc_mux_id;
    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id;
    cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 0;
    CData/*6:0*/ cve2_top__DOT__u_cve2_core__DOT__exc_cause;
    cve2_top__DOT__u_cve2_core__DOT__exc_cause = 0;
    CData/*4:0*/ cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb;
    cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__rf_we_wb;
    cve2_top__DOT__u_cve2_core__DOT__rf_we_wb = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we = 0;
    CData/*4:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_req;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_we;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_addr;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_addr = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0;
    CData/*3:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_be;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__instr_req_int;
    cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_save_if;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_if = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_save_id;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_id = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id;
    cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id;
    cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_save_cause;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init;
    cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__csr_mtval;
    cve2_top__DOT__u_cve2_core__DOT__csr_mtval = 0;
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__debug_cause;
    cve2_top__DOT__u_cve2_core__DOT__debug_cause = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__debug_csr_save;
    cve2_top__DOT__u_cve2_core__DOT__debug_csr_save = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__perf_jump;
    cve2_top__DOT__u_cve2_core__DOT__perf_jump = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__perf_tbranch;
    cve2_top__DOT__u_cve2_core__DOT__perf_tbranch = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb;
    cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done;
    cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1 = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl = 0;
    SData/*10:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0;
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc = 0;
    Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0 cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk = 0;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    // Body
    cve2_top__DOT__clock_en = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                               & ((IData)(vlSelfRef.cve2_top__DOT__core_busy_q) 
                                  | ((IData)(vlSelfRef.debug_req_i) 
                                     | ((IData)(vlSelfRef.irq_nm_i) 
                                        | (0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
    cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 1U;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_if = 0U;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_id = 0U;
    cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id = 0U;
    cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id = 0U;
    cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 0U;
    cve2_top__DOT__u_cve2_core__DOT__csr_mtval = 0U;
    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 0U;
    cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 1U;
    cve2_top__DOT__u_cve2_core__DOT__exc_cause = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ctrl_busy = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    cve2_top__DOT__u_cve2_core__DOT__debug_csr_save = 0U;
    cve2_top__DOT__u_cve2_core__DOT__debug_cause = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    cve2_top__DOT__u_cve2_core__DOT__perf_tbranch = 0U;
    cve2_top__DOT__u_cve2_core__DOT__perf_jump = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 2U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
            cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 2U;
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 1U;
                cve2_top__DOT__u_cve2_core__DOT__csr_save_id = 1U;
                cve2_top__DOT__u_cve2_core__DOT__debug_csr_save = 1U;
                cve2_top__DOT__u_cve2_core__DOT__debug_cause = 1U;
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
        } else {
            cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 2U;
            cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 2U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
            cve2_top__DOT__u_cve2_core__DOT__csr_save_if = 1U;
            cve2_top__DOT__u_cve2_core__DOT__debug_csr_save = 1U;
            cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 1U;
            cve2_top__DOT__u_cve2_core__DOT__debug_cause 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match)
                    ? 2U : ((IData)(vlSelfRef.debug_req_i)
                             ? 3U : 4U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
        }
    } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 2U;
                cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 1U;
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
                    cve2_top__DOT__u_cve2_core__DOT__csr_save_if = 1U;
                    cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 1U;
                    if (((IData)(vlSelfRef.irq_nm_i) 
                         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)))) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause = 0x60U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 1U;
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause 
                            = ((0U != (0x0000ffffU 
                                       & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs))
                                ? (0x00000050U | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                : ((0x00010000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)
                                    ? 0x4bU : ((0x00040000U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)
                                                ? 0x43U
                                                : 0x47U)));
                    }
                }
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
                    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 2U;
                    cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id 
                        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 3U : 0U);
                    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))))))) {
                        if ((0U != ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) 
                                      << 5U) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                                   << 3U))) 
                                    | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) 
                                        << 2U) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cve2_controller.sv:604: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.controller_i: unique case, but multiple matches found for '1'h1'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_controller.sv", 604, "");
                            }
                        }
                    }
                    cve2_top__DOT__u_cve2_core__DOT__csr_save_id = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 1U;
                    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause = 1U;
                        cve2_top__DOT__u_cve2_core__DOT__csr_mtval 
                            = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err_plus2)
                                ? ((IData)(2U) + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id)
                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id);
                    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause = 2U;
                        cve2_top__DOT__u_cve2_core__DOT__csr_mtval 
                            = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id)
                                ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_c_id)
                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id);
                    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause 
                            = ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                ? 0x0bU : 8U);
                    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                             | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 0U;
                            cve2_top__DOT__u_cve2_core__DOT__csr_save_id = 0U;
                            cve2_top__DOT__u_cve2_core__DOT__csr_save_cause = 0U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                        } else {
                            cve2_top__DOT__u_cve2_core__DOT__exc_cause = 3U;
                        }
                    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause = 7U;
                        cve2_top__DOT__u_cve2_core__DOT__csr_mtval 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q;
                    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                        cve2_top__DOT__u_cve2_core__DOT__exc_cause = 5U;
                        cve2_top__DOT__u_cve2_core__DOT__csr_mtval 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q;
                    }
                } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 3U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
                    cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id = 1U;
                    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                    }
                } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 4U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id = 1U;
                } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                }
                if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run = 1U;
            cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 1U;
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
            }
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
                cve2_top__DOT__u_cve2_core__DOT__perf_tbranch 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set;
                cve2_top__DOT__u_cve2_core__DOT__perf_jump 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set;
            }
            if ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                 & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id) 
                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
            if ((1U & (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id)) 
                        & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                       & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            if ((1U & (((((IData)(vlSelfRef.irq_nm_i) 
                          | (0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) 
                         | (IData)(vlSelfRef.debug_req_i)) 
                        | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ctrl_busy = 0U;
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ctrl_busy = 0U;
            cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 1U;
        cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
    } else {
        cve2_top__DOT__u_cve2_core__DOT__instr_req_int = 0U;
        cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set = 1U;
        if (vlSelfRef.cve2_top__DOT__fetch_enable_q) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.core_sleep_o = ((~ (IData)(cve2_top__DOT__clock_en)) 
                              & (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q));
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(cve2_top__DOT__clock_en) | (IData)(vlSelfRef.test_en_i));
    }
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000200U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 9U)) 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__perf_tbranch))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000080U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 7U)) 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__perf_jump))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done = 
        (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)) 
          & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_done_q)) 
         | ((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id) 
            | ((6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d))));
    __VdfgRegularize_hebeb780c_0_5 = (((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                        ? ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                            ? (0xfffffffcU 
                                               & vlSelfRef.boot_addr_i)
                                            : ((1U 
                                                & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                                ? (0xfffffffcU 
                                                   & vlSelfRef.boot_addr_i)
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                        : ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                            ? ((1U 
                                                & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                : (
                                                   (2U 
                                                    & (IData)(cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id))
                                                     ? vlSelfRef.dm_exception_addr_i
                                                     : vlSelfRef.dm_halt_addr_i)
                                                    : 
                                                   ((1U 
                                                     & (IData)(cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id))
                                                     ? 
                                                    ((0xffffff00U 
                                                      & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                     | (0x000000fcU 
                                                        & ((IData)(cve2_top__DOT__u_cve2_core__DOT__exc_cause) 
                                                           << 2U)))
                                                     : 
                                                    (0xffffff00U 
                                                     & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                                            : ((1U 
                                                & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
                                                ? (IData)(
                                                          (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                           >> 1U))
                                                : (0xfffffffcU 
                                                   & vlSelfRef.boot_addr_i)))) 
                                      >> 1U);
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_d 
        = ((0x00000040U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x00000019U)) | (0x0000003fU 
                                               & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                      >> 0x0000000bU)))) {
            if ((0x00000400U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((0x00000080U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                    if ((0x00000010U 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    } else {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0x0fffffffU 
                                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (3U 
                                                                 | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x000001c0U 
                                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffe7U 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff9ffU 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((0x00000040U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                } else {
                                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                             >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                    = 
                                                    ((((2U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                             >> 7U))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                            >> 9U)) 
                                                        | ((2U 
                                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                               >> 0x00000010U)) 
                                                           | (1U 
                                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 >> 0x15U)))));
                                                if (
                                                    ((3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                          >> 2U))) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                            >> 2U))))) {
                                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                        = 
                                                        (0x0000000cU 
                                                         | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (cve2_top__DOT__u_cve2_core__DOT__csr_save_cause) {
        if (cve2_top__DOT__u_cve2_core__DOT__csr_save_if) {
            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (cve2_top__DOT__u_cve2_core__DOT__csr_save_id) {
            cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_id) 
                                   << 1U) | (IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_id) 
                         << 1U) | (IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cve2_cs_registers.sv:627: Assertion failed in %Ncve2_top.u_cve2_core.cs_registers_i: unique case, but multiple matches found for '1'h1'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_cs_registers.sv", 627, "");
                }
            }
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
        if (cve2_top__DOT__u_cve2_core__DOT__debug_csr_save) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_d 
                = cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(cve2_top__DOT__u_cve2_core__DOT__debug_cause) 
                      << 6U));
        } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_d 
                = cve2_top__DOT__u_cve2_core__DOT__csr_mtval;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((3U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (((4U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 3U)) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                      << 2U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_d 
                = cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_d 
                = cve2_top__DOT__u_cve2_core__DOT__exc_cause;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
        }
    } else if (cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
    } else if (cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
            = ((0x1fU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d)) 
               | (0x00000020U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                 << 1U)));
        if ((3U != (3U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                          >> 2U)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                = (0x3dU & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                      << 2U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_d 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d 
                = (0x00000010U | (0x23U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d)));
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id) 
                               << 2U) | (((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id) 
                                          << 1U) | (IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id) 
                     << 2U) | (((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_dret_id) 
                                << 1U) | (IData)(cve2_top__DOT__u_cve2_core__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_cs_registers.sv:624: Assertion failed in %Ncve2_top.u_cve2_core.cs_registers_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_cs_registers.sv", 624, "");
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)) 
            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_valid_clear)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)) 
             & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__))) 
            << 2U) | ((((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)) 
                        & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                            ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__)
                            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__))) 
                       << 1U) | (1U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)) 
                                       & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                           ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__)
                                           : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7) 
                                              | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))));
    cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q) 
              | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__instr_req_int) 
           & ((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                  >> 1U)) & ((~ (3U == (3U & (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                       >> 1U))))))) 
                             | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4 
        = (1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id) 
                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))));
    vlSelfRef.cve2_top__DOT__clk = ((IData)(vlSelfRef.clk_i) 
                                    & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid_d[0U] 
        = cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q;
    if ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set) 
          & (2U == (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))) 
         & ((0U == (IData)(cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id)) 
            | (1U == (IData)(cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id))))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_d = 1U;
    } else if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q) 
                & (IData)(cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_d = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
                           ? __VdfgRegularize_hebeb780c_0_5
                           : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                              + ((2U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                        << 1U)) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
                ? (__VdfgRegularize_hebeb780c_0_5 << 1U)
                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_en 
        = cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init;
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                      >> 0x0000000bU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                          >> 0x0000000aU)))) {
                if ((0x00000200U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((0x00000100U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init)
            ? (1U | (0xffffff00U & vlSelfRef.boot_addr_i))
            : (1U | (0xffffff00U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.instr_req_o = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q) 
                             | (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_req_valid 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run)));
    vlSelfRef.instr_addr_o = (0xfffffffcU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
             ? (__VdfgRegularize_hebeb780c_0_5 << 1U)
             : (0xfffffffcU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3) 
              << 2U));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1 
        = ((IData)(vlSelfRef.instr_gnt_i) & (IData)(vlSelfRef.instr_req_o));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done_comb = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_addr = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[0U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[1U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[2U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[3U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[4U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[5U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[6U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[7U] 
        = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[1U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[2U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[3U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[4U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[5U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[6U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[7U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q;
    if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_req_valid) 
         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)))) {
        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id;
        vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op = 0;
        vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3 = 0;
        vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6 = 0;
        {
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op 
                = (0x0000007fU & vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr);
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3 
                = (7U & (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr 
                         >> 0x0cU));
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6 
                = (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr 
                   >> 0x1aU);
            if (((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                 & (7U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 1U;
                goto __Vlabel0;
            }
            if (((7U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                 & (6U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 2U;
                goto __Vlabel0;
            }
            if (((0x27U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                 & (6U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 3U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (0U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 4U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (4U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 5U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (4U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0x25U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 6U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (9U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 7U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0x28U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 8U;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 0U;
            __Vlabel0: ;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_d 
            = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 1U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
    }
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 0U;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done_comb = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) 
                 & (IData)(vlSelfRef.data_rvalid_i))) {
                if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) 
                     & (IData)(vlSelfRef.data_err_i))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
                } else {
                    if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        if (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem) {
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__val 
                                = vlSelfRef.data_rdata_i;
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__idx 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[0U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[1U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[2U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[3U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[4U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[5U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[6U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[7U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[0U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[0U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[1U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[1U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[2U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[2U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[3U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[3U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[4U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[4U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[5U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[5U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[6U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[6U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[7U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec[7U];
                            VL_ASSIGNSEL_WI(256, 32, 
                                            (0x000000ffU 
                                             & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__idx, 5U)), vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__val);
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[0U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[0U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[1U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[1U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[2U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[2U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[3U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[3U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[4U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[4U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[5U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[5U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[6U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[6U];
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[7U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp[7U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[0U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[1U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[2U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[3U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[4U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[5U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[6U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U] 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout[7U];
                        }
                    }
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_d 
                        = ((IData)(4U) + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q);
                    if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q) 
                         == (0x0000000fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q) 
                                            - (IData)(1U))))) {
                        if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr 
                                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                                  >> 7U));
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[0U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[1U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[2U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[3U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[4U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[5U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[6U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[7U] 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                        }
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
                    } else {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q)));
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 2U;
                    }
                }
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 1U;
            cve2_top__DOT__u_cve2_core__DOT__vec_data_addr 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q;
            cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
            if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
                cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
            } else {
                cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 1U;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[0U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[0U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[1U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[1U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[2U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[2U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[3U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[3U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[4U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[4U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[5U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[5U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[6U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[6U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[7U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[7U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__Vfuncout 
                    = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx, 5U)))
                         ? 0U : (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[
                                 (((IData)(0x0000001fU) 
                                   + (0x000000ffU & 
                                      VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx, 5U))) 
                                  >> 5U)] << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx, 5U))))) 
                       | (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec[
                          (7U & (VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx, 5U) 
                                 >> 5U))] >> (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx, 5U))));
                cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__Vfuncout;
            }
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) 
                 & (IData)(vlSelfRef.data_gnt_i))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
            if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
            } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
            } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
            } else {
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[0U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[0U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[1U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[1U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[2U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[2U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[3U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[3U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[4U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[4U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[5U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[5U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[6U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[6U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[7U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[7U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__Vfuncout 
                    = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx, 5U)))
                         ? 0U : (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[
                                 (((IData)(0x0000001fU) 
                                   + (0x000000ffU & 
                                      VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx, 5U))) 
                                  >> 5U)] << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx, 5U))))) 
                       | (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec[
                          (7U & (VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx, 5U) 
                                 >> 5U))] >> (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx, 5U))));
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__Vfuncout;
                if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                    }
                } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                                  >> 0x0000000fU));
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                                = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                                   & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                        } else {
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                                = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                                   * cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                        }
                    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               + cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    } else {
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[0U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[0U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[1U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[1U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[2U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[2U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[3U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[3U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[4U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[4U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[5U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[5U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[6U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[6U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[7U] 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[7U];
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__Vfuncout 
                            = (((0U == (0x0000001fU 
                                        & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx, 5U)))
                                 ? 0U : (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[
                                         (((IData)(0x0000001fU) 
                                           + (0x000000ffU 
                                              & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx, 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx, 5U))))) 
                               | (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec[
                                  (7U & (VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx, 5U) 
                                         >> 5U))] >> 
                                  (0x0000001fU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx, 5U))));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__Vfuncout;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               + cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                }
                if (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem) {
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__val 
                        = cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r;
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__idx 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[0U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[1U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[2U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[3U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[4U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[5U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[6U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[7U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[0U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[0U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[1U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[1U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[2U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[2U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[3U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[3U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[4U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[4U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[5U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[5U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[6U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[6U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[7U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec[7U];
                    VL_ASSIGNSEL_WI(256, 32, (0x000000ffU 
                                              & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__idx, 5U)), vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__val);
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[0U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[0U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[1U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[1U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[2U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[2U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[3U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[3U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[4U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[4U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[5U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[5U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[6U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[6U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[7U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp[7U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[0U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[1U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[2U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[3U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[4U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[5U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[6U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U] 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout[7U];
                }
                if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q) 
                     == (0x0000000fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q) 
                                        - (IData)(1U))))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 7U));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[0U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[1U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[2U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[3U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[4U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[5U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[6U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[7U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
                } else {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[0U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[0U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[1U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[1U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[2U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[2U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[3U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[3U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[4U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[4U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[5U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[5U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[6U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[6U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[7U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[7U];
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__Vfuncout 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx, 5U)))
                     ? 0U : (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[
                             (((IData)(0x0000001fU) 
                               + (0x000000ffU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx, 5U))) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx, 5U))))) 
                   | (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec[
                      (7U & (VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx, 5U) 
                             >> 5U))] >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx, 5U))));
            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__Vfuncout;
            if ((8U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 0x0000000fU));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                }
            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               * cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    }
                } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           + cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                } else {
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[0U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[0U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[1U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[1U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[2U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[2U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[3U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[3U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[4U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[4U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[5U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[5U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[6U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[6U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[7U] 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[7U];
                    vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__Vfuncout 
                        = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx, 5U)))
                             ? 0U : (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[
                                     (((IData)(0x0000001fU) 
                                       + (0x000000ffU 
                                          & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx, 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx, 5U))))) 
                           | (vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec[
                              (7U & (VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx, 5U) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx, 5U))));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__Vfuncout;
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           + cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b = 0U;
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r = 0U;
            }
            if (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__do_elem) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__val 
                    = cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__idx 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q;
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[0U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[1U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[2U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[3U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[4U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[5U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[6U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[7U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[0U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[0U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[1U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[1U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[2U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[2U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[3U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[3U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[4U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[4U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[5U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[5U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[6U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[6U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[7U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec[7U];
                VL_ASSIGNSEL_WI(256, 32, (0x000000ffU 
                                          & VL_SHIFTL_III(8,32,32, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__idx, 5U)), vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp, vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__val);
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[0U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[0U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[1U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[1U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[2U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[2U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[3U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[3U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[4U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[4U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[5U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[5U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[6U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[6U];
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[7U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp[7U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[0U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[1U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[2U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[3U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[4U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[5U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[6U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U] 
                    = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout[7U];
            }
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q) 
                 == (0x0000000fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q) 
                                    - (IData)(1U))))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr 
                    = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                      >> 7U));
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[0U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[1U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[2U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[3U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[4U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[5U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[6U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[7U] 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q)));
            }
        } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d 
                = (([&]() {
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__is_unit_stride__10__Vfuncout 
                            = (IData)((0U == (0xfc000000U 
                                              & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q)));
                    }(), (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__is_unit_stride__10__Vfuncout))
                    ? 2U : 4U);
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei 
                = (0x000007ffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                  >> 0x14U));
            if ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                 >> 0x1fU)) {
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl 
                    = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                      >> 0x0fU));
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei 
                    = (0x000003ffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                      >> 0x14U));
            } else if ((IData)((0x02000000U == (0xfe000000U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q)))) {
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs2_q;
                cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei = 0U;
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d 
                = ((1U & ((~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                              >> 0x1fU)) & (~ (IData)(
                                                      (0x02000000U 
                                                       == 
                                                       (0xfe000000U 
                                                        & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q))))))
                    ? (([&]() {
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vtypei 
                                = cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_vtypei;
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vlmul 
                                = (7U & (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vtypei));
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vsew 
                                = (7U & ((IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vtypei) 
                                         >> 3U));
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vta 
                                = (1U & ((IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vtypei) 
                                         >> 6U));
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__Vfuncout 
                                = (((0U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vlmul)) 
                                    & (2U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vsew))) 
                                   & (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vta));
                        }(), (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__Vfuncout))
                        ? ([&]() {
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__avl 
                                = cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl;
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__tmp 
                                = ((8U < vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__avl)
                                    ? 8U : (0x0000000fU 
                                            & vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__avl));
                            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__Vfuncout 
                                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__tmp;
                        }(), (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__Vfuncout))
                        : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q))
                    : ([&]() {
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__avl 
                            = cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_avl;
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__tmp 
                            = ((8U < vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__avl)
                                ? 8U : (0x0000000fU 
                                        & vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__avl));
                        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__Vfuncout 
                            = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__tmp;
                    }(), (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__Vfuncout)));
            cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we 
                = (0U != (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                         >> 7U)));
            cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr 
                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                  >> 7U));
            cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        }
    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 1U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1) 
                    & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                      >> 1U)) << 1U)) | (1U & ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1) 
                                               | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    __Vtableidx8 = ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q) 
                      << 4U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set) 
                                << 3U)) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                            << 1U) 
                                           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1) 
                                              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = Vcve2_top__ConstPool__TABLE_h90cc433a_0[__Vtableidx8];
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.data_req_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_req;
        vlSelfRef.data_addr_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_addr;
        vlSelfRef.data_we_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_we;
        vlSelfRef.data_be_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_be;
        vlSelfRef.data_wdata_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata;
    } else {
        vlSelfRef.data_req_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_req_lsu;
        vlSelfRef.data_addr_o = ((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                          >> 3U)) << 2U);
        vlSelfRef.data_we_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we;
        vlSelfRef.data_be_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_be;
        vlSelfRef.data_wdata_o = ((1U & (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                     >> 1U)))
                                       ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                           << 0x00000018U) 
                                          | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                             >> 8U))
                                       : ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                           << 0x00000010U) 
                                          | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                             >> 0x00000010U)))
                                   : ((1U & (IData)(
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                     >> 1U)))
                                       ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                           << 8U) | 
                                          (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                           >> 0x00000018U))
                                       : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b));
    }
    cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb = 
        (0x0000001fU & ((IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                         ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr)
                         : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                            >> 7U)));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw) 
            & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec_q))) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb 
        = (((- (IData)((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o))) 
            & ((IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                ? cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata
                : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                    ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int
                    : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
                        ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex)
                            ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                      [0U]) : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                        : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_result)))) 
           | ((- (IData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o))) 
              & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o));
    cve2_top__DOT__u_cve2_core__DOT__rf_we_wb = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o) 
                                                 | (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((1U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((2U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 1U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((3U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 2U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((4U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 3U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((5U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 4U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((6U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 5U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((7U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 6U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((8U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 7U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((9U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 8U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0aU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 9U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0bU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000aU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0cU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000bU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0dU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000cU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0eU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000dU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0fU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000eU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x10U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000fU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x11U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000010U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x12U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000011U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x13U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000012U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x14U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000013U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x15U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000014U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x16U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000015U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x17U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000016U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x18U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000017U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x19U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7effffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000018U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1aU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000019U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1bU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001aU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1cU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001bU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1dU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001cU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1eU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001dU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1fU == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001eU));
    cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    if (cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d 
            = cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d 
            = ((0U == (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb))
                ? 0U : ((IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb)
                         ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb
                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o));
    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_q) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d = 0U;
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_q;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_q;
    }
}

void Vcve2_top___024root___nba_sequent__TOP__0(Vcve2_top___024root* vlSelf);

void Vcve2_top___024root___eval_nba(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_nba\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcve2_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.cve2_top__DOT__fetch_enable_q = ((IData)(vlSelfRef.rst_ni) 
                                                   && (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_d));
        vlSelfRef.cve2_top__DOT__core_busy_q = ((IData)(vlSelfRef.rst_ni) 
                                                && ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ctrl_busy) 
                                                    | (((0U 
                                                         != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                                        | (IData)(vlSelfRef.instr_req_o)) 
                                                       | (0U 
                                                          != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        vlSelfRef.cve2_top__DOT__fetch_enable_d = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                                                   | (IData)(vlSelfRef.fetch_enable_i));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcve2_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcve2_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vcve2_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vcve2_top___024root___eval_triggers__act(Vcve2_top___024root* vlSelf);

bool Vcve2_top___024root___eval_phase__act(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_phase__act\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcve2_top___024root___eval_triggers__act(vlSelf);
    Vcve2_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcve2_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcve2_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vcve2_top___024root___eval_phase__nba(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_phase__nba\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcve2_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcve2_top___024root___eval_nba(vlSelf);
        Vcve2_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcve2_top___024root___eval_phase__ico(Vcve2_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcve2_top___024root___eval(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcve2_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../src/openhwgroup_cve2_cve2_top_0.1/rtl/cve2_top.sv", 17, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcve2_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcve2_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../src/openhwgroup_cve2_cve2_top_0.1/rtl/cve2_top.sv", 17, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcve2_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../src/openhwgroup_cve2_cve2_top_0.1/rtl/cve2_top.sv", 17, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcve2_top___024root___eval_phase__act(vlSelf));
    } while (Vcve2_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcve2_top___024root___eval_debug_assertions(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_debug_assertions\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.test_en_i & 0xfeU)))) {
        Verilated::overWidthError("test_en_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.instr_gnt_i & 0xfeU)))) {
        Verilated::overWidthError("instr_gnt_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.instr_rvalid_i & 0xfeU)))) {
        Verilated::overWidthError("instr_rvalid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.instr_err_i & 0xfeU)))) {
        Verilated::overWidthError("instr_err_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.data_gnt_i & 0xfeU)))) {
        Verilated::overWidthError("data_gnt_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.data_rvalid_i & 0xfeU)))) {
        Verilated::overWidthError("data_rvalid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.data_err_i & 0xfeU)))) {
        Verilated::overWidthError("data_err_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.x_issue_ready_i & 0xfeU)))) {
        Verilated::overWidthError("x_issue_ready_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.x_result_valid_i & 0xfeU)))) {
        Verilated::overWidthError("x_result_valid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.irq_software_i & 0xfeU)))) {
        Verilated::overWidthError("irq_software_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.irq_timer_i & 0xfeU)))) {
        Verilated::overWidthError("irq_timer_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.irq_external_i & 0xfeU)))) {
        Verilated::overWidthError("irq_external_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.irq_nm_i & 0xfeU)))) {
        Verilated::overWidthError("irq_nm_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.debug_req_i & 0xfeU)))) {
        Verilated::overWidthError("debug_req_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.fetch_enable_i & 0xfeU)))) {
        Verilated::overWidthError("fetch_enable_i");
    }
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{clk:" + VL_TO_STRING(obj.__PVT__clk);
    out += ", reset_n:" + VL_TO_STRING(obj.__PVT__reset_n);
    out += "}";
    return (out);
}
