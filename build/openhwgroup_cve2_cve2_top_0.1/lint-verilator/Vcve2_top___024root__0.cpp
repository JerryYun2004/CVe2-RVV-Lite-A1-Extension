// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_top.h for the primary calling header

#include "Vcve2_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcve2_top___024root___eval_triggers__ico(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_triggers__ico\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__1)))));
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__1 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcve2_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vcve2_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlWide<8>/*255:0*/ Vcve2_top__ConstPool__CONST_h9e67c271_0;

void Vcve2_top___024root___ico_sequent__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___ico_sequent__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__clock_en;
    cve2_top__DOT__clock_en = 0;
    CData/*4:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_we;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6 = 0;
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
    Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0 cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk = 0;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    // Body
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n 
        = vlSelfRef.rst_ni;
    vlSelfRef.cve2_top__DOT__fetch_enable_d = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                                               | (IData)(vlSelfRef.fetch_enable_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_nmi 
        = ((IData)(vlSelfRef.irq_nm_i) & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.instr_rdata_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.instr_rdata_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_gnt_i));
    __VdfgRegularize_hebeb780c_0_7 = ((0x0000ff00U 
                                       & (vlSelfRef.data_rdata_i 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000010U)));
    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__;
        cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = vlSelfRef.instr_err_i;
        cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.instr_rdata_i;
    }
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.instr_rvalid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_err_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done_comb = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
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
    if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q) 
         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)))) {
        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q;
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
                  & (4U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (9U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 7U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (9U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 8U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0x28U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 9U;
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
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q;
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
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
            if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
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
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata 
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
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    }
                } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
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
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 0x0000000fU));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 0x0000000fU));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                }
            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
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
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we 
                = (0U != (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                         >> 7U)));
            cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr 
                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                  >> 7U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        }
    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 1U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.debug_req_i) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlSelfRef.irq_software_i) << 0x00000012U) 
           | (((IData)(vlSelfRef.irq_timer_i) << 0x00000011U) 
              | (((IData)(vlSelfRef.irq_external_i) 
                  << 0x00000010U) | (IData)(vlSelfRef.irq_fast_i))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_rvalid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelfRef.data_rdata_i 
                                        >> 0x0000001fU))) 
                            << 8U) | (vlSelfRef.data_rdata_i 
                                      >> 0x00000018U))
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.data_rdata_i, 0x00000018U))
                    : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 0x00000017U)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.data_rdata_i 
                                       >> 0x00000010U)))
                        : (0x000000ffU & (vlSelfRef.data_rdata_i 
                                          >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 0x0000000fU)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.data_rdata_i 
                                       >> 8U))) : (0x000000ffU 
                                                   & (vlSelfRef.data_rdata_i 
                                                      >> 8U)))
                    : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 7U)))) 
                            << 8U) | (0x000000ffU & vlSelfRef.data_rdata_i))
                        : (0x000000ffU & vlSelfRef.data_rdata_i))))
            : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 7U)))) 
                                << 0x00000010U) | (IData)(__VdfgRegularize_hebeb780c_0_7))
                            : (IData)(__VdfgRegularize_hebeb780c_0_7))
                        : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelfRef.data_rdata_i 
                                            >> 0x0000001fU))) 
                                << 0x00000010U) | (vlSelfRef.data_rdata_i 
                                                   >> 0x00000010U))
                            : VL_SHIFTR_III(32,32,32, vlSelfRef.data_rdata_i, 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 0x00000017U)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & (vlSelfRef.data_rdata_i 
                                                      >> 8U)))
                            : (0x0000ffffU & (vlSelfRef.data_rdata_i 
                                              >> 8U)))
                        : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.data_rdata_i))
                            : (0x0000ffffU & vlSelfRef.data_rdata_i))))
                : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.data_rdata_i 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x00000010U)))
                        : ((vlSelfRef.data_rdata_i 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U))))
                    : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.data_rdata_i 
                            << 0x00000018U) | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.data_rdata_i))));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x00000010U))));
    if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
            = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U))
                : ((vlSelfRef.instr_rdata_i << 0x00000010U) 
                   | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                      >> 0x00000010U)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
            = cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (2U == (6U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (1U == (3U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
              | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.data_addr_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr;
        vlSelfRef.data_we_o = cve2_top__DOT__u_cve2_core__DOT__vec_data_we;
        vlSelfRef.data_be_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be;
        vlSelfRef.data_wdata_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata;
    } else {
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb 
        = (0x0000001fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                           ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr)
                           : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                              >> 7U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
                }
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
                } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
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
            }
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
                    } else if ((0x00000020U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                        if ((0x00000010U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))
                                                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
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
                                } else if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
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
                }
            }
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
                } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
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
            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
            } else if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr) 
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
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs 
        = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
           & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x0000001fU 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x0000001fU 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x00100073U
                                        : (0x00e7U 
                                           | (0x000f8000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)))))
                                : ((0U != (0x0000001fU 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x0067U | (0x000f8000U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)))));
                    }
                    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0x0cU)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                            if ((0U == (0x0000001fU 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 7U)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
                if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
                if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 7U)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x00000012U))))));
                }
                if ((0U == ((0x00000020U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U))))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x0000000dU)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                            | (0x00000200U 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 3U))))));
            }
            if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x0000000dU)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x0000000dU)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00010413U | ((0x3c000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x00000013U)) 
                                  | ((0x03000000U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x0000000dU)) 
                                     | ((0x00800000U 
                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000012U)) 
                                        | ((0x00400000U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x00000010U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0x000000ffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          >> 5U)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6) 
                 | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_in_ready_comb) 
           & ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
               ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                   ? (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                   : (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                       >> 1U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                 & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i))))
               : (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
              & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                   | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_irq 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
            >> 5U) & ((0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs) 
                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2)));
    cve2_top__DOT__clock_en = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                               & ((IData)(vlSelfRef.cve2_top__DOT__core_busy_q) 
                                  | ((IData)(vlSelfRef.debug_req_i) 
                                     | ((IData)(vlSelfRef.irq_nm_i) 
                                        | (0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0fU;
    }
    if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x00000100U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x00000080U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x00000010U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
              & ((IData)(vlSelfRef.irq_nm_i) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 >> 5U) 
                                                & (0U 
                                                   != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d) 
           & ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.core_sleep_o = ((~ (IData)(cve2_top__DOT__clock_en)) 
                              & (IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q));
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(cve2_top__DOT__clock_en) | (IData)(vlSelfRef.test_en_i));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_load_err) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_store_err));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6)));
    vlSelfRef.cve2_top__DOT__clk = ((IData)(vlSelfRef.clk_i) 
                                    & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cve2_top__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
}

void Vcve2_top___024root___ico_comb__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___ico_comb__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu = 0;
    // Body
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_branch = 0U;
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid));
            }
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn)
                  ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done)
                  : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec)
                      ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)
                      : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv 
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
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_branch = 1U;
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
                        VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:846: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_id_stage.sv", 846, "");
                    }
                }
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:844: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q));
                    VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_id_stage.sv", 844, "");
                }
            }
        }
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
               & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)))) 
           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv) 
              | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) 
                  & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done)) 
                     | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q))) 
                 | ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_jump) 
                    | ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_alu) 
                       | (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_branch))))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vcve2_top__ConstPool__TABLE_h90cc433a_0;

void Vcve2_top___024root___ico_comb__TOP__1(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___ico_comb__TOP__1\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__pc_mux_id;
    cve2_top__DOT__u_cve2_core__DOT__pc_mux_id = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id;
    cve2_top__DOT__u_cve2_core__DOT__exc_pc_mux_id = 0;
    CData/*6:0*/ cve2_top__DOT__u_cve2_core__DOT__exc_cause;
    cve2_top__DOT__u_cve2_core__DOT__exc_cause = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__rf_we_wb;
    cve2_top__DOT__u_cve2_core__DOT__rf_we_wb = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__data_req_lsu;
    cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__lsu_req;
    cve2_top__DOT__u_cve2_core__DOT__lsu_req = 0;
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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__perf_load;
    cve2_top__DOT__u_cve2_core__DOT__perf_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__perf_store;
    cve2_top__DOT__u_cve2_core__DOT__perf_store = 0;
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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0;
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__exception_pc = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int = 0;
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
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
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
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    // Body
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
    __VdfgRegularize_hebeb780c_0_8 = (((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__pc_mux_id))
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id)) 
           & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
                           ? __VdfgRegularize_hebeb780c_0_8
                           : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                              + ((2U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                        << 1U)) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
                ? (__VdfgRegularize_hebeb780c_0_8 << 1U)
                : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init)
            ? (1U | (0xffffff00U & vlSelfRef.boot_addr_i))
            : (1U | (0xffffff00U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.instr_req_o = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q) 
                             | (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o)));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw) 
            & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec))) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we));
    cve2_top__DOT__u_cve2_core__DOT__lsu_req = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) 
                                                   & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    cve2_top__DOT__u_cve2_core__DOT__rvfi_id_done = 
        (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)) 
          & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o)) 
         | ((IData)(cve2_top__DOT__u_cve2_core__DOT__csr_restore_mret_id) 
            | ((6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d))));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__instr_ret_i 
        = (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn) 
                | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
            & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec)) 
               & ((~ ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                  & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
                     & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err)))))) 
           & ((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                  & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i))) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__en_wb_o)));
    vlSelfRef.instr_addr_o = (0xfffffffcU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
             ? (__VdfgRegularize_hebeb780c_0_8 << 1U)
             : (0xfffffffcU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3) 
              << 2U));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_1 
        = ((IData)(vlSelfRef.instr_gnt_i) & (IData)(vlSelfRef.instr_req_o));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_we_ex 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                << 1U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                          | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))
            : 0U);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb 
        = (((- (IData)((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_id_o))) 
            & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) {
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
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
                       | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            }
        }
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu) 
                    | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
                                | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
            }
        } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            }
        } else if (cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    cve2_top__DOT__u_cve2_core__DOT__perf_load = 0U;
    cve2_top__DOT__u_cve2_core__DOT__perf_store = 0U;
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
            cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        } else if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
            cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        } else if (cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
            cve2_top__DOT__u_cve2_core__DOT__data_req_lsu = 1U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (cve2_top__DOT__u_cve2_core__DOT__lsu_req) {
                    cve2_top__DOT__u_cve2_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we)));
                    cve2_top__DOT__u_cve2_core__DOT__perf_store 
                        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
              | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id) 
                 | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                    | ((((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i) 
                         & ((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i)) 
                            | (2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))))
                         ? ((0x0300U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)) 
                            | (((0x0304U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)) 
                                | (0x0747U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))) 
                               | (0x1dU == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                            >> 0x00000019U))))
                         : ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i) 
                            & ((0U != (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i)) 
                               & ((0x07b0U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)) 
                                  | (((0x07b1U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                      | (0x07b2U == 
                                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x00000014U))) 
                                     | (0x07b3U == 
                                        (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))))))) 
                       & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q))))));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_en_i));
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
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 1U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 2U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 3U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((5U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 4U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 5U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((7U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 6U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((8U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 7U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((9U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 8U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0aU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 9U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0bU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000aU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0cU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000bU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0dU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000cU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0eU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000dU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x0fU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000eU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x10U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000000fU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x11U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000010U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x12U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000011U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x13U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000012U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x14U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000013U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x15U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000014U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x16U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000015U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x17U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000016U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x18U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000017U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x19U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7effffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000018U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1aU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x00000019U));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1bU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001aU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1cU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001bU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1dU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001cU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1eU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001dU));
    cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0 
        = ((0x1fU == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT____Vlvbound_ha9ab6430__0) 
              << 0x0000001eU));
    cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__rf_we_wb));
    vlSelfRef.data_req_o = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)
                             ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_req)
                             : (IData)(cve2_top__DOT__u_cve2_core__DOT__data_req_lsu));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wr) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_16));
    if (cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_we_wb) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d 
            = ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb))
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_en 
        = cve2_top__DOT__u_cve2_core__DOT__csr_mtvec_init;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
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
    if (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
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
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
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
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
                                        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
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
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_17 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x00001ffdU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000020U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 5U)) 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__perf_load))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000040U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 6U)) 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__perf_store))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000080U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000100U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 8U)) 
                                         & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__perf_branch))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000200U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000bU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000800U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000010U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000aU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00000400U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0x0000000cU));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x00001000U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
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
                                            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv)))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0x000000ffffffffffULL & ((IData)(cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                                     ? cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                                     : (((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 3U)) 
                                         & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                            & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i)) 
                                               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec))))
                                         ? (1ULL + vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                                         : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
}

