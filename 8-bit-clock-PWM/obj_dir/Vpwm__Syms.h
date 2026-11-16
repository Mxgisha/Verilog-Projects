// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPWM__SYMS_H_
#define VERILATED_VPWM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpwm.h"

// INCLUDE MODULE CLASSES
#include "Vpwm___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vpwm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpwm* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vpwm___024root                 TOP;

    // CONSTRUCTORS
    Vpwm__Syms(VerilatedContext* contextp, const char* namep, Vpwm* modelp);
    ~Vpwm__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
