// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to insure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI Import at Sysbus.defs:11
    extern void do_ecall (long long a7, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long* a0ret);
    // DPI Import at Sysbus.defs:7
    extern void do_finish_write (long long addr, int size);
    // DPI Import at Sysbus.defs:3
    extern void do_pending_write (long long addr, long long val, int size);
    
#ifdef __cplusplus
}
#endif