void Vcve2_top___024root___eval_ico(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_ico\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vcve2_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered
                 [0U]))) {
        Vcve2_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Vcve2_top___024root___ico_comb__TOP__1(vlSelf);
    }
}

bool Vcve2_top___024root___eval_phase__ico(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_phase__ico\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcve2_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vcve2_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcve2_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcve2_top___024root___eval_triggers__act(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_triggers__act\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.cve2_top__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__clk__0))) 
                                                      << 4U) 
                                                     | (((((~ (IData)(vlSelfRef.rst_ni)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.clk_i) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__2)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__2)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__2 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__2 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__clk__0 
        = vlSelfRef.cve2_top__DOT__clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcve2_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcve2_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcve2_top___024root___eval_act(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_act\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcve2_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcve2_top___024root___ico_comb__TOP__1(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcve2_top__ConstPool__TABLE_h343a05bb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcve2_top__ConstPool__TABLE_h095b1a9f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcve2_top__ConstPool__TABLE_h81ccfef0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcve2_top__ConstPool__TABLE_he52cf3a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h5b90359e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h123afc4f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h64104f69_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h75daf038_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h95dddee3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcve2_top__ConstPool__TABLE_h336c83ef_0;

void Vcve2_top___024root___nba_sequent__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___nba_sequent__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__vec_data_we;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex;
    cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6;
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6 = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0;
    CData/*6:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = 0;
    CData/*6:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0 = 0;
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0;
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0;
    SData/*15:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = 0;
    SData/*15:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = 0;
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
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q;
    __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = 0;
    IData/*18:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v1 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v1 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v1 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v1 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid__v0 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v1 = 0;
    CData/*4:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v1 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v1 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v3;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v3 = 0;
    CData/*1:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v1 = 0;
    QData/*63:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v1 = 0;
    CData/*4:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v1 = 0;
    CData/*4:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v1 = 0;
    CData/*3:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v1 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap__v0 = 0;
    CData/*3:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v1 = 0;
    SData/*15:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v1 = 0;
    CData/*4:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v1 = 0;
    IData/*31:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v1 = 0;
    IData/*18:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v3;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v3 = 0;
    CData/*0:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v3;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v3 = 0;
    QData/*63:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v1 = 0;
    QData/*33:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0;
    QData/*33:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0;
    VL_ZERO_W(256, __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0);
    CData/*4:0*/ __VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0;
    __VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0 = 0;
    CData/*0:0*/ __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v1;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v1 = 0;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v3 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v3 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v3 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v1 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0 = 0U;
    __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v1 = 0U;
    __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q;
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid__v0 
        = ((IData)(vlSelfRef.rst_ni) && vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid_d
           [0U]);
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid_d
            [0U]) {
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v0 = 1U;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0 
                = (1ULL + vlSelfRef.rvfi_order);
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_mask_int;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0 
                = ((IData)(vlSelfRef.data_we_o) ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_mask_int)
                    : 0U);
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip
                [0U];
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi
                [0U];
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req
                [0U];
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set)
                    ? (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                               >> 1U)) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          << 1U));
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0 = 1U;
            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
            } else {
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a;
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 
                    = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                      >> 0x0000000fU));
            }
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d)
                    ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_irq)
                        ? (5U | (0x000001f8U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                << 3U)))
                        : (3U | (0x000001f8U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                << 3U))))
                    : 0U);
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id)
                    ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_c_id)
                    : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id);
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0 = 1U;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0 = 1U;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we) {
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[0U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[0U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[1U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[1U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[2U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[2U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[3U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[3U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[4U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[4U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[5U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[5U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[6U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[6U];
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[7U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata[7U];
            __VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_we_ex))) {
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex
                [0U];
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_we_ex))) {
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex
                [1U];
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d) 
             & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d))) {
            if ((1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                       | (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_valid))))) {
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip;
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 
                    = vlSelfRef.irq_nm_i;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__unnamedblk1__DOT__ext_debug_req 
                    = vlSelfRef.debug_req_i;
            } else {
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_mip;
                __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_nmi;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__unnamedblk1__DOT__ext_debug_req 
                    = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_debug_req;
            }
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0 = 1U;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0 = 1U;
            __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__unnamedblk1__DOT__ext_debug_req;
            __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0 = 1U;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d;
        if (((~ (IData)(vlSelfRef.instr_gnt_i)) & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (vlSelfRef.data_rdata_i >> 8U);
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q 
            = (3U & ((IData)(vlSelfRef.instr_rvalid_i)
                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                      : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[0U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[1U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[2U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[3U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[4U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[5U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[6U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[7U] 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d[7U];
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set) 
             | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_d;
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0) 
             & (0x07a0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = ((1U > vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_17) 
             & (0x07a1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_17) 
             & (0x07a2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_addr)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = ((0x00040000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   << 0x0000000fU)) 
                   | ((0x00020000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      << 0x0000000aU)) 
                      | ((0x00010000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         << 5U)) | 
                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                          >> 0x00000010U))));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                 >> 1U)));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_sign_ext;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err_plus2 
                = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   & ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                       ? ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                          & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))
                       : ((IData)(vlSelfRef.instr_err_i) 
                          & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                             & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err 
                = ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                    ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                        ? (((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                        : (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                           | ((IData)(vlSelfRef.instr_err_i) 
                              & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                 | (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))))
                    : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ 
                = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                    ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)
                    : (IData)(vlSelfRef.instr_err_i));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ 
                = ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                    ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__)
                    : (IData)(vlSelfRef.instr_err_i));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
                = vlSelfRef.instr_rdata_i;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ 
                = vlSelfRef.instr_err_i;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req)
                    ? ((IData)((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                                                          >> 1U)));
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
        if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((2U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[1U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((4U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[2U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((8U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[3U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000010U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[4U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[5U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[6U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000080U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[7U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000100U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[8U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000200U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[9U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000aU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000bU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000cU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000dU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000eU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000fU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00010000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000010U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00020000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000011U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00040000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000012U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00080000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000013U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00100000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000014U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00200000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000015U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00400000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000016U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x00800000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000017U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x01000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000018U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x02000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000019U] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x04000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001aU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x08000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001bU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x10000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001cU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x20000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001dU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if ((0x40000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001eU] 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb;
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q) 
             & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs2_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs2_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q;
            __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = 0U;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        if ((((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
              & ((((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                   & (IData)(vlSelfRef.debug_req_i)) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_irq)) 
                 | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_nmi))) 
             & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_valid)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_valid = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_nmi 
                = vlSelfRef.irq_nm_i;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_irq 
                = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_irq) 
                   | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_nmi));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_mip 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_debug_req 
                = vlSelfRef.debug_req_i;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_valid = 0U;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_d;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
        if (((((((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q)) 
                 & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)) 
               & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run)) 
             & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))) {
            __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs2_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__illegal_c_insn_id 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id 
                = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_c_id 
                = (0x0000ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata);
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id 
                = (3U != (3U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed;
        }
        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id) {
            __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = 0U;
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_set) 
             | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        }
        if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q) 
             & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_req_ready))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q = 1U;
        }
        if ((4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q = 0U;
        }
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d;
    } else {
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v3 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v3 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v3 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v1 = 1U;
        __VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v1 = 1U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q = 8U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q[7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err_plus2 = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__illegal_c_insn_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[1U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[2U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[3U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[4U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[5U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[6U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[7U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[8U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[9U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000aU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000bU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000cU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000dU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000eU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000fU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000010U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000011U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000012U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000013U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000014U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000015U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000016U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000017U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000018U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000019U] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001aU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001bU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001cU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001dU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001eU] = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs2_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_c_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_valid = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_mip = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_irq = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_nmi = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__captured_debug_req = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x0cU;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = 0U;
        __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs2_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q = 0U;
    }
    __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap__v0 
        = ((IData)(vlSelfRef.rst_ni) && (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid_d
                                         [0U] && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q 
        = ((IData)(vlSelfRef.rst_ni) && ((~ (IData)(vlSelfRef.instr_gnt_i)) 
                                         & (IData)(vlSelfRef.instr_req_o)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_valid_clear 
        = ((1U & (~ (IData)(vlSelfRef.rst_ni))) || 
           (1U & ((~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id) 
                      | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id))) 
                  | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_in_ready_comb 
        = ((IData)(vlSelfRef.rst_ni) && (1U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id)) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                                                   | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_load_err));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_store_err));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done_comb));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid[0U] 
        = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid__v0;
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap[0U] 
        = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap__v0;
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order[0U] = 0ULL;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle[0U] = 0ULL;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][1U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][2U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][3U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][4U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][5U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][6U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__VdlyDim0__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0][7U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v0[7U];
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[1U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[2U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[3U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[4U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[5U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[6U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[7U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[8U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[9U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0aU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0bU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0cU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0dU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0eU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x0fU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x10U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x11U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x12U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x13U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x14U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x15U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x16U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x17U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x18U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x19U][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1aU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1bU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1cU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1dU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1eU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][0U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][1U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][2U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][3U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][4U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][5U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][6U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[0x1fU][7U] 
            = Vcve2_top__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode[0U] = 3U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip[1U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v2;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip__v3) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip[1U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi[1U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v2;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi__v3) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi[1U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req[0U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v0;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v1) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req[0U] = 0U;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req[1U] 
            = __VdlyVal__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v2;
    }
    if (__VdlySet__cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req__v3) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req[1U] = 0U;
    }
    vlSelfRef.rvfi_valid = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid
        [0U];
    vlSelfRef.rvfi_ixl = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl
        [0U];
    vlSelfRef.rvfi_halt = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt
        [0U];
    vlSelfRef.rvfi_trap = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap
        [0U];
    vlSelfRef.rvfi_order = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order
        [0U];
    vlSelfRef.rvfi_mem_rmask = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask
        [0U];
    vlSelfRef.rvfi_mem_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata
        [0U];
    vlSelfRef.rvfi_mem_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata
        [0U];
    vlSelfRef.rvfi_mem_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr
        [0U];
    vlSelfRef.rvfi_rs2_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata
        [0U];
    vlSelfRef.rvfi_rs1_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr
        [0U];
    vlSelfRef.rvfi_rs2_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr
        [0U];
    vlSelfRef.rvfi_rs1_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata
        [0U];
    vlSelfRef.rvfi_rd_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr
        [0U];
    vlSelfRef.rvfi_rd_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata
        [0U];
    vlSelfRef.rvfi_mem_wmask = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask
        [0U];
    vlSelfRef.rvfi_ext_mcycle = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle
        [0U];
    vlSelfRef.rvfi_mode = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode
        [0U];
    vlSelfRef.rvfi_pc_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata
        [0U];
    vlSelfRef.rvfi_pc_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata
        [0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlSelfRef.rvfi_rs3_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata
        [0U];
    vlSelfRef.rvfi_intr = (1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr
                           [0U]);
    vlSelfRef.rvfi_insn = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn
        [0U];
    vlSelfRef.rvfi_rs3_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr
        [0U];
    vlSelfRef.rvfi_ext_mip = 0U;
    vlSelfRef.rvfi_ext_mip = ((0xfffffff7U & vlSelfRef.rvfi_ext_mip) 
                              | (8U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip
                                       [1U] >> 0x0000000fU)));
    vlSelfRef.rvfi_ext_mip = ((0xffffff7fU & vlSelfRef.rvfi_ext_mip) 
                              | (0x00000080U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip
                                                [1U] 
                                                >> 0x0000000aU)));
    vlSelfRef.rvfi_ext_mip = ((0xfffff7ffU & vlSelfRef.rvfi_ext_mip) 
                              | (0x00000800U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip
                                                [1U] 
                                                >> 5U)));
    vlSelfRef.rvfi_ext_mip = ((0x0000ffffU & vlSelfRef.rvfi_ext_mip) 
                              | (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip
                                 [1U] << 0x00000010U));
    vlSelfRef.rvfi_ext_nmi = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi
        [1U];
    vlSelfRef.rvfi_ext_debug_req = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req
        [1U];
    __VdfgRegularize_hebeb780c_0_7 = ((0x0000ff00U 
                                       & (vlSelfRef.data_rdata_i 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000010U)));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.instr_rvalid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000bU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000aU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000cU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs 
        = (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
           & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[1U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][1U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[2U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][2U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[3U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][3U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[4U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][4U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[5U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][5U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[6U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][6U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2[7U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                         >> 0x00000014U))][7U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[1U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][1U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[2U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][2U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[3U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][3U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[4U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][4U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[5U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][5U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[6U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][6U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1[7U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q
        [(0x0000001fU & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))
                          ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                             >> 7U) : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                       >> 0x0000000fU)))][7U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSelfRef.data_rdata_i 
                                        >> 0x0000001fU))) 
                            << 8U) | (vlSelfRef.data_rdata_i 
                                      >> 0x00000018U))
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.data_rdata_i, 0x00000018U))
                    : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 0x00000017U)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.data_rdata_i 
                                       >> 0x00000010U)))
                        : (0x000000ffU & (vlSelfRef.data_rdata_i 
                                          >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 0x0000000fU)))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.data_rdata_i 
                                       >> 8U))) : (0x000000ffU 
                                                   & (vlSelfRef.data_rdata_i 
                                                      >> 8U)))
                    : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                              >> 7U)))) 
                            << 8U) | (0x000000ffU & vlSelfRef.data_rdata_i))
                        : (0x000000ffU & vlSelfRef.data_rdata_i))))
            : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 7U)))) 
                                << 0x00000010U) | (IData)(__VdfgRegularize_hebeb780c_0_7))
                            : (IData)(__VdfgRegularize_hebeb780c_0_7))
                        : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSelfRef.data_rdata_i 
                                            >> 0x0000001fU))) 
                                << 0x00000010U) | (vlSelfRef.data_rdata_i 
                                                   >> 0x00000010U))
                            : VL_SHIFTR_III(32,32,32, vlSelfRef.data_rdata_i, 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 0x00000017U)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & (vlSelfRef.data_rdata_i 
                                                      >> 8U)))
                            : (0x0000ffffU & (vlSelfRef.data_rdata_i 
                                              >> 8U)))
                        : ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSelfRef.data_rdata_i 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.data_rdata_i))
                            : (0x0000ffffU & vlSelfRef.data_rdata_i))))
                : ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.data_rdata_i 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x00000010U)))
                        : ((vlSelfRef.data_rdata_i 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U))))
                    : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.data_rdata_i 
                            << 0x00000018U) | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.data_rdata_i))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0fU;
    }
    if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0eU;
    }
    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0dU;
    }
    if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0cU;
    }
    if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0bU;
    }
    if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0x0aU;
    }
    if ((0x00000200U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x00000100U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x00000080U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x00000010U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q 
        = __Vdly__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q;
    vlSelfRef.crash_dump_o[0U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlSelfRef.crash_dump_o[1U] = (IData)((((QData)((IData)(
                                                           (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                            << 1U))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q))));
    vlSelfRef.crash_dump_o[2U] = (IData)(((((QData)((IData)(
                                                            (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                             << 1U))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q))) 
                                          >> 0x00000020U));
    vlSelfRef.crash_dump_o[3U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__pc_id;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
              == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U)));
    vlSelfRef.debug_halted_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2 
        = (1U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
              & ((IData)(vlSelfRef.irq_nm_i) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 >> 5U) 
                                                & (0U 
                                                   != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_req_ready 
        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_gnt_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_err_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_rvalid_i));
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4 
            = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id 
            = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4 = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id = 0U;
    }
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_2[2U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_2[3U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_2[4U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_2[5U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_2[6U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_2[7U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_2[8U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_2[9U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_2[0x0000000aU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_2[0x0000000bU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000aU];
    __Vtemp_2[0x0000000cU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000bU];
    __Vtemp_2[0x0000000dU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000cU];
    __Vtemp_2[0x0000000eU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000dU];
    __Vtemp_2[0x0000000fU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000eU];
    __Vtemp_2[0x00000010U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000fU];
    __Vtemp_2[0x00000011U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000010U];
    __Vtemp_2[0x00000012U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000011U];
    __Vtemp_2[0x00000013U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000012U];
    __Vtemp_2[0x00000014U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000013U];
    __Vtemp_2[0x00000015U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000014U];
    __Vtemp_2[0x00000016U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000015U];
    __Vtemp_2[0x00000017U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000016U];
    __Vtemp_2[0x00000018U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000017U];
    __Vtemp_2[0x00000019U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000018U];
    __Vtemp_2[0x0000001aU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000019U];
    __Vtemp_2[0x0000001bU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001aU];
    __Vtemp_2[0x0000001cU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001bU];
    __Vtemp_2[0x0000001dU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001cU];
    __Vtemp_2[0x0000001eU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001dU];
    __Vtemp_2[0x0000001fU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001eU];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                (0x0000001fU 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                    >> 0x0000000fU)), 5U)))
             ? 0U : (__Vtemp_2[(((IData)(0x0000001fU) 
                                 + (0x000003ffU & VL_SHIFTL_III(10,10,32, 
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                                    >> 0x0000000fU)), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                                   >> 0x0000000fU)), 5U))))) 
           | (__Vtemp_2[(0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                          >> 0x0000000fU)), 5U) 
                                        >> 5U))] >> 
              (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                           (0x0000001fU 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x0000000fU)), 5U))));
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0U];
    __Vtemp_3[2U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[1U];
    __Vtemp_3[3U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[2U];
    __Vtemp_3[4U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[3U];
    __Vtemp_3[5U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[4U];
    __Vtemp_3[6U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[5U];
    __Vtemp_3[7U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[6U];
    __Vtemp_3[8U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[7U];
    __Vtemp_3[9U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[8U];
    __Vtemp_3[0x0000000aU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[9U];
    __Vtemp_3[0x0000000bU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000aU];
    __Vtemp_3[0x0000000cU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000bU];
    __Vtemp_3[0x0000000dU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000cU];
    __Vtemp_3[0x0000000eU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000dU];
    __Vtemp_3[0x0000000fU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000eU];
    __Vtemp_3[0x00000010U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000000fU];
    __Vtemp_3[0x00000011U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000010U];
    __Vtemp_3[0x00000012U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000011U];
    __Vtemp_3[0x00000013U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000012U];
    __Vtemp_3[0x00000014U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000013U];
    __Vtemp_3[0x00000015U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000014U];
    __Vtemp_3[0x00000016U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000015U];
    __Vtemp_3[0x00000017U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000016U];
    __Vtemp_3[0x00000018U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000017U];
    __Vtemp_3[0x00000019U] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000018U];
    __Vtemp_3[0x0000001aU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x00000019U];
    __Vtemp_3[0x0000001bU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001aU];
    __Vtemp_3[0x0000001cU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001bU];
    __Vtemp_3[0x0000001dU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001cU];
    __Vtemp_3[0x0000001eU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001dU];
    __Vtemp_3[0x0000001fU] = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q[0x0000001eU];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                (0x0000001fU 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)), 5U)))
             ? 0U : (__Vtemp_3[(((IData)(0x0000001fU) 
                                 + (0x000003ffU & VL_SHIFTL_III(10,10,32, 
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                                    >> 0x00000014U)), 5U))) 
                                >> 5U)] << ((IData)(0x00000020U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                                   >> 0x00000014U)), 5U))))) 
           | (__Vtemp_3[(0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U)), 5U) 
                                        >> 5U))] >> 
              (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                           (0x0000001fU 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)), 5U))));
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0 
        = (0U != (((2U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_nmi 
        = ((IData)(vlSelfRef.irq_nm_i) & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_irq 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
            >> 5U) & ((0U != vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__irqs) 
                      & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_err_lsu) 
              | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelfRef.debug_req_i) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id);
    cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)
            ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q)
            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_q));
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    if ((0x00000040U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                          >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00001000U 
                                                                    & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00001000U 
                                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                                            ? 0x0aU
                                                            : 0U)));
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
        } else if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)) {
                            if ((0U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                        >> 0x0000001bU))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                               >> 0x0000001bU))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id)
                                    ? 0x0aU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:1132: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 1132, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id)
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b
            : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_q);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                   << 1U));
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                                                  << 1U))));
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id);
    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
                                  >> 0x10U));
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                  >> 0x10U));
        } else {
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
                                  >> 0x10U));
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b);
        }
    } else {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0x0000ffffU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a);
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0x0000ffffU & ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                               ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                  >> 0x10U) : vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b));
    }
    if ((0x00000040U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:599: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 599, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)))) {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:635: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 635, "");
                                    }
                                }
                            }
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                      >> 0x0000001dU)) 
                               || ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                              >> 0x0000001bU)) 
                                       || ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                           >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x04000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:313: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 313, "");
                        }
                    }
                }
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)) 
                                   || ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || ((0x40000000U 
                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)
                                            ? ((1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                            : ((1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))
                        : ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       || ((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)) 
                                           || ((1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0000001cU)) 
                                               || ((1U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                       >> 0x0000001bU)) 
                                                   || (0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                           >> 0x00000019U)))))))))));
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:573: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 573, "");
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        }
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cve2_decoder.sv:330: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                              >> 0x0cU)));
                        VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_decoder.sv", 330, "");
                    }
                }
            }
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((0U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) {
                    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__illegal_c_insn_id) {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__csr_access = 0U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.instr_rdata_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.instr_rdata_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (2U == (6U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (1U == (3U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i)));
    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__;
        cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = vlSelfRef.instr_err_i;
        cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelfRef.instr_rdata_i;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_done_comb = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr = 0U;
    cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
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
    if (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q) 
         & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)))) {
        vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q;
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
                  & (4U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (9U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 7U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (9U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 8U;
                goto __Vlabel0;
            }
            if ((((0x57U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op)) 
                  & (3U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3))) 
                 & (0x28U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6)))) {
                vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 9U;
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
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q;
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
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_req = 1U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_addr 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_be = 0x0fU;
            if ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                cve2_top__DOT__u_cve2_core__DOT__vec_data_we = 0U;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = 0U;
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
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata 
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
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                    } else {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                              >> 0x0000000fU));
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                            = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                               & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                    }
                } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                            cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
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
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 0x0000000fU));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           >> (0x0000001fU & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b));
                } else {
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                        = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                          >> 0x0000000fU));
                    cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_r 
                        = (cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_a 
                           & cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b);
                }
            } else if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                    if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q))) {
                        cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__tmp_b 
                            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q;
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
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we 
                = (0U != (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                         >> 7U)));
            cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr 
                = (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q 
                                  >> 7U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 4U;
        }
    } else if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = 1U;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex));
    if ((1U & (~ VL_ONEHOT_I(((((4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))) 
                               << 1U) | ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                                         | (6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != ((((4U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                      | (7U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator))) 
                     << 1U) | ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (6U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:393: Assertion failed in %Ncve2_top.u_cve2_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_alu.sv", 393, "");
            }
        }
    }
    __Vtableidx6 = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vcve2_top__ConstPool__TABLE_h343a05bb_0[__Vtableidx6];
    __Vtableidx4 = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vcve2_top__ConstPool__TABLE_h095b1a9f_0[__Vtableidx4];
    __Vtableidx3 = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vcve2_top__ConstPool__TABLE_h81ccfef0_0[__Vtableidx3];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vcve2_top__ConstPool__TABLE_h81ccfef0_0[__Vtableidx3];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vcve2_top__ConstPool__TABLE_h81ccfef0_0[__Vtableidx3];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vcve2_top__ConstPool__TABLE_he52cf3a4_0[__Vtableidx3];
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_id_stage.sv:538: Assertion failed in %Ncve2_top.u_cve2_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_id_stage.sv", 538, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_core.sv:1427: Assertion failed in %Ncve2_top.u_cve2_core: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type));
                VL_STOP_MT("../../../rtl/cve2_core.sv", 1427, "");
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_mask_int 
        = ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type))
            ? 0x0fU : ((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type))
                        ? 3U : ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type))
                                 ? 1U : 0U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
            >> 0x0000001fU) & (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
            >> 0x0000001fU) & ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
                                           >> 0x1fU))
                                     : ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a 
                                           >> 0x1fU)))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i 
        = ((IData)(((0U == (0x000f8000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) 
                    & ((2U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                       | (3U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
            ? 0U : (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
        [0U];
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 0U;
    if ((IData)(((0x57U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode)) 
                 & (0x00007000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))))) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
    }
    if ((IData)(((7U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode)) 
                 & (0x00006000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))))) {
        if ((IData)((0U == (0xfc000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
        }
    }
    if ((IData)(((0x27U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode)) 
                 & (0x00006000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))))) {
        if ((IData)((0U == (0xfc000000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
        }
    }
    if ((0x57U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((IData)((0U == (0xfc007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
        }
        if ((IData)(((0x00004000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) 
                     & ((0U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                >> 0x0000001aU)) | 
                        ((0x25U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                    >> 0x0000001aU)) 
                         | (9U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                   >> 0x0000001aU))))))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
        }
        if ((IData)(((0x00003000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id)) 
                     & ((9U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                >> 0x0000001aU)) | 
                        (0x28U == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                   >> 0x0000001aU)))))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = 1U;
        }
    }
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok = 1U;
    if ((IData)(((0x57U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode)) 
                 & (0x00007000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))))) {
        if ((1U & ((~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                       >> 0x1fU)) & (~ (IData)((0x02000000U 
                                                == 
                                                (0xfe000000U 
                                                 & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))))))) {
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vtypei 
                = (0x000007ffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                  >> 0x14U));
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vlmul 
                = (7U & (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vtypei));
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vsew 
                = (7U & ((IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vtypei) 
                         >> 3U));
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vta 
                = (1U & ((IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vtypei) 
                         >> 6U));
            vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__Vfuncout 
                = (((0U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vlmul)) 
                    & (2U == (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vsew))) 
                   & (IData)(vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vta));
            cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok 
                = vlSelfRef.__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__Vfuncout;
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6) 
                 | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x00000010U))));
    vlSelfRef.data_we_o = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)
                            ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_data_we)
                            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb 
        = (0x0000001fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                           ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr)
                           : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                              >> 7U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U))
                : ((vlSelfRef.instr_rdata_i << 0x00000010U) 
                   | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                      >> 0x00000010U))) : cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x00000003fffc0000ULL & cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x0003ffffU & (IData)(
                                                            (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                             [0U] 
                                                             >> 0x10U))))));
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x000000000003ffffULL & cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & (- (IData)(
                                                    ((0U 
                                                      != (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                     & (IData)(
                                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                                [0U] 
                                                                >> 0x21U)))))))) 
                      << 0x00000012U));
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U)))));
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                [0U];
        }
    } else {
        cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U)))));
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)))))) {
        if ((0U != (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:98: Assertion failed in %Ncve2_top.u_cve2_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_alu.sv", 98, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel))))))) {
        if ((0U != ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cve2_alu.sv:86: Assertion failed in %Ncve2_top.u_cve2_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../src/openhwgroup_cve2_cve2_core_0.1/rtl/cve2_alu.sv", 86, "");
            }
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
        = ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
            : (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i)) 
           | ((2U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i)) 
              | (3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i))));
    __Vtableidx2 = ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vcve2_top__ConstPool__TABLE_h5b90359e_0[__Vtableidx2];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vcve2_top__ConstPool__TABLE_h123afc4f_0[__Vtableidx2];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vcve2_top__ConstPool__TABLE_h64104f69_0[__Vtableidx2];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vcve2_top__ConstPool__TABLE_h75daf038_0[__Vtableidx2];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vcve2_top__ConstPool__TABLE_h95dddee3_0[__Vtableidx2];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vcve2_top__ConstPool__TABLE_h336c83ef_0[__Vtableidx2];
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res 
        = (0x00000003ffffffffULL & ((0x00000007ffffffffULL 
                                     & VL_MULS_QQQ(35, 
                                                   (0x00000007ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                      << 0x00000010U) 
                                                                     | (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                   (0x00000007ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                      << 0x00000010U) 
                                                                     | (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                    + (0x00000007ffffffffULL 
                                       & VL_EXTENDS_QQ(35,34, cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
            ? ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res
                : ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (((QData)((IData)((0x0000ffffU 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)))) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000ffffU 
                                                           & (IData)(
                                                                     vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                                     [0U])))))
                    : cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res))
            : ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (((QData)((IData)((0x0000ffffU 
                                         & (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)))) 
                        << 0x00000010U) | (QData)((IData)(
                                                          (0x0000ffffU 
                                                           & (IData)(
                                                                     vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                                     [0U])))))
                    : cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res)
                : cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid 
        = ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel))) 
           || ((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
               | (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
           | (((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok)) 
               & (0x57U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) 
              & (0x00007000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x0000001fU 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x0000001fU 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x00100073U
                                        : (0x00e7U 
                                           | (0x000f8000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)))))
                                : ((0U != (0x0000001fU 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x0067U | (0x000f8000U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)))));
                    }
                    if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0x0cU)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                            if ((0U == (0x0000001fU 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 7U)))) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
                if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
                if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0x0cU)))) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x00000020U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x00000400U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 7U)))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x00000012U))))));
                }
                if ((0U == ((0x00000020U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U))))) {
                    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x00008000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x0000000dU)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                            | (0x00000200U 
                                               & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 3U))))));
            }
            if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x00004000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x0000000dU)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x0000000dU)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00010413U | ((0x3c000000U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x00000013U)) 
                                  | ((0x03000000U & 
                                      (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x0000000dU)) 
                                     | ((0x00800000U 
                                         & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000012U)) 
                                        | ((0x00400000U 
                                            & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x00000010U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
        }
        if ((0x00002000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0x000000ffU & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          >> 5U)))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_in_ready_comb) 
           & ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
               ? ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                   ? (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                   : (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                       >> 1U) | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                 & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i))))
               : (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d) 
           & ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ 
        = (((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
            & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_6)));
}
