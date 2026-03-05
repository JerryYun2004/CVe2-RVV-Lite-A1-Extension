// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_top.h for the primary calling header

#include "Vcve2_top__pch.h"

void Vcve2_top___024root___ctor_var_reset(Vcve2_top___024root* vlSelf);

Vcve2_top___024root::Vcve2_top___024root(Vcve2_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcve2_top___024root___ctor_var_reset(this);
}

void Vcve2_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcve2_top___024root::~Vcve2_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
