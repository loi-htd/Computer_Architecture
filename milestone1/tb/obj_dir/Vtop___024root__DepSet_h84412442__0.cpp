// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_hde3506e6_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*5:0*/ __Vdly__top__DOT__dut__DOT__deposit;
    // Body
    __Vdly__top__DOT__dut__DOT__deposit = vlSelf->top__DOT__dut__DOT__deposit;
    if (vlSelf->soda_o) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((0x14U <= (IData)(vlSelf->top__DOT__dut__DOT__deposit)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:37: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 37, "");
            }
        }
    }
    __Vtableidx1 = vlSelf->top__DOT__dut__DOT__dispending_o__DOT__change_tmp;
    vlSelf->change_o = Vtop__ConstPool__TABLE_hde3506e6_0
        [__Vtableidx1];
    if (vlSelf->top__DOT__dut__DOT__rst) {
        __Vdly__top__DOT__dut__DOT__deposit = 0U;
    } else if (vlSelf->nickle_i) {
        __Vdly__top__DOT__dut__DOT__deposit = (0x3fU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__deposit)));
    } else if (vlSelf->dime_i) {
        __Vdly__top__DOT__dut__DOT__deposit = (0x3fU 
                                               & ((IData)(0xaU) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__deposit)));
    } else if (vlSelf->quarter_i) {
        __Vdly__top__DOT__dut__DOT__deposit = (0x3fU 
                                               & ((IData)(0x19U) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__deposit)));
    }
    if ((0x14U <= (IData)(vlSelf->top__DOT__dut__DOT__deposit))) {
        vlSelf->soda_o = 1U;
        vlSelf->top__DOT__dut__DOT__dispending_o__DOT__change_tmp 
            = (0x3fU & ((IData)(vlSelf->top__DOT__dut__DOT__deposit) 
                        - (IData)(0x14U)));
        vlSelf->top__DOT__dut__DOT__rst = 1U;
    } else {
        vlSelf->soda_o = 0U;
        vlSelf->top__DOT__dut__DOT__dispending_o__DOT__change_tmp = 0U;
        vlSelf->top__DOT__dut__DOT__rst = 0U;
    }
    vlSelf->top__DOT__dut__DOT__deposit = __Vdly__top__DOT__dut__DOT__deposit;
}
