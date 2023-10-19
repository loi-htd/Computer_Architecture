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
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->alu_op & 0xf0U))) {
        Verilated::overWidthError("alu_op");}
}
#endif  // VL_DEBUG
