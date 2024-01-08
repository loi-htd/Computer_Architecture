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
    vlSelf->top__DOT__dut__DOT__hazard_detect_0__DOT__stall_cycle = 1U;
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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4fac1e7e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_haf86b389_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h2062498f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hd09a6972_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h1a4609e7_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__dut__DOT__alu_op_id = ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__dut__DOT__instr_id))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__dut__DOT__instr_id)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 6U
                                                    : 5U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 9U
                                                     : 8U)
                                                    : 4U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 7U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 1U
                                                     : 0U))))
                                              : ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 6U
                                                     : 5U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id)
                                                      ? 9U
                                                      : 8U)
                                                     : 4U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id)
                                                     ? 7U
                                                     : 0U)))
                                                  : 0U));
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
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor 
        = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                     >> 2U));
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder 
        = (3U & vlSelf->top__DOT__dut__DOT__alu_data_mem);
    if ((3U < ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_1 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_1 
            = (3U & ((IData)(0xfffffffdU) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    } else {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_1 
            = (0x1ffU & (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_1 
            = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    }
    if ((3U < ((IData)(2U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_2 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_2 
            = (3U & ((IData)(0xfffffffeU) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    } else {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_2 
            = (0x1ffU & (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_2 
            = (3U & ((IData)(2U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    }
    if ((3U < ((IData)(3U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_3 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_3 
            = (3U & ((IData)(0xffffffffU) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    } else {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_3 
            = (0x1ffU & (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_3 
            = (3U & ((IData)(3U) + (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder)));
    }
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
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc_if;
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_mem)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                           [vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor] 
                           >> (0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder) 
                                        << 3U)))));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff00U & ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                              [vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_1] 
                              >> (0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_1) 
                                           << 3U))) 
                             << 8U)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff0000U & ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                                [vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_2] 
                                >> (0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_2) 
                                             << 3U))) 
                               << 0x10U)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                   [vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_3] 
                   >> (0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_3) 
                                << 3U))) << 0x18U));
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
    vlSelf->top__DOT__dut__DOT__hazard_op = 0U;
    if (vlSelf->top__DOT__dut__DOT__br_sel_mem) {
        vlSelf->top__DOT__dut__DOT__nxt_pc_if = vlSelf->top__DOT__dut__DOT__alu_data_mem;
        vlSelf->top__DOT__dut__DOT__hazard_op = 0xfU;
    } else {
        vlSelf->top__DOT__dut__DOT__nxt_pc_if = ((IData)(4U) 
                                                 + vlSelf->top__DOT__dut__DOT__pc_if);
        if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
               & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
              & (IData)(vlSelf->top__DOT__dut__DOT__hazard_detect_0__DOT__stall_cycle)) 
             & (((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                 == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_id)) 
                | ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                   == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_id))))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 7U;
        } else {
            if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                   & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                  & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem))) 
                 & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                         & (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (8U | (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                         & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb))) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (4U | (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                         & (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0xcU | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            }
            if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                   & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                  & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem))) 
                 & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                    == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                         & (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (2U | (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                         & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb))) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (1U | (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
            } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                          & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                         & (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)) 
                        & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                           == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
                vlSelf->top__DOT__dut__DOT__hazard_op 
                    = (3U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                     << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__rst_reg));
    vlSelf->top__DOT__dut__DOT__enable_if_id = Vtop__ConstPool__TABLE_h4fac1e7e_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_id_ex = Vtop__ConstPool__TABLE_h4fac1e7e_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_ex_mem = Vtop__ConstPool__TABLE_h4fac1e7e_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_mem_wb = Vtop__ConstPool__TABLE_haf86b389_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_if_id = Vtop__ConstPool__TABLE_h2062498f_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_id_ex = Vtop__ConstPool__TABLE_h2062498f_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_ex_mem = Vtop__ConstPool__TABLE_hd09a6972_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_mem_wb = Vtop__ConstPool__TABLE_h1a4609e7_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__forward_A = (1U & (
                                                   (~ 
                                                    (((0U 
                                                       == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)) 
                                                      | (0xfU 
                                                         == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op))) 
                                                     | (7U 
                                                        == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))) 
                                                   & (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                                       >> 4U) 
                                                      & (~ (IData)(vlSelf->top__DOT__dut__DOT__branch_ex)))));
    vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st 
        = ((0x23U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_ex))
            ? 1U : 0U);
    if ((((0U == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)) 
          | (0xfU == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op))) 
         | (7U == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))) {
        vlSelf->top__DOT__dut__DOT__forward_B = 0U;
        vlSelf->top__DOT__dut__DOT__forward_store = 0U;
        vlSelf->top__DOT__dut__DOT__forward_cmp_A = 0U;
        vlSelf->top__DOT__dut__DOT__forward_cmp_B = 0U;
        vlSelf->top__DOT__dut__DOT__alu_ld_B = 0U;
        vlSelf->top__DOT__dut__DOT__alu_ld_A = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__forward_store = 
            (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
              >> 5U) & (IData)(vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st));
        vlSelf->top__DOT__dut__DOT__forward_B = (IData)(
                                                        ((((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                                           >> 5U) 
                                                          & (~ (IData)(vlSelf->top__DOT__dut__DOT__branch_ex))) 
                                                         & (~ (IData)(vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st))));
        vlSelf->top__DOT__dut__DOT__forward_cmp_A = 
            ((((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
               >> 4U) & (IData)(vlSelf->top__DOT__dut__DOT__branch_ex)) 
             & (~ (IData)(vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st)));
        vlSelf->top__DOT__dut__DOT__forward_cmp_B = 
            ((((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
               >> 5U) & (IData)(vlSelf->top__DOT__dut__DOT__branch_ex)) 
             & (~ (IData)(vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st)));
        vlSelf->top__DOT__dut__DOT__alu_ld_B = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                                      >> 2U)))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                                       >> 2U)))
                                                   ? 3U
                                                   : 0U)));
        vlSelf->top__DOT__dut__DOT__alu_ld_A = ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))
                                                   ? 3U
                                                   : 0U)));
    }
    vlSelf->top__DOT__dut__DOT__forward_data_B = ((1U 
                                                   == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_B))
                                                   ? vlSelf->top__DOT__dut__DOT__alu_data_mem
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_B))
                                                    ? vlSelf->top__DOT__dut__DOT__alu_data_wb
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_B))
                                                     ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                                     : 0U)));
    vlSelf->top__DOT__dut__DOT__forward_data_A = ((1U 
                                                   == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_A))
                                                   ? vlSelf->top__DOT__dut__DOT__alu_data_mem
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_A))
                                                    ? vlSelf->top__DOT__dut__DOT__alu_data_wb
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__alu_ld_A))
                                                     ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                                     : 0U)));
    vlSelf->top__DOT__dut__DOT__operand_b_ex = ((IData)(vlSelf->top__DOT__dut__DOT__forward_B)
                                                 ? vlSelf->top__DOT__dut__DOT__forward_data_B
                                                 : 
                                                ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel_ex)
                                                  ? vlSelf->top__DOT__dut__DOT__imm_ex
                                                  : vlSelf->top__DOT__dut__DOT__rs2_data_ex));
    vlSelf->top__DOT__dut__DOT__cmp_b = ((IData)(vlSelf->top__DOT__dut__DOT__forward_cmp_B)
                                          ? vlSelf->top__DOT__dut__DOT__forward_data_B
                                          : vlSelf->top__DOT__dut__DOT__rs2_data_ex);
    vlSelf->top__DOT__dut__DOT__operand_a_ex = ((IData)(vlSelf->top__DOT__dut__DOT__forward_A)
                                                 ? vlSelf->top__DOT__dut__DOT__forward_data_A
                                                 : 
                                                ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel_ex)
                                                  ? vlSelf->top__DOT__dut__DOT__pc_ex
                                                  : vlSelf->top__DOT__dut__DOT__rs1_data_ex));
    vlSelf->top__DOT__dut__DOT__cmp_a = ((IData)(vlSelf->top__DOT__dut__DOT__forward_cmp_A)
                                          ? vlSelf->top__DOT__dut__DOT__forward_data_A
                                          : vlSelf->top__DOT__dut__DOT__rs1_data_ex);
    vlSelf->top__DOT__dut__DOT__alu_data_ex = ((8U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                ? (
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
                                                       & vlSelf->top__DOT__dut__DOT__operand_b_ex)))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                    ? 
                                                   ((2U 
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
                                                      ^ vlSelf->top__DOT__dut__DOT__operand_b_ex)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                      ? 
                                                     ((vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                       < vlSelf->top__DOT__dut__DOT__operand_b_ex)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__operand_a_ex, vlSelf->top__DOT__dut__DOT__operand_b_ex)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT__alu_op_ex))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                       + 
                                                       (~ vlSelf->top__DOT__dut__DOT__operand_b_ex)))
                                                      : 
                                                     (vlSelf->top__DOT__dut__DOT__operand_a_ex 
                                                      + vlSelf->top__DOT__dut__DOT__operand_b_ex)))));
    vlSelf->top__DOT__dut__DOT__br_sel_ex = 0U;
    if (vlSelf->top__DOT__dut__DOT__branch_ex) {
        if (((((((((0U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex)) 
                   | (1U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
                  | (2U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
                 | (3U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
                | (4U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
               | (5U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
              | (6U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) 
             | (7U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex)))) {
            if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if ((vlSelf->top__DOT__dut__DOT__cmp_a 
                     == vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if ((vlSelf->top__DOT__dut__DOT__cmp_a 
                     != vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if ((vlSelf->top__DOT__dut__DOT__cmp_a 
                     < vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if ((vlSelf->top__DOT__dut__DOT__cmp_a 
                     >= vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else if ((4U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__cmp_a, vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else if ((5U == (IData)(vlSelf->top__DOT__dut__DOT__br_op_ex))) {
                if (VL_GTES_III(32, vlSelf->top__DOT__dut__DOT__cmp_a, vlSelf->top__DOT__dut__DOT__cmp_b)) {
                    vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__br_sel_ex = 1U;
            }
        }
    } else {
        vlSelf->top__DOT__dut__DOT__br_sel_ex = 0U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
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
    vlSelf->top__DOT__dut__DOT__mem_wren_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__is_load_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__jump_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rd_addr_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rd_wren_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__instr_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs1_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__rs2_addr_ex = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__hazard_op = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__alu_ld_A = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__alu_ld_B = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__forward_A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__forward_B = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__forward_cmp_A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__forward_cmp_B = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__forward_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__cmp_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__cmp_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__st_data_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__forward_data_A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__forward_data_B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rst_wait = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_1 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_2 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__a_divisor_3 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__b_remainder_3 = VL_RAND_RESET_I(2);
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
    vlSelf->top__DOT__dut__DOT__hazard_detect_0__DOT__stall_cycle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__test0__DOT__instruction[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__test0__DOT___Vpast_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__pc_if = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__mem_wren_mem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__top__DOT__dut__DOT__jump_wb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__dut__DOT__is_load_wb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__dut__DOT__rd_wren_wb = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
