// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hed57ab19_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    // Body
    if (((IData)(vlSelf->top__DOT__dut__DOT__pastvld) 
         & (IData)(vlSelf->top__DOT__dut__DOT___Vpast_0_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U == (IData)(vlSelf->top__DOT__dut__DOT__button0__DOT__state_q)))) {
                VL_WRITEF("[%0t] %%Error: design_2.sv:44: Assertion failed in %Ntop.dut.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/design_2.sv", 44, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((9U < (IData)(vlSelf->top__DOT__dut__DOT__counter)))) {
            VL_WRITEF("[%0t] %%Error: design_2.sv:46: Assertion failed in %Ntop.dut.proc_assertions: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../src/design_2.sv", 46, "");
        }
    }
    vlSelf->top__DOT__dut__DOT__pastvld = 1U;
    vlSelf->top__DOT__dut__DOT___Vpast_0_0 = (1U == (IData)(vlSelf->top__DOT__dut__DOT__button0__DOT__state_q));
    if (vlSelf->rst_ni) {
        if (((9U > (IData)(vlSelf->top__DOT__dut__DOT__counter)) 
             & (1U == (IData)(vlSelf->top__DOT__dut__DOT__button0__DOT__state_q)))) {
            vlSelf->top__DOT__dut__DOT__counter = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__dut__DOT__counter)));
        }
        vlSelf->top__DOT__dut__DOT__button0__DOT__state_q 
            = vlSelf->top__DOT__dut__DOT__button0__DOT__state_d;
    } else {
        vlSelf->top__DOT__dut__DOT__counter = 0U;
        vlSelf->top__DOT__dut__DOT__button0__DOT__state_q = 0U;
    }
    __Vtableidx2 = vlSelf->top__DOT__dut__DOT__counter;
    vlSelf->led_o = Vtop__ConstPool__TABLE_hed57ab19_0
        [__Vtableidx2];
}
