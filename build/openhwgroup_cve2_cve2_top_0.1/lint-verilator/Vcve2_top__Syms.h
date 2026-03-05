// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCVE2_TOP__SYMS_H_
#define VERILATED_VCVE2_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcve2_top.h"

// INCLUDE MODULE CLASSES
#include "Vcve2_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcve2_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcve2_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcve2_top___024root            TOP;

    // CONSTRUCTORS
    Vcve2_top__Syms(VerilatedContext* contextp, const char* namep, Vcve2_top* modelp);
    ~Vcve2_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
