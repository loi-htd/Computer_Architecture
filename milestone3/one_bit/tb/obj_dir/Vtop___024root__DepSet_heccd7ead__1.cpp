// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->top__DOT__dut__DOT__rst_if_id) {
        if (vlSelf->top__DOT__dut__DOT__enable_if_id) {
            vlSelf->top__DOT__dut__DOT__pc_four_id 
                = ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if);
            vlSelf->top__DOT__dut__DOT__pc_id = vlSelf->top__DOT__dut__DOT__pc_if;
            vlSelf->top__DOT__dut__DOT__instr_id = vlSelf->top__DOT__dut__DOT__instr_debug_i;
        } else {
            vlSelf->top__DOT__dut__DOT__pc_four_id 
                = vlSelf->top__DOT__dut__DOT__pc_four_id;
            vlSelf->top__DOT__dut__DOT__pc_id = vlSelf->top__DOT__dut__DOT__pc_id;
            vlSelf->top__DOT__dut__DOT__instr_id = vlSelf->top__DOT__dut__DOT__instr_id;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__pc_four_id = 0U;
        vlSelf->top__DOT__dut__DOT__pc_id = 0U;
        vlSelf->top__DOT__dut__DOT__instr_id = 0U;
    }
    vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
    vlSelf->top__DOT__dut__DOT__rd_wren_id = 0U;
    vlSelf->top__DOT__dut__DOT__rd_addr_id = 0U;
    vlSelf->top__DOT__dut__DOT__op_b_sel_id = 0U;
    vlSelf->top__DOT__dut__DOT__mem_wren_id = 0U;
    vlSelf->top__DOT__dut__DOT__is_load_id = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                  >> 6U)))) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__mem_wren_id = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__is_load_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__branch_id = 0U;
    vlSelf->top__DOT__dut__DOT__jump_id = 0U;
    vlSelf->top__DOT__dut__DOT__rs1_addr_id = 0U;
    vlSelf->top__DOT__dut__DOT__rs2_addr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                                vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                                vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                >> 7U));
                                vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                                vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                                vlSelf->top__DOT__dut__DOT__jump_id = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                            vlSelf->top__DOT__dut__DOT__jump_id = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                        vlSelf->top__DOT__dut__DOT__jump_id = 0U;
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0xfU));
                        }
                    }
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__rs2_addr_id 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm_id = ((0x10U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_id)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__dut__DOT__instr_id) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_id)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_id)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))));
        } else {
            vlSelf->top__DOT__dut__DOT__imm_id = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__dut__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rs1_addr_id = 0U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 0U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 0xfU));
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__rs2_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0x14U));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm_id = ((8U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U));
        } else {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0xfU));
                            vlSelf->top__DOT__dut__DOT__rs2_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0x14U));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm_id = ((8U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U)));
        }
    } else if ((0x10U & vlSelf->top__DOT__dut__DOT__instr_id)) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                      >> 3U)))) {
            if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                    }
                }
            } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                    vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                    vlSelf->top__DOT__dut__DOT__rd_addr_id 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                    >> 7U));
                    vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm_id = ((8U & vlSelf->top__DOT__dut__DOT__instr_id)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)));
    } else {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm_id = ((8U & vlSelf->top__DOT__dut__DOT__instr_id)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__dut__DOT__instr_id 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)));
    }
    vlSelf->top__DOT__dut__DOT__hazard_op = ((((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_ex) 
                                                 & (0U 
                                                    != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_ex))) 
                                                & (((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_ex) 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_id)) 
                                                   | ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_ex) 
                                                      == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_id)))) 
                                               | (((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                                                   & (0U 
                                                      != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                                                  & (((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                                                      == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_id)) 
                                                     | ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                                                        == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_id))))) 
                                              | (((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_id)) 
                                                    | ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                                                       == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_id)))))
                                              ? 1U : 
                                             ((IData)(vlSelf->top__DOT__dut__DOT__br_sel_ex)
                                               ? 2U
                                               : 0U));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0] 
            = vlSelf->__Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[1U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[2U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[3U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[4U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[5U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[6U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[7U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[8U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[9U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xaU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xbU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xcU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xdU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xeU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0xfU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x10U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x11U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x12U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x13U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x14U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x15U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x16U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x17U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x18U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x19U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1aU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1bU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1cU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1dU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1eU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0x1fU] = 0U;
    }
    vlSelf->top__DOT__dut__DOT__pc_if = vlSelf->__Vdly__top__DOT__dut__DOT__pc_if;
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_mem)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff0000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff000000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)]));
        vlSelf->top__DOT__dut__DOT__ld_data_mem = (
                                                   (0xffffff00U 
                                                    & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data)
                                                       : 0U));
        vlSelf->top__DOT__dut__DOT__ld_data_mem = (
                                                   (0xffff00ffU 
                                                    & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                                                   | (0xff00U 
                                                      & (((2U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))
                                                           ? 
                                                          (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                           >> 8U)
                                                           : 
                                                          (- (IData)(
                                                                     ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                       >> 7U) 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem) 
                                                                         >> 3U))))) 
                                                         << 8U)));
        vlSelf->top__DOT__dut__DOT__ld_data_mem = (
                                                   (0xff00ffffU 
                                                    & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                                                   | (0xff0000U 
                                                      & (((2U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))
                                                           ? 
                                                          (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                           >> 0x10U)
                                                           : 
                                                          (- (IData)(
                                                                     ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                       >> 0xfU) 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem) 
                                                                         >> 3U))))) 
                                                         << 0x10U)));
        vlSelf->top__DOT__dut__DOT__ld_data_mem = (
                                                   (0xffffffU 
                                                    & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))
                                                        ? 
                                                       (vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                        >> 0x18U)
                                                        : 
                                                       (- (IData)(
                                                                  ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                                                    >> 0x1fU) 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem) 
                                                                      >> 3U))))) 
                                                      << 0x18U));
    } else {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data = 0U;
        vlSelf->top__DOT__dut__DOT__ld_data_mem = (
                                                   (0xcU 
                                                    >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))
                                                    ? 
                                                   vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
                                                   [vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel]
                                                    : vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0);
    }
    vlSelf->top__DOT__dut__DOT__nxt_pc_if = ((IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem)
                                              ? vlSelf->top__DOT__dut__DOT__alu_data_mem
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__dut__DOT__pc_if));
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc_if;
    vlSelf->top__DOT__dut__DOT__instr_debug_i = ((0x3f3U 
                                                  >= 
                                                  (0x3ffU 
                                                   & (vlSelf->pc_debug_o 
                                                      >> 2U)))
                                                  ? 
                                                 vlSelf->top__DOT__dut__DOT__test0__DOT__instruction
                                                 [(0x3ffU 
                                                   & (vlSelf->pc_debug_o 
                                                      >> 2U))]
                                                  : vlSelf->top__DOT__dut__DOT__test0__DOT____Vxrand_h96fd10a2__0);
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_heee3903f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h567da892_0;

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                     << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__rst_reg));
    vlSelf->top__DOT__dut__DOT__enable_if_id = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_id_ex = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_ex_mem = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_mem_wb = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_if_id = Vtop__ConstPool__TABLE_h567da892_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_id_ex = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_ex_mem = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_mem_wb = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx1];
}

void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)))) {
        Vtop___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id 
        = vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id;
    vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id 
        = vlSelf->top__DOT__dut__DOT__rst_if_id;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__dut__DOT__rst_if_id ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__rst_if_id ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id))) VL_DBG_MSGF("        CHANGE: ../src/singlecycle.sv:110: top.dut.rst_if_id\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id 
        = vlSelf->top__DOT__dut__DOT__rst_if_id;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
