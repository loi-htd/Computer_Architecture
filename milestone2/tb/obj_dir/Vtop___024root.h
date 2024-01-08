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
        CData/*4:0*/ top__DOT__dut__DOT__rs1_addr;
        CData/*4:0*/ top__DOT__dut__DOT__rs2_addr;
        CData/*4:0*/ top__DOT__dut__DOT__rd_addr;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren;
        CData/*0:0*/ top__DOT__dut__DOT__branch;
        CData/*0:0*/ top__DOT__dut__DOT__jump;
        CData/*3:0*/ top__DOT__dut__DOT__alu_op;
        CData/*2:0*/ top__DOT__dut__DOT__br_op;
        CData/*3:0*/ top__DOT__dut__DOT__ld_op;
        CData/*0:0*/ top__DOT__dut__DOT__op_a_sel;
        CData/*0:0*/ top__DOT__dut__DOT__op_b_sel;
        CData/*0:0*/ top__DOT__dut__DOT__mem_wren;
        CData/*0:0*/ top__DOT__dut__DOT__is_load;
        CData/*0:0*/ top__DOT__dut__DOT__br_sel;
        CData/*0:0*/ top__DOT__dut__DOT__alu0__DOT__br_less;
        CData/*0:0*/ top__DOT__dut__DOT__alu0__DOT__br_equal;
        CData/*3:0*/ top__DOT__dut__DOT__lsu0__DOT__addr_sel;
        CData/*3:0*/ top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0;
        CData/*0:0*/ top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
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
        IData/*31:0*/ top__DOT__dut__DOT__imm;
        IData/*31:0*/ top__DOT__dut__DOT__rs1_data;
        IData/*31:0*/ top__DOT__dut__DOT__rs2_data;
        IData/*31:0*/ top__DOT__dut__DOT__operand_a;
        IData/*31:0*/ top__DOT__dut__DOT__operand_b;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data;
        IData/*31:0*/ top__DOT__dut__DOT__ld_data;
        IData/*31:0*/ top__DOT__dut__DOT__instr_debug_i;
    };
    struct {
        IData/*31:0*/ top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT__periph_in;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT__lw_data;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__0;
        IData/*31:0*/ top__DOT__dut__DOT__lsu0__DOT____Vlvbound_h5ca078b8__1;
        VlUnpacked<IData/*31:0*/, 1012> top__DOT__dut__DOT__instr_memory;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__regfile0__DOT__registers;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__dut__DOT__lsu0__DOT__mem_data;
        VlUnpacked<IData/*31:0*/, 13> top__DOT__dut__DOT__lsu0__DOT__data_out;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
