// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk_i));
        tracep->chgCData(oldp+1,(vlTOPp->data0_i),3);
        tracep->chgCData(oldp+2,(vlTOPp->data1_i),3);
        tracep->chgCData(oldp+3,(vlTOPp->sel_i),2);
        tracep->chgCData(oldp+4,(vlTOPp->result_o),3);
        tracep->chgCData(oldp+5,(((IData)(vlTOPp->data0_i) 
                                  & (IData)(vlTOPp->data1_i))),3);
        tracep->chgCData(oldp+6,(((IData)(vlTOPp->data0_i) 
                                  | (IData)(vlTOPp->data1_i))),3);
        tracep->chgCData(oldp+7,(((IData)(vlTOPp->data0_i) 
                                  ^ (IData)(vlTOPp->data1_i))),3);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
