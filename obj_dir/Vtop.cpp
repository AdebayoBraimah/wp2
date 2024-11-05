// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, Vtop___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at top.sv:786
    VL_WRITEF("Initializing top, entry point = 0x%x\n",
	      64,vlTOPp->entry);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vtask_top__DOT__decode_instruction__0__rd,4,0);
    VL_SIG8(__Vtask_top__DOT__decode_instruction__0__write_enable,0,0);
    VL_SIG8(__Vtask_top__DOT__display_reg_name__1__reg_num,4,0);
    VL_SIG8(__Vtask_top__DOT__decode_instruction__2__rd,4,0);
    VL_SIG8(__Vtask_top__DOT__decode_instruction__2__write_enable,0,0);
    VL_SIG8(__Vtask_top__DOT__display_reg_name__3__reg_num,4,0);
    VL_SIG8(__Vdly__top__DOT__receive_ready,0,0);
    VL_SIG8(__Vdly__top__DOT__receive_processing,0,0);
    VL_SIG8(__Vdlyvset__top__DOT__registers__v0,0,0);
    VL_SIG8(__Vdly__m_axi_rready,0,0);
    VL_SIG8(__Vdlyvset__top__DOT__registers__v2,0,0);
    VL_SIG8(__Vdly__m_axi_arvalid,0,0);
    VL_SIG8(__Vdlyvset__top__DOT__registers__v32,0,0);
    //char	__VpadToAlign37[3];
    VL_SIG(__Vtask_top__DOT__decode_instruction__0__instruction,31,0);
    VL_SIG(__Vtask_top__DOT__decode_instruction__2__instruction,31,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__0__pc,63,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__0__result,63,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__2__pc,63,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__2__result,63,0);
    VL_SIG64(__Vdly__top__DOT__pc,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v32,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v33,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v34,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v35,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v36,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v37,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v38,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v39,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v40,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v41,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v42,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v43,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v44,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v45,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v46,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v47,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v48,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v49,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v50,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v51,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v52,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v53,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v54,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v55,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v56,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v57,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v58,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v59,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v60,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v61,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v62,63,0);
    VL_SIG64(__Vdlyvval__top__DOT__registers__v63,63,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__0__registers_temp[32],63,0);
    VL_SIG64(__Vtask_top__DOT__decode_instruction__2__registers_temp[32],63,0);
    // Body
    __Vdly__top__DOT__pc = vlTOPp->top__DOT__pc;
    __Vdly__top__DOT__receive_ready = vlTOPp->top__DOT__receive_ready;
    __Vdly__top__DOT__receive_processing = vlTOPp->top__DOT__receive_processing;
    __Vdly__m_axi_rready = vlTOPp->m_axi_rready;
    __Vdly__m_axi_arvalid = vlTOPp->m_axi_arvalid;
    __Vdlyvset__top__DOT__registers__v0 = 0U;
    __Vdlyvset__top__DOT__registers__v2 = 0U;
    __Vdlyvset__top__DOT__registers__v32 = 0U;
    // ALWAYS at top.sv:708
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__count = 0x20U;
	__Vdly__top__DOT__pc = vlTOPp->entry;
	__Vdly__top__DOT__receive_ready = 0U;
	__Vdly__top__DOT__receive_processing = 0U;
	__Vdlyvset__top__DOT__registers__v0 = 1U;
	__Vdly__m_axi_rready = 0U;
	__Vdlyvset__top__DOT__registers__v2 = 1U;
    } else {
	vlTOPp->top__DOT__registers_temp[0U] = vlTOPp->top__DOT__registers
	    [0U];
	vlTOPp->top__DOT__registers_temp[1U] = vlTOPp->top__DOT__registers
	    [1U];
	vlTOPp->top__DOT__registers_temp[2U] = vlTOPp->top__DOT__registers
	    [2U];
	vlTOPp->top__DOT__registers_temp[3U] = vlTOPp->top__DOT__registers
	    [3U];
	vlTOPp->top__DOT__registers_temp[4U] = vlTOPp->top__DOT__registers
	    [4U];
	vlTOPp->top__DOT__registers_temp[5U] = vlTOPp->top__DOT__registers
	    [5U];
	vlTOPp->top__DOT__registers_temp[6U] = vlTOPp->top__DOT__registers
	    [6U];
	vlTOPp->top__DOT__registers_temp[7U] = vlTOPp->top__DOT__registers
	    [7U];
	vlTOPp->top__DOT__registers_temp[8U] = vlTOPp->top__DOT__registers
	    [8U];
	vlTOPp->top__DOT__registers_temp[9U] = vlTOPp->top__DOT__registers
	    [9U];
	vlTOPp->top__DOT__registers_temp[0xaU] = vlTOPp->top__DOT__registers
	    [0xaU];
	vlTOPp->top__DOT__registers_temp[0xbU] = vlTOPp->top__DOT__registers
	    [0xbU];
	vlTOPp->top__DOT__registers_temp[0xcU] = vlTOPp->top__DOT__registers
	    [0xcU];
	vlTOPp->top__DOT__registers_temp[0xdU] = vlTOPp->top__DOT__registers
	    [0xdU];
	vlTOPp->top__DOT__registers_temp[0xeU] = vlTOPp->top__DOT__registers
	    [0xeU];
	vlTOPp->top__DOT__registers_temp[0xfU] = vlTOPp->top__DOT__registers
	    [0xfU];
	vlTOPp->top__DOT__registers_temp[0x10U] = vlTOPp->top__DOT__registers
	    [0x10U];
	vlTOPp->top__DOT__registers_temp[0x11U] = vlTOPp->top__DOT__registers
	    [0x11U];
	vlTOPp->top__DOT__registers_temp[0x12U] = vlTOPp->top__DOT__registers
	    [0x12U];
	vlTOPp->top__DOT__registers_temp[0x13U] = vlTOPp->top__DOT__registers
	    [0x13U];
	vlTOPp->top__DOT__registers_temp[0x14U] = vlTOPp->top__DOT__registers
	    [0x14U];
	vlTOPp->top__DOT__registers_temp[0x15U] = vlTOPp->top__DOT__registers
	    [0x15U];
	vlTOPp->top__DOT__registers_temp[0x16U] = vlTOPp->top__DOT__registers
	    [0x16U];
	vlTOPp->top__DOT__registers_temp[0x17U] = vlTOPp->top__DOT__registers
	    [0x17U];
	vlTOPp->top__DOT__registers_temp[0x18U] = vlTOPp->top__DOT__registers
	    [0x18U];
	vlTOPp->top__DOT__registers_temp[0x19U] = vlTOPp->top__DOT__registers
	    [0x19U];
	vlTOPp->top__DOT__registers_temp[0x1aU] = vlTOPp->top__DOT__registers
	    [0x1aU];
	vlTOPp->top__DOT__registers_temp[0x1bU] = vlTOPp->top__DOT__registers
	    [0x1bU];
	vlTOPp->top__DOT__registers_temp[0x1cU] = vlTOPp->top__DOT__registers
	    [0x1cU];
	vlTOPp->top__DOT__registers_temp[0x1dU] = vlTOPp->top__DOT__registers
	    [0x1dU];
	vlTOPp->top__DOT__registers_temp[0x1eU] = vlTOPp->top__DOT__registers
	    [0x1eU];
	vlTOPp->top__DOT__registers_temp[0x1fU] = vlTOPp->top__DOT__registers
	    [0x1fU];
	vlTOPp->top__DOT__count = 0x20U;
	if ((1U & ((((~ (IData)(vlTOPp->m_axi_arvalid)) 
		     & (~ (IData)(vlTOPp->m_axi_rvalid))) 
		    & (~ (IData)(vlTOPp->top__DOT__receive_ready))) 
		   & (~ (IData)(vlTOPp->top__DOT__receive_processing))))) {
	    vlTOPp->m_axi_araddr = vlTOPp->top__DOT__pc;
	    __Vdly__top__DOT__receive_processing = 1U;
	    vlTOPp->m_axi_arburst = 2U;
	    vlTOPp->m_axi_arlen = 7U;
	    __Vdly__m_axi_arvalid = 1U;
	}
	if (((IData)(vlTOPp->m_axi_arready) & (IData)(vlTOPp->m_axi_arvalid))) {
	    __Vdly__m_axi_arvalid = 0U;
	}
	if (VL_UNLIKELY(((IData)(vlTOPp->m_axi_rvalid) 
			 & (IData)(vlTOPp->m_axi_rready)))) {
	    // Function: decode_instruction at top.sv:747
	    // Function: decode_instruction at top.sv:752
	    vlTOPp->top__DOT__instruction_high = (IData)(
							 (vlTOPp->m_axi_rdata 
							  >> 0x20U));
	    vlTOPp->top__DOT__instruction_low = (IData)(vlTOPp->m_axi_rdata);
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0U] 
		= vlTOPp->top__DOT__registers_temp[0U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[1U] 
		= vlTOPp->top__DOT__registers_temp[1U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[2U] 
		= vlTOPp->top__DOT__registers_temp[2U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[3U] 
		= vlTOPp->top__DOT__registers_temp[3U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[4U] 
		= vlTOPp->top__DOT__registers_temp[4U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[5U] 
		= vlTOPp->top__DOT__registers_temp[5U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[6U] 
		= vlTOPp->top__DOT__registers_temp[6U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[7U] 
		= vlTOPp->top__DOT__registers_temp[7U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[8U] 
		= vlTOPp->top__DOT__registers_temp[8U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[9U] 
		= vlTOPp->top__DOT__registers_temp[9U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xaU] 
		= vlTOPp->top__DOT__registers_temp[0xaU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xbU] 
		= vlTOPp->top__DOT__registers_temp[0xbU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xcU] 
		= vlTOPp->top__DOT__registers_temp[0xcU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xdU] 
		= vlTOPp->top__DOT__registers_temp[0xdU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xeU] 
		= vlTOPp->top__DOT__registers_temp[0xeU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0xfU] 
		= vlTOPp->top__DOT__registers_temp[0xfU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x10U] 
		= vlTOPp->top__DOT__registers_temp[0x10U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x11U] 
		= vlTOPp->top__DOT__registers_temp[0x11U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x12U] 
		= vlTOPp->top__DOT__registers_temp[0x12U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x13U] 
		= vlTOPp->top__DOT__registers_temp[0x13U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x14U] 
		= vlTOPp->top__DOT__registers_temp[0x14U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x15U] 
		= vlTOPp->top__DOT__registers_temp[0x15U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x16U] 
		= vlTOPp->top__DOT__registers_temp[0x16U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x17U] 
		= vlTOPp->top__DOT__registers_temp[0x17U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x18U] 
		= vlTOPp->top__DOT__registers_temp[0x18U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x19U] 
		= vlTOPp->top__DOT__registers_temp[0x19U];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1aU] 
		= vlTOPp->top__DOT__registers_temp[0x1aU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1bU] 
		= vlTOPp->top__DOT__registers_temp[0x1bU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1cU] 
		= vlTOPp->top__DOT__registers_temp[0x1cU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1dU] 
		= vlTOPp->top__DOT__registers_temp[0x1dU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1eU] 
		= vlTOPp->top__DOT__registers_temp[0x1eU];
	    __Vtask_top__DOT__decode_instruction__0__registers_temp[0x1fU] 
		= vlTOPp->top__DOT__registers_temp[0x1fU];
	    __Vtask_top__DOT__decode_instruction__0__pc 
		= vlTOPp->top__DOT__pc;
	    __Vtask_top__DOT__decode_instruction__0__instruction 
		= vlTOPp->top__DOT__instruction_low;
	    VL_WRITEF("Display: %x\n",32,__Vtask_top__DOT__decode_instruction__0__instruction);
	    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
	    __Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0);
	    __Vtask_top__DOT__decode_instruction__0__rd = 0U;
	    if (VL_LIKELY((0U == __Vtask_top__DOT__decode_instruction__0__instruction))) {
		vl_finish("top.sv",144,"");
	    } else {
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		if ((0x40U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
		    if (VL_LIKELY((0x20U & __Vtask_top__DOT__decode_instruction__0__instruction))) {
			if (VL_UNLIKELY((0x10U & __Vtask_top__DOT__decode_instruction__0__instruction))) {
			    VL_WRITEF("Unknown instruction: 0x%x\n",
				      32,__Vtask_top__DOT__decode_instruction__0__instruction);
			    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
			} else {
			    if ((8U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				if (VL_LIKELY((4U & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
					    VL_WRITEF("%x: JAL r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__0__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__0__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__0__result 
						= (VL_ULL(4) 
						   + __Vtask_top__DOT__decode_instruction__0__pc);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__0__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__0__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				} else {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__0__instruction);
				    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
					    VL_WRITEF("%x: JALR r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__0__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__0__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__0__result 
						= (VL_ULL(4) 
						   + __Vtask_top__DOT__decode_instruction__0__pc);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__0__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__0__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: BEQ\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__0__pc);
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: BNE\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc);
						} else {
						    if (VL_UNLIKELY(
								    (4U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: BLT\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc);
						    } else {
							if (VL_UNLIKELY(
									(5U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: BGE\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc);
							} else {
							    if (VL_UNLIKELY(
									    (6U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: BLTU\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc);
							    } else {
								if (VL_UNLIKELY(
										(7U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: BGEU\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc);
								}
							    }
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    }
			}
		    } else {
			VL_WRITEF("Unknown instruction: 0x%x\n",
				  32,__Vtask_top__DOT__decode_instruction__0__instruction);
			__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
		    }
		} else {
		    if ((0x20U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
			if ((0x10U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
			    if ((8U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__0__instruction);
				    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if ((0U 
						 == 
						 (7U 
						  & (__Vtask_top__DOT__decode_instruction__0__instruction 
						     >> 0xcU)))) {
						if (VL_UNLIKELY(
								(0U 
								 == 
								 (0x7fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x19U))))) {
						    VL_WRITEF("%x: ADDW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__0__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__0__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__0__instruction 
							     >> 0xfU))] 
							 + 
							 __Vtask_top__DOT__decode_instruction__0__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__0__instruction 
							     >> 0x14U))]);
						    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
						    __Vtask_top__DOT__decode_instruction__0__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__0__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__0__instruction 
							    >> 7U));
						} else {
						    if (VL_UNLIKELY(
								    (0x20U 
								     == 
								     (0x7fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x19U))))) {
							VL_WRITEF("%x: SUBW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp_result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     - 
							     __Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0x14U))]);
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    } else {
							if (VL_UNLIKELY(
									(1U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: MULW r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp_result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 * 
								 __Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SLLW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__0__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__0__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__0__instruction 
							     >> 0xfU))] 
							 << 
							 (0x1fU 
							  & (IData)(
								    __Vtask_top__DOT__decode_instruction__0__registers_temp
								    [
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 0x14U))])));
						    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
						    __Vtask_top__DOT__decode_instruction__0__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__0__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__0__instruction 
							    >> 7U));
						} else {
						    if (VL_UNLIKELY(
								    (4U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: DIVW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							if (
							    (VL_ULL(0) 
							     != 
							     __Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0x14U))])) {
							    vlTOPp->top__DOT__temp_result 
								= 
								VL_DIVS_QQQ(64, 
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							} else {
							    __Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0xffffffffffffffff);
							}
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    } else {
							if (
							    (5U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xcU)))) {
							    if (VL_UNLIKELY(
									    (0U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRLW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp_result 
								    = 
								    (__Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xfU))] 
								     >> 
								     (0x1fU 
								      & (IData)(
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__result 
								    = 
								    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(0x20U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: SRAW r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								    vlTOPp->top__DOT__temp_result 
									= 
									VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										(0x1fU 
										& (IData)(
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])));
								    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								    __Vtask_top__DOT__decode_instruction__0__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 7U));
								} else {
								    if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
									VL_WRITEF("%x: DIVUW r%0#\n",
										64,
										__Vtask_top__DOT__decode_instruction__0__pc,
										5,
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
									if (
									    (VL_ULL(0) 
									     != 
									     __Vtask_top__DOT__decode_instruction__0__registers_temp
									     [
									     (0x1fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])) {
									    vlTOPp->top__DOT__temp_result 
										= 
										VL_DIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
									    __Vtask_top__DOT__decode_instruction__0__result 
										= 
										VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
									} else {
									    __Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0xffffffffffffffff);
									}
									__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
									__Vtask_top__DOT__decode_instruction__0__rd 
									    = 
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U));
								    }
								}
							    }
							} else {
							    if (VL_UNLIKELY(
									    (6U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: REMW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x14U))])) {
								    vlTOPp->top__DOT__temp_result 
									= 
									VL_MODDIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								} else {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									__Vtask_top__DOT__decode_instruction__0__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(7U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: REMUW r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								    if (
									(VL_ULL(0) 
									 != 
									 __Vtask_top__DOT__decode_instruction__0__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x14U))])) {
									vlTOPp->top__DOT__temp_result 
									    = 
									    VL_MODDIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
									__Vtask_top__DOT__decode_instruction__0__result 
									    = 
									    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								    } else {
									__Vtask_top__DOT__decode_instruction__0__result 
									    = 
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))];
								    }
								    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__0__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 7U));
								}
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
					    VL_WRITEF("%x: LUI r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__0__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__0__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__0__result 
						= (QData)((IData)(
								  (0xfffff000U 
								   & __Vtask_top__DOT__decode_instruction__0__instruction)));
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__0__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__0__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if ((0x4000U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: AND r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 & __Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: REMU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									VL_MODDIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									__Vtask_top__DOT__decode_instruction__0__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: OR r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 | __Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: REM r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									VL_MODDIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									__Vtask_top__DOT__decode_instruction__0__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    }
							}
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRL r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 >> 
								 (0x3fU 
								  & (IData)(
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRA r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__0__result 
								    = 
								    VL_SHIFTRS_QQI(64,64,6, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										(0x3fU 
										& (IData)(
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: DIVU r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								    if (
									(VL_ULL(0) 
									 != 
									 __Vtask_top__DOT__decode_instruction__0__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x14U))])) {
									__Vtask_top__DOT__decode_instruction__0__result 
									    = 
									    VL_DIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
								    } else {
									__Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0xffffffffffffffff);
								    }
								    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__0__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 7U));
								}
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: XOR r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 ^ 
								 __Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: DIV r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									VL_DIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0xffffffffffffffff);
								}
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    }
							}
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLTU r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								((__Vtask_top__DOT__decode_instruction__0__registers_temp
								  [
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 0xfU))] 
								  < 
								  __Vtask_top__DOT__decode_instruction__0__registers_temp
								  [
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 0x14U))])
								  ? VL_ULL(1)
								  : VL_ULL(0));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULHU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLT r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(VL_LTS_IQQ(1,64,64, 
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], 
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])
								  ? VL_ULL(1)
								  : VL_ULL(0));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULHSU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    }
							}
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLL r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 << 
								 (0x3fU 
								  & (IData)(
									    __Vtask_top__DOT__decode_instruction__0__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x14U))])));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULH r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__0__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: ADD r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 + 
								 __Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SUB r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__0__result 
								    = 
								    (__Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xfU))] 
								     - 
								     __Vtask_top__DOT__decode_instruction__0__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0x14U))]);
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: MUL r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								    __Vtask_top__DOT__decode_instruction__0__result 
									= 
									(__Vtask_top__DOT__decode_instruction__0__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0xfU))] 
									 * 
									 __Vtask_top__DOT__decode_instruction__0__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x14U))]);
								    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__0__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 7U));
								}
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    }
			} else {
			    if (VL_UNLIKELY((8U & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				VL_WRITEF("Unknown instruction: 0x%x\n",
					  32,__Vtask_top__DOT__decode_instruction__0__instruction);
				__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
			    } else {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__0__instruction);
				    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: SB\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__0__pc);
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SH\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc);
						} else {
						    if (VL_UNLIKELY(
								    (2U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: SW\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc);
						    } else {
							if (VL_UNLIKELY(
									(3U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: SD\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc);
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
			    if ((8U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__0__instruction);
				    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: ADDIW r%0#\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__0__pc,
							  5,
							  (0x1fU 
							   & (__Vtask_top__DOT__decode_instruction__0__instruction 
							      >> 7U)));
						vlTOPp->top__DOT__temp12 
						    = 
						    (0xfffU 
						     & (__Vtask_top__DOT__decode_instruction__0__instruction 
							>> 0x14U));
						__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
						vlTOPp->top__DOT__temp64 
						    = 
						    ((VL_ULL(0xfffffffffffff000) 
						      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
							 << 0xcU)) 
						     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
						vlTOPp->top__DOT__temp_result 
						    = 
						    (__Vtask_top__DOT__decode_instruction__0__registers_temp
						     [
						     (0x1fU 
						      & (__Vtask_top__DOT__decode_instruction__0__instruction 
							 >> 0xfU))] 
						     + vlTOPp->top__DOT__temp64);
						__Vtask_top__DOT__decode_instruction__0__result 
						    = 
						    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						__Vtask_top__DOT__decode_instruction__0__rd 
						    = 
						    (0x1fU 
						     & (__Vtask_top__DOT__decode_instruction__0__instruction 
							>> 7U));
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SLLIW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__0__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp5 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__0__instruction 
							    >> 0x14U));
						    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__0__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__0__instruction 
							     >> 0xfU))] 
							 << (IData)(vlTOPp->top__DOT__temp5));
						    __Vtask_top__DOT__decode_instruction__0__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__0__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__0__instruction 
							    >> 7U));
						} else {
						    if (
							(5U 
							 == 
							 (7U 
							  & (__Vtask_top__DOT__decode_instruction__0__instruction 
							     >> 0xcU)))) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRLIW r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp5 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 0x14U));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    vlTOPp->top__DOT__temp_result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 >> (IData)(vlTOPp->top__DOT__temp5));
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRAIW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp5 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 0x14U));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								vlTOPp->top__DOT__temp_result 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], (IData)(vlTOPp->top__DOT__temp5));
								__Vtask_top__DOT__decode_instruction__0__result 
								    = 
								    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__0__instruction)) {
					    VL_WRITEF("%x: AUIPC r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__0__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__0__instruction 
							  >> 7U)));
					    vlTOPp->top__DOT__temp20 
						= (0xfffffU 
						   & (__Vtask_top__DOT__decode_instruction__0__instruction 
						      >> 0xcU));
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
					    vlTOPp->top__DOT__temp64 
						= (QData)((IData)(
								  (vlTOPp->top__DOT__temp20 
								   << 0xcU)));
					    __Vtask_top__DOT__decode_instruction__0__result 
						= (__Vtask_top__DOT__decode_instruction__0__pc 
						   + vlTOPp->top__DOT__temp64);
					    __Vtask_top__DOT__decode_instruction__0__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__0__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if ((0x4000U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							VL_WRITEF("%x: ANDI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     & vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: ORI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     | vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    }
						} else {
						    if (VL_LIKELY(
								  (0x1000U 
								   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRLI r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp5 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 0x14U));
							    __Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__0__result 
								= 
								(__Vtask_top__DOT__decode_instruction__0__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xfU))] 
								 >> (IData)(vlTOPp->top__DOT__temp5));
							    __Vtask_top__DOT__decode_instruction__0__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__0__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRAI r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp5 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 0x14U));
								__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__0__result 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__0__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xfU))], (IData)(vlTOPp->top__DOT__temp5));
								__Vtask_top__DOT__decode_instruction__0__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__0__instruction 
									>> 7U));
							    }
							}
						    } else {
							VL_WRITEF("%x: XORI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     ^ vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__0__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							VL_WRITEF("%x: SLTIU r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    ((__Vtask_top__DOT__decode_instruction__0__registers_temp
							      [
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__0__instruction 
								  >> 0xfU))] 
							      < vlTOPp->top__DOT__temp64)
							      ? VL_ULL(1)
							      : VL_ULL(0));
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: SLTI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (VL_LTS_IQQ(1,64,64, 
									__Vtask_top__DOT__decode_instruction__0__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__0__instruction 
									    >> 0xfU))], vlTOPp->top__DOT__temp64)
							      ? VL_ULL(1)
							      : VL_ULL(0));
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__0__instruction)) {
							VL_WRITEF("%x: SLLI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp5 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     << (IData)(vlTOPp->top__DOT__temp5));
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: ADDI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__0__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__0__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__0__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xfU))] 
							     + vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__0__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__0__instruction 
								>> 7U));
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    }
			} else {
			    if (VL_UNLIKELY((8U & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				VL_WRITEF("Unknown instruction: 0x%x\n",
					  32,__Vtask_top__DOT__decode_instruction__0__instruction);
				__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
			    } else {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__0__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__0__instruction);
				    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__0__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__0__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: LB r%0#\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__0__pc,
							  5,
							  (0x1fU 
							   & (__Vtask_top__DOT__decode_instruction__0__instruction 
							      >> 7U)));
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__0__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: LH r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__0__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__0__instruction 
								  >> 7U)));
						} else {
						    if (VL_UNLIKELY(
								    (2U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__0__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: LW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__0__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__0__instruction 
								      >> 7U)));
						    } else {
							if (VL_UNLIKELY(
									(4U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__0__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: LBU r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__0__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__0__instruction 
									  >> 7U)));
							} else {
							    if (VL_UNLIKELY(
									    (5U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: LHU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__0__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__0__instruction 
									      >> 7U)));
							    } else {
								if (VL_UNLIKELY(
										(6U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: LWU r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__0__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								} else {
								    if (VL_UNLIKELY(
										(3U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 0xcU))))) {
									VL_WRITEF("%x: LD r%0#\n",
										64,
										__Vtask_top__DOT__decode_instruction__0__pc,
										5,
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__0__instruction 
										>> 7U)));
								    }
								}
							    }
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__0__instruction);
					    __Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__0__instruction);
					__Vtask_top__DOT__decode_instruction__0__write_enable = 0U;
				    }
				}
			    }
			}
		    }
		}
		vlTOPp->top__DOT__count = 0x20U;
		VL_WRITEF("r0 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r1 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 1U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [1U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [1U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r2 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 2U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [2U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [2U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r3 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 3U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [3U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [3U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r4 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 4U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [4U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [4U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r5 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 5U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [5U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [5U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r6 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 6U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [6U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [6U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r7 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 7U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [7U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [7U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r8 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 8U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [8U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [8U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r9 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 9U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [9U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [9U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r10 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xaU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xaU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xaU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r11 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xbU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xbU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xbU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r12 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xcU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xcU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xcU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r13 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xdU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xdU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xdU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r14 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xeU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xeU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xeU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r15 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0xfU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xfU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0xfU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r16 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x10U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x10U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x10U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r17 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x11U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x11U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x11U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r18 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x12U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x12U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x12U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r19 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x13U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x13U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x13U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r20 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x14U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x14U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x14U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r21 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x15U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x15U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x15U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r22 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x16U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x16U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x16U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r23 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x17U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x17U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x17U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r24 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x18U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x18U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x18U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r25 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x19U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x19U],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x19U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r26 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1aU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1aU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1aU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r27 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1bU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1bU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1bU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r28 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1cU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1cU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1cU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r29 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1dU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1dU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1dU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r30 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1eU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1eU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1eU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r31 (");
		__Vtask_top__DOT__display_reg_name__1__reg_num = 0x1fU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__1__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1fU],64,__Vtask_top__DOT__decode_instruction__0__registers_temp
			  [0x1fU]);
		VL_WRITEF("\n\n");
	    }
	    vlTOPp->top__DOT__result = __Vtask_top__DOT__decode_instruction__0__result;
	    vlTOPp->top__DOT__rd = __Vtask_top__DOT__decode_instruction__0__rd;
	    vlTOPp->top__DOT__write_enable = __Vtask_top__DOT__decode_instruction__0__write_enable;
	    if (((IData)(vlTOPp->top__DOT__write_enable) 
		 & (0U != (IData)(vlTOPp->top__DOT__rd)))) {
		vlTOPp->top__DOT__registers_temp[vlTOPp->top__DOT__rd] 
		    = vlTOPp->top__DOT__result;
	    }
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0U] 
		= vlTOPp->top__DOT__registers_temp[0U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[1U] 
		= vlTOPp->top__DOT__registers_temp[1U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[2U] 
		= vlTOPp->top__DOT__registers_temp[2U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[3U] 
		= vlTOPp->top__DOT__registers_temp[3U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[4U] 
		= vlTOPp->top__DOT__registers_temp[4U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[5U] 
		= vlTOPp->top__DOT__registers_temp[5U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[6U] 
		= vlTOPp->top__DOT__registers_temp[6U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[7U] 
		= vlTOPp->top__DOT__registers_temp[7U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[8U] 
		= vlTOPp->top__DOT__registers_temp[8U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[9U] 
		= vlTOPp->top__DOT__registers_temp[9U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xaU] 
		= vlTOPp->top__DOT__registers_temp[0xaU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xbU] 
		= vlTOPp->top__DOT__registers_temp[0xbU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xcU] 
		= vlTOPp->top__DOT__registers_temp[0xcU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xdU] 
		= vlTOPp->top__DOT__registers_temp[0xdU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xeU] 
		= vlTOPp->top__DOT__registers_temp[0xeU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0xfU] 
		= vlTOPp->top__DOT__registers_temp[0xfU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x10U] 
		= vlTOPp->top__DOT__registers_temp[0x10U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x11U] 
		= vlTOPp->top__DOT__registers_temp[0x11U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x12U] 
		= vlTOPp->top__DOT__registers_temp[0x12U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x13U] 
		= vlTOPp->top__DOT__registers_temp[0x13U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x14U] 
		= vlTOPp->top__DOT__registers_temp[0x14U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x15U] 
		= vlTOPp->top__DOT__registers_temp[0x15U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x16U] 
		= vlTOPp->top__DOT__registers_temp[0x16U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x17U] 
		= vlTOPp->top__DOT__registers_temp[0x17U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x18U] 
		= vlTOPp->top__DOT__registers_temp[0x18U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x19U] 
		= vlTOPp->top__DOT__registers_temp[0x19U];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1aU] 
		= vlTOPp->top__DOT__registers_temp[0x1aU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1bU] 
		= vlTOPp->top__DOT__registers_temp[0x1bU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1cU] 
		= vlTOPp->top__DOT__registers_temp[0x1cU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1dU] 
		= vlTOPp->top__DOT__registers_temp[0x1dU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1eU] 
		= vlTOPp->top__DOT__registers_temp[0x1eU];
	    __Vtask_top__DOT__decode_instruction__2__registers_temp[0x1fU] 
		= vlTOPp->top__DOT__registers_temp[0x1fU];
	    __Vtask_top__DOT__decode_instruction__2__pc 
		= (VL_ULL(4) + vlTOPp->top__DOT__pc);
	    __Vtask_top__DOT__decode_instruction__2__instruction 
		= vlTOPp->top__DOT__instruction_high;
	    VL_WRITEF("Display: %x\n",32,__Vtask_top__DOT__decode_instruction__2__instruction);
	    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
	    __Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0);
	    __Vtask_top__DOT__decode_instruction__2__rd = 0U;
	    if (VL_LIKELY((0U == __Vtask_top__DOT__decode_instruction__2__instruction))) {
		vl_finish("top.sv",144,"");
	    } else {
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		// Function: display_reg_name at top.sv:698
		if ((0x40U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
		    if (VL_LIKELY((0x20U & __Vtask_top__DOT__decode_instruction__2__instruction))) {
			if (VL_UNLIKELY((0x10U & __Vtask_top__DOT__decode_instruction__2__instruction))) {
			    VL_WRITEF("Unknown instruction: 0x%x\n",
				      32,__Vtask_top__DOT__decode_instruction__2__instruction);
			    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
			} else {
			    if ((8U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				if (VL_LIKELY((4U & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
					    VL_WRITEF("%x: JAL r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__2__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__2__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__2__result 
						= (VL_ULL(4) 
						   + __Vtask_top__DOT__decode_instruction__2__pc);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__2__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__2__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				} else {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__2__instruction);
				    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
					    VL_WRITEF("%x: JALR r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__2__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__2__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__2__result 
						= (VL_ULL(4) 
						   + __Vtask_top__DOT__decode_instruction__2__pc);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__2__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__2__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: BEQ\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__2__pc);
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: BNE\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc);
						} else {
						    if (VL_UNLIKELY(
								    (4U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: BLT\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc);
						    } else {
							if (VL_UNLIKELY(
									(5U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: BGE\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc);
							} else {
							    if (VL_UNLIKELY(
									    (6U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: BLTU\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc);
							    } else {
								if (VL_UNLIKELY(
										(7U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: BGEU\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc);
								}
							    }
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    }
			}
		    } else {
			VL_WRITEF("Unknown instruction: 0x%x\n",
				  32,__Vtask_top__DOT__decode_instruction__2__instruction);
			__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
		    }
		} else {
		    if ((0x20U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
			if ((0x10U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
			    if ((8U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__2__instruction);
				    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if ((0U 
						 == 
						 (7U 
						  & (__Vtask_top__DOT__decode_instruction__2__instruction 
						     >> 0xcU)))) {
						if (VL_UNLIKELY(
								(0U 
								 == 
								 (0x7fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x19U))))) {
						    VL_WRITEF("%x: ADDW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__2__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__2__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__2__instruction 
							     >> 0xfU))] 
							 + 
							 __Vtask_top__DOT__decode_instruction__2__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__2__instruction 
							     >> 0x14U))]);
						    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
						    __Vtask_top__DOT__decode_instruction__2__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__2__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__2__instruction 
							    >> 7U));
						} else {
						    if (VL_UNLIKELY(
								    (0x20U 
								     == 
								     (0x7fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x19U))))) {
							VL_WRITEF("%x: SUBW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp_result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     - 
							     __Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0x14U))]);
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    } else {
							if (VL_UNLIKELY(
									(1U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: MULW r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp_result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 * 
								 __Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							}
						    }
						}
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SLLW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__2__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__2__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__2__instruction 
							     >> 0xfU))] 
							 << 
							 (0x1fU 
							  & (IData)(
								    __Vtask_top__DOT__decode_instruction__2__registers_temp
								    [
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 0x14U))])));
						    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
						    __Vtask_top__DOT__decode_instruction__2__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__2__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__2__instruction 
							    >> 7U));
						} else {
						    if (VL_UNLIKELY(
								    (4U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: DIVW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							if (
							    (VL_ULL(0) 
							     != 
							     __Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0x14U))])) {
							    vlTOPp->top__DOT__temp_result 
								= 
								VL_DIVS_QQQ(64, 
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							} else {
							    __Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0xffffffffffffffff);
							}
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    } else {
							if (
							    (5U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xcU)))) {
							    if (VL_UNLIKELY(
									    (0U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRLW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp_result 
								    = 
								    (__Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xfU))] 
								     >> 
								     (0x1fU 
								      & (IData)(
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__result 
								    = 
								    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(0x20U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: SRAW r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								    vlTOPp->top__DOT__temp_result 
									= 
									VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										(0x1fU 
										& (IData)(
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])));
								    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								    __Vtask_top__DOT__decode_instruction__2__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 7U));
								} else {
								    if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
									VL_WRITEF("%x: DIVUW r%0#\n",
										64,
										__Vtask_top__DOT__decode_instruction__2__pc,
										5,
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
									if (
									    (VL_ULL(0) 
									     != 
									     __Vtask_top__DOT__decode_instruction__2__registers_temp
									     [
									     (0x1fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])) {
									    vlTOPp->top__DOT__temp_result 
										= 
										VL_DIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
									    __Vtask_top__DOT__decode_instruction__2__result 
										= 
										VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
									} else {
									    __Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0xffffffffffffffff);
									}
									__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
									__Vtask_top__DOT__decode_instruction__2__rd 
									    = 
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U));
								    }
								}
							    }
							} else {
							    if (VL_UNLIKELY(
									    (6U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: REMW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x14U))])) {
								    vlTOPp->top__DOT__temp_result 
									= 
									VL_MODDIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								} else {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									__Vtask_top__DOT__decode_instruction__2__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(7U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: REMUW r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								    if (
									(VL_ULL(0) 
									 != 
									 __Vtask_top__DOT__decode_instruction__2__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x14U))])) {
									vlTOPp->top__DOT__temp_result 
									    = 
									    VL_MODDIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
									__Vtask_top__DOT__decode_instruction__2__result 
									    = 
									    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								    } else {
									__Vtask_top__DOT__decode_instruction__2__result 
									    = 
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))];
								    }
								    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__2__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 7U));
								}
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
					    VL_WRITEF("%x: LUI r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__2__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__2__instruction 
							  >> 7U)));
					    __Vtask_top__DOT__decode_instruction__2__result 
						= (QData)((IData)(
								  (0xfffff000U 
								   & __Vtask_top__DOT__decode_instruction__2__instruction)));
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
					    __Vtask_top__DOT__decode_instruction__2__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__2__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if ((0x4000U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: AND r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 & __Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: REMU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									VL_MODDIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									__Vtask_top__DOT__decode_instruction__2__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: OR r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 | __Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: REM r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									VL_MODDIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									__Vtask_top__DOT__decode_instruction__2__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 0xfU))];
								}
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    }
							}
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRL r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 >> 
								 (0x3fU 
								  & (IData)(
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRA r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__2__result 
								    = 
								    VL_SHIFTRS_QQI(64,64,6, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										(0x3fU 
										& (IData)(
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: DIVU r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								    if (
									(VL_ULL(0) 
									 != 
									 __Vtask_top__DOT__decode_instruction__2__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x14U))])) {
									__Vtask_top__DOT__decode_instruction__2__result 
									    = 
									    VL_DIV_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
								    } else {
									__Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0xffffffffffffffff);
								    }
								    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__2__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 7U));
								}
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: XOR r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 ^ 
								 __Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: DIV r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								if (
								    (VL_ULL(0) 
								     != 
								     __Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x14U))])) {
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									VL_DIVS_QQQ(64, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))]);
								} else {
								    __Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0xffffffffffffffff);
								}
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    }
							}
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLTU r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								((__Vtask_top__DOT__decode_instruction__2__registers_temp
								  [
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 0xfU))] 
								  < 
								  __Vtask_top__DOT__decode_instruction__2__registers_temp
								  [
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 0x14U))])
								  ? VL_ULL(1)
								  : VL_ULL(0));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULHU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLT r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(VL_LTS_IQQ(1,64,64, 
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], 
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])
								  ? VL_ULL(1)
								  : VL_ULL(0));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULHSU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    }
							}
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SLL r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 << 
								 (0x3fU 
								  & (IData)(
									    __Vtask_top__DOT__decode_instruction__2__registers_temp
									    [
									    (0x1fU 
									     & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x14U))])));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (1U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: MULH r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__2__result = VL_ULL(0);
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    }
							}
						    } else {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: ADD r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 + 
								 __Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0x14U))]);
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SUB r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								__Vtask_top__DOT__decode_instruction__2__result 
								    = 
								    (__Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xfU))] 
								     - 
								     __Vtask_top__DOT__decode_instruction__2__registers_temp
								     [
								     (0x1fU 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0x14U))]);
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    } else {
								if (VL_UNLIKELY(
										(1U 
										== 
										(0x7fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								    VL_WRITEF("%x: MUL r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								    __Vtask_top__DOT__decode_instruction__2__result 
									= 
									(__Vtask_top__DOT__decode_instruction__2__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0xfU))] 
									 * 
									 __Vtask_top__DOT__decode_instruction__2__registers_temp
									 [
									 (0x1fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x14U))]);
								    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								    __Vtask_top__DOT__decode_instruction__2__rd 
									= 
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 7U));
								}
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    }
			} else {
			    if (VL_UNLIKELY((8U & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				VL_WRITEF("Unknown instruction: 0x%x\n",
					  32,__Vtask_top__DOT__decode_instruction__2__instruction);
				__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
			    } else {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__2__instruction);
				    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: SB\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__2__pc);
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SH\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc);
						} else {
						    if (VL_UNLIKELY(
								    (2U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: SW\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc);
						    } else {
							if (VL_UNLIKELY(
									(3U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: SD\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc);
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
			    if ((8U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__2__instruction);
				    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: ADDIW r%0#\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__2__pc,
							  5,
							  (0x1fU 
							   & (__Vtask_top__DOT__decode_instruction__2__instruction 
							      >> 7U)));
						vlTOPp->top__DOT__temp12 
						    = 
						    (0xfffU 
						     & (__Vtask_top__DOT__decode_instruction__2__instruction 
							>> 0x14U));
						__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
						vlTOPp->top__DOT__temp64 
						    = 
						    ((VL_ULL(0xfffffffffffff000) 
						      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
							 << 0xcU)) 
						     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
						vlTOPp->top__DOT__temp_result 
						    = 
						    (__Vtask_top__DOT__decode_instruction__2__registers_temp
						     [
						     (0x1fU 
						      & (__Vtask_top__DOT__decode_instruction__2__instruction 
							 >> 0xfU))] 
						     + vlTOPp->top__DOT__temp64);
						__Vtask_top__DOT__decode_instruction__2__result 
						    = 
						    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						__Vtask_top__DOT__decode_instruction__2__rd 
						    = 
						    (0x1fU 
						     & (__Vtask_top__DOT__decode_instruction__2__instruction 
							>> 7U));
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: SLLIW r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__2__instruction 
								  >> 7U)));
						    vlTOPp->top__DOT__temp5 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__2__instruction 
							    >> 0x14U));
						    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
						    vlTOPp->top__DOT__temp_result 
							= 
							(__Vtask_top__DOT__decode_instruction__2__registers_temp
							 [
							 (0x1fU 
							  & (__Vtask_top__DOT__decode_instruction__2__instruction 
							     >> 0xfU))] 
							 << (IData)(vlTOPp->top__DOT__temp5));
						    __Vtask_top__DOT__decode_instruction__2__result 
							= 
							VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
						    __Vtask_top__DOT__decode_instruction__2__rd 
							= 
							(0x1fU 
							 & (__Vtask_top__DOT__decode_instruction__2__instruction 
							    >> 7U));
						} else {
						    if (
							(5U 
							 == 
							 (7U 
							  & (__Vtask_top__DOT__decode_instruction__2__instruction 
							     >> 0xcU)))) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRLIW r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp5 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 0x14U));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    vlTOPp->top__DOT__temp_result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 >> (IData)(vlTOPp->top__DOT__temp5));
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRAIW r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp5 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 0x14U));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								vlTOPp->top__DOT__temp_result 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], (IData)(vlTOPp->top__DOT__temp5));
								__Vtask_top__DOT__decode_instruction__2__result 
								    = 
								    VL_EXTENDS_QI(64,32, (IData)(vlTOPp->top__DOT__temp_result));
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    }
							}
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    } else {
				if ((4U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if ((1U & __Vtask_top__DOT__decode_instruction__2__instruction)) {
					    VL_WRITEF("%x: AUIPC r%0#\n",
						      64,
						      __Vtask_top__DOT__decode_instruction__2__pc,
						      5,
						      (0x1fU 
						       & (__Vtask_top__DOT__decode_instruction__2__instruction 
							  >> 7U)));
					    vlTOPp->top__DOT__temp20 
						= (0xfffffU 
						   & (__Vtask_top__DOT__decode_instruction__2__instruction 
						      >> 0xcU));
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
					    vlTOPp->top__DOT__temp64 
						= (QData)((IData)(
								  (vlTOPp->top__DOT__temp20 
								   << 0xcU)));
					    __Vtask_top__DOT__decode_instruction__2__result 
						= (__Vtask_top__DOT__decode_instruction__2__pc 
						   + vlTOPp->top__DOT__temp64);
					    __Vtask_top__DOT__decode_instruction__2__rd 
						= (0x1fU 
						   & (__Vtask_top__DOT__decode_instruction__2__instruction 
						      >> 7U));
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if ((0x4000U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							VL_WRITEF("%x: ANDI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     & vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: ORI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     | vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    }
						} else {
						    if (VL_LIKELY(
								  (0x1000U 
								   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
							if (VL_UNLIKELY(
									(0U 
									 == 
									 (0x7fU 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0x19U))))) {
							    VL_WRITEF("%x: SRLI r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							    vlTOPp->top__DOT__temp5 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 0x14U));
							    __Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							    __Vtask_top__DOT__decode_instruction__2__result 
								= 
								(__Vtask_top__DOT__decode_instruction__2__registers_temp
								 [
								 (0x1fU 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xfU))] 
								 >> (IData)(vlTOPp->top__DOT__temp5));
							    __Vtask_top__DOT__decode_instruction__2__rd 
								= 
								(0x1fU 
								 & (__Vtask_top__DOT__decode_instruction__2__instruction 
								    >> 7U));
							} else {
							    if (VL_UNLIKELY(
									    (0x20U 
									     == 
									     (0x7fU 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x19U))))) {
								VL_WRITEF("%x: SRAI r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
								vlTOPp->top__DOT__temp5 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 0x14U));
								__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
								__Vtask_top__DOT__decode_instruction__2__result 
								    = 
								    VL_SHIFTRS_QQI(64,64,5, 
										__Vtask_top__DOT__decode_instruction__2__registers_temp
										[
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xfU))], (IData)(vlTOPp->top__DOT__temp5));
								__Vtask_top__DOT__decode_instruction__2__rd 
								    = 
								    (0x1fU 
								     & (__Vtask_top__DOT__decode_instruction__2__instruction 
									>> 7U));
							    }
							}
						    } else {
							VL_WRITEF("%x: XORI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     ^ vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    }
						}
					    } else {
						if (
						    (0x2000U 
						     & __Vtask_top__DOT__decode_instruction__2__instruction)) {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							VL_WRITEF("%x: SLTIU r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    ((__Vtask_top__DOT__decode_instruction__2__registers_temp
							      [
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__2__instruction 
								  >> 0xfU))] 
							      < vlTOPp->top__DOT__temp64)
							      ? VL_ULL(1)
							      : VL_ULL(0));
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: SLTI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (VL_LTS_IQQ(1,64,64, 
									__Vtask_top__DOT__decode_instruction__2__registers_temp
									[
									(0x1fU 
									 & (__Vtask_top__DOT__decode_instruction__2__instruction 
									    >> 0xfU))], vlTOPp->top__DOT__temp64)
							      ? VL_ULL(1)
							      : VL_ULL(0));
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    }
						} else {
						    if (
							(0x1000U 
							 & __Vtask_top__DOT__decode_instruction__2__instruction)) {
							VL_WRITEF("%x: SLLI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp5 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     << (IData)(vlTOPp->top__DOT__temp5));
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    } else {
							VL_WRITEF("%x: ADDI r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
							vlTOPp->top__DOT__temp12 
							    = 
							    (0xfffU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 0x14U));
							__Vtask_top__DOT__decode_instruction__2__write_enable = 1U;
							vlTOPp->top__DOT__temp64 
							    = 
							    ((VL_ULL(0xfffffffffffff000) 
							      & (VL_NEGATE_Q((QData)((IData)(
										(1U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0x1fU))))) 
								 << 0xcU)) 
							     | (QData)((IData)(vlTOPp->top__DOT__temp12)));
							__Vtask_top__DOT__decode_instruction__2__result 
							    = 
							    (__Vtask_top__DOT__decode_instruction__2__registers_temp
							     [
							     (0x1fU 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xfU))] 
							     + vlTOPp->top__DOT__temp64);
							__Vtask_top__DOT__decode_instruction__2__rd 
							    = 
							    (0x1fU 
							     & (__Vtask_top__DOT__decode_instruction__2__instruction 
								>> 7U));
						    }
						}
					    }
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    }
			} else {
			    if (VL_UNLIKELY((8U & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				VL_WRITEF("Unknown instruction: 0x%x\n",
					  32,__Vtask_top__DOT__decode_instruction__2__instruction);
				__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
			    } else {
				if (VL_UNLIKELY((4U 
						 & __Vtask_top__DOT__decode_instruction__2__instruction))) {
				    VL_WRITEF("Unknown instruction: 0x%x\n",
					      32,__Vtask_top__DOT__decode_instruction__2__instruction);
				    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				} else {
				    if (VL_LIKELY((2U 
						   & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					if (VL_LIKELY(
						      (1U 
						       & __Vtask_top__DOT__decode_instruction__2__instruction))) {
					    if (VL_UNLIKELY(
							    (0U 
							     == 
							     (7U 
							      & (__Vtask_top__DOT__decode_instruction__2__instruction 
								 >> 0xcU))))) {
						VL_WRITEF("%x: LB r%0#\n",
							  64,
							  __Vtask_top__DOT__decode_instruction__2__pc,
							  5,
							  (0x1fU 
							   & (__Vtask_top__DOT__decode_instruction__2__instruction 
							      >> 7U)));
					    } else {
						if (VL_UNLIKELY(
								(1U 
								 == 
								 (7U 
								  & (__Vtask_top__DOT__decode_instruction__2__instruction 
								     >> 0xcU))))) {
						    VL_WRITEF("%x: LH r%0#\n",
							      64,
							      __Vtask_top__DOT__decode_instruction__2__pc,
							      5,
							      (0x1fU 
							       & (__Vtask_top__DOT__decode_instruction__2__instruction 
								  >> 7U)));
						} else {
						    if (VL_UNLIKELY(
								    (2U 
								     == 
								     (7U 
								      & (__Vtask_top__DOT__decode_instruction__2__instruction 
									 >> 0xcU))))) {
							VL_WRITEF("%x: LW r%0#\n",
								  64,
								  __Vtask_top__DOT__decode_instruction__2__pc,
								  5,
								  (0x1fU 
								   & (__Vtask_top__DOT__decode_instruction__2__instruction 
								      >> 7U)));
						    } else {
							if (VL_UNLIKELY(
									(4U 
									 == 
									 (7U 
									  & (__Vtask_top__DOT__decode_instruction__2__instruction 
									     >> 0xcU))))) {
							    VL_WRITEF("%x: LBU r%0#\n",
								      64,
								      __Vtask_top__DOT__decode_instruction__2__pc,
								      5,
								      (0x1fU 
								       & (__Vtask_top__DOT__decode_instruction__2__instruction 
									  >> 7U)));
							} else {
							    if (VL_UNLIKELY(
									    (5U 
									     == 
									     (7U 
									      & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								VL_WRITEF("%x: LHU r%0#\n",
									  64,
									  __Vtask_top__DOT__decode_instruction__2__pc,
									  5,
									  (0x1fU 
									   & (__Vtask_top__DOT__decode_instruction__2__instruction 
									      >> 7U)));
							    } else {
								if (VL_UNLIKELY(
										(6U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
								    VL_WRITEF("%x: LWU r%0#\n",
									      64,
									      __Vtask_top__DOT__decode_instruction__2__pc,
									      5,
									      (0x1fU 
									       & (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								} else {
								    if (VL_UNLIKELY(
										(3U 
										== 
										(7U 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 0xcU))))) {
									VL_WRITEF("%x: LD r%0#\n",
										64,
										__Vtask_top__DOT__decode_instruction__2__pc,
										5,
										(0x1fU 
										& (__Vtask_top__DOT__decode_instruction__2__instruction 
										>> 7U)));
								    }
								}
							    }
							}
						    }
						}
					    }
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					} else {
					    VL_WRITEF("Unknown instruction: 0x%x\n",
						      32,
						      __Vtask_top__DOT__decode_instruction__2__instruction);
					    __Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
					}
				    } else {
					VL_WRITEF("Unknown instruction: 0x%x\n",
						  32,
						  __Vtask_top__DOT__decode_instruction__2__instruction);
					__Vtask_top__DOT__decode_instruction__2__write_enable = 0U;
				    }
				}
			    }
			}
		    }
		}
		vlTOPp->top__DOT__count = 0x20U;
		VL_WRITEF("r0 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r1 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 1U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [1U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [1U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r2 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 2U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [2U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [2U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r3 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 3U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [3U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [3U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r4 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 4U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [4U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [4U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r5 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 5U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [5U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [5U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r6 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 6U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [6U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [6U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r7 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 7U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t2");
			} else {
			    VL_WRITEF("t1");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t0");
			} else {
			    VL_WRITEF("tp");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("gp");
			} else {
			    VL_WRITEF("sp");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("ra");
			} else {
			    VL_WRITEF("zero");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [7U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [7U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r8 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 8U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [8U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [8U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r9 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 9U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [9U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [9U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r10 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xaU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xaU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xaU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r11 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xbU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xbU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xbU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r12 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xcU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xcU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xcU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r13 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xdU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xdU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xdU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r14 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xeU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xeU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xeU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r15 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0xfU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a5");
			} else {
			    VL_WRITEF("a4");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a3");
			} else {
			    VL_WRITEF("a2");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a1");
			} else {
			    VL_WRITEF("a0");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s1");
			} else {
			    VL_WRITEF("s0");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xfU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0xfU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r16 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x10U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x10U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x10U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r17 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x11U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x11U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x11U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r18 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x12U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x12U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x12U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r19 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x13U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x13U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x13U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r20 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x14U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x14U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x14U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r21 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x15U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x15U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x15U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r22 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x16U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x16U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x16U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r23 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x17U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s7");
			} else {
			    VL_WRITEF("s6");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s5");
			} else {
			    VL_WRITEF("s4");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s3");
			} else {
			    VL_WRITEF("s2");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("a7");
			} else {
			    VL_WRITEF("a6");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x17U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x17U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r24 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x18U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x18U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x18U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r25 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x19U;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x19U],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x19U]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r26 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1aU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1aU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1aU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r27 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1bU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1bU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1bU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r28 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1cU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1cU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1cU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r29 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1dU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1dU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1dU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r30 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1eU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1eU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1eU]);
		VL_WRITEF("\n\n");
		VL_WRITEF("r31 (");
		__Vtask_top__DOT__display_reg_name__3__reg_num = 0x1fU;
		if ((4U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t6");
			} else {
			    VL_WRITEF("t5");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("t4");
			} else {
			    VL_WRITEF("t3");
			}
		    }
		} else {
		    if ((2U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s11");
			} else {
			    VL_WRITEF("s10");
			}
		    } else {
			if ((1U & (IData)(__Vtask_top__DOT__display_reg_name__3__reg_num))) {
			    VL_WRITEF("s9");
			} else {
			    VL_WRITEF("s8");
			}
		    }
		}
		VL_WRITEF(") : %x (decimal: %0#)",64,
			  __Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1fU],64,__Vtask_top__DOT__decode_instruction__2__registers_temp
			  [0x1fU]);
		VL_WRITEF("\n\n");
	    }
	    vlTOPp->top__DOT__result = __Vtask_top__DOT__decode_instruction__2__result;
	    vlTOPp->top__DOT__rd = __Vtask_top__DOT__decode_instruction__2__rd;
	    vlTOPp->top__DOT__write_enable = __Vtask_top__DOT__decode_instruction__2__write_enable;
	    if (((IData)(vlTOPp->top__DOT__write_enable) 
		 & (0U != (IData)(vlTOPp->top__DOT__rd)))) {
		vlTOPp->top__DOT__registers_temp[vlTOPp->top__DOT__rd] 
		    = vlTOPp->top__DOT__result;
	    }
	    __Vdlyvval__top__DOT__registers__v32 = 
		vlTOPp->top__DOT__registers_temp[0U];
	    __Vdlyvset__top__DOT__registers__v32 = 1U;
	    __Vdlyvval__top__DOT__registers__v33 = 
		vlTOPp->top__DOT__registers_temp[1U];
	    __Vdlyvval__top__DOT__registers__v34 = 
		vlTOPp->top__DOT__registers_temp[2U];
	    __Vdlyvval__top__DOT__registers__v35 = 
		vlTOPp->top__DOT__registers_temp[3U];
	    __Vdlyvval__top__DOT__registers__v36 = 
		vlTOPp->top__DOT__registers_temp[4U];
	    __Vdlyvval__top__DOT__registers__v37 = 
		vlTOPp->top__DOT__registers_temp[5U];
	    __Vdlyvval__top__DOT__registers__v38 = 
		vlTOPp->top__DOT__registers_temp[6U];
	    __Vdlyvval__top__DOT__registers__v39 = 
		vlTOPp->top__DOT__registers_temp[7U];
	    __Vdlyvval__top__DOT__registers__v40 = 
		vlTOPp->top__DOT__registers_temp[8U];
	    __Vdlyvval__top__DOT__registers__v41 = 
		vlTOPp->top__DOT__registers_temp[9U];
	    __Vdlyvval__top__DOT__registers__v42 = 
		vlTOPp->top__DOT__registers_temp[0xaU];
	    __Vdlyvval__top__DOT__registers__v43 = 
		vlTOPp->top__DOT__registers_temp[0xbU];
	    __Vdlyvval__top__DOT__registers__v44 = 
		vlTOPp->top__DOT__registers_temp[0xcU];
	    __Vdlyvval__top__DOT__registers__v45 = 
		vlTOPp->top__DOT__registers_temp[0xdU];
	    __Vdlyvval__top__DOT__registers__v46 = 
		vlTOPp->top__DOT__registers_temp[0xeU];
	    __Vdlyvval__top__DOT__registers__v47 = 
		vlTOPp->top__DOT__registers_temp[0xfU];
	    __Vdlyvval__top__DOT__registers__v48 = 
		vlTOPp->top__DOT__registers_temp[0x10U];
	    __Vdlyvval__top__DOT__registers__v49 = 
		vlTOPp->top__DOT__registers_temp[0x11U];
	    __Vdlyvval__top__DOT__registers__v50 = 
		vlTOPp->top__DOT__registers_temp[0x12U];
	    __Vdlyvval__top__DOT__registers__v51 = 
		vlTOPp->top__DOT__registers_temp[0x13U];
	    __Vdlyvval__top__DOT__registers__v52 = 
		vlTOPp->top__DOT__registers_temp[0x14U];
	    __Vdlyvval__top__DOT__registers__v53 = 
		vlTOPp->top__DOT__registers_temp[0x15U];
	    __Vdlyvval__top__DOT__registers__v54 = 
		vlTOPp->top__DOT__registers_temp[0x16U];
	    __Vdlyvval__top__DOT__registers__v55 = 
		vlTOPp->top__DOT__registers_temp[0x17U];
	    __Vdlyvval__top__DOT__registers__v56 = 
		vlTOPp->top__DOT__registers_temp[0x18U];
	    __Vdlyvval__top__DOT__registers__v57 = 
		vlTOPp->top__DOT__registers_temp[0x19U];
	    __Vdlyvval__top__DOT__registers__v58 = 
		vlTOPp->top__DOT__registers_temp[0x1aU];
	    __Vdlyvval__top__DOT__registers__v59 = 
		vlTOPp->top__DOT__registers_temp[0x1bU];
	    __Vdlyvval__top__DOT__registers__v60 = 
		vlTOPp->top__DOT__registers_temp[0x1cU];
	    __Vdlyvval__top__DOT__registers__v61 = 
		vlTOPp->top__DOT__registers_temp[0x1dU];
	    __Vdlyvval__top__DOT__registers__v62 = 
		vlTOPp->top__DOT__registers_temp[0x1eU];
	    __Vdlyvval__top__DOT__registers__v63 = 
		vlTOPp->top__DOT__registers_temp[0x1fU];
	    vlTOPp->top__DOT__count = 0x20U;
	    if (vlTOPp->m_axi_rlast) {
		__Vdly__top__DOT__pc = (VL_ULL(8) + vlTOPp->top__DOT__pc);
		__Vdly__top__DOT__receive_ready = 0U;
		__Vdly__top__DOT__receive_processing = 0U;
		__Vdly__m_axi_rready = 0U;
	    } else {
		__Vdly__top__DOT__pc = (VL_ULL(8) + vlTOPp->top__DOT__pc);
		__Vdly__top__DOT__receive_ready = 1U;
		__Vdly__top__DOT__receive_processing = 0U;
		__Vdly__m_axi_rready = 1U;
	    }
	} else {
	    __Vdly__m_axi_rready = 1U;
	}
    }
    vlTOPp->m_axi_arvalid = __Vdly__m_axi_arvalid;
    vlTOPp->top__DOT__receive_ready = __Vdly__top__DOT__receive_ready;
    vlTOPp->top__DOT__receive_processing = __Vdly__top__DOT__receive_processing;
    vlTOPp->top__DOT__pc = __Vdly__top__DOT__pc;
    vlTOPp->m_axi_rready = __Vdly__m_axi_rready;
    // ALWAYSPOST at top.sv:717
    if (__Vdlyvset__top__DOT__registers__v0) {
	vlTOPp->top__DOT__registers[0U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[1U] = VL_ULL(0);
    }
    if (__Vdlyvset__top__DOT__registers__v2) {
	vlTOPp->top__DOT__registers[2U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[3U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[4U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[5U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[6U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[7U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[8U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[9U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xaU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xbU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xcU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xdU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xeU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0xfU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x10U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x11U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x12U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x13U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x14U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x15U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x16U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x17U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x18U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x19U] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1aU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1bU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1cU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1dU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1eU] = VL_ULL(0);
	vlTOPp->top__DOT__registers[0x1fU] = VL_ULL(0);
    }
    if (__Vdlyvset__top__DOT__registers__v32) {
	vlTOPp->top__DOT__registers[0U] = __Vdlyvval__top__DOT__registers__v32;
	vlTOPp->top__DOT__registers[1U] = __Vdlyvval__top__DOT__registers__v33;
	vlTOPp->top__DOT__registers[2U] = __Vdlyvval__top__DOT__registers__v34;
	vlTOPp->top__DOT__registers[3U] = __Vdlyvval__top__DOT__registers__v35;
	vlTOPp->top__DOT__registers[4U] = __Vdlyvval__top__DOT__registers__v36;
	vlTOPp->top__DOT__registers[5U] = __Vdlyvval__top__DOT__registers__v37;
	vlTOPp->top__DOT__registers[6U] = __Vdlyvval__top__DOT__registers__v38;
	vlTOPp->top__DOT__registers[7U] = __Vdlyvval__top__DOT__registers__v39;
	vlTOPp->top__DOT__registers[8U] = __Vdlyvval__top__DOT__registers__v40;
	vlTOPp->top__DOT__registers[9U] = __Vdlyvval__top__DOT__registers__v41;
	vlTOPp->top__DOT__registers[0xaU] = __Vdlyvval__top__DOT__registers__v42;
	vlTOPp->top__DOT__registers[0xbU] = __Vdlyvval__top__DOT__registers__v43;
	vlTOPp->top__DOT__registers[0xcU] = __Vdlyvval__top__DOT__registers__v44;
	vlTOPp->top__DOT__registers[0xdU] = __Vdlyvval__top__DOT__registers__v45;
	vlTOPp->top__DOT__registers[0xeU] = __Vdlyvval__top__DOT__registers__v46;
	vlTOPp->top__DOT__registers[0xfU] = __Vdlyvval__top__DOT__registers__v47;
	vlTOPp->top__DOT__registers[0x10U] = __Vdlyvval__top__DOT__registers__v48;
	vlTOPp->top__DOT__registers[0x11U] = __Vdlyvval__top__DOT__registers__v49;
	vlTOPp->top__DOT__registers[0x12U] = __Vdlyvval__top__DOT__registers__v50;
	vlTOPp->top__DOT__registers[0x13U] = __Vdlyvval__top__DOT__registers__v51;
	vlTOPp->top__DOT__registers[0x14U] = __Vdlyvval__top__DOT__registers__v52;
	vlTOPp->top__DOT__registers[0x15U] = __Vdlyvval__top__DOT__registers__v53;
	vlTOPp->top__DOT__registers[0x16U] = __Vdlyvval__top__DOT__registers__v54;
	vlTOPp->top__DOT__registers[0x17U] = __Vdlyvval__top__DOT__registers__v55;
	vlTOPp->top__DOT__registers[0x18U] = __Vdlyvval__top__DOT__registers__v56;
	vlTOPp->top__DOT__registers[0x19U] = __Vdlyvval__top__DOT__registers__v57;
	vlTOPp->top__DOT__registers[0x1aU] = __Vdlyvval__top__DOT__registers__v58;
	vlTOPp->top__DOT__registers[0x1bU] = __Vdlyvval__top__DOT__registers__v59;
	vlTOPp->top__DOT__registers[0x1cU] = __Vdlyvval__top__DOT__registers__v60;
	vlTOPp->top__DOT__registers[0x1dU] = __Vdlyvval__top__DOT__registers__v61;
	vlTOPp->top__DOT__registers[0x1eU] = __Vdlyvval__top__DOT__registers__v62;
	vlTOPp->top__DOT__registers[0x1fU] = __Vdlyvval__top__DOT__registers__v63;
    }
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    hz32768timer = VL_RAND_RESET_I(1);
    entry = VL_RAND_RESET_Q(64);
    stackptr = VL_RAND_RESET_Q(64);
    satp = VL_RAND_RESET_Q(64);
    m_axi_awid = VL_RAND_RESET_I(13);
    m_axi_awaddr = VL_RAND_RESET_Q(64);
    m_axi_awlen = VL_RAND_RESET_I(8);
    m_axi_awsize = VL_RAND_RESET_I(3);
    m_axi_awburst = VL_RAND_RESET_I(2);
    m_axi_awlock = VL_RAND_RESET_I(1);
    m_axi_awcache = VL_RAND_RESET_I(4);
    m_axi_awprot = VL_RAND_RESET_I(3);
    m_axi_awvalid = VL_RAND_RESET_I(1);
    m_axi_awready = VL_RAND_RESET_I(1);
    m_axi_wdata = VL_RAND_RESET_Q(64);
    m_axi_wstrb = VL_RAND_RESET_I(8);
    m_axi_wlast = VL_RAND_RESET_I(1);
    m_axi_wvalid = VL_RAND_RESET_I(1);
    m_axi_wready = VL_RAND_RESET_I(1);
    m_axi_bid = VL_RAND_RESET_I(13);
    m_axi_bresp = VL_RAND_RESET_I(2);
    m_axi_bvalid = VL_RAND_RESET_I(1);
    m_axi_bready = VL_RAND_RESET_I(1);
    m_axi_arid = VL_RAND_RESET_I(13);
    m_axi_araddr = VL_RAND_RESET_Q(64);
    m_axi_arlen = VL_RAND_RESET_I(8);
    m_axi_arsize = VL_RAND_RESET_I(3);
    m_axi_arburst = VL_RAND_RESET_I(2);
    m_axi_arlock = VL_RAND_RESET_I(1);
    m_axi_arcache = VL_RAND_RESET_I(4);
    m_axi_arprot = VL_RAND_RESET_I(3);
    m_axi_arvalid = VL_RAND_RESET_I(1);
    m_axi_arready = VL_RAND_RESET_I(1);
    m_axi_rid = VL_RAND_RESET_I(13);
    m_axi_rdata = VL_RAND_RESET_Q(64);
    m_axi_rresp = VL_RAND_RESET_I(2);
    m_axi_rlast = VL_RAND_RESET_I(1);
    m_axi_rvalid = VL_RAND_RESET_I(1);
    m_axi_rready = VL_RAND_RESET_I(1);
    m_axi_acvalid = VL_RAND_RESET_I(1);
    m_axi_acready = VL_RAND_RESET_I(1);
    m_axi_acaddr = VL_RAND_RESET_Q(64);
    m_axi_acsnoop = VL_RAND_RESET_I(4);
    top__DOT__pc = VL_RAND_RESET_Q(64);
    top__DOT__receive_ready = VL_RAND_RESET_I(1);
    top__DOT__receive_processing = VL_RAND_RESET_I(1);
    top__DOT__instruction_high = VL_RAND_RESET_I(32);
    top__DOT__instruction_low = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    top__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    top__DOT__registers_temp[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    top__DOT__temp5 = VL_RAND_RESET_I(5);
    top__DOT__temp12 = VL_RAND_RESET_I(12);
    top__DOT__temp20 = VL_RAND_RESET_I(20);
    top__DOT__temp64 = VL_RAND_RESET_Q(64);
    top__DOT__temp_result = VL_RAND_RESET_Q(64);
    top__DOT__result = VL_RAND_RESET_Q(64);
    top__DOT__rd = VL_RAND_RESET_I(5);
    top__DOT__write_enable = VL_RAND_RESET_I(1);
    top__DOT__count = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vtop::_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_configure_coverage\n"); );
}
