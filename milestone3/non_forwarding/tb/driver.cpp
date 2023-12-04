#define MAX_SIM 500
void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->rst_ni  = (sim_unit>4) && 1;
  if (sim_unit % 30 == 0) dut->io_sw_i = (rand()%16);
}
