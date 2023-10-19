#define MAX_SIM 2000

void set_random(Vtop *dut, vluint64_t sim_unit) {
      dut-> rs1_data = rand()%20000;
      dut-> rs2_data = rand()%20000;
      dut-> br_unsigned = rand()%2;         
  }

