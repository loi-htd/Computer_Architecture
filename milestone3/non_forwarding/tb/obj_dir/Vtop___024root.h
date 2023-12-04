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
        CData/*0:0*/ top__DOT__dut__DOT__rst_if_id;
        CData/*4:0*/ top__DOT__dut__DOT__rs1_addr_id;
        CData/*4:0*/ top__DOT__dut__DOT__rs2_addr_id;
        CData/*0:0*/ top__DOT__dut__DOT__op_a_sel_id;
        CData/*0:0*/ top__DOT__dut__DOT__op_b_sel_id;
        CData/*0:0*/ top__DOT__dut__DOT__branch_id;
        CData/*3:0*/ top__DOT__dut__DOT__alu_op_id;
        CData/*2:0*/ top__DOT__dut__DOT__br_op_id;
        CData/*3:0*/ top__DOT__dut__DOT__ld_op_id;
        CData/*0:0*/ top__DOT__dut__DOT__mem_wren_id;
        CData/*0:0*/ top__DOT__dut__DOT__is_load_id;
        CData/*0:0*/ top__DOT__dut__DOT__jump_id;
        CData/*4:0*/ top__DOT__dut__DOT__rd_addr_id;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren_id;
        CData/*0:0*/ top__DOT__dut__DOT__op_a_sel_ex;
        CData/*0:0*/ top__DOT__dut__DOT__op_b_sel_ex;
        CData/*0:0*/ top__DOT__dut__DOT__branch_ex;
        CData/*3:0*/ top__DOT__dut__DOT__alu_op_ex;
        CData/*2:0*/ top__DOT__dut__DOT__br_op_ex;
        CData/*0:0*/ top__DOT__dut__DOT__br_sel_ex;
        CData/*3:0*/ top__DOT__dut__DOT__ld_op_ex;
        CData/*0:0*/ top__DOT__dut__DOT__mem_wren_ex;
        CData/*0:0*/ top__DOT__dut__DOT__is_load_ex;
        CData/*0:0*/ top__DOT__dut__DOT__jump_ex;
        CData/*4:0*/ top__DOT__dut__DOT__rd_addr_ex;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren_ex;
        CData/*0:0*/ top__DOT__dut__DOT__br_sel_mem;
        CData/*3:0*/ top__DOT__dut__DOT__ld_op_mem;
        CData/*0:0*/ top__DOT__dut__DOT__mem_wren_mem;
        CData/*0:0*/ top__DOT__dut__DOT__is_load_mem;
        CData/*0:0*/ top__DOT__dut__DOT__jump_mem;
        CData/*4:0*/ top__DOT__dut__DOT__rd_addr_mem;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren_mem;
        CData/*0:0*/ top__DOT__dut__DOT__is_load_wb;
        CData/*0:0*/ top__DOT__dut__DOT__jump_wb;
        CData/*4:0*/ top__DOT__dut__DOT__rd_addr_wb;
        CData/*0:0*/ top__DOT__dut__DOT__rd_wren_wb;
        CData/*0:0*/ top__DOT__dut__DOT__rst_reg;
        CData/*0:0*/ top__DOT__dut__DOT__enable_if_id;
        CData/*0:0*/ top__DOT__dut__DOT__enable_id_ex;
        CData/*0:0*/ top__DOT__dut__DOT__enable_ex_mem;
        CData/*0:0*/ top__DOT__dut__DOT__enable_mem_wb;
        CData/*0:0*/ top__DOT__dut__DOT__rst_id_ex;
        CData/*0:0*/ top__DOT__dut__DOT__rst_ex_mem;
        CData/*0:0*/ top__DOT__dut__DOT__rst_mem_wb;
        CData/*1:0*/ top__DOT__dut__DOT__hazard_op;
        CData/*0:0*/ top__DOT__dut__DOT__rst_wait;
        CData/*0:0*/ top__DOT__dut__DOT__alu0__DOT__br_less;
        CData/*0:0*/ top__DOT__dut__DOT__alu0__DOT__br_equal;
        CData/*3:0*/ top__DOT__dut__DOT__lsu0__DOT__addr_sel;
        CData/*3:0*/ top__DOT__dut__DOT__lsu0__DOT___Vpast_0_0;
        CData/*0:0*/ top__DOT__dut__DOT__lsu0__DOT___Vpast_1_0;
        CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile0__DOT__registers__v1;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v0;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v1;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
    };
    struct {
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v2;
        CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu0__DOT__mem_data__v3;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__dut__DOT__rst_if_id;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_if_id;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__dut__DOT__rst_if_id;
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
        IData/*31:0*/ top__DOT__dut__DOT__nxt_pc_if;
        IData/*31:0*/ top__DOT__dut__DOT__pc_if;
        IData/*31:0*/ top__DOT__dut__DOT__instr_id;
        IData/*31:0*/ top__DOT__dut__DOT__pc_id;
        IData/*31:0*/ top__DOT__dut__DOT__pc_four_id;
        IData/*31:0*/ top__DOT__dut__DOT__imm_id;
        IData/*31:0*/ top__DOT__dut__DOT__pc_ex;
        IData/*31:0*/ top__DOT__dut__DOT__operand_a_ex;
        IData/*31:0*/ top__DOT__dut__DOT__operand_b_ex;
        IData/*31:0*/ top__DOT__dut__DOT__rs1_data_ex;
        IData/*31:0*/ top__DOT__dut__DOT__imm_ex;
        IData/*31:0*/ top__DOT__dut__DOT__pc_four_ex;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data_ex;
        IData/*31:0*/ top__DOT__dut__DOT__rs2_data_ex;
        IData/*31:0*/ top__DOT__dut__DOT__rs2_data_mem;
        IData/*31:0*/ top__DOT__dut__DOT__pc_four_mem;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data_mem;
        IData/*31:0*/ top__DOT__dut__DOT__ld_data_mem;
        IData/*31:0*/ top__DOT__dut__DOT__pc_four_wb;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data_wb;
        IData/*31:0*/ top__DOT__dut__DOT__ld_data_wb;
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
        IData/*31:0*/ top__DOT__dut__DOT__test0__DOT__count_clk;
        IData/*31:0*/ __Vdly__top__DOT__dut__DOT__pc_if;
        IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__regfile0__DOT__registers__v0;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__regfile0__DOT__registers;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__dut__DOT__lsu0__DOT__mem_data;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 13> top__DOT__dut__DOT__lsu0__DOT__data_out;
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__dut__DOT__test0__DOT__instruction;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__test0__DOT__debug_reg;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
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
