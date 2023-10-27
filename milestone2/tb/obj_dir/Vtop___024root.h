// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__dut__DOT__br_unsigned;
        CData/*0:0*/ top__DOT__dut__DOT__br_less;
        CData/*0:0*/ top__DOT__dut__DOT__br_equal;
        CData/*0:0*/ top__DOT__dut__DOT__br_sel;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren;
        CData/*0:0*/ top__DOT__dut__DOT__op_a_sel;
        CData/*0:0*/ top__DOT__dut__DOT__op_b_sel;
        CData/*3:0*/ top__DOT__dut__DOT__alu_op;
        CData/*0:0*/ top__DOT__dut__DOT__mem_wren;
        CData/*1:0*/ top__DOT__dut__DOT__wb_sel;
        CData/*0:0*/ top__DOT__dut__DOT____Vlvbound_h14a482cb__0;
        CData/*0:0*/ top__DOT__dut__DOT____Vlvbound_h6d2a7356__0;
        CData/*0:0*/ top__DOT__dut__DOT____Vlvbound_hbc0f48ab__0;
        CData/*0:0*/ top__DOT__dut__DOT____Vlvbound_h20d4c9d3__0;
        CData/*6:0*/ top__DOT__dut__DOT__immgen0__DOT__opcode;
        CData/*3:0*/ top__DOT__dut__DOT__lsu0__DOT__addr_sel;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*9:0*/ top__DOT__dut__DOT__i;
        VL_IN(io_sw_i,31,0);
        VL_OUT(pc_debug_o,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__dut__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__dut__DOT__pc;
        IData/*31:0*/ top__DOT__dut__DOT__nxt_pc;
        IData/*31:0*/ top__DOT__dut__DOT__instr;
        IData/*31:0*/ top__DOT__dut__DOT__rs1_data;
        IData/*31:0*/ top__DOT__dut__DOT__rs2_data;
        IData/*31:0*/ top__DOT__dut__DOT__imm;
        IData/*31:0*/ top__DOT__dut__DOT__operand_a;
        IData/*31:0*/ top__DOT__dut__DOT__operand_b;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data;
        IData/*31:0*/ top__DOT__dut__DOT____Vlvbound_hbebfe9e8__0;
        IData/*31:0*/ top__DOT__dut__DOT____Vlvbound_h304332e3__0;
        IData/*31:0*/ top__DOT__dut__DOT____Vlvbound_hdc073f92__0;
        IData/*31:0*/ top__DOT__dut__DOT____Vlvbound_h6de6ef42__0;
        IData/*31:0*/ top__DOT__dut__DOT____Vlvbound_hc09784ec__0;
        IData/*31:0*/ top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__brcomp0__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__brcomp0__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT__periph_in;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__2;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__3;
        QData/*32:0*/ top__DOT__dut__DOT__alu0__DOT__alu_data_33bit;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__instr_memory;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__pc_debug_o_array;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__nxt_pc_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__instr_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__alu_data_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__immgen_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__br_sel_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__test_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__rd_wren_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__op_a_sel_array;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__op_b_sel_array;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__regfile0__DOT__registers;
        VlUnpacked<CData/*7:0*/, 2048> top__DOT__dut__DOT__lsu0__DOT__mem_data;
        VlUnpacked<IData/*31:0*/, 13> top__DOT__dut__DOT__lsu0__DOT__data_out;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
