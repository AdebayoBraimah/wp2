// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"    // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop___024unit::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop___024unit::~Vtop___024unit() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop___024unit::__Vdpiimwrap_do_pending_write_TOP____024unit(QData addr, QData val, IData size) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop___024unit::__Vdpiimwrap_do_pending_write_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    addr__Vcvt = addr;
    long long val__Vcvt;
    val__Vcvt = val;
    int size__Vcvt;
    size__Vcvt = size;
    do_pending_write(addr__Vcvt, val__Vcvt, size__Vcvt);
}

VL_INLINE_OPT void Vtop___024unit::__Vdpiimwrap_do_finish_write_TOP____024unit(QData addr, IData size) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop___024unit::__Vdpiimwrap_do_finish_write_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    addr__Vcvt = addr;
    int size__Vcvt;
    size__Vcvt = size;
    do_finish_write(addr__Vcvt, size__Vcvt);
}

VL_INLINE_OPT void Vtop___024unit::__Vdpiimwrap_do_ecall_TOP____024unit(QData a7, QData a0, QData a1, QData a2, QData a3, QData a4, QData a5, QData a6, QData& a0ret) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop___024unit::__Vdpiimwrap_do_ecall_TOP____024unit\n"); );
    // Body
    long long a7__Vcvt;
    a7__Vcvt = a7;
    long long a0__Vcvt;
    a0__Vcvt = a0;
    long long a1__Vcvt;
    a1__Vcvt = a1;
    long long a2__Vcvt;
    a2__Vcvt = a2;
    long long a3__Vcvt;
    a3__Vcvt = a3;
    long long a4__Vcvt;
    a4__Vcvt = a4;
    long long a5__Vcvt;
    a5__Vcvt = a5;
    long long a6__Vcvt;
    a6__Vcvt = a6;
    long long a0ret__Vcvt;
    do_ecall(a7__Vcvt, a0__Vcvt, a1__Vcvt, a2__Vcvt, a3__Vcvt, a4__Vcvt, a5__Vcvt, a6__Vcvt, &a0ret__Vcvt);
    a0ret = a0ret__Vcvt;
}

void Vtop___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vtop___024unit::_ctor_var_reset\n"); );
}

void Vtop___024unit::_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop___024unit::_configure_coverage\n"); );
}
