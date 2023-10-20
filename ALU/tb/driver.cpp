#define MAX_SIM 500000

void set_random(Vtop *dut, vluint64_t sim_unit) {
      dut-> operand_a = rand()%20000;
      dut-> operand_b = rand()%20000;
      dut-> alu_op   = rand()%10;         
  }

