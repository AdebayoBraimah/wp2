// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+147,"clk",-1);
	vcdp->declBit  (c+148,"reset",-1);
	vcdp->declBit  (c+149,"hz32768timer",-1);
	vcdp->declQuad (c+150,"entry",-1,63,0);
	vcdp->declQuad (c+152,"stackptr",-1,63,0);
	vcdp->declQuad (c+154,"satp",-1,63,0);
	vcdp->declBus  (c+156,"m_axi_awid",-1,12,0);
	vcdp->declQuad (c+157,"m_axi_awaddr",-1,63,0);
	vcdp->declBus  (c+159,"m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+160,"m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+161,"m_axi_awburst",-1,1,0);
	vcdp->declBit  (c+162,"m_axi_awlock",-1);
	vcdp->declBus  (c+163,"m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+164,"m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+165,"m_axi_awvalid",-1);
	vcdp->declBit  (c+166,"m_axi_awready",-1);
	vcdp->declQuad (c+167,"m_axi_wdata",-1,63,0);
	vcdp->declBus  (c+169,"m_axi_wstrb",-1,7,0);
	vcdp->declBit  (c+170,"m_axi_wlast",-1);
	vcdp->declBit  (c+171,"m_axi_wvalid",-1);
	vcdp->declBit  (c+172,"m_axi_wready",-1);
	vcdp->declBus  (c+173,"m_axi_bid",-1,12,0);
	vcdp->declBus  (c+174,"m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+175,"m_axi_bvalid",-1);
	vcdp->declBit  (c+176,"m_axi_bready",-1);
	vcdp->declBus  (c+177,"m_axi_arid",-1,12,0);
	vcdp->declQuad (c+178,"m_axi_araddr",-1,63,0);
	vcdp->declBus  (c+180,"m_axi_arlen",-1,7,0);
	vcdp->declBus  (c+181,"m_axi_arsize",-1,2,0);
	vcdp->declBus  (c+182,"m_axi_arburst",-1,1,0);
	vcdp->declBit  (c+183,"m_axi_arlock",-1);
	vcdp->declBus  (c+184,"m_axi_arcache",-1,3,0);
	vcdp->declBus  (c+185,"m_axi_arprot",-1,2,0);
	vcdp->declBit  (c+186,"m_axi_arvalid",-1);
	vcdp->declBit  (c+187,"m_axi_arready",-1);
	vcdp->declBus  (c+188,"m_axi_rid",-1,12,0);
	vcdp->declQuad (c+189,"m_axi_rdata",-1,63,0);
	vcdp->declBus  (c+191,"m_axi_rresp",-1,1,0);
	vcdp->declBit  (c+192,"m_axi_rlast",-1);
	vcdp->declBit  (c+193,"m_axi_rvalid",-1);
	vcdp->declBit  (c+194,"m_axi_rready",-1);
	vcdp->declBit  (c+195,"m_axi_acvalid",-1);
	vcdp->declBit  (c+196,"m_axi_acready",-1);
	vcdp->declQuad (c+197,"m_axi_acaddr",-1,63,0);
	vcdp->declBus  (c+199,"m_axi_acsnoop",-1,3,0);
	vcdp->declBus  (c+200,"top ID_WIDTH",-1,31,0);
	vcdp->declBus  (c+201,"top ADDR_WIDTH",-1,31,0);
	vcdp->declBus  (c+201,"top DATA_WIDTH",-1,31,0);
	vcdp->declBus  (c+202,"top STRB_WIDTH",-1,31,0);
	vcdp->declBit  (c+147,"top clk",-1);
	vcdp->declBit  (c+148,"top reset",-1);
	vcdp->declBit  (c+149,"top hz32768timer",-1);
	vcdp->declQuad (c+150,"top entry",-1,63,0);
	vcdp->declQuad (c+152,"top stackptr",-1,63,0);
	vcdp->declQuad (c+154,"top satp",-1,63,0);
	vcdp->declBus  (c+156,"top m_axi_awid",-1,12,0);
	vcdp->declQuad (c+157,"top m_axi_awaddr",-1,63,0);
	vcdp->declBus  (c+159,"top m_axi_awlen",-1,7,0);
	vcdp->declBus  (c+160,"top m_axi_awsize",-1,2,0);
	vcdp->declBus  (c+161,"top m_axi_awburst",-1,1,0);
	vcdp->declBit  (c+162,"top m_axi_awlock",-1);
	vcdp->declBus  (c+163,"top m_axi_awcache",-1,3,0);
	vcdp->declBus  (c+164,"top m_axi_awprot",-1,2,0);
	vcdp->declBit  (c+165,"top m_axi_awvalid",-1);
	vcdp->declBit  (c+166,"top m_axi_awready",-1);
	vcdp->declQuad (c+167,"top m_axi_wdata",-1,63,0);
	vcdp->declBus  (c+169,"top m_axi_wstrb",-1,7,0);
	vcdp->declBit  (c+170,"top m_axi_wlast",-1);
	vcdp->declBit  (c+171,"top m_axi_wvalid",-1);
	vcdp->declBit  (c+172,"top m_axi_wready",-1);
	vcdp->declBus  (c+173,"top m_axi_bid",-1,12,0);
	vcdp->declBus  (c+174,"top m_axi_bresp",-1,1,0);
	vcdp->declBit  (c+175,"top m_axi_bvalid",-1);
	vcdp->declBit  (c+176,"top m_axi_bready",-1);
	vcdp->declBus  (c+177,"top m_axi_arid",-1,12,0);
	vcdp->declQuad (c+178,"top m_axi_araddr",-1,63,0);
	vcdp->declBus  (c+180,"top m_axi_arlen",-1,7,0);
	vcdp->declBus  (c+181,"top m_axi_arsize",-1,2,0);
	vcdp->declBus  (c+182,"top m_axi_arburst",-1,1,0);
	vcdp->declBit  (c+183,"top m_axi_arlock",-1);
	vcdp->declBus  (c+184,"top m_axi_arcache",-1,3,0);
	vcdp->declBus  (c+185,"top m_axi_arprot",-1,2,0);
	vcdp->declBit  (c+186,"top m_axi_arvalid",-1);
	vcdp->declBit  (c+187,"top m_axi_arready",-1);
	vcdp->declBus  (c+188,"top m_axi_rid",-1,12,0);
	vcdp->declQuad (c+189,"top m_axi_rdata",-1,63,0);
	vcdp->declBus  (c+191,"top m_axi_rresp",-1,1,0);
	vcdp->declBit  (c+192,"top m_axi_rlast",-1);
	vcdp->declBit  (c+193,"top m_axi_rvalid",-1);
	vcdp->declBit  (c+194,"top m_axi_rready",-1);
	vcdp->declBit  (c+195,"top m_axi_acvalid",-1);
	vcdp->declBit  (c+196,"top m_axi_acready",-1);
	vcdp->declQuad (c+197,"top m_axi_acaddr",-1,63,0);
	vcdp->declBus  (c+199,"top m_axi_acsnoop",-1,3,0);
	vcdp->declQuad (c+1,"top pc",-1,63,0);
	vcdp->declBit  (c+3,"top receive_ready",-1);
	vcdp->declBit  (c+4,"top receive_processing",-1);
	vcdp->declBus  (c+5,"top instruction_high",-1,31,0);
	vcdp->declBus  (c+6,"top instruction_low",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+7+i*2,"top registers",(i+0),63,0);}}
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+71+i*2,"top registers_temp",(i+0),63,0);}}
	vcdp->declBus  (c+135,"top temp5",-1,4,0);
	vcdp->declBus  (c+136,"top temp12",-1,11,0);
	vcdp->declBus  (c+137,"top temp20",-1,19,0);
	vcdp->declQuad (c+138,"top temp64",-1,63,0);
	vcdp->declQuad (c+140,"top temp_result",-1,63,0);
	vcdp->declQuad (c+142,"top result",-1,63,0);
	vcdp->declBus  (c+144,"top rd",-1,4,0);
	vcdp->declBit  (c+145,"top write_enable",-1);
	vcdp->declBus  (c+146,"top count",-1,31,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullQuad (c+1,(vlTOPp->top__DOT__pc),64);
	vcdp->fullBit  (c+3,(vlTOPp->top__DOT__receive_ready));
	vcdp->fullBit  (c+4,(vlTOPp->top__DOT__receive_processing));
	vcdp->fullBus  (c+5,(vlTOPp->top__DOT__instruction_high),32);
	vcdp->fullBus  (c+6,(vlTOPp->top__DOT__instruction_low),32);
	vcdp->fullQuad (c+7,(vlTOPp->top__DOT__registers[0]),64);
	vcdp->fullQuad (c+9,(vlTOPp->top__DOT__registers[1]),64);
	vcdp->fullQuad (c+11,(vlTOPp->top__DOT__registers[2]),64);
	vcdp->fullQuad (c+13,(vlTOPp->top__DOT__registers[3]),64);
	vcdp->fullQuad (c+15,(vlTOPp->top__DOT__registers[4]),64);
	vcdp->fullQuad (c+17,(vlTOPp->top__DOT__registers[5]),64);
	vcdp->fullQuad (c+19,(vlTOPp->top__DOT__registers[6]),64);
	vcdp->fullQuad (c+21,(vlTOPp->top__DOT__registers[7]),64);
	vcdp->fullQuad (c+23,(vlTOPp->top__DOT__registers[8]),64);
	vcdp->fullQuad (c+25,(vlTOPp->top__DOT__registers[9]),64);
	vcdp->fullQuad (c+27,(vlTOPp->top__DOT__registers[10]),64);
	vcdp->fullQuad (c+29,(vlTOPp->top__DOT__registers[11]),64);
	vcdp->fullQuad (c+31,(vlTOPp->top__DOT__registers[12]),64);
	vcdp->fullQuad (c+33,(vlTOPp->top__DOT__registers[13]),64);
	vcdp->fullQuad (c+35,(vlTOPp->top__DOT__registers[14]),64);
	vcdp->fullQuad (c+37,(vlTOPp->top__DOT__registers[15]),64);
	vcdp->fullQuad (c+39,(vlTOPp->top__DOT__registers[16]),64);
	vcdp->fullQuad (c+41,(vlTOPp->top__DOT__registers[17]),64);
	vcdp->fullQuad (c+43,(vlTOPp->top__DOT__registers[18]),64);
	vcdp->fullQuad (c+45,(vlTOPp->top__DOT__registers[19]),64);
	vcdp->fullQuad (c+47,(vlTOPp->top__DOT__registers[20]),64);
	vcdp->fullQuad (c+49,(vlTOPp->top__DOT__registers[21]),64);
	vcdp->fullQuad (c+51,(vlTOPp->top__DOT__registers[22]),64);
	vcdp->fullQuad (c+53,(vlTOPp->top__DOT__registers[23]),64);
	vcdp->fullQuad (c+55,(vlTOPp->top__DOT__registers[24]),64);
	vcdp->fullQuad (c+57,(vlTOPp->top__DOT__registers[25]),64);
	vcdp->fullQuad (c+59,(vlTOPp->top__DOT__registers[26]),64);
	vcdp->fullQuad (c+61,(vlTOPp->top__DOT__registers[27]),64);
	vcdp->fullQuad (c+63,(vlTOPp->top__DOT__registers[28]),64);
	vcdp->fullQuad (c+65,(vlTOPp->top__DOT__registers[29]),64);
	vcdp->fullQuad (c+67,(vlTOPp->top__DOT__registers[30]),64);
	vcdp->fullQuad (c+69,(vlTOPp->top__DOT__registers[31]),64);
	vcdp->fullQuad (c+71,(vlTOPp->top__DOT__registers_temp[0]),64);
	vcdp->fullQuad (c+73,(vlTOPp->top__DOT__registers_temp[1]),64);
	vcdp->fullQuad (c+75,(vlTOPp->top__DOT__registers_temp[2]),64);
	vcdp->fullQuad (c+77,(vlTOPp->top__DOT__registers_temp[3]),64);
	vcdp->fullQuad (c+79,(vlTOPp->top__DOT__registers_temp[4]),64);
	vcdp->fullQuad (c+81,(vlTOPp->top__DOT__registers_temp[5]),64);
	vcdp->fullQuad (c+83,(vlTOPp->top__DOT__registers_temp[6]),64);
	vcdp->fullQuad (c+85,(vlTOPp->top__DOT__registers_temp[7]),64);
	vcdp->fullQuad (c+87,(vlTOPp->top__DOT__registers_temp[8]),64);
	vcdp->fullQuad (c+89,(vlTOPp->top__DOT__registers_temp[9]),64);
	vcdp->fullQuad (c+91,(vlTOPp->top__DOT__registers_temp[10]),64);
	vcdp->fullQuad (c+93,(vlTOPp->top__DOT__registers_temp[11]),64);
	vcdp->fullQuad (c+95,(vlTOPp->top__DOT__registers_temp[12]),64);
	vcdp->fullQuad (c+97,(vlTOPp->top__DOT__registers_temp[13]),64);
	vcdp->fullQuad (c+99,(vlTOPp->top__DOT__registers_temp[14]),64);
	vcdp->fullQuad (c+101,(vlTOPp->top__DOT__registers_temp[15]),64);
	vcdp->fullQuad (c+103,(vlTOPp->top__DOT__registers_temp[16]),64);
	vcdp->fullQuad (c+105,(vlTOPp->top__DOT__registers_temp[17]),64);
	vcdp->fullQuad (c+107,(vlTOPp->top__DOT__registers_temp[18]),64);
	vcdp->fullQuad (c+109,(vlTOPp->top__DOT__registers_temp[19]),64);
	vcdp->fullQuad (c+111,(vlTOPp->top__DOT__registers_temp[20]),64);
	vcdp->fullQuad (c+113,(vlTOPp->top__DOT__registers_temp[21]),64);
	vcdp->fullQuad (c+115,(vlTOPp->top__DOT__registers_temp[22]),64);
	vcdp->fullQuad (c+117,(vlTOPp->top__DOT__registers_temp[23]),64);
	vcdp->fullQuad (c+119,(vlTOPp->top__DOT__registers_temp[24]),64);
	vcdp->fullQuad (c+121,(vlTOPp->top__DOT__registers_temp[25]),64);
	vcdp->fullQuad (c+123,(vlTOPp->top__DOT__registers_temp[26]),64);
	vcdp->fullQuad (c+125,(vlTOPp->top__DOT__registers_temp[27]),64);
	vcdp->fullQuad (c+127,(vlTOPp->top__DOT__registers_temp[28]),64);
	vcdp->fullQuad (c+129,(vlTOPp->top__DOT__registers_temp[29]),64);
	vcdp->fullQuad (c+131,(vlTOPp->top__DOT__registers_temp[30]),64);
	vcdp->fullQuad (c+133,(vlTOPp->top__DOT__registers_temp[31]),64);
	vcdp->fullBus  (c+135,(vlTOPp->top__DOT__temp5),5);
	vcdp->fullBus  (c+136,(vlTOPp->top__DOT__temp12),12);
	vcdp->fullBus  (c+137,(vlTOPp->top__DOT__temp20),20);
	vcdp->fullQuad (c+138,(vlTOPp->top__DOT__temp64),64);
	vcdp->fullQuad (c+140,(vlTOPp->top__DOT__temp_result),64);
	vcdp->fullQuad (c+142,(vlTOPp->top__DOT__result),64);
	vcdp->fullBus  (c+144,(vlTOPp->top__DOT__rd),5);
	vcdp->fullBit  (c+145,(vlTOPp->top__DOT__write_enable));
	vcdp->fullBus  (c+146,(vlTOPp->top__DOT__count),32);
	vcdp->fullBit  (c+147,(vlTOPp->clk));
	vcdp->fullBit  (c+148,(vlTOPp->reset));
	vcdp->fullBit  (c+149,(vlTOPp->hz32768timer));
	vcdp->fullQuad (c+150,(vlTOPp->entry),64);
	vcdp->fullQuad (c+152,(vlTOPp->stackptr),64);
	vcdp->fullQuad (c+154,(vlTOPp->satp),64);
	vcdp->fullBus  (c+156,(vlTOPp->m_axi_awid),13);
	vcdp->fullQuad (c+157,(vlTOPp->m_axi_awaddr),64);
	vcdp->fullBus  (c+159,(vlTOPp->m_axi_awlen),8);
	vcdp->fullBus  (c+160,(vlTOPp->m_axi_awsize),3);
	vcdp->fullBus  (c+161,(vlTOPp->m_axi_awburst),2);
	vcdp->fullBit  (c+162,(vlTOPp->m_axi_awlock));
	vcdp->fullBus  (c+163,(vlTOPp->m_axi_awcache),4);
	vcdp->fullBus  (c+164,(vlTOPp->m_axi_awprot),3);
	vcdp->fullBit  (c+165,(vlTOPp->m_axi_awvalid));
	vcdp->fullBit  (c+166,(vlTOPp->m_axi_awready));
	vcdp->fullQuad (c+167,(vlTOPp->m_axi_wdata),64);
	vcdp->fullBus  (c+169,(vlTOPp->m_axi_wstrb),8);
	vcdp->fullBit  (c+170,(vlTOPp->m_axi_wlast));
	vcdp->fullBit  (c+171,(vlTOPp->m_axi_wvalid));
	vcdp->fullBit  (c+172,(vlTOPp->m_axi_wready));
	vcdp->fullBus  (c+173,(vlTOPp->m_axi_bid),13);
	vcdp->fullBus  (c+174,(vlTOPp->m_axi_bresp),2);
	vcdp->fullBit  (c+175,(vlTOPp->m_axi_bvalid));
	vcdp->fullBit  (c+176,(vlTOPp->m_axi_bready));
	vcdp->fullBus  (c+177,(vlTOPp->m_axi_arid),13);
	vcdp->fullQuad (c+178,(vlTOPp->m_axi_araddr),64);
	vcdp->fullBus  (c+180,(vlTOPp->m_axi_arlen),8);
	vcdp->fullBus  (c+181,(vlTOPp->m_axi_arsize),3);
	vcdp->fullBus  (c+182,(vlTOPp->m_axi_arburst),2);
	vcdp->fullBit  (c+183,(vlTOPp->m_axi_arlock));
	vcdp->fullBus  (c+184,(vlTOPp->m_axi_arcache),4);
	vcdp->fullBus  (c+185,(vlTOPp->m_axi_arprot),3);
	vcdp->fullBit  (c+186,(vlTOPp->m_axi_arvalid));
	vcdp->fullBit  (c+187,(vlTOPp->m_axi_arready));
	vcdp->fullBus  (c+188,(vlTOPp->m_axi_rid),13);
	vcdp->fullQuad (c+189,(vlTOPp->m_axi_rdata),64);
	vcdp->fullBus  (c+191,(vlTOPp->m_axi_rresp),2);
	vcdp->fullBit  (c+192,(vlTOPp->m_axi_rlast));
	vcdp->fullBit  (c+193,(vlTOPp->m_axi_rvalid));
	vcdp->fullBit  (c+194,(vlTOPp->m_axi_rready));
	vcdp->fullBit  (c+195,(vlTOPp->m_axi_acvalid));
	vcdp->fullBit  (c+196,(vlTOPp->m_axi_acready));
	vcdp->fullQuad (c+197,(vlTOPp->m_axi_acaddr),64);
	vcdp->fullBus  (c+199,(vlTOPp->m_axi_acsnoop),4);
	vcdp->fullBus  (c+200,(0xdU),32);
	vcdp->fullBus  (c+201,(0x40U),32);
	vcdp->fullBus  (c+202,(8U),32);
    }
}
