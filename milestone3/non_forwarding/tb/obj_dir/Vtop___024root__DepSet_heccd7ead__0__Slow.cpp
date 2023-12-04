// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__dut__DOT__instr_memory;
    VlWide<7>/*223:0*/ __Vtemp_h920bc4e6__0;
    VlWide<7>/*223:0*/ __Vtemp_h920bc4e6__1;
    // Body
    __Vtemp_h920bc4e6__0[0U] = 0x64617461U;
    __Vtemp_h920bc4e6__0[1U] = 0x6d656d2eU;
    __Vtemp_h920bc4e6__0[2U] = 0x696f6e5fU;
    __Vtemp_h920bc4e6__0[3U] = 0x72756374U;
    __Vtemp_h920bc4e6__0[4U] = 0x696e7374U;
    __Vtemp_h920bc4e6__0[5U] = 0x6d656d2fU;
    __Vtemp_h920bc4e6__0[6U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h920bc4e6__0)
                 ,  &(top__DOT__dut__DOT__instr_memory)
                 , 0, ~0ULL);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    __Vtemp_h920bc4e6__1[0U] = 0x64617461U;
    __Vtemp_h920bc4e6__1[1U] = 0x6d656d2eU;
    __Vtemp_h920bc4e6__1[2U] = 0x696f6e5fU;
    __Vtemp_h920bc4e6__1[3U] = 0x72756374U;
    __Vtemp_h920bc4e6__1[4U] = 0x696e7374U;
    __Vtemp_h920bc4e6__1[5U] = 0x6d656d2fU;
    __Vtemp_h920bc4e6__1[6U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h920bc4e6__1)
                 ,  &(vlSelf->top__DOT__dut__DOT__test0__DOT__instruction)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h88d3d1bb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h878637ed_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_heee3903f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h567da892_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc_if;
    vlSelf->top__DOT__dut__DOT__rd_wren_id = 0U;
    vlSelf->top__DOT__dut__DOT__is_load_id = 0U;
    vlSelf->top__DOT__dut__DOT__rd_addr_id = 0U;
    vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
    vlSelf->top__DOT__dut__DOT__jump_id = 0U;
    vlSelf->top__DOT__dut__DOT__branch_id = 0U;
    vlSelf->top__DOT__dut__DOT__mem_wren_id = 0U;
    vlSelf->top__DOT__dut__DOT__op_b_sel_id = 0U;
    vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
    vlSelf->top__DOT__dut__DOT__br_op_id = 0U;
    vlSelf->top__DOT__dut__DOT__ld_op_id = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                  >> 6U)))) {
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
                                vlSelf->top__DOT__dut__DOT__ld_op_id 
                                    = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__dut__DOT__instr_id)
                                             ? 3U : 1U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr_id)
                                                ? 0U
                                                : 0xfU)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr_id)
                                                ? 0xbU
                                                : 9U)));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__ld_op_id 
                                = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_id)
                                                 ? 3U
                                                 : 1U))
                                    : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 0U : 0xfU)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 0xbU : 9U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->io_hex0_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [0U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [1U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [2U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [3U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [4U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [5U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [6U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [7U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [8U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [9U];
    vlSelf->io_lcd_o = vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
        [0xaU];
    vlSelf->top__DOT__dut__DOT__nxt_pc_if = ((IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem)
                                              ? vlSelf->top__DOT__dut__DOT__alu_data_mem
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__dut__DOT__pc_if));
    vlSelf->top__DOT__dut__DOT__operand_a_ex = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel_ex)
                                                 ? vlSelf->top__DOT__dut__DOT__pc_ex
                                                 : vlSelf->top__DOT__dut__DOT__rs1_data_ex);
    vlSelf->top__DOT__dut__DOT__operand_b_ex = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel_ex)
                                                 ? vlSelf->top__DOT__dut__DOT__imm_ex
                                                 : vlSelf->top__DOT__dut__DOT__rs2_data_ex);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel 
        = ((0x900U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data_mem))
            ? 0xcU : ((0x8a0U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                       ? 0xaU : ((0x890U == (0xfffU 
                                             & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                  ? 9U : ((0x880U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                           ? 8U : (
                                                   (0x870U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                    ? 7U
                                                    : 
                                                   ((0x860U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                     ? 6U
                                                     : 
                                                    ((0x850U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                      ? 5U
                                                      : 
                                                     ((0x840U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                       ? 4U
                                                       : 
                                                      ((0x830U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                        ? 3U
                                                        : 
                                                       ((0x820U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                         ? 2U
                                                         : 
                                                        ((0x810U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                          ? 1U
                                                          : 
                                                         ((0x800U 
                                                           == 
                                                           (0xfffU 
                                                            & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                                           ? 0U
                                                           : 0xbU))))))))))));
    vlSelf->top__DOT__dut__DOT__rs2_addr_id = 0U;
    vlSelf->top__DOT__dut__DOT__rs1_addr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                                vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                                vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                >> 7U));
                                vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                                vlSelf->top__DOT__dut__DOT__jump_id = 1U;
                                vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                                vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                                vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                                vlSelf->top__DOT__dut__DOT__br_op_id = 6U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                            vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                            vlSelf->top__DOT__dut__DOT__jump_id = 1U;
                            vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__br_op_id = 7U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                        vlSelf->top__DOT__dut__DOT__jump_id = 0U;
                        vlSelf->top__DOT__dut__DOT__branch_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__br_op_id 
                            = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? 5U : 4U) : 
                                   ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                     ? 3U : 2U)) : 
                               ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                 ? 0U : ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                          ? 1U : 0U)));
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_id 
                              >> 3U)))) {
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
                            vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__rs1_addr_id = 0U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? 1U : 0U);
                        } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 2U;
                        } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 3U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 4U;
                        } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 5U;
                        } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 6U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 7U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op_id 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? 9U : 8U);
                        }
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 0U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
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
                            vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
                            vlSelf->top__DOT__dut__DOT__rs2_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0x14U));
                            vlSelf->top__DOT__dut__DOT__rs1_addr_id 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                            >> 0xfU));
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
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                    }
                }
            } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                    vlSelf->top__DOT__dut__DOT__rd_addr_id 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                    >> 7U));
                    if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                    } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 2U;
                    } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 3U;
                    } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 4U;
                    } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 5U;
                    } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 6U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 7U;
                    } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr_id 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op_id 
                            = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                ? 9U : 8U);
                    }
                    vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                    vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
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
                        vlSelf->top__DOT__dut__DOT__rd_wren_id = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr_id 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_id 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op_id = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 0U;
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
    if ((vlSelf->top__DOT__dut__DOT__rs1_data_ex == vlSelf->top__DOT__dut__DOT__rs2_data_ex)) {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 1U;
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 0U;
        if (((4U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex)) 
             | (5U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel1;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
                            goto __Vlabel2;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
                __Vlabel1: ;
            }
        } else if (((~ (vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel3;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
                            goto __Vlabel4;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))) {
        vlSelf->top__DOT__dut__DOT__alu_data_ex = (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__dut__DOT__operand_a_ex, 
                                                                    (0x1fU 
                                                                     & vlSelf->top__DOT__dut__DOT__operand_b_ex))
                                                      : 
                                                     (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__dut__DOT__operand_b_ex)))));
    } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))) {
        vlSelf->top__DOT__dut__DOT__alu_data_ex = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                     ? 
                                                    (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__dut__DOT__operand_b_ex))
                                                     : 
                                                    (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                     & vlSelf->top__DOT__dut__DOT__operand_b_ex))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                     ? 
                                                    (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                     | vlSelf->top__DOT__dut__DOT__operand_b_ex)
                                                     : 
                                                    (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                     ^ vlSelf->top__DOT__dut__DOT__operand_b_ex)));
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data_ex = 1U;
                            goto __Vlabel5;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data_ex = 0U;
                            goto __Vlabel6;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
                }
                __Vlabel5: ;
            }
        } else if (((~ (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu_data_ex = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__operand_a_ex 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu_data_ex = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data_ex = 1U;
                            goto __Vlabel7;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b_ex 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data_ex = 0U;
                            goto __Vlabel8;
                        }
                        vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel8: ;
                }
                __Vlabel7: ;
            }
        }
    } else {
        vlSelf->top__DOT__dut__DOT__alu_data_ex = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b_ex)))
                                                    : 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                    + vlSelf->top__DOT__dut__DOT__operand_b_ex));
    }
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_mem)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                              >> 2U))]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                              >> 2U))]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff0000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                              >> 2U))]));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff000000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                              >> 2U))]));
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))) {
            vlSelf->top__DOT__dut__DOT__ld_data_mem 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data));
            if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))) {
                vlSelf->top__DOT__dut__DOT__ld_data_mem 
                    = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                       | (0xff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data));
                vlSelf->top__DOT__dut__DOT__ld_data_mem 
                    = ((4U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))
                        ? ((0xffffU & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                           | (0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data))
                        : ((0xffffU & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                           | ((- (IData)(((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                           >> 0xfU) 
                                          & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem) 
                                             >> 3U)))) 
                              << 0x10U)));
            } else {
                vlSelf->top__DOT__dut__DOT__ld_data_mem 
                    = ((0xffU & vlSelf->top__DOT__dut__DOT__ld_data_mem) 
                       | ((- (IData)(((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                       >> 7U) & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem) 
                                                 >> 3U)))) 
                          << 8U));
            }
        } else {
            vlSelf->top__DOT__dut__DOT__ld_data_mem = 0U;
        }
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
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less) 
                     << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal) 
                                << 4U) | (((IData)(vlSelf->top__DOT__dut__DOT__br_op_ex) 
                                           << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__branch_ex))));
    if (Vtop__ConstPool__TABLE_h88d3d1bb_0[__Vtableidx1]) {
        vlSelf->top__DOT__dut__DOT__br_sel_ex = Vtop__ConstPool__TABLE_h878637ed_0
            [__Vtableidx1];
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
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                     << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__rst_reg));
    vlSelf->top__DOT__dut__DOT__enable_if_id = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__enable_id_ex = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__enable_ex_mem = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__enable_mem_wb = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__rst_if_id = Vtop__ConstPool__TABLE_h567da892_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__rst_id_ex = Vtop__ConstPool__TABLE_heee3903f_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__rst_ex_mem = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__rst_mem_wb = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id 
        = vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__nxt_pc_if = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc_if = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__instr_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs1_addr_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rs2_addr_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__pc_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc_four_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__op_a_sel_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_b_sel_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__imm_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__branch_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_op_id = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__br_op_id = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ld_op_id = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__mem_wren_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__is_load_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rd_addr_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__pc_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__op_a_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_b_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__operand_a_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs1_data_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__imm_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__branch_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_op_ex = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__br_op_ex = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__pc_four_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rs2_data_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ld_op_ex = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__mem_wren_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__is_load_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rd_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_sel_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rs2_data_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ld_op_mem = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__mem_wren_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__pc_four_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__is_load_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rd_addr_mem = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ld_data_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc_four_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__is_load_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rd_addr_wb = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ld_data_wb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rst_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__enable_if_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__enable_id_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__enable_ex_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__enable_mem_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rst_if_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rst_id_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rst_ex_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rst_mem_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__hazard_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__rst_wait = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__test0__DOT__instruction[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__pc_if = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    vlSelf->__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0;
    vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
