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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0;
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3 = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i = 0;
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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 0;
    QData/*33:0*/ __VdfgRegularize_h4af1c392_0_3;
    __VdfgRegularize_h4af1c392_0_3 = 0;
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
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req = 1U;
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
            | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
              & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)))));
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
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_q);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_load_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_store_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
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
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.data_addr_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr;
        vlSelfRef.data_wdata_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata;
        vlSelfRef.data_be_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be;
    } else {
        vlSelfRef.data_addr_o = ((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                          >> 3U)) << 2U);
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
        vlSelfRef.data_be_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_be;
    }
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
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))
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
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
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
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((0U == (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U))) ? 6U : 1U);
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x00000003ffffffffULL;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((0U == (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                   >> 1U))) ? 6U : 1U);
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a));
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = (((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
            | (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
               | ((3U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                  & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                     | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                        & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn)))))) 
           & (6U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    __VdfgRegularize_h4af1c392_0_3 = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex)
                                       ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                       : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[0U] 
            = __VdfgRegularize_h4af1c392_0_3;
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U]));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[0U] 
            = (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [0U]));
    }
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d 
            = (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                       >> 1U));
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
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_q;
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
}

void Vcve2_top___024root___nba_comb__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___nba_comb__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__clock_en;
    cve2_top__DOT__clock_en = 0;
    Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0 cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk = 0;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n = 0;
    // Body
    cve2_top__DOT__clock_en = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                               & ((IData)(vlSelfRef.cve2_top__DOT__core_busy_q) 
                                  | ((IData)(vlSelfRef.debug_req_i) 
                                     | ((IData)(vlSelfRef.irq_nm_i) 
                                        | (0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
    vlSelfRef.core_sleep_o = ((~ (IData)(cve2_top__DOT__clock_en)) 
                              & (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q));
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(cve2_top__DOT__clock_en) | (IData)(vlSelfRef.test_en_i));
    }
    vlSelfRef.cve2_top__DOT__clk = ((IData)(vlSelfRef.clk_i) 
                                    & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
}

void Vcve2_top___024root___nba_sequent__TOP__0(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___ico_comb__TOP__0(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___ico_comb__TOP__1(Vcve2_top___024root* vlSelf);

void Vcve2_top___024root___eval_nba(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_nba\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_comb__TOP__0_cve2_top__DOT__clock_en;
    __Vinline__nba_comb__TOP__0_cve2_top__DOT__clock_en = 0;
    Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0 __Vinline__nba_comb__TOP__0_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if;
    __Vinline__nba_comb__TOP__0_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk = 0;
    __Vinline__nba_comb__TOP__0_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n = 0;
    // Body
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcve2_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
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
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcve2_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__0_cve2_top__DOT__clock_en 
            = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.cve2_top__DOT__core_busy_q) 
                  | ((IData)(vlSelfRef.debug_req_i) 
                     | ((IData)(vlSelfRef.irq_nm_i) 
                        | (0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
        vlSelfRef.core_sleep_o = ((~ (IData)(__Vinline__nba_comb__TOP__0_cve2_top__DOT__clock_en)) 
                                  & (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q));
        if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
            vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en 
                = (__Vinline__nba_comb__TOP__0_cve2_top__DOT__clock_en 
                   | (IData)(vlSelfRef.test_en_i));
        }
        vlSelfRef.cve2_top__DOT__clk = ((IData)(vlSelfRef.clk_i) 
                                        & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
        __Vinline__nba_comb__TOP__0_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk 
            = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcve2_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcve2_top___024root___ico_comb__TOP__1(vlSelf);
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
bool Vcve2_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcve2_top___024root___eval_act(Vcve2_top___024root* vlSelf);

bool Vcve2_top___024root___eval_phase__act(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_phase__act\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcve2_top___024root___eval_triggers__act(vlSelf);
    Vcve2_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcve2_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcve2_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
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
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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
