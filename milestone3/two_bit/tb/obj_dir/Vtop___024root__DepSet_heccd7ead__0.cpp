// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__pc_four_ex;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__mem_wren_ex;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__is_load_ex;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__rd_addr_ex;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__rd_wren_ex;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__is_load_mem;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__rd_addr_mem;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__rd_wren_mem;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__test0__DOT__count_instr;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__test0__DOT__count_clk;
    VlWide<5>/*159:0*/ __Vtemp_h3e10d2e8__0;
    VlWide<5>/*159:0*/ __Vtemp_hb46c61ff__0;
    // Body
    __Vdly__top__DOT__dut__DOT__test0__DOT__count_clk 
        = vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk;
    __Vdly__top__DOT__dut__DOT__test0__DOT__count_instr 
        = vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr;
    vlSelf->__Vdly__top__DOT__dut__DOT__jump_wb = vlSelf->top__DOT__dut__DOT__jump_wb;
    __Vdly__top__DOT__dut__DOT__pc_four_ex = vlSelf->top__DOT__dut__DOT__pc_four_ex;
    __Vdly__top__DOT__dut__DOT__rd_wren_ex = vlSelf->top__DOT__dut__DOT__rd_wren_ex;
    __Vdly__top__DOT__dut__DOT__rd_addr_ex = vlSelf->top__DOT__dut__DOT__rd_addr_ex;
    __Vdly__top__DOT__dut__DOT__is_load_ex = vlSelf->top__DOT__dut__DOT__is_load_ex;
    __Vdly__top__DOT__dut__DOT__mem_wren_ex = vlSelf->top__DOT__dut__DOT__mem_wren_ex;
    vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem = vlSelf->top__DOT__dut__DOT__ld_op_mem;
    vlSelf->__Vdly__top__DOT__dut__DOT__mem_wren_mem 
        = vlSelf->top__DOT__dut__DOT__mem_wren_mem;
    vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb 
        = vlSelf->top__DOT__dut__DOT__pc_four_wb;
    vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem 
        = vlSelf->top__DOT__dut__DOT__st_data_mem;
    vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb 
        = vlSelf->top__DOT__dut__DOT__ld_data_wb;
    vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb 
        = vlSelf->top__DOT__dut__DOT__alu_data_wb;
    vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_mem 
        = vlSelf->top__DOT__dut__DOT__alu_data_mem;
    __Vdly__top__DOT__dut__DOT__rd_wren_mem = vlSelf->top__DOT__dut__DOT__rd_wren_mem;
    __Vdly__top__DOT__dut__DOT__rd_addr_mem = vlSelf->top__DOT__dut__DOT__rd_addr_mem;
    __Vdly__top__DOT__dut__DOT__is_load_mem = vlSelf->top__DOT__dut__DOT__is_load_mem;
    vlSelf->__Vdly__top__DOT__dut__DOT__rd_wren_wb 
        = vlSelf->top__DOT__dut__DOT__rd_wren_wb;
    vlSelf->__Vdly__top__DOT__dut__DOT__is_load_wb 
        = vlSelf->top__DOT__dut__DOT__is_load_wb;
    vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb 
        = vlSelf->top__DOT__dut__DOT__rd_addr_wb;
    if (VL_UNLIKELY(((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0)) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0)))) {
        __Vtemp_h3e10d2e8__0[0U] = 0x64617461U;
        __Vtemp_h3e10d2e8__0[1U] = 0x6174612eU;
        __Vtemp_h3e10d2e8__0[2U] = 0x656d5f64U;
        __Vtemp_h3e10d2e8__0[3U] = 0x656d2f6dU;
        __Vtemp_h3e10d2e8__0[4U] = 0x2e2e2f6dU;
        VL_WRITEMEM_N(true, 32, 512, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h3e10d2e8__0)
                      ,  &(vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data)
                      , 0, ~0ULL);
    }
    __Vtemp_hb46c61ff__0[0U] = 0x64617461U;
    __Vtemp_hb46c61ff__0[1U] = 0x696c652eU;
    __Vtemp_hb46c61ff__0[2U] = 0x72656766U;
    __Vtemp_hb46c61ff__0[3U] = 0x6d656d2fU;
    __Vtemp_hb46c61ff__0[4U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hb46c61ff__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg)
                 , 0, ~0ULL);
    if ((vlSelf->pc_debug_o != vlSelf->top__DOT__dut__DOT__test0__DOT___Vpast_0_0)) {
        __Vdly__top__DOT__dut__DOT__test0__DOT__count_instr 
            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr);
    }
    __Vdly__top__DOT__dut__DOT__test0__DOT__count_clk 
        = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk);
    if (VL_UNLIKELY((1U == vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg
                     [4U]))) {
        VL_WRITEF("Clock: %10#, x11: %10#\n",32,vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk,
                  32,vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr);
    }
    vlSelf->__Vdly__top__DOT__dut__DOT__jump_wb = ((IData)(vlSelf->top__DOT__dut__DOT__rst_mem_wb) 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__enable_mem_wb)
                                                       ? (IData)(vlSelf->top__DOT__dut__DOT__jump_mem)
                                                       : (IData)(vlSelf->top__DOT__dut__DOT__jump_wb)));
    vlSelf->top__DOT__dut__DOT__jump_mem = ((IData)(vlSelf->top__DOT__dut__DOT__rst_ex_mem) 
                                            & ((IData)(vlSelf->top__DOT__dut__DOT__enable_ex_mem)
                                                ? (IData)(vlSelf->top__DOT__dut__DOT__jump_ex)
                                                : (IData)(vlSelf->top__DOT__dut__DOT__jump_mem)));
    __Vdly__top__DOT__dut__DOT__rd_wren_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                              & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                  ? (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_id)
                                                  : (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_ex)));
    __Vdly__top__DOT__dut__DOT__is_load_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                              & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                  ? (IData)(vlSelf->top__DOT__dut__DOT__is_load_id)
                                                  : (IData)(vlSelf->top__DOT__dut__DOT__is_load_ex)));
    __Vdly__top__DOT__dut__DOT__mem_wren_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_id)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_ex)));
    vlSelf->top__DOT__dut__DOT__jump_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                           & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                               ? (IData)(vlSelf->top__DOT__dut__DOT__jump_id)
                                               : (IData)(vlSelf->top__DOT__dut__DOT__jump_ex)));
    vlSelf->__Vdly__top__DOT__dut__DOT__mem_wren_mem 
        = ((IData)(vlSelf->top__DOT__dut__DOT__rst_ex_mem) 
           & ((IData)(vlSelf->top__DOT__dut__DOT__enable_ex_mem)
               ? (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_ex)
               : (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_mem)));
    vlSelf->top__DOT__dut__DOT__op_b_sel_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__op_b_sel_id)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__op_b_sel_ex)));
    vlSelf->top__DOT__dut__DOT__op_a_sel_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__op_a_sel_id)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__op_a_sel_ex)));
    if (vlSelf->top__DOT__dut__DOT__rst_mem_wb) {
        if (vlSelf->top__DOT__dut__DOT__enable_mem_wb) {
            vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb 
                = vlSelf->top__DOT__dut__DOT__pc_four_mem;
            vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb 
                = vlSelf->top__DOT__dut__DOT__ld_data_mem;
            vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb 
                = vlSelf->top__DOT__dut__DOT__alu_data_mem;
            vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb 
                = vlSelf->top__DOT__dut__DOT__rd_addr_mem;
        } else {
            vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb 
                = vlSelf->top__DOT__dut__DOT__pc_four_wb;
            vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb 
                = vlSelf->top__DOT__dut__DOT__ld_data_wb;
            vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb 
                = vlSelf->top__DOT__dut__DOT__alu_data_wb;
            vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb 
                = vlSelf->top__DOT__dut__DOT__rd_addr_wb;
        }
    } else {
        vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb = 0U;
    }
    if (vlSelf->top__DOT__dut__DOT__rst_ex_mem) {
        if (vlSelf->top__DOT__dut__DOT__enable_ex_mem) {
            vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem 
                = vlSelf->top__DOT__dut__DOT__ld_op_ex;
            vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem 
                = ((IData)(vlSelf->top__DOT__dut__DOT__forward_store)
                    ? vlSelf->top__DOT__dut__DOT__forward_data_B
                    : vlSelf->top__DOT__dut__DOT__rs2_data_ex);
        } else {
            vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem 
                = vlSelf->top__DOT__dut__DOT__ld_op_mem;
            vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem 
                = vlSelf->top__DOT__dut__DOT__st_data_mem;
        }
    } else {
        vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem = 0U;
    }
    if (vlSelf->top__DOT__dut__DOT__rst_id_ex) {
        if (vlSelf->top__DOT__dut__DOT__enable_id_ex) {
            __Vdly__top__DOT__dut__DOT__pc_four_ex 
                = vlSelf->top__DOT__dut__DOT__pc_four_id;
            __Vdly__top__DOT__dut__DOT__rd_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rd_addr_id;
            vlSelf->top__DOT__dut__DOT__alu_op_ex = vlSelf->top__DOT__dut__DOT__alu_op_id;
            vlSelf->top__DOT__dut__DOT__pc_ex = vlSelf->top__DOT__dut__DOT__pc_id;
            vlSelf->top__DOT__dut__DOT__imm_ex = vlSelf->top__DOT__dut__DOT__imm_id;
            vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                [vlSelf->top__DOT__dut__DOT__rs1_addr_id];
            vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                [vlSelf->top__DOT__dut__DOT__rs2_addr_id];
            vlSelf->top__DOT__dut__DOT__ld_op_ex = 
                (((3U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_id)) 
                  | (0x23U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_id)))
                  ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                      ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                          ? 0U : ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                   ? 3U : 1U)) : ((0x2000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr_id)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 0U
                                                    : 0xfU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id)
                                                    ? 0xbU
                                                    : 9U)))
                  : 0U);
            vlSelf->top__DOT__dut__DOT__br_op_ex = 
                ((0x63U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_id))
                  ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                      ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                          ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                              ? 5U : 4U) : ((0x1000U 
                                             & vlSelf->top__DOT__dut__DOT__instr_id)
                                             ? 3U : 2U))
                      : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                          ? 0U : ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                   ? 1U : 0U))) : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__dut__DOT__instr_id))
                                                    ? 6U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__dut__DOT__instr_id))
                                                     ? 7U
                                                     : 0U)));
            vlSelf->top__DOT__dut__DOT__instr_ex = vlSelf->top__DOT__dut__DOT__instr_id;
            vlSelf->top__DOT__dut__DOT__rs1_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rs1_addr_id;
            vlSelf->top__DOT__dut__DOT__rs2_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rs2_addr_id;
        } else {
            __Vdly__top__DOT__dut__DOT__pc_four_ex 
                = vlSelf->top__DOT__dut__DOT__pc_four_ex;
            __Vdly__top__DOT__dut__DOT__rd_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rd_addr_ex;
            vlSelf->top__DOT__dut__DOT__alu_op_ex = vlSelf->top__DOT__dut__DOT__alu_op_ex;
            vlSelf->top__DOT__dut__DOT__pc_ex = vlSelf->top__DOT__dut__DOT__pc_ex;
            vlSelf->top__DOT__dut__DOT__imm_ex = vlSelf->top__DOT__dut__DOT__imm_ex;
            vlSelf->top__DOT__dut__DOT__rs1_data_ex 
                = vlSelf->top__DOT__dut__DOT__rs1_data_ex;
            vlSelf->top__DOT__dut__DOT__rs2_data_ex 
                = vlSelf->top__DOT__dut__DOT__rs2_data_ex;
            vlSelf->top__DOT__dut__DOT__ld_op_ex = vlSelf->top__DOT__dut__DOT__ld_op_ex;
            vlSelf->top__DOT__dut__DOT__br_op_ex = vlSelf->top__DOT__dut__DOT__br_op_ex;
            vlSelf->top__DOT__dut__DOT__instr_ex = vlSelf->top__DOT__dut__DOT__instr_ex;
            vlSelf->top__DOT__dut__DOT__rs1_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rs1_addr_ex;
            vlSelf->top__DOT__dut__DOT__rs2_addr_ex 
                = vlSelf->top__DOT__dut__DOT__rs2_addr_ex;
        }
    } else {
        __Vdly__top__DOT__dut__DOT__pc_four_ex = 0U;
        __Vdly__top__DOT__dut__DOT__rd_addr_ex = 0U;
        vlSelf->top__DOT__dut__DOT__alu_op_ex = 0U;
        vlSelf->top__DOT__dut__DOT__pc_ex = 0U;
        vlSelf->top__DOT__dut__DOT__imm_ex = 0U;
        vlSelf->top__DOT__dut__DOT__rs1_data_ex = 0U;
        vlSelf->top__DOT__dut__DOT__rs2_data_ex = 0U;
        vlSelf->top__DOT__dut__DOT__ld_op_ex = 0U;
        vlSelf->top__DOT__dut__DOT__br_op_ex = 0U;
        vlSelf->top__DOT__dut__DOT__instr_ex = 0U;
        vlSelf->top__DOT__dut__DOT__rs1_addr_ex = 0U;
        vlSelf->top__DOT__dut__DOT__rs2_addr_ex = 0U;
    }
    if (vlSelf->top__DOT__dut__DOT__rst_ex_mem) {
        if (vlSelf->top__DOT__dut__DOT__enable_ex_mem) {
            vlSelf->top__DOT__dut__DOT__pc_four_mem 
                = vlSelf->top__DOT__dut__DOT__pc_four_ex;
            vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_mem 
                = vlSelf->top__DOT__dut__DOT__alu_data_ex;
            __Vdly__top__DOT__dut__DOT__rd_addr_mem 
                = vlSelf->top__DOT__dut__DOT__rd_addr_ex;
            vlSelf->top__DOT__dut__DOT__br_sel_mem 
                = vlSelf->top__DOT__dut__DOT__br_sel_ex;
            vlSelf->top__DOT__dut__DOT__branch_mem 
                = vlSelf->top__DOT__dut__DOT__branch_ex;
        } else {
            vlSelf->top__DOT__dut__DOT__pc_four_mem 
                = vlSelf->top__DOT__dut__DOT__pc_four_mem;
            vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_mem 
                = vlSelf->top__DOT__dut__DOT__alu_data_mem;
            __Vdly__top__DOT__dut__DOT__rd_addr_mem 
                = vlSelf->top__DOT__dut__DOT__rd_addr_mem;
            vlSelf->top__DOT__dut__DOT__br_sel_mem 
                = vlSelf->top__DOT__dut__DOT__br_sel_mem;
            vlSelf->top__DOT__dut__DOT__branch_mem 
                = vlSelf->top__DOT__dut__DOT__branch_mem;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__pc_four_mem = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_mem = 0U;
        __Vdly__top__DOT__dut__DOT__rd_addr_mem = 0U;
        vlSelf->top__DOT__dut__DOT__br_sel_mem = 0U;
        vlSelf->top__DOT__dut__DOT__branch_mem = 0U;
    }
    vlSelf->top__DOT__dut__DOT__branch_ex = ((IData)(vlSelf->top__DOT__dut__DOT__rst_id_ex) 
                                             & ((IData)(vlSelf->top__DOT__dut__DOT__enable_id_ex)
                                                 ? (IData)(vlSelf->top__DOT__dut__DOT__branch_id)
                                                 : (IData)(vlSelf->top__DOT__dut__DOT__branch_ex)));
    vlSelf->top__DOT__dut__DOT__hazard_detect_0__DOT__stall_cycle 
        = (7U != (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
    __Vdly__top__DOT__dut__DOT__rd_wren_mem = ((IData)(vlSelf->top__DOT__dut__DOT__rst_ex_mem) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__enable_ex_mem)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_ex)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem)));
    __Vdly__top__DOT__dut__DOT__is_load_mem = ((IData)(vlSelf->top__DOT__dut__DOT__rst_ex_mem) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__enable_ex_mem)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__is_load_ex)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)));
    vlSelf->__Vdly__top__DOT__dut__DOT__rd_wren_wb 
        = ((IData)(vlSelf->top__DOT__dut__DOT__rst_mem_wb) 
           & ((IData)(vlSelf->top__DOT__dut__DOT__enable_mem_wb)
               ? (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem)
               : (IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb)));
    vlSelf->__Vdly__top__DOT__dut__DOT__is_load_wb 
        = ((IData)(vlSelf->top__DOT__dut__DOT__rst_mem_wb) 
           & ((IData)(vlSelf->top__DOT__dut__DOT__enable_mem_wb)
               ? (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)
               : (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)));
    vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr 
        = __Vdly__top__DOT__dut__DOT__test0__DOT__count_instr;
    vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk 
        = __Vdly__top__DOT__dut__DOT__test0__DOT__count_clk;
    vlSelf->top__DOT__dut__DOT__mem_wren_ex = __Vdly__top__DOT__dut__DOT__mem_wren_ex;
    vlSelf->top__DOT__dut__DOT__pc_four_ex = __Vdly__top__DOT__dut__DOT__pc_four_ex;
    vlSelf->top__DOT__dut__DOT__rd_wren_ex = __Vdly__top__DOT__dut__DOT__rd_wren_ex;
    vlSelf->top__DOT__dut__DOT__rd_addr_ex = __Vdly__top__DOT__dut__DOT__rd_addr_ex;
    vlSelf->top__DOT__dut__DOT__is_load_ex = __Vdly__top__DOT__dut__DOT__is_load_ex;
    vlSelf->top__DOT__dut__DOT__rd_wren_mem = __Vdly__top__DOT__dut__DOT__rd_wren_mem;
    vlSelf->top__DOT__dut__DOT__is_load_mem = __Vdly__top__DOT__dut__DOT__is_load_mem;
    vlSelf->top__DOT__dut__DOT__rd_addr_mem = __Vdly__top__DOT__dut__DOT__rd_addr_mem;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0 
        = vlSelf->top__DOT__dut__DOT__mem_wren_mem;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0 
        = vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel;
    vlSelf->top__DOT__dut__DOT__test0__DOT___Vpast_0_0 
        = vlSelf->pc_debug_o;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v2;
    VlWide<5>/*159:0*/ __Vtemp_hb46c61ff__0;
    // Body
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v2 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0U;
    __Vtemp_hb46c61ff__0[0U] = 0x64617461U;
    __Vtemp_hb46c61ff__0[1U] = 0x696c652eU;
    __Vtemp_hb46c61ff__0[2U] = 0x72656766U;
    __Vtemp_hb46c61ff__0[3U] = 0x6d656d2fU;
    __Vtemp_hb46c61ff__0[4U] = 0x2e2e2fU;
    VL_WRITEMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hb46c61ff__0)
                  ,  &(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers)
                  , 0, ~0ULL);
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i = 0xdU;
    }
    __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1 = 0U;
    if (vlSelf->rst_ni) {
        if ((0xcU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
            vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0 
                = vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in;
            if ((0xcU >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
                __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v0 
                    = vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0;
                __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v0 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v0 
                    = vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel;
            }
        } else if ((0xbU != (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
            vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1 
                = vlSelf->top__DOT__dut__DOT__st_data_mem;
            if ((0xcU >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
                __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v1 
                    = vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1;
                __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v1 = 1U;
                __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v1 
                    = vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel;
            }
        }
        if ((0xcU != (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
            if ((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))) {
                if (vlSelf->top__DOT__dut__DOT__mem_wren_mem) {
                    if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))) {
                        __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 
                            = (0xffU & vlSelf->top__DOT__dut__DOT__st_data_mem);
                        __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 1U;
                        __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 
                            = (0x18U & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                        << 3U));
                        __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 
                            = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                         >> 2U));
                    }
                    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))) {
                        __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 
                            = (0xffU & (vlSelf->top__DOT__dut__DOT__st_data_mem 
                                        >> 8U));
                        __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 1U;
                        __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 
                            = (0x1fU & (((3U < ((IData)(1U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(0xfffffffdU) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                          : ((IData)(1U) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
                                        << 3U));
                        __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 
                            = (0x1ffU & ((3U < ((IData)(1U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(1U) 
                                             + (0x1ffU 
                                                & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                   >> 2U)))
                                          : (0x1ffU 
                                             & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                >> 2U))));
                    }
                    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op_mem))) {
                        __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 
                            = (0xffU & (vlSelf->top__DOT__dut__DOT__st_data_mem 
                                        >> 0x10U));
                        __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 1U;
                        __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 
                            = (0x1fU & (((3U < ((IData)(2U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(0xfffffffeU) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                          : ((IData)(2U) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
                                        << 3U));
                        __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 
                            = (0x1ffU & ((3U < ((IData)(2U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(1U) 
                                             + (0x1ffU 
                                                & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                   >> 2U)))
                                          : (0x1ffU 
                                             & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                >> 2U))));
                        __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 
                            = (vlSelf->top__DOT__dut__DOT__st_data_mem 
                               >> 0x18U);
                        __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 1U;
                        __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 
                            = (0x1fU & (((3U < ((IData)(3U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(0xffffffffU) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                          : ((IData)(3U) 
                                             + (3U 
                                                & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
                                        << 3U));
                        __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 
                            = (0x1ffU & ((3U < ((IData)(3U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                          ? ((IData)(1U) 
                                             + (0x1ffU 
                                                & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                   >> 2U)))
                                          : (0x1ffU 
                                             & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                >> 2U))));
                    }
                }
            }
        }
        if (vlSelf->top__DOT__dut__DOT__rd_wren_wb) {
            __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0 
                = ((IData)(vlSelf->top__DOT__dut__DOT__jump_wb)
                    ? vlSelf->top__DOT__dut__DOT__pc_four_wb
                    : ((IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)
                        ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                        : vlSelf->top__DOT__dut__DOT__alu_data_wb));
            __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0 
                = vlSelf->top__DOT__dut__DOT__rd_addr_wb;
        }
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in 
            = vlSelf->io_sw_i;
    } else {
        __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v2 = 1U;
        __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1 = 1U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in = 0U;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v1) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__data_out__v1] 
            = __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__data_out__v1;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__data_out__v2) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[1U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[2U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[3U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[4U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[5U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[6U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[7U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[8U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[9U] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0xaU] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0xbU] = 0U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0xcU] = 0U;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3))) 
                & vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[__Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1) {
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__dut__DOT__pc_if = vlSelf->top__DOT__dut__DOT__pc_if;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__dut__DOT__rst_bit = 1U;
        if (vlSelf->top__DOT__dut__DOT__rst_wait) {
            vlSelf->top__DOT__dut__DOT__rst_wait = 0U;
        } else {
            vlSelf->__Vdly__top__DOT__dut__DOT__pc_if 
                = ((((2U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op))) 
                     | (2U == (3U & ((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                     >> 2U)))) | (7U 
                                                  == (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)))
                    ? vlSelf->top__DOT__dut__DOT__pc_if
                    : vlSelf->top__DOT__dut__DOT__nxt_pc_if);
        }
    } else {
        vlSelf->top__DOT__dut__DOT__rst_bit = 0U;
        vlSelf->__Vdly__top__DOT__dut__DOT__pc_if = 0U;
        vlSelf->top__DOT__dut__DOT__rst_wait = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__btb_0__DOT__mis_hit_time;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__btb_0__DOT__branch_time;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0;
    IData/*31:0*/ __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1;
    IData/*31:0*/ __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1;
    IData/*23:0*/ __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2;
    IData/*31:0*/ __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2;
    CData/*1:0*/ __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2;
    // Body
    __Vdly__top__DOT__dut__DOT__btb_0__DOT__branch_time 
        = vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time;
    __Vdly__top__DOT__dut__DOT__btb_0__DOT__mis_hit_time 
        = vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time;
    __Vdlyvset__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0 = 0U;
    if (vlSelf->top__DOT__dut__DOT__mis_hit) {
        __Vdly__top__DOT__dut__DOT__btb_0__DOT__mis_hit_time 
            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time);
    }
    if (vlSelf->top__DOT__dut__DOT__branch_id) {
        __Vdly__top__DOT__dut__DOT__btb_0__DOT__branch_time 
            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time);
    }
    VL_WRITEF("pc_if: %x, branch_time : %11d, mis_hit_time : %11d, wrong_percent: %11d %%\n",
              32,vlSelf->top__DOT__dut__DOT__pc_if,
              32,vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time,
              32,vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time,
              32,vlSelf->top__DOT__dut__DOT__btb_0__DOT__wrong_percent);
    if (vlSelf->top__DOT__dut__DOT__enable_ex_mem) {
        if (vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_mem_past) {
            __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0 
                = vlSelf->top__DOT__dut__DOT__btb_0__DOT__alu_data_mem_past;
            __Vdlyvset__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0 = 0U;
            __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0 
                = vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past;
            __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1 
                = vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem_past;
            __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1 = 0x20U;
            __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1 
                = vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past;
            __Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2 
                = ((IData)(vlSelf->top__DOT__dut__DOT__btb_0__DOT__br_sel_mem_past)
                    ? ((1U & (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                      [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past] 
                                      >> 0x39U))) ? 3U
                        : ((1U & (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                          [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past] 
                                          >> 0x38U)))
                            ? 2U : 1U)) : ((1U & (IData)(
                                                         (vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                                          [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past] 
                                                          >> 0x39U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                                           [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past] 
                                                           >> 0x38U)))
                                                ? 2U
                                                : 1U)
                                            : 0U));
            __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2 = 0x38U;
            __Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2 
                = vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past;
        }
    }
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time 
        = __Vdly__top__DOT__dut__DOT__btb_0__DOT__mis_hit_time;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time 
        = __Vdly__top__DOT__dut__DOT__btb_0__DOT__branch_time;
    if (__Vdlyvset__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0) {
        vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB[__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0] 
            = (((~ (0xffffffffULL << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0)) 
                & vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                [__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0]) 
               | (0x3ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0)) 
                                          << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v0)));
        vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB[__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1] 
            = (((~ (0xffffffULL << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1)) 
                & vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                [__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1]) 
               | (0x3ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1)) 
                                          << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v1)));
        vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB[__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2] 
            = (((~ (3ULL << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2)) 
                & vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                [__Vdlyvdim0__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2]) 
               | (0x3ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2)) 
                                          << __Vdlyvlsb__top__DOT__dut__DOT__btb_0__DOT__myBTB__v2)));
    }
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__wrong_percent 
        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time), vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time);
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past 
        = vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem_past 
        = vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_mem_past 
        = vlSelf->top__DOT__dut__DOT__branch_mem;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__br_sel_mem_past 
        = vlSelf->top__DOT__dut__DOT__br_sel_mem;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__alu_data_mem_past 
        = vlSelf->top__DOT__dut__DOT__alu_data_mem;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->top__DOT__dut__DOT__rst_if_id) {
        if (vlSelf->top__DOT__dut__DOT__enable_if_id) {
            vlSelf->top__DOT__dut__DOT__pc_four_id 
                = ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if);
            vlSelf->top__DOT__dut__DOT__pc_id = vlSelf->top__DOT__dut__DOT__pc_if;
            vlSelf->top__DOT__dut__DOT__instr_id = 
                vlSelf->top__DOT__dut__DOT__test0__DOT__instruction
                [(0x3ffU & (vlSelf->pc_debug_o >> 2U))];
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
    vlSelf->top__DOT__dut__DOT__jump_id = ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__dut__DOT__instr_id)) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__dut__DOT__instr_id)));
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
    vlSelf->top__DOT__dut__DOT__branch_id = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__dut__DOT__instr_id)) 
                                             | ((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__dut__DOT__instr_id)) 
                                                | (0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__dut__DOT__instr_id))));
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
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_id)) {
                        vlSelf->top__DOT__dut__DOT__op_a_sel_id = 1U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel_id = 1U;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__st_data_mem = vlSelf->__Vdly__top__DOT__dut__DOT__st_data_mem;
    vlSelf->top__DOT__dut__DOT__ld_op_mem = vlSelf->__Vdly__top__DOT__dut__DOT__ld_op_mem;
    vlSelf->top__DOT__dut__DOT__mem_wren_mem = vlSelf->__Vdly__top__DOT__dut__DOT__mem_wren_mem;
    vlSelf->top__DOT__dut__DOT__alu_data_mem = vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_mem;
    vlSelf->top__DOT__dut__DOT__jump_wb = vlSelf->__Vdly__top__DOT__dut__DOT__jump_wb;
    vlSelf->top__DOT__dut__DOT__pc_four_wb = vlSelf->__Vdly__top__DOT__dut__DOT__pc_four_wb;
    vlSelf->top__DOT__dut__DOT__ld_data_wb = vlSelf->__Vdly__top__DOT__dut__DOT__ld_data_wb;
    vlSelf->top__DOT__dut__DOT__alu_data_wb = vlSelf->__Vdly__top__DOT__dut__DOT__alu_data_wb;
    vlSelf->top__DOT__dut__DOT__rd_wren_wb = vlSelf->__Vdly__top__DOT__dut__DOT__rd_wren_wb;
    vlSelf->top__DOT__dut__DOT__is_load_wb = vlSelf->__Vdly__top__DOT__dut__DOT__is_load_wb;
    vlSelf->top__DOT__dut__DOT__rd_addr_wb = vlSelf->__Vdly__top__DOT__dut__DOT__rd_addr_wb;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__pc_if = vlSelf->__Vdly__top__DOT__dut__DOT__pc_if;
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc_if;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__hazard_op = 0U;
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
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (8U | (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                     & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb))) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (4U | (0x33U & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs2_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x20U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0xcU | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
        }
        if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
               & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
              & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem))) 
             & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_mem) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem))) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__is_load_mem)) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_mem) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (2U | (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                     & (~ (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb))) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (1U | (0x3cU & (IData)(vlSelf->top__DOT__dut__DOT__hazard_op)));
        } else if (((((IData)(vlSelf->top__DOT__dut__DOT__rd_wren_wb) 
                      & (0U != (IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb))) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)) 
                    & ((IData)(vlSelf->top__DOT__dut__DOT__rd_addr_wb) 
                       == (IData)(vlSelf->top__DOT__dut__DOT__rs1_addr_ex)))) {
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (0x10U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
            vlSelf->top__DOT__dut__DOT__hazard_op = 
                (3U | (IData)(vlSelf->top__DOT__dut__DOT__hazard_op));
        }
    }
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Body
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren_mem)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                           [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                       >> 2U))] >> 
                           (0x18U & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                     << 3U)))));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff00U & ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                              [(0x1ffU & ((3U < ((IData)(1U) 
                                                 + 
                                                 (3U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                           ? ((IData)(1U) 
                                              + (0x1ffU 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                    >> 2U)))
                                           : (0x1ffU 
                                              & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                 >> 2U))))] 
                              >> (0x1fU & (((3U < ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                             ? ((IData)(0xfffffffdU) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                             : ((IData)(1U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
                                           << 3U))) 
                             << 8U)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (0xff0000U & ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                                [(0x1ffU & ((3U < ((IData)(2U) 
                                                   + 
                                                   (3U 
                                                    & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                             ? ((IData)(1U) 
                                                + (0x1ffU 
                                                   & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                      >> 2U)))
                                             : (0x1ffU 
                                                & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                   >> 2U))))] 
                                >> (0x1fU & (((3U < 
                                               ((IData)(2U) 
                                                + (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                               ? ((IData)(0xfffffffeU) 
                                                  + 
                                                  (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                               : ((IData)(2U) 
                                                  + 
                                                  (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
                                             << 3U))) 
                               << 0x10U)));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | ((vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                   [(0x1ffU & ((3U < ((IData)(3U) + 
                                      (3U & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                ? ((IData)(1U) + (0x1ffU 
                                                  & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                                     >> 2U)))
                                : (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                             >> 2U))))] 
                   >> (0x1fU & (((3U < ((IData)(3U) 
                                        + (3U & vlSelf->top__DOT__dut__DOT__alu_data_mem)))
                                  ? ((IData)(0xffffffffU) 
                                     + (3U & vlSelf->top__DOT__dut__DOT__alu_data_mem))
                                  : ((IData)(3U) + 
                                     (3U & vlSelf->top__DOT__dut__DOT__alu_data_mem))) 
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
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hbf58790a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h00ef71c8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h47ecf121_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h7053f758_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hf2ac064a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hd89f2c00_0;

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__dut__DOT__predicted_pc = 0U;
    vlSelf->top__DOT__dut__DOT__hit = 0U;
    vlSelf->top__DOT__dut__DOT__mis_hit = 0U;
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if 
        = (0x3fU & (vlSelf->top__DOT__dut__DOT__pc_if 
                    >> 2U));
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_if 
        = (vlSelf->top__DOT__dut__DOT__pc_if >> 8U);
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__pc_mem 
        = (vlSelf->top__DOT__dut__DOT__pc_four_mem 
           - (IData)(4U));
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem 
        = (0x3fU & (vlSelf->top__DOT__dut__DOT__btb_0__DOT__pc_mem 
                    >> 2U));
    vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem 
        = (vlSelf->top__DOT__dut__DOT__btb_0__DOT__pc_mem 
           >> 8U);
    if ((((IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem) 
          & ((IData)(vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                     [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem]) 
             == vlSelf->top__DOT__dut__DOT__alu_data_mem)) 
         & (~ (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                       [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem] 
                       >> 0x39U))))) {
        vlSelf->top__DOT__dut__DOT__mis_hit = 1U;
        vlSelf->top__DOT__dut__DOT__hit = 1U;
        vlSelf->top__DOT__dut__DOT__predicted_pc = vlSelf->top__DOT__dut__DOT__alu_data_mem;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem) 
         & ((IData)(vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                    [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem]) 
            != vlSelf->top__DOT__dut__DOT__alu_data_mem))) {
        vlSelf->top__DOT__dut__DOT__mis_hit = 1U;
        vlSelf->top__DOT__dut__DOT__hit = 1U;
        vlSelf->top__DOT__dut__DOT__predicted_pc = vlSelf->top__DOT__dut__DOT__alu_data_mem;
    } else if (((((IData)(vlSelf->top__DOT__dut__DOT__branch_mem) 
                  & (~ (IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem))) 
                 & (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                            [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem] 
                            >> 0x39U))) & ((IData)(
                                                   vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                                   [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem]) 
                                           != vlSelf->top__DOT__dut__DOT__pc_four_mem))) {
        vlSelf->top__DOT__dut__DOT__mis_hit = 1U;
        vlSelf->top__DOT__dut__DOT__hit = 1U;
        vlSelf->top__DOT__dut__DOT__predicted_pc = vlSelf->top__DOT__dut__DOT__pc_four_mem;
    } else if (((((IData)(vlSelf->top__DOT__dut__DOT__branch_id) 
                  & (vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_if 
                     == (0xffffffU & (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                              [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if] 
                                              >> 0x20U))))) 
                 & (0U != (IData)(vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                  [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if]))) 
                & (IData)((vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                           [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if] 
                           >> 0x39U)))) {
        vlSelf->top__DOT__dut__DOT__hit = 1U;
        vlSelf->top__DOT__dut__DOT__predicted_pc = (IData)(
                                                           vlSelf->top__DOT__dut__DOT__btb_0__DOT__myBTB
                                                           [vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if]);
    }
    vlSelf->top__DOT__dut__DOT__nxt_pc_if = ((IData)(vlSelf->top__DOT__dut__DOT__hit)
                                              ? vlSelf->top__DOT__dut__DOT__predicted_pc
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__dut__DOT__pc_if));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__mis_hit) 
                     << 7U) | (((IData)(vlSelf->top__DOT__dut__DOT__hazard_op) 
                                << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__rst_bit)));
    vlSelf->top__DOT__dut__DOT__enable_if_id = Vtop__ConstPool__TABLE_hbf58790a_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_id_ex = Vtop__ConstPool__TABLE_h00ef71c8_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_ex_mem = Vtop__ConstPool__TABLE_h00ef71c8_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__enable_mem_wb = Vtop__ConstPool__TABLE_h47ecf121_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_if_id = Vtop__ConstPool__TABLE_h7053f758_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_id_ex = Vtop__ConstPool__TABLE_hf2ac064a_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_ex_mem = Vtop__ConstPool__TABLE_hd89f2c00_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__rst_mem_wb = Vtop__ConstPool__TABLE_h7053f758_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i)) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i)) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)))) {
        Vtop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    if (((((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->__Vclklast__TOP__clk_i)) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id)))) {
        Vtop___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
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
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__rst_if_id ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_if_id))) VL_DBG_MSGF("        CHANGE: ../src/singlecycle.sv:113: top.dut.rst_if_id\n"); );
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
