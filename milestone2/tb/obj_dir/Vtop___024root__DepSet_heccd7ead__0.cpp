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
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1;
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
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 0U;
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 0U;
    vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i = 0xdU;
    }
    __Vtemp_hb46c61ff__0[0U] = 0x64617461U;
    __Vtemp_hb46c61ff__0[1U] = 0x696c652eU;
    __Vtemp_hb46c61ff__0[2U] = 0x72656766U;
    __Vtemp_hb46c61ff__0[3U] = 0x6d656d2fU;
    __Vtemp_hb46c61ff__0[4U] = 0x2e2e2fU;
    VL_WRITEMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hb46c61ff__0)
                  ,  &(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers)
                  , 0, ~0ULL);
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
                = vlSelf->top__DOT__dut__DOT__rs2_data;
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
                if (vlSelf->top__DOT__dut__DOT__mem_wren) {
                    if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))) {
                        vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 
                            = (0xffU & vlSelf->top__DOT__dut__DOT__rs2_data);
                        vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 = 1U;
                        vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0 
                            = (0x7ffU & vlSelf->top__DOT__dut__DOT__alu_data);
                    }
                    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))) {
                        vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 
                            = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                        >> 8U));
                        vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 = 1U;
                        vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1 
                            = (0x7ffU & ((IData)(1U) 
                                         + vlSelf->top__DOT__dut__DOT__alu_data));
                    }
                    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))) {
                        vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 
                            = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                        >> 0x10U));
                        vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 = 1U;
                        vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2 
                            = (0x7ffU & ((IData)(2U) 
                                         + vlSelf->top__DOT__dut__DOT__alu_data));
                        vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 
                            = (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 0x18U);
                        vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 = 1U;
                        vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3 
                            = (0x7ffU & ((IData)(3U) 
                                         + vlSelf->top__DOT__dut__DOT__alu_data));
                    }
                }
            }
        }
        if (vlSelf->top__DOT__dut__DOT__rd_wren) {
            __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0 
                = ((IData)(vlSelf->top__DOT__dut__DOT__jump)
                    ? ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc)
                    : ((IData)(vlSelf->top__DOT__dut__DOT__is_load)
                        ? vlSelf->top__DOT__dut__DOT__ld_data
                        : vlSelf->top__DOT__dut__DOT__alu_data));
            __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0 
                = vlSelf->top__DOT__dut__DOT__rd_addr;
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h3e10d2e8__0;
    VlWide<5>/*159:0*/ __Vtemp_h3e10d2e8__1;
    // Body
    if (VL_UNLIKELY(((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0)) 
                     & (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0)))) {
        __Vtemp_h3e10d2e8__0[0U] = 0x64617461U;
        __Vtemp_h3e10d2e8__0[1U] = 0x6174612eU;
        __Vtemp_h3e10d2e8__0[2U] = 0x656d5f64U;
        __Vtemp_h3e10d2e8__0[3U] = 0x656d2f6dU;
        __Vtemp_h3e10d2e8__0[4U] = 0x2e2e2f6dU;
        VL_WRITEMEM_N(true, 8, 2048, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h3e10d2e8__0)
                      ,  &(vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data)
                      , 0, ~0ULL);
    }
    if (VL_UNLIKELY((0x15U == (vlSelf->pc_debug_o >> 2U)))) {
        __Vtemp_h3e10d2e8__1[0U] = 0x64617461U;
        __Vtemp_h3e10d2e8__1[1U] = 0x6174612eU;
        __Vtemp_h3e10d2e8__1[2U] = 0x656d5f64U;
        __Vtemp_h3e10d2e8__1[3U] = 0x656d2f6dU;
        __Vtemp_h3e10d2e8__1[4U] = 0x2e2e2f6dU;
        VL_READMEM_N(true, 8, 2048, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h3e10d2e8__1)
                     ,  &(vlSelf->top__DOT__dut__DOT__test0__DOT__data_mem)
                     , 0, ~0ULL);
        if ((0x47U == ((vlSelf->top__DOT__dut__DOT__test0__DOT__data_mem
                        [0x57U] << 0x18U) | ((vlSelf->top__DOT__dut__DOT__test0__DOT__data_mem
                                              [0x56U] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__dut__DOT__test0__DOT__data_mem
                                                 [0x55U] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__dut__DOT__test0__DOT__data_mem
                                                [0x54U]))))) {
            VL_WRITEF("--------------PASS--------------\n");
        } else {
            VL_WRITEF("--------------FAIL--------------\n");
        }
    }
    VL_WRITEF("%x %x  %x\n",12,(0xfffU & vlSelf->top__DOT__dut__DOT__pc),
              12,(0xfffU & ((IData)(vlSelf->top__DOT__dut__DOT__br_sel)
                             ? vlSelf->top__DOT__dut__DOT__alu_data
                             : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc))),
              32,vlSelf->top__DOT__dut__DOT__instr_debug_i);
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0 
        = vlSelf->top__DOT__dut__DOT__mem_wren;
    vlSelf->top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0 
        = vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h88d3d1bb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h878637ed_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0] 
            = vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1] 
            = vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2] 
            = vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    }
    if (vlSelf->__Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data[vlSelf->__Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3] 
            = vlSelf->__Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
    }
    vlSelf->top__DOT__dut__DOT__pc = ((IData)(vlSelf->rst_ni)
                                       ? vlSelf->top__DOT__dut__DOT__nxt_pc
                                       : 0U);
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc;
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
    vlSelf->top__DOT__dut__DOT__rd_wren = 0U;
    vlSelf->top__DOT__dut__DOT__is_load = 0U;
    vlSelf->top__DOT__dut__DOT__rd_addr = 0U;
    vlSelf->top__DOT__dut__DOT__jump = 0U;
    vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
    vlSelf->top__DOT__dut__DOT__ld_op = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                                vlSelf->top__DOT__dut__DOT__is_load = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                                vlSelf->top__DOT__dut__DOT__mem_wren = 1U;
                                vlSelf->top__DOT__dut__DOT__ld_op 
                                    = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                             ? 3U : 1U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                ? 0U
                                                : 0xfU)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                ? 0xbU
                                                : 9U)));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__ld_op 
                                = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                    ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                 ? 3U
                                                 : 1U))
                                    : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? 0U : 0xfU)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? 0xbU : 9U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__branch = 0U;
    vlSelf->top__DOT__dut__DOT__alu_op = 0U;
    vlSelf->top__DOT__dut__DOT__br_op = 0U;
    vlSelf->top__DOT__dut__DOT__op_b_sel = 0U;
    vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
    vlSelf->top__DOT__dut__DOT__rs2_addr = 0U;
    vlSelf->top__DOT__dut__DOT__rs1_addr = 0U;
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                                vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                                vlSelf->top__DOT__dut__DOT__rd_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                >> 7U));
                                vlSelf->top__DOT__dut__DOT__jump = 1U;
                                vlSelf->top__DOT__dut__DOT__branch = 1U;
                                vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                                vlSelf->top__DOT__dut__DOT__br_op = 6U;
                                vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                                vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__jump = 1U;
                            vlSelf->top__DOT__dut__DOT__branch = 1U;
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__br_op = 7U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        vlSelf->top__DOT__dut__DOT__jump = 0U;
                        vlSelf->top__DOT__dut__DOT__branch = 1U;
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__br_op 
                            = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                    ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                        ? 5U : 4U) : 
                                   ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                     ? 3U : 2U)) : 
                               ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                 ? 0U : ((0x1000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                          ? 1U : 0U)));
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                                vlSelf->top__DOT__dut__DOT__rs2_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                >> 0x14U));
                            }
                        }
                    }
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                                vlSelf->top__DOT__dut__DOT__rs1_addr 
                                    = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__rs1_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 0xfU));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((0x10U 
                                                & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__dut__DOT__instr_debug_i) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))));
        } else {
            vlSelf->top__DOT__dut__DOT__imm = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
        if ((0x10U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 7U));
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__rs1_addr = 0U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 7U));
                        if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                    ? 1U : 0U);
                        } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 2U;
                        } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 3U;
                        } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 4U;
                        } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 5U;
                        } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 6U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 7U;
                        } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__dut__DOT__alu_op 
                                = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                    ? 9U : 8U);
                        }
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 0xfU));
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__rs2_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 0x14U));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((8U 
                                                & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U));
        } else {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__rs2_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 0x14U));
                            vlSelf->top__DOT__dut__DOT__rs1_addr 
                                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                            >> 0xfU));
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((8U 
                                                & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U)));
        }
    } else if ((0x10U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                      >> 3U)))) {
            if ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                    }
                }
            } else if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                    vlSelf->top__DOT__dut__DOT__rd_addr 
                        = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                    >> 7U));
                    if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                    } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 2U;
                    } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 3U;
                    } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 4U;
                    } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 5U;
                    } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 6U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op = 7U;
                    } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__dut__DOT__alu_op 
                            = ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                ? 9U : 8U);
                    }
                    vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                    vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm = ((8U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? 0U : 
                                           ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                             ? ((2U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                  : 0U)
                                                 : 0U)
                                             : ((2U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7ffU 
                                                     & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                        >> 0x14U)))
                                                  : 0U)
                                                 : 0U)));
    } else {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr_debug_i)) {
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__rd_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 7U));
                        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__rs1_addr 
                            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                        >> 0xfU));
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm = ((8U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                            ? 0U : 
                                           ((4U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                             ? 0U : 
                                            ((2U & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                              ? ((1U 
                                                  & vlSelf->top__DOT__dut__DOT__instr_debug_i)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                               >> 0x1fU))) 
                                                   << 0xbU) 
                                                  | (0x7ffU 
                                                     & (vlSelf->top__DOT__dut__DOT__instr_debug_i 
                                                        >> 0x14U)))
                                                  : 0U)
                                              : 0U)));
    }
    vlSelf->top__DOT__dut__DOT__rs2_data = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
        [vlSelf->top__DOT__dut__DOT__rs2_addr];
    vlSelf->top__DOT__dut__DOT__rs1_data = vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
        [vlSelf->top__DOT__dut__DOT__rs1_addr];
    vlSelf->top__DOT__dut__DOT__operand_b = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel)
                                              ? vlSelf->top__DOT__dut__DOT__imm
                                              : vlSelf->top__DOT__dut__DOT__rs2_data);
    if ((vlSelf->top__DOT__dut__DOT__rs1_data == vlSelf->top__DOT__dut__DOT__rs2_data)) {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 1U;
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal = 0U;
        if (((4U == (IData)(vlSelf->top__DOT__dut__DOT__br_op)) 
             | (5U == (IData)(vlSelf->top__DOT__dut__DOT__br_op)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel1;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
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
        } else if (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__rs1_data 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less = 1U;
                            goto __Vlabel3;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
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
    vlSelf->top__DOT__dut__DOT__operand_a = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel)
                                              ? vlSelf->top__DOT__dut__DOT__pc
                                              : vlSelf->top__DOT__dut__DOT__rs1_data);
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less) 
                     << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal) 
                                << 4U) | (((IData)(vlSelf->top__DOT__dut__DOT__br_op) 
                                           << 1U) | (IData)(vlSelf->top__DOT__dut__DOT__branch))));
    if (Vtop__ConstPool__TABLE_h88d3d1bb_0[__Vtableidx1]) {
        vlSelf->top__DOT__dut__DOT__br_sel = Vtop__ConstPool__TABLE_h878637ed_0
            [__Vtableidx1];
    }
    if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        vlSelf->top__DOT__dut__DOT__alu_data = ((4U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__dut__DOT__operand_a, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__dut__DOT__operand_b))
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__dut__DOT__operand_b)))));
    } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        vlSelf->top__DOT__dut__DOT__alu_data = ((2U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__dut__DOT__operand_b))
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  & vlSelf->top__DOT__dut__DOT__operand_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  | vlSelf->top__DOT__dut__DOT__operand_b)
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__operand_b)));
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i = 0x1fU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
                            goto __Vlabel5;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
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
        } else if (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                        >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1fU))) {
            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
        } else if (((vlSelf->top__DOT__dut__DOT__operand_a 
                     >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                     >> 0x1fU)))) {
            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
        } else {
            vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i = 0x1eU;
            {
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) {
                        if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))) 
                                   & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 1U;
                            goto __Vlabel7;
                        } else if ((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i)))))) {
                            vlSelf->top__DOT__dut__DOT__alu_data = 0U;
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
        vlSelf->top__DOT__dut__DOT__alu_data = ((1U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->top__DOT__dut__DOT__operand_a 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)))
                                                 : 
                                                (vlSelf->top__DOT__dut__DOT__operand_a 
                                                 + vlSelf->top__DOT__dut__DOT__operand_b));
    }
    vlSelf->top__DOT__dut__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__dut__DOT__br_sel)
                                           ? vlSelf->top__DOT__dut__DOT__alu_data
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__dut__DOT__pc));
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel 
        = ((0x900U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data))
            ? 0xcU : ((0x8a0U == (0xfffU & vlSelf->top__DOT__dut__DOT__alu_data))
                       ? 0xaU : ((0x890U == (0xfffU 
                                             & vlSelf->top__DOT__dut__DOT__alu_data))
                                  ? 9U : ((0x880U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__dut__DOT__alu_data))
                                           ? 8U : (
                                                   (0x870U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__dut__DOT__alu_data))
                                                    ? 7U
                                                    : 
                                                   ((0x860U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__dut__DOT__alu_data))
                                                     ? 6U
                                                     : 
                                                    ((0x850U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__dut__DOT__alu_data))
                                                      ? 5U
                                                      : 
                                                     ((0x840U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__dut__DOT__alu_data))
                                                       ? 4U
                                                       : 
                                                      ((0x830U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__dut__DOT__alu_data))
                                                        ? 3U
                                                        : 
                                                       ((0x820U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__dut__DOT__alu_data))
                                                         ? 2U
                                                         : 
                                                        ((0x810U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelf->top__DOT__dut__DOT__alu_data))
                                                          ? 1U
                                                          : 
                                                         ((0x800U 
                                                           == 
                                                           (0xfffU 
                                                            & vlSelf->top__DOT__dut__DOT__alu_data))
                                                           ? 0U
                                                           : 0xbU))))))))))));
    vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data = 0U;
    if (((0xbU == (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel)) 
         & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren)))) {
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
               [(0x7ffU & vlSelf->top__DOT__dut__DOT__alu_data)]);
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x7ffU & ((IData)(1U) + vlSelf->top__DOT__dut__DOT__alu_data))] 
                  << 8U));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xff00ffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x7ffU & ((IData)(2U) + vlSelf->top__DOT__dut__DOT__alu_data))] 
                  << 0x10U));
        vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
            = ((0xffffffU & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data) 
               | (vlSelf->top__DOT__dut__DOT__lsu0__DOT__mem_data
                  [(0x7ffU & ((IData)(3U) + vlSelf->top__DOT__dut__DOT__alu_data))] 
                  << 0x18U));
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))) {
            vlSelf->top__DOT__dut__DOT__ld_data = (
                                                   (0xffffff00U 
                                                    & vlSelf->top__DOT__dut__DOT__ld_data) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data));
            if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))) {
                vlSelf->top__DOT__dut__DOT__ld_data 
                    = ((0xffff00ffU & vlSelf->top__DOT__dut__DOT__ld_data) 
                       | (0xff00U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data));
                vlSelf->top__DOT__dut__DOT__ld_data 
                    = ((4U & (IData)(vlSelf->top__DOT__dut__DOT__ld_op))
                        ? ((0xffffU & vlSelf->top__DOT__dut__DOT__ld_data) 
                           | (0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data))
                        : ((0xffffU & vlSelf->top__DOT__dut__DOT__ld_data) 
                           | ((- (IData)(((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                           >> 0xfU) 
                                          & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op) 
                                             >> 3U)))) 
                              << 0x10U)));
            } else {
                vlSelf->top__DOT__dut__DOT__ld_data 
                    = ((0xffU & vlSelf->top__DOT__dut__DOT__ld_data) 
                       | ((- (IData)(((vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data 
                                       >> 7U) & ((IData)(vlSelf->top__DOT__dut__DOT__ld_op) 
                                                 >> 3U)))) 
                          << 8U));
            }
        } else {
            vlSelf->top__DOT__dut__DOT__ld_data = 0U;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__ld_data = ((0xcU 
                                                >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))
                                                ? vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
                                               [vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel]
                                                : vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0);
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
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
