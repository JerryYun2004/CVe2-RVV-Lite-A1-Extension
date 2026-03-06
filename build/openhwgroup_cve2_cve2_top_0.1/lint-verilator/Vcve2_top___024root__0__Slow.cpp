// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_top.h for the primary calling header

#include "Vcve2_top__pch.h"

VL_ATTR_COLD void Vcve2_top___024root___eval_static(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_static\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__1 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__2 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__2 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__clk__0 
        = vlSelfRef.cve2_top__DOT__clk;
}

VL_ATTR_COLD void Vcve2_top___024root___eval_initial__TOP(Vcve2_top___024root* vlSelf);

VL_ATTR_COLD void Vcve2_top___024root___eval_initial(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_initial\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcve2_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vcve2_top___024root___eval_initial__TOP(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_initial__TOP\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0U] 
        = (1U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[1U] 
        = (2U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [1U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[2U] 
        = (4U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [2U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (8U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (0x00000010U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (0x00000020U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (0x00000040U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x00000080U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x00000100U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x00000200U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0aU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0aU] 
        = (0x00000400U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0aU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0bU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0bU] 
        = (0x00000800U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0bU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0cU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0cU] 
        = (0x00001000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0cU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0dU] 
        = (0x00002000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0dU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0eU] 
        = (0x00004000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0eU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0fU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0fU] 
        = (0x00008000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x0fU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x00010000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x00020000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x00040000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x00080000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x00100000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x00200000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x00400000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x00800000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x01000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x02000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x04000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x08000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x10000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x20000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x40000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x80000000U | vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x0fU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000dU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000eU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000fU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000010U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000011U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000012U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000013U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000014U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000015U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000016U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000017U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000018U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x00000019U] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001aU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001bU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001cU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001dU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001eU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000001fU] = 0ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000aU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000bU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000cU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0x0000000fU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000aU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000bU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000cU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000dU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000eU] = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0x0000000fU] = 0U;
    vlSelfRef.x_issue_valid_o = 0U;
    vlSelfRef.x_issue_req_o[0U] = 0U;
    vlSelfRef.x_issue_req_o[1U] = 0U;
    vlSelfRef.x_issue_req_o[2U] = 0U;
    vlSelfRef.x_register_o[0U] = 0U;
    vlSelfRef.x_register_o[1U] = 0U;
    vlSelfRef.x_register_o[2U] = 0U;
    vlSelfRef.x_register_o[3U] = 0U;
    vlSelfRef.x_commit_valid_o = 0U;
    vlSelfRef.x_commit_o = 0ULL;
    vlSelfRef.x_result_ready_o = 0U;
}

VL_ATTR_COLD void Vcve2_top___024root___eval_final(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_final\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcve2_top___024root___eval_phase__stl(Vcve2_top___024root* vlSelf);

VL_ATTR_COLD void Vcve2_top___024root___eval_settle(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_settle\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcve2_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../src/openhwgroup_cve2_cve2_top_0.1/rtl/cve2_top.sv", 17, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcve2_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcve2_top___024root___eval_triggers__stl(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_triggers__stl\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcve2_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcve2_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcve2_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.controller_i.special_req)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcve2_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___trigger_anySet__stl\n"); );
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
extern const VlUnpacked<CData/*3:0*/, 32> Vcve2_top__ConstPool__TABLE_he88acd25_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vcve2_top__ConstPool__TABLE_h3e80a4e7_0;

VL_ATTR_COLD void Vcve2_top___024root___stl_sequent__TOP__0(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___stl_sequent__TOP__0\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cve2_top__DOT__clock_en;
    cve2_top__DOT__clock_en = 0;
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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_o = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__mret_insn_dec = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0;
    CData/*2:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0;
    CData/*1:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_3 = 0;
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
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0;
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0;
    QData/*33:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res = 0;
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = 0;
    IData/*31:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = 0;
    QData/*32:0*/ cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = 0;
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
    CData/*0:0*/ cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr = 0;
    Vcve2_top_cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____typeimpmod1__struct__0 cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__clk = 0;
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n = 0;
    QData/*33:0*/ __VdfgRegularize_h4af1c392_0_3;
    __VdfgRegularize_h4af1c392_0_3 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
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
    vlSelfRef.debug_halted_o = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_req_ready 
        = (1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)));
    vlSelfRef.rvfi_valid = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid
        [0U];
    vlSelfRef.rvfi_order = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order
        [0U];
    vlSelfRef.rvfi_insn = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn
        [0U];
    vlSelfRef.rvfi_trap = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap
        [0U];
    vlSelfRef.rvfi_halt = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt
        [0U];
    vlSelfRef.rvfi_intr = (1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr
                           [0U]);
    vlSelfRef.rvfi_mode = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode
        [0U];
    vlSelfRef.rvfi_ixl = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl
        [0U];
    vlSelfRef.rvfi_rs1_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr
        [0U];
    vlSelfRef.rvfi_rs2_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr
        [0U];
    vlSelfRef.rvfi_rs3_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr
        [0U];
    vlSelfRef.rvfi_rs1_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata
        [0U];
    vlSelfRef.rvfi_rs2_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata
        [0U];
    vlSelfRef.rvfi_rs3_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata
        [0U];
    vlSelfRef.rvfi_rd_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr
        [0U];
    vlSelfRef.rvfi_rd_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata
        [0U];
    vlSelfRef.rvfi_pc_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata
        [0U];
    vlSelfRef.rvfi_pc_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata
        [0U];
    vlSelfRef.rvfi_mem_addr = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr
        [0U];
    vlSelfRef.rvfi_mem_rmask = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask
        [0U];
    vlSelfRef.rvfi_mem_wmask = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask
        [0U];
    vlSelfRef.rvfi_mem_rdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata
        [0U];
    vlSelfRef.rvfi_mem_wdata = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata
        [0U];
    vlSelfRef.rvfi_ext_nmi = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi
        [1U];
    vlSelfRef.rvfi_ext_debug_req = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req
        [1U];
    vlSelfRef.rvfi_ext_mcycle = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle
        [0U];
    cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__clknrst_if.__PVT__reset_n 
        = vlSelfRef.rst_ni;
    vlSelfRef.cve2_top__DOT__fetch_enable_d = ((IData)(vlSelfRef.cve2_top__DOT__fetch_enable_q) 
                                               | (IData)(vlSelfRef.fetch_enable_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.instr_rdata_i);
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.instr_rdata_i);
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2 
        = (1U & ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                 & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000aU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000bU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[0x0000000cU] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q;
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
           & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
              == (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlSelfRef.irq_software_i) << 0x00000012U) 
           | (((IData)(vlSelfRef.irq_timer_i) << 0x00000011U) 
              | (((IData)(vlSelfRef.irq_external_i) 
                  << 0x00000010U) | (IData)(vlSelfRef.irq_fast_i))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err));
    cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)) 
           & (IData)(vlSelfRef.data_rvalid_i));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h3e3331c6__0 
        = (0U != (((2U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id 
        = ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__new_nmi 
        = ((IData)(vlSelfRef.irq_nm_i) & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U))
                : ((vlSelfRef.instr_rdata_i << 0x00000010U) 
                   | (cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                      >> 0x00000010U))) : cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                   << 1U));
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
    if ((4U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                    = (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U));
            } else {
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                    = (1ULL | ((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                               [0U])) 
                               << 1U));
                vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                    = (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                                          [1U])))) 
                               << 1U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = (1ULL | ((QData)((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex
                                           [0U])) << 1U));
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = (1ULL | ((QData)((IData)((~ (IData)(
                                                      vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q
                                                      [1U])))) 
                           << 1U));
        } else {
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
            vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = (1ULL | ((QData)((IData)((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                           << 1U));
        }
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((1U & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? (1ULL | ((QData)((IData)((~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a))) 
                           << 1U)) : (1ULL | ((QData)((IData)(
                                                              (~ vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b))) 
                                              << 1U)));
    }
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id) {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q;
    } else {
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_q;
        vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_q;
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id);
    cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = 0U;
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
        = ((1U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
            : (IData)(cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb 
        = (0x0000001fU & ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we)
                           ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_scalar_waddr)
                           : (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id 
                              >> 7U)));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__trigger_match)));
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
    if (vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req) {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = ((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__div_sel_ex) 
           | (IData)(cve2_top__DOT__u_cve2_core__DOT__mult_sel_ex));
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
    vlSelfRef.data_we_o = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q)
                            ? (IData)(cve2_top__DOT__u_cve2_core__DOT__vec_data_we)
                            : (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec 
        = ((IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
           | (((~ (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_ok)) 
               & (0x57U == (IData)(cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) 
              & (0x00007000U == (0x00007000U & vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id))));
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
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o) 
           | (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o));
    vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_valid 
        = ((1U & (~ (IData)(vlSelfRef.cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel))) 
           || ((IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
               | (IData)(cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
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

void Vcve2_top___024root___ico_comb__TOP__0(Vcve2_top___024root* vlSelf);
void Vcve2_top___024root___ico_comb__TOP__1(Vcve2_top___024root* vlSelf);

VL_ATTR_COLD void Vcve2_top___024root___eval_stl(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_stl\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vcve2_top___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered
                 [0U]))) {
        Vcve2_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VstlTriggered
                                                   [0U]))) {
        Vcve2_top___024root___ico_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vcve2_top___024root___eval_phase__stl(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___eval_phase__stl\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcve2_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcve2_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcve2_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcve2_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcve2_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.controller_i.special_req)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcve2_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcve2_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] cve2_top.u_cve2_core.id_stage_i.controller_i.special_req)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge cve2_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcve2_top___024root___ctor_var_reset(Vcve2_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_top___024root___ctor_var_reset\n"); );
    Vcve2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->test_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9265559370075686664ull);
    vlSelf->ram_cfg_i = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7047896117921812122ull);
    vlSelf->hart_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14232312970918094889ull);
    vlSelf->boot_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6854077575247965213ull);
    vlSelf->instr_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14531167946818535043ull);
    vlSelf->instr_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3778668012896251442ull);
    vlSelf->instr_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11649950516124001328ull);
    vlSelf->instr_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 654935547478337000ull);
    vlSelf->instr_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7306565410255693909ull);
    vlSelf->instr_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2506672939132288486ull);
    vlSelf->data_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13258830846686508357ull);
    vlSelf->data_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140330544646895102ull);
    vlSelf->data_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459008019399168966ull);
    vlSelf->data_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2784509029390390587ull);
    vlSelf->data_be_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12177541519177695058ull);
    vlSelf->data_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6950453265813282798ull);
    vlSelf->data_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3892294063785114175ull);
    vlSelf->data_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9755530576326907746ull);
    vlSelf->data_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11249608029342226805ull);
    vlSelf->x_issue_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12252869506029683406ull);
    vlSelf->x_issue_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2143856980439183772ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->x_issue_req_o, __VscopeHash, 1150510467984759990ull);
    vlSelf->x_issue_resp_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13524879249335846560ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->x_register_o, __VscopeHash, 2800667980081577098ull);
    vlSelf->x_commit_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4918214661341312730ull);
    vlSelf->x_commit_o = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 16674330515282637941ull);
    vlSelf->x_result_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3724199473575832557ull);
    vlSelf->x_result_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13532905016411763874ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->x_result_i, __VscopeHash, 6699479993337042504ull);
    vlSelf->irq_software_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2638438955069839570ull);
    vlSelf->irq_timer_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10264492141558949306ull);
    vlSelf->irq_external_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9275754242809800498ull);
    vlSelf->irq_fast_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15325696321436647306ull);
    vlSelf->irq_nm_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15625223038548301576ull);
    vlSelf->debug_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10477173065545169978ull);
    vlSelf->debug_halted_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5385306499358898145ull);
    vlSelf->dm_halt_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4892015606304350846ull);
    vlSelf->dm_exception_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6023492208887836265ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->crash_dump_o, __VscopeHash, 11455028946567694039ull);
    vlSelf->rvfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11567585934436963273ull);
    vlSelf->rvfi_order = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5979707310596660652ull);
    vlSelf->rvfi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6220329832192124657ull);
    vlSelf->rvfi_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14264171660214961985ull);
    vlSelf->rvfi_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827333379590374006ull);
    vlSelf->rvfi_intr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15659157735209443366ull);
    vlSelf->rvfi_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7237997432152298385ull);
    vlSelf->rvfi_ixl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17997077998305700966ull);
    vlSelf->rvfi_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17249303277837985668ull);
    vlSelf->rvfi_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6835922882267509951ull);
    vlSelf->rvfi_rs3_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1314166189763056988ull);
    vlSelf->rvfi_rs1_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4044889439759919337ull);
    vlSelf->rvfi_rs2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18200364913981278843ull);
    vlSelf->rvfi_rs3_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4267088218533173848ull);
    vlSelf->rvfi_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7404223540078648407ull);
    vlSelf->rvfi_rd_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12563052908445307242ull);
    vlSelf->rvfi_pc_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 166339320296314353ull);
    vlSelf->rvfi_pc_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9985564527100831026ull);
    vlSelf->rvfi_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4819164154746370970ull);
    vlSelf->rvfi_mem_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11848081616672831662ull);
    vlSelf->rvfi_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16583986449816199447ull);
    vlSelf->rvfi_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 165640419387587325ull);
    vlSelf->rvfi_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9763064276365803955ull);
    vlSelf->rvfi_ext_mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14627711992625399972ull);
    vlSelf->rvfi_ext_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4686883026167052759ull);
    vlSelf->rvfi_ext_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4443786102994514076ull);
    vlSelf->rvfi_ext_mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1009935135143044039ull);
    vlSelf->fetch_enable_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16535158784592174946ull);
    vlSelf->core_sleep_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2801328385149732395ull);
    vlSelf->cve2_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621689891290707022ull);
    vlSelf->cve2_top__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10125887507048128406ull);
    vlSelf->cve2_top__DOT__fetch_enable_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1386406987556309944ull);
    vlSelf->cve2_top__DOT__fetch_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15398318612725817598ull);
    vlSelf->cve2_top__DOT__core_clock_gate_i__DOT__clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643339235313357024ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14243962130534472230ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_rdata_alu_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10227595221406132225ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_rdata_c_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15930089523026876895ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3372931009011644914ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3405479857569240552ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_fetch_err_plus2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2679307268537743053ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15196562014044161741ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5608341000623491163ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__imd_val_d_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11539401278265727813ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__imd_val_q_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13380267693319655721ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__imd_val_we_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16456322863855862401ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_first_cycle_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559452987463112421ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__instr_valid_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8680115883210496711ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12427143653357481589ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__lsu_load_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11937941066358311405ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__lsu_store_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18380334875129363832ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__lsu_addr_incr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1367620440788926366ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 38243514276129437ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rf_rdata_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17453398742554816583ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rf_rdata_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8279091126985834894ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rf_waddr_wb = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11192508836846731064ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rf_wdata_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9009537784356581865ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 240439849187581077ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16006930216215290146ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_done_comb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379880955683537568ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_scalar_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17522500638905470593ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_scalar_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10780634571358334992ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5359673726466263503ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_data_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2064235035497896181ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_data_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6772955547788168122ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12009641428600286774ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__data_gnt_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 952507524692989796ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__data_rvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11262772437656327895ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__data_err_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119975064424212418ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__div_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4223022216852053047ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16663508878177758123ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1705668673995125053ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_in_ready_comb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2187627270422212276ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15070617299917673197ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__irqs = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 5195444389425435147ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12564226582615176690ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__perf_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13724904070821631405ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251431784378831875ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_order[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14352770770536103855ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_insn[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8138461551440422699ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_trap[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15305591914302600333ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_halt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11375505022640683569ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_intr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10559204886324790289ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15764883681417645903ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_ixl[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2364297369923163841ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12383788280274863811ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1030136256527847316ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16853530253839096703ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs1_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7750513061789119177ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs2_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8081369932277131470ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rs3_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16450196302357992053ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 153789971908887100ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_rd_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15437626522254551118ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1207648264606451787ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_pc_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1956506169025423664ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5264449894220393658ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11544542892589144055ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7556836232922916035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3881877467564948004ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 528505260613511574ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14438909877681490427ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 450207281260844626ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911190096392566926ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_set_trap_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17478431200173945637ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 31840562864619346ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2564930283853149500ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16964974291130676756ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16083088998995931506ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12206817708261889586ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs1_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7787599824596782954ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14863111826017041561ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rs2_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10148487209259306535ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10194842722848607045ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12034243574475340565ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11128274987724163536ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_rd_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14836758578209013331ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_mask_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10955316529280272348ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10905118801795322085ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8067639163867668423ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10233994084442696642ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2187402179043952731ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17852646575609757524ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_mem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13471453071302774243ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_trap_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7354914954968763421ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__new_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7701032778280931026ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17554492026973790077ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__captured_mip = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4850232370513900960ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__captured_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4507340931313367369ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__captured_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14017491951299303897ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__captured_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4689014697136182994ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__captured_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15834854327793944684ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mip[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4886431244693655887ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_nmi[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12974414400527405001ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_debug_req[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12558003889618253896ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_ext_stage_mcycle[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5721454445499853396ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__rvfi_stage_valid_d[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6369532329644542242ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__unnamedblk1__DOT__ext_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7374114768442581620ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT____VdfgRegularize_hd6559329_0_2 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12227792227810353497ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13252254807224379999ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5788393333980881722ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3744144072040783694ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6772402499308004766ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15138423841304394808ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10078270170258159974ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7890960889946472006ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8896262705174235397ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14836700916992271849ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17830093292057354551ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1197619456075440783ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9927807013989579833ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1103005678938327531ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10049511710446131286ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16843781527376634192ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17500250673751415536ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6285311368435346168ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_hb8b98034_0_3 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4556313017412356985ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3245282107053184350ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q, __VscopeHash, 11828558129091040081ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2780838556738686060ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7561373243952161568ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7358931959422025336ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16731583359590335198ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 509535860955582262ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441591425763611319ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13699317406023201480ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18059211196338720970ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10042720076094737069ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12163139379751558326ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17771697614225972863ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9245121448559631460ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10427696818194077608ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3848198280369986869ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 14519534725799239006ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 3733413354086434968ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h46d40f9b_0_7 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_resp_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11442970183645566807ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__illegal_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 833307566790558004ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6068441440652161832ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482612172188890501ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12128858294411445671ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9376089946695583400ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14183039895048586992ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4174224274424404122ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5821075193929596869ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692662131582830119ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7664679140655131854ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6567184456494593498ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3717713055622950118ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__jump_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10698231268889777798ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13133267842093315670ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16054375374470783438ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_multdiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5411612083179619451ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__stall_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227580004414967212ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_hold_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16962612348926785559ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_instr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3831890835073394171ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4493286437526312364ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__vec_req_rs2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13122612514368539329ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15820914651110967439ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_we_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5555431842743764711ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1893181111841681954ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6361675967042523547ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16711526477889760758ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9353734545591810284ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 956806392128946977ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15236179819968280513ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046025240621702772ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1331252357639682786ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327448874775592661ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__multdiv_operator = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2256327949996829023ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5655105058961914401ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5511450665290990077ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9511833946873240301ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14638799881708312010ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16273523808278265444ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__id_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13910164330441525651ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__branch_set_raw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7993770360626772820ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT____VdfgRegularize_hc99b5203_0_4 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17540142623838039067ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10434736475802789613ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10581887796607961689ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3369820888649977201ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5854184905892608964ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3659673500641200334ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016970381510347063ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16334458039825370539ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2917685545872773871ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10408281990768057194ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8245785926086411491ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15436581719970906592ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16133528578847638279ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12270217935411331006ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9748018273843090537ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17002756507768601197ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347985278977428277ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11032179177918510223ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10767514719821711210ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10518961354806956964ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11294496312307812617ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3871696389054050044ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9416987585668910460ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 972756179967818155ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13992243342302750950ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10579321914956910784ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13107757942739383946ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12644770298608321068ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17852609674317957150ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8811997958515691474ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15360391953604258309ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3527006771049935264ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15329534186714709816ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2750064550226623320ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11473739583048796621ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 80404683774838064ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11711595880853065378ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15752629416189351004ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842691237660171442ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13525629034973635555ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3140069029588021310ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8131436717744778800ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6940551313606826617ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8159238441676195120ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__multdiv_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8521188544480457772ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 380069563581603316ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8548435695279554070ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1715394025625314166ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1019942158053013672ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3242185113211384664ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17903380072726417216ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5392238751806300589ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18257160349779629780ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7991436140658778247ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380864556600824132ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9458683637580977797ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4609661585746839983ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9212328102597057355ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3205061225998403901ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6167285698468526259ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3382265519733640038ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14102052536801146900ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8273578501251785587ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1629688188765776406ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4923068229338408815ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15582079133901702305ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5223161559059584033ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11227281246799083001ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12088592867634062920ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4148184615876975395ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15738352521947839744ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3042696594506886295ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15048545965948314224ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1576767527749373319ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__req_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16914470903252481599ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__instr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 293121520722634177ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17820258174311386800ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__rs2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13529614667229395685ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r1, __VscopeHash, 15259070208732133782ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_r2, __VscopeHash, 15990544383052383248ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12973440897794230363ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2513252867297898941ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__v_wdata, __VscopeHash, 7532448050106077142ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18186758785425259126ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vop_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15030083073248265683ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1198354846446469312ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4295579426221211777ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14179584468816840619ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vl_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 155348387245050357ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 670248573818945807ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__idx_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13052403016955296360ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2303186755660057978ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__mem_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3932492259442687708ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_q, __VscopeHash, 5359738817277288278ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__acc_d, __VscopeHash, 4647145550377492344ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__i_vrf__DOT__vreg_q[__Vi0], __VscopeHash, 1096395236110025234ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11870545683883274437ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10326356946630297600ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4097521718367643231ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__addr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16464424753287605491ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6860314666493956370ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715874984660522083ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18439547363479577157ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18406600581623979291ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2503530709390495258ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13984652088597540727ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5512638758125255894ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16167918306493111409ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 221564284406330557ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11611567926896563220ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13921737469507618712ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8360292847054118934ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7270754737426456161ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16191995258779775357ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7474973382913719189ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15506011151456290576ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10574870417257802401ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5346959813164729461ull);
    VL_SCOPED_RAND_RESET_W(992, vlSelf->cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__rf_reg_q, __VscopeHash, 3973124380426701710ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__register_file_i__DOT__we_a_dec = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 1316724193548103798ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_op_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12020607659793388772ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__illegal_csr_insn_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13565621789909343341ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4982128821367356002ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14647992860828742660ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5308344579048090076ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5747997747337311712ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3768078908978494197ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mscratch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1546120854154331448ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6720162222624064183ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mepc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653372412380417319ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17424805472353387513ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7692369825138111792ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10979613419856828152ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtval_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2682643776523628169ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3329954468818450125ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mtvec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9575441818535560722ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mip = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 918983248454864875ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15986793998606823442ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dcsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11672573756750524451ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6387776724740709659ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__depc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11606891620331477816ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2250067088256531137ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13379648311641547509ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mstack_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7524681329701838988ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2246519135688817822ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5599703478792906941ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2748198671460008421ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16521086999599706290ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5887593808239575169ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2745863340467235435ull);
    }
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10247636948830845835ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3080895337878596950ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__csr_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16121639544375408677ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_0 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT____VdfgRegularize_h9e2cc0ce_0_17 = 0;
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7231075771243622136ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 117768388900313471ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 14950948449461349509ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11374053912341826857ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17574484812952561962ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10957030890263216739ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1995188580041450963ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17348356216753309503ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13250512062270040064ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4245384536023745411ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9890323163638101843ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16579209489210567152ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14936994356286411318ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2187944957271126484ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4812481657296455518ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17423191423959969708ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5548239937114892187ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9967367020597776374ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2775569362684779090ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16581917779872482268ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3310882629505623987ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8902192694941285961ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6640251434565457360ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17354206615785288586ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2987305386462974408ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16930559174133277070ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14637925710763597488ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15780350702311088752ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 89456309507325412ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4979064464765982551ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4047021743994830127ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5213468139704518821ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11156773956040908492ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1912086941700048209ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4265249577832267697ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12416918532536142234ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 668996520001935283ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3012640704276319942ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10924274406212409723ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9825184136547013171ull);
    vlSelf->cve2_top__DOT__u_cve2_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4760385981343096734ull);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vtypei = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vlmul = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vsew = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__decoder_i__DOT__vec_vtype_supported__0__vta = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__instr = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__op = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f3 = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__decode_vop__1__f6 = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__Vfuncout);
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__val = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__2__tmp);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__Vfuncout = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__3__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__Vfuncout = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__4__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__Vfuncout = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__5__idx = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__Vfuncout);
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__val = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__6__tmp);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__Vfuncout = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__7__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__Vfuncout = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__get_elem32__8__idx = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__Vfuncout);
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__vec);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__idx = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__val = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__set_elem32__9__tmp);
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__is_unit_stride__10__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vtypei = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vlmul = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vsew = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__vtype_supported__11__vta = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__avl = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__12__tmp = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__Vfuncout = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__avl = 0;
    vlSelf->__Vfunc_cve2_top__DOT__u_cve2_core__DOT__vec_unit_i__DOT__compute_vl__13__tmp = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__instr_executing_spec__2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__u_cve2_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req__2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cve2_top__DOT__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
