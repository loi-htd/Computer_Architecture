// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hed57ab19_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_h63c1820b_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = vlSelf->top__DOT__dut__DOT__counter;
    vlSelf->led_o = Vtop__ConstPool__TABLE_hed57ab19_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->button_i) << 2U) 
                    | (IData)(vlSelf->top__DOT__dut__DOT__button0__DOT__state_q));
    vlSelf->top__DOT__dut__DOT__button0__DOT__state_d 
        = Vtop__ConstPool__TABLE_h63c1820b_0[__Vtableidx1];
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->button_i = VL_RAND_RESET_I(1);
    vlSelf->led_o = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__dut__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__pastvld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__button0__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__button0__DOT__state_q = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
