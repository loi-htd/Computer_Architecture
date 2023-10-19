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
    VL_IN8(br_unsigned,0,0);
    VL_OUT8(br_less,0,0);
    VL_OUT8(br_equal,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(rs1_data,31,0);
    VL_IN(rs2_data,31,0);
    IData/*31:0*/ top__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__unnamedblk2__DOT__i;

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
