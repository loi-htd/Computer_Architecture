// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(button_i,0,0);
    VL_OUT8(led_o,6,0);
    CData/*3:0*/ top__DOT__dut__DOT__counter;
    CData/*0:0*/ top__DOT__dut__DOT__pastvld;
    CData/*0:0*/ top__DOT__dut__DOT___Vpast_0_0;
    CData/*1:0*/ top__DOT__dut__DOT__button0__DOT__state_d;
    CData/*1:0*/ top__DOT__dut__DOT__button0__DOT__state_q;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
