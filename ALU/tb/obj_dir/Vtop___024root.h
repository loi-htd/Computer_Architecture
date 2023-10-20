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
    VL_IN8(alu_op,3,0);
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(operand_a,31,0);
    VL_IN(operand_b,31,0);
    VL_OUT(alu_data,31,0);
    IData/*31:0*/ top__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__unnamedblk2__DOT__i;
    QData/*32:0*/ top__DOT__dut__DOT__alu_data_33bit;
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
