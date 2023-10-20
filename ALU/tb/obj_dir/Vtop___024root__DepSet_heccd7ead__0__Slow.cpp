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
    if ((8U & (IData)(vlSelf->alu_op))) {
        vlSelf->alu_data = ((4U & (IData)(vlSelf->alu_op))
                             ? 0U : ((2U & (IData)(vlSelf->alu_op))
                                      ? 0U : ((1U & (IData)(vlSelf->alu_op))
                                               ? (vlSelf->operand_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->operand_b))
                                               : (vlSelf->operand_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->operand_b)))));
    } else if ((4U & (IData)(vlSelf->alu_op))) {
        vlSelf->alu_data = ((2U & (IData)(vlSelf->alu_op))
                             ? ((1U & (IData)(vlSelf->alu_op))
                                 ? (vlSelf->operand_a 
                                    << (0x1fU & vlSelf->operand_b))
                                 : (vlSelf->operand_a 
                                    & vlSelf->operand_b))
                             : ((1U & (IData)(vlSelf->alu_op))
                                 ? (vlSelf->operand_a 
                                    | vlSelf->operand_b)
                                 : (vlSelf->operand_a 
                                    ^ vlSelf->operand_b)));
    } else if ((2U & (IData)(vlSelf->alu_op))) {
        if ((1U & (IData)(vlSelf->alu_op))) {
            vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)) {
                        if ((1U & ((~ (vlSelf->operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i))) 
                                   & (vlSelf->operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i))))) {
                            vlSelf->alu_data = 1U;
                            goto __Vlabel1;
                        } else if ((1U & ((vlSelf->operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)) 
                                          & (~ (vlSelf->operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i)))))) {
                            goto __Vlabel2;
                        }
                        vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
                __Vlabel1: ;
            }
        } else if (((~ (vlSelf->operand_a >> 0x1fU)) 
                    & (vlSelf->operand_b >> 0x1fU))) {
            vlSelf->alu_data = 0U;
        } else if (((vlSelf->operand_a >> 0x1fU) & 
                    (~ (vlSelf->operand_b >> 0x1fU)))) {
            vlSelf->alu_data = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)) {
                        if ((1U & ((~ (vlSelf->operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i))) 
                                   & (vlSelf->operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->alu_data = 1U;
                            goto __Vlabel3;
                        } else if ((1U & ((vlSelf->operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)) 
                                          & (~ (vlSelf->operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i)))))) {
                            vlSelf->alu_data = 0U;
                            goto __Vlabel4;
                        }
                        vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
        }
    } else if ((1U & (IData)(vlSelf->alu_op))) {
        vlSelf->top__DOT__dut__DOT__alu_data_33bit 
            = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->operand_a)) 
                                         + (~ (QData)((IData)(vlSelf->operand_b))))));
        vlSelf->alu_data = ((0xffffffffULL < vlSelf->top__DOT__dut__DOT__alu_data_33bit)
                             ? 0xffffffffU : ((IData)(1U) 
                                              + (vlSelf->operand_a 
                                                 + 
                                                 (~ vlSelf->operand_b))));
    } else {
        vlSelf->top__DOT__dut__DOT__alu_data_33bit 
            = (0x1ffffffffULL & ((QData)((IData)(vlSelf->operand_a)) 
                                 + (QData)((IData)(vlSelf->operand_b))));
        vlSelf->alu_data = ((0xffffffffULL < vlSelf->top__DOT__dut__DOT__alu_data_33bit)
                             ? 0xffffffffU : (vlSelf->operand_a 
                                              + vlSelf->operand_b));
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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->operand_a = VL_RAND_RESET_I(32);
    vlSelf->operand_b = VL_RAND_RESET_I(32);
    vlSelf->alu_op = VL_RAND_RESET_I(4);
    vlSelf->alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data_33bit = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
