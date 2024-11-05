// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+1,(vlTOPp->top__DOT__pc),64);
	vcdp->chgBit  (c+3,(vlTOPp->top__DOT__receive_ready));
	vcdp->chgBit  (c+4,(vlTOPp->top__DOT__receive_processing));
	vcdp->chgBus  (c+5,(vlTOPp->top__DOT__instruction_high),32);
	vcdp->chgBus  (c+6,(vlTOPp->top__DOT__instruction_low),32);
	vcdp->chgQuad (c+7,(vlTOPp->top__DOT__registers[0]),64);
	vcdp->chgQuad (c+9,(vlTOPp->top__DOT__registers[1]),64);
	vcdp->chgQuad (c+11,(vlTOPp->top__DOT__registers[2]),64);
	vcdp->chgQuad (c+13,(vlTOPp->top__DOT__registers[3]),64);
	vcdp->chgQuad (c+15,(vlTOPp->top__DOT__registers[4]),64);
	vcdp->chgQuad (c+17,(vlTOPp->top__DOT__registers[5]),64);
	vcdp->chgQuad (c+19,(vlTOPp->top__DOT__registers[6]),64);
	vcdp->chgQuad (c+21,(vlTOPp->top__DOT__registers[7]),64);
	vcdp->chgQuad (c+23,(vlTOPp->top__DOT__registers[8]),64);
	vcdp->chgQuad (c+25,(vlTOPp->top__DOT__registers[9]),64);
	vcdp->chgQuad (c+27,(vlTOPp->top__DOT__registers[10]),64);
	vcdp->chgQuad (c+29,(vlTOPp->top__DOT__registers[11]),64);
	vcdp->chgQuad (c+31,(vlTOPp->top__DOT__registers[12]),64);
	vcdp->chgQuad (c+33,(vlTOPp->top__DOT__registers[13]),64);
	vcdp->chgQuad (c+35,(vlTOPp->top__DOT__registers[14]),64);
	vcdp->chgQuad (c+37,(vlTOPp->top__DOT__registers[15]),64);
	vcdp->chgQuad (c+39,(vlTOPp->top__DOT__registers[16]),64);
	vcdp->chgQuad (c+41,(vlTOPp->top__DOT__registers[17]),64);
	vcdp->chgQuad (c+43,(vlTOPp->top__DOT__registers[18]),64);
	vcdp->chgQuad (c+45,(vlTOPp->top__DOT__registers[19]),64);
	vcdp->chgQuad (c+47,(vlTOPp->top__DOT__registers[20]),64);
	vcdp->chgQuad (c+49,(vlTOPp->top__DOT__registers[21]),64);
	vcdp->chgQuad (c+51,(vlTOPp->top__DOT__registers[22]),64);
	vcdp->chgQuad (c+53,(vlTOPp->top__DOT__registers[23]),64);
	vcdp->chgQuad (c+55,(vlTOPp->top__DOT__registers[24]),64);
	vcdp->chgQuad (c+57,(vlTOPp->top__DOT__registers[25]),64);
	vcdp->chgQuad (c+59,(vlTOPp->top__DOT__registers[26]),64);
	vcdp->chgQuad (c+61,(vlTOPp->top__DOT__registers[27]),64);
	vcdp->chgQuad (c+63,(vlTOPp->top__DOT__registers[28]),64);
	vcdp->chgQuad (c+65,(vlTOPp->top__DOT__registers[29]),64);
	vcdp->chgQuad (c+67,(vlTOPp->top__DOT__registers[30]),64);
	vcdp->chgQuad (c+69,(vlTOPp->top__DOT__registers[31]),64);
	vcdp->chgQuad (c+71,(vlTOPp->top__DOT__registers_temp[0]),64);
	vcdp->chgQuad (c+73,(vlTOPp->top__DOT__registers_temp[1]),64);
	vcdp->chgQuad (c+75,(vlTOPp->top__DOT__registers_temp[2]),64);
	vcdp->chgQuad (c+77,(vlTOPp->top__DOT__registers_temp[3]),64);
	vcdp->chgQuad (c+79,(vlTOPp->top__DOT__registers_temp[4]),64);
	vcdp->chgQuad (c+81,(vlTOPp->top__DOT__registers_temp[5]),64);
	vcdp->chgQuad (c+83,(vlTOPp->top__DOT__registers_temp[6]),64);
	vcdp->chgQuad (c+85,(vlTOPp->top__DOT__registers_temp[7]),64);
	vcdp->chgQuad (c+87,(vlTOPp->top__DOT__registers_temp[8]),64);
	vcdp->chgQuad (c+89,(vlTOPp->top__DOT__registers_temp[9]),64);
	vcdp->chgQuad (c+91,(vlTOPp->top__DOT__registers_temp[10]),64);
	vcdp->chgQuad (c+93,(vlTOPp->top__DOT__registers_temp[11]),64);
	vcdp->chgQuad (c+95,(vlTOPp->top__DOT__registers_temp[12]),64);
	vcdp->chgQuad (c+97,(vlTOPp->top__DOT__registers_temp[13]),64);
	vcdp->chgQuad (c+99,(vlTOPp->top__DOT__registers_temp[14]),64);
	vcdp->chgQuad (c+101,(vlTOPp->top__DOT__registers_temp[15]),64);
	vcdp->chgQuad (c+103,(vlTOPp->top__DOT__registers_temp[16]),64);
	vcdp->chgQuad (c+105,(vlTOPp->top__DOT__registers_temp[17]),64);
	vcdp->chgQuad (c+107,(vlTOPp->top__DOT__registers_temp[18]),64);
	vcdp->chgQuad (c+109,(vlTOPp->top__DOT__registers_temp[19]),64);
	vcdp->chgQuad (c+111,(vlTOPp->top__DOT__registers_temp[20]),64);
	vcdp->chgQuad (c+113,(vlTOPp->top__DOT__registers_temp[21]),64);
	vcdp->chgQuad (c+115,(vlTOPp->top__DOT__registers_temp[22]),64);
	vcdp->chgQuad (c+117,(vlTOPp->top__DOT__registers_temp[23]),64);
	vcdp->chgQuad (c+119,(vlTOPp->top__DOT__registers_temp[24]),64);
	vcdp->chgQuad (c+121,(vlTOPp->top__DOT__registers_temp[25]),64);
	vcdp->chgQuad (c+123,(vlTOPp->top__DOT__registers_temp[26]),64);
	vcdp->chgQuad (c+125,(vlTOPp->top__DOT__registers_temp[27]),64);
	vcdp->chgQuad (c+127,(vlTOPp->top__DOT__registers_temp[28]),64);
	vcdp->chgQuad (c+129,(vlTOPp->top__DOT__registers_temp[29]),64);
	vcdp->chgQuad (c+131,(vlTOPp->top__DOT__registers_temp[30]),64);
	vcdp->chgQuad (c+133,(vlTOPp->top__DOT__registers_temp[31]),64);
	vcdp->chgBus  (c+135,(vlTOPp->top__DOT__temp5),5);
	vcdp->chgBus  (c+136,(vlTOPp->top__DOT__temp12),12);
	vcdp->chgBus  (c+137,(vlTOPp->top__DOT__temp20),20);
	vcdp->chgQuad (c+138,(vlTOPp->top__DOT__temp64),64);
	vcdp->chgQuad (c+140,(vlTOPp->top__DOT__temp_result),64);
	vcdp->chgQuad (c+142,(vlTOPp->top__DOT__result),64);
	vcdp->chgBus  (c+144,(vlTOPp->top__DOT__rd),5);
	vcdp->chgBit  (c+145,(vlTOPp->top__DOT__write_enable));
	vcdp->chgBus  (c+146,(vlTOPp->top__DOT__count),32);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+147,(vlTOPp->clk));
	vcdp->chgBit  (c+148,(vlTOPp->reset));
	vcdp->chgBit  (c+149,(vlTOPp->hz32768timer));
	vcdp->chgQuad (c+150,(vlTOPp->entry),64);
	vcdp->chgQuad (c+152,(vlTOPp->stackptr),64);
	vcdp->chgQuad (c+154,(vlTOPp->satp),64);
	vcdp->chgBus  (c+156,(vlTOPp->m_axi_awid),13);
	vcdp->chgQuad (c+157,(vlTOPp->m_axi_awaddr),64);
	vcdp->chgBus  (c+159,(vlTOPp->m_axi_awlen),8);
	vcdp->chgBus  (c+160,(vlTOPp->m_axi_awsize),3);
	vcdp->chgBus  (c+161,(vlTOPp->m_axi_awburst),2);
	vcdp->chgBit  (c+162,(vlTOPp->m_axi_awlock));
	vcdp->chgBus  (c+163,(vlTOPp->m_axi_awcache),4);
	vcdp->chgBus  (c+164,(vlTOPp->m_axi_awprot),3);
	vcdp->chgBit  (c+165,(vlTOPp->m_axi_awvalid));
	vcdp->chgBit  (c+166,(vlTOPp->m_axi_awready));
	vcdp->chgQuad (c+167,(vlTOPp->m_axi_wdata),64);
	vcdp->chgBus  (c+169,(vlTOPp->m_axi_wstrb),8);
	vcdp->chgBit  (c+170,(vlTOPp->m_axi_wlast));
	vcdp->chgBit  (c+171,(vlTOPp->m_axi_wvalid));
	vcdp->chgBit  (c+172,(vlTOPp->m_axi_wready));
	vcdp->chgBus  (c+173,(vlTOPp->m_axi_bid),13);
	vcdp->chgBus  (c+174,(vlTOPp->m_axi_bresp),2);
	vcdp->chgBit  (c+175,(vlTOPp->m_axi_bvalid));
	vcdp->chgBit  (c+176,(vlTOPp->m_axi_bready));
	vcdp->chgBus  (c+177,(vlTOPp->m_axi_arid),13);
	vcdp->chgQuad (c+178,(vlTOPp->m_axi_araddr),64);
	vcdp->chgBus  (c+180,(vlTOPp->m_axi_arlen),8);
	vcdp->chgBus  (c+181,(vlTOPp->m_axi_arsize),3);
	vcdp->chgBus  (c+182,(vlTOPp->m_axi_arburst),2);
	vcdp->chgBit  (c+183,(vlTOPp->m_axi_arlock));
	vcdp->chgBus  (c+184,(vlTOPp->m_axi_arcache),4);
	vcdp->chgBus  (c+185,(vlTOPp->m_axi_arprot),3);
	vcdp->chgBit  (c+186,(vlTOPp->m_axi_arvalid));
	vcdp->chgBit  (c+187,(vlTOPp->m_axi_arready));
	vcdp->chgBus  (c+188,(vlTOPp->m_axi_rid),13);
	vcdp->chgQuad (c+189,(vlTOPp->m_axi_rdata),64);
	vcdp->chgBus  (c+191,(vlTOPp->m_axi_rresp),2);
	vcdp->chgBit  (c+192,(vlTOPp->m_axi_rlast));
	vcdp->chgBit  (c+193,(vlTOPp->m_axi_rvalid));
	vcdp->chgBit  (c+194,(vlTOPp->m_axi_rready));
	vcdp->chgBit  (c+195,(vlTOPp->m_axi_acvalid));
	vcdp->chgBit  (c+196,(vlTOPp->m_axi_acready));
	vcdp->chgQuad (c+197,(vlTOPp->m_axi_acaddr),64);
	vcdp->chgBus  (c+199,(vlTOPp->m_axi_acsnoop),4);
    }
}
