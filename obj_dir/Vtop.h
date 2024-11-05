// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop___024unit;
class VerilatedVcd;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop___024unit*    	__PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(hz32768timer,0,0);
    VL_OUT8(m_axi_awlen,7,0);
    VL_OUT8(m_axi_awsize,2,0);
    VL_OUT8(m_axi_awburst,1,0);
    VL_OUT8(m_axi_awlock,0,0);
    VL_OUT8(m_axi_awcache,3,0);
    VL_OUT8(m_axi_awprot,2,0);
    VL_OUT8(m_axi_awvalid,0,0);
    VL_IN8(m_axi_awready,0,0);
    VL_OUT8(m_axi_wstrb,7,0);
    VL_OUT8(m_axi_wlast,0,0);
    VL_OUT8(m_axi_wvalid,0,0);
    VL_IN8(m_axi_wready,0,0);
    VL_IN8(m_axi_bresp,1,0);
    VL_IN8(m_axi_bvalid,0,0);
    VL_OUT8(m_axi_bready,0,0);
    VL_OUT8(m_axi_arlen,7,0);
    VL_OUT8(m_axi_arsize,2,0);
    VL_OUT8(m_axi_arburst,1,0);
    VL_OUT8(m_axi_arlock,0,0);
    VL_OUT8(m_axi_arcache,3,0);
    VL_OUT8(m_axi_arprot,2,0);
    VL_OUT8(m_axi_arvalid,0,0);
    VL_IN8(m_axi_arready,0,0);
    VL_IN8(m_axi_rresp,1,0);
    VL_IN8(m_axi_rlast,0,0);
    VL_IN8(m_axi_rvalid,0,0);
    VL_OUT8(m_axi_rready,0,0);
    VL_IN8(m_axi_acvalid,0,0);
    VL_OUT8(m_axi_acready,0,0);
    VL_IN8(m_axi_acsnoop,3,0);
    //char	__VpadToAlign33[1];
    VL_OUT16(m_axi_awid,12,0);
    VL_IN16(m_axi_bid,12,0);
    VL_OUT16(m_axi_arid,12,0);
    VL_IN16(m_axi_rid,12,0);
    //char	__VpadToAlign42[6];
    VL_IN64(entry,63,0);
    VL_IN64(stackptr,63,0);
    VL_IN64(satp,63,0);
    VL_OUT64(m_axi_awaddr,63,0);
    VL_OUT64(m_axi_wdata,63,0);
    VL_OUT64(m_axi_araddr,63,0);
    VL_IN64(m_axi_rdata,63,0);
    VL_IN64(m_axi_acaddr,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(top__DOT__receive_ready,0,0);
    VL_SIG8(top__DOT__receive_processing,0,0);
    VL_SIG8(top__DOT__temp5,4,0);
    VL_SIG8(top__DOT__rd,4,0);
    VL_SIG8(top__DOT__write_enable,0,0);
    //char	__VpadToAlign121[1];
    VL_SIG16(top__DOT__temp12,11,0);
    VL_SIG(top__DOT__instruction_high,31,0);
    VL_SIG(top__DOT__instruction_low,31,0);
    VL_SIG(top__DOT__temp20,19,0);
    VL_SIG(top__DOT__count,31,0);
    //char	__VpadToAlign140[4];
    VL_SIG64(top__DOT__pc,63,0);
    VL_SIG64(top__DOT__temp64,63,0);
    VL_SIG64(top__DOT__temp_result,63,0);
    VL_SIG64(top__DOT__result,63,0);
    VL_SIG64(top__DOT__registers[32],63,0);
    VL_SIG64(top__DOT__registers_temp[32],63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign693[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vtop__Syms* __restrict vlSymsp);
    void	_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
