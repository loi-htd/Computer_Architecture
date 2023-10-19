// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if ((vlSelf->rs1_data == vlSelf->rs2_data)) {
        vlSelf->br_equal = 1U;
        vlSelf->br_less = 0U;
    } else {
        vlSelf->br_equal = 0U;
        if (vlSelf->br_unsigned) {
            vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)) {
                        if ((1U & ((~ (vlSelf->rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i))) 
                                   & (vlSelf->rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->br_less = 1U;
                            goto __Vlabel1;
                        } else if ((1U & ((vlSelf->rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)) 
                                          & (~ (vlSelf->rs2_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)))))) {
                            vlSelf->br_less = 0U;
                            goto __Vlabel2;
                        }
                        vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
                __Vlabel1: ;
            }
        } else if (((~ (vlSelf->rs1_data >> 0x1fU)) 
                    & (vlSelf->rs2_data >> 0x1fU))) {
            vlSelf->br_less = 0U;
        } else if (((vlSelf->rs1_data >> 0x1fU) & (~ 
                                                   (vlSelf->rs2_data 
                                                    >> 0x1fU)))) {
            vlSelf->br_less = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)) {
                        if ((1U & ((~ (vlSelf->rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i))) 
                                   & (vlSelf->rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i))))) {
                            vlSelf->br_less = 1U;
                            goto __Vlabel3;
                        } else if ((1U & ((vlSelf->rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)) 
                                          & (~ (vlSelf->rs2_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)))))) {
                            vlSelf->br_less = 0U;
                            goto __Vlabel4;
                        }
                        vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
        }
    }
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
    vlSelf->rs1_data = VL_RAND_RESET_I(32);
    vlSelf->rs2_data = VL_RAND_RESET_I(32);
    vlSelf->br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->br_less = VL_RAND_RESET_I(1);
    vlSelf->br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
}
