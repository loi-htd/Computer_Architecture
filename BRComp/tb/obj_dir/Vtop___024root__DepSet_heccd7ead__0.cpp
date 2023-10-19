// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
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

void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->br_unsigned & 0xfeU))) {
        Verilated::overWidthError("br_unsigned");}
}
#endif  // VL_DEBUG
