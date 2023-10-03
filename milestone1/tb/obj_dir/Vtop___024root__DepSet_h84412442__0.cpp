// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h74c29176_0;
extern const VlUnpacked<CData/*5:0*/, 512> Vtop__ConstPool__TABLE_h10ea1775_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hdd440fb2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h7b85abcd_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*5:0*/ __Vdly__top__DOT__dut__DOT__deposit;
    // Body
    __Vdly__top__DOT__dut__DOT__deposit = vlSelf->top__DOT__dut__DOT__deposit;
    if (VL_UNLIKELY(vlSelf->soda_o)) {
        VL_WRITEF("deposit = %2#, receive soda, change = %b\n",
                  6,vlSelf->top__DOT__dut__DOT___Vpast_0_0,
                  3,(IData)(vlSelf->change_o));
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((0x14U > (IData)(vlSelf->top__DOT__dut__DOT___Vpast_1_0)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:36: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 36, "");
            }
        }
    }
    if ((0x14U == (IData)(vlSelf->top__DOT__dut__DOT___Vpast_2_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((0U != (IData)(vlSelf->change_o)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:40: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 40, "");
            }
        }
    } else if ((0x19U == (IData)(vlSelf->top__DOT__dut__DOT___Vpast_2_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U != (IData)(vlSelf->change_o)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:41: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 41, "");
            }
        }
    } else if ((0x1eU == (IData)(vlSelf->top__DOT__dut__DOT___Vpast_2_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((2U != (IData)(vlSelf->change_o)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:42: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 42, "");
            }
        }
    } else if ((0x23U == (IData)(vlSelf->top__DOT__dut__DOT___Vpast_2_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((3U != (IData)(vlSelf->change_o)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:43: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 43, "");
            }
        }
    } else if ((0x28U == (IData)(vlSelf->top__DOT__dut__DOT___Vpast_2_0))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((4U != (IData)(vlSelf->change_o)))) {
                VL_WRITEF("[%0t] %%Error: vending_machine.sv:44: Assertion failed in %Ntop.dut.proc_setup_past: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../src/vending_machine.sv", 44, "");
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->quarter_i) << 8U) 
                    | (((IData)(vlSelf->dime_i) << 7U) 
                       | (((IData)(vlSelf->nickle_i) 
                           << 6U) | (IData)(vlSelf->top__DOT__dut__DOT__deposit))));
    if (Vtop__ConstPool__TABLE_h74c29176_0[__Vtableidx1]) {
        __Vdly__top__DOT__dut__DOT__deposit = Vtop__ConstPool__TABLE_h10ea1775_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__dut__DOT___Vpast_0_0 = vlSelf->top__DOT__dut__DOT__deposit;
    vlSelf->top__DOT__dut__DOT___Vpast_1_0 = vlSelf->top__DOT__dut__DOT__deposit;
    vlSelf->top__DOT__dut__DOT___Vpast_2_0 = vlSelf->top__DOT__dut__DOT__deposit;
    __Vtableidx2 = vlSelf->top__DOT__dut__DOT__deposit;
    vlSelf->soda_o = Vtop__ConstPool__TABLE_hdd440fb2_0
        [__Vtableidx2];
    vlSelf->change_o = Vtop__ConstPool__TABLE_h7b85abcd_0
        [__Vtableidx2];
    vlSelf->top__DOT__dut__DOT__deposit = __Vdly__top__DOT__dut__DOT__deposit;
}
