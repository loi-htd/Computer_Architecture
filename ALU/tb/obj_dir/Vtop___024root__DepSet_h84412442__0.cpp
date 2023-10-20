// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U & (~ ((vlSelf->alu_data 
                                       == (vlSelf->operand_a 
                                           + vlSelf->operand_b)) 
                                      | (0xffffffffU 
                                         == vlSelf->alu_data)))))) {
                VL_WRITEF("[%0t] %%Error: top.sv:22: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 22, "");
            }
        }
    }
    if ((1U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((1U & (~ ((vlSelf->alu_data 
                                       == (vlSelf->operand_a 
                                           - vlSelf->operand_b)) 
                                      | (0xffffffffU 
                                         == vlSelf->alu_data)))))) {
                VL_WRITEF("[%0t] %%Error: top.sv:24: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 24, "");
            }
        }
    }
    if ((2U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != ((vlSelf->operand_a 
                                                   < vlSelf->operand_b)
                                                   ? 1U
                                                   : 0U)))) {
                VL_WRITEF("[%0t] %%Error: top.sv:26: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 26, "");
            }
        }
    }
    if ((3U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != ((vlSelf->operand_a 
                                                   < vlSelf->operand_b)
                                                   ? 1U
                                                   : 0U)))) {
                VL_WRITEF("[%0t] %%Error: top.sv:28: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 28, "");
            }
        }
    }
    if ((4U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  ^ vlSelf->operand_b)))) {
                VL_WRITEF("[%0t] %%Error: top.sv:30: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 30, "");
            }
        }
    }
    if ((5U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  | vlSelf->operand_b)))) {
                VL_WRITEF("[%0t] %%Error: top.sv:32: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 32, "");
            }
        }
    }
    if ((6U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  & vlSelf->operand_b)))) {
                VL_WRITEF("[%0t] %%Error: top.sv:34: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 34, "");
            }
        }
    }
    if ((7U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->operand_b))))) {
                VL_WRITEF("[%0t] %%Error: top.sv:36: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 36, "");
            }
        }
    }
    if ((8U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->operand_b))))) {
                VL_WRITEF("[%0t] %%Error: top.sv:38: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 38, "");
            }
        }
    }
    if ((9U == (IData)(vlSelf->alu_op))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_UNLIKELY((vlSelf->alu_data != (vlSelf->operand_a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->operand_b))))) {
                VL_WRITEF("[%0t] %%Error: top.sv:40: Assertion failed in %Ntop.proc_assertions: 'assert' failed.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("top.sv", 40, "");
            }
        }
    }
}
