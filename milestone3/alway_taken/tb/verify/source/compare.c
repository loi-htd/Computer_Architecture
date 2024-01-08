#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
enum INSTR_REG
{
  I_ADD = 3,  I_SUB,  I_SLL,  I_SLT,  I_SLTU,  I_SRL,  I_SRA,  I_XOR,  I_OR,  I_AND,
  I_SLLI, I_SLTI, I_SLTIU, I_SRLI, I_SRAI, I_XORI, I_ORI, I_ANDI
};

  uint32_t reg_data[32];
  uint32_t instr_data[25];
  uint32_t mem_data[512];

int32_t get_imme(uint32_t instr)
{
  int32_t return_value;
  if (instr == instr_data[I_SRAI])
  {
    return_value = instr & 0x01F00000;
    return_value = (int32_t)return_value >> 20;  
    return return_value;
  }
  else
  {
    return_value = instr & 0xFFF00000;
    return_value = (int32_t)return_value >> 20;
    return return_value;
  }
}

int tb_arithmetic(FILE *fp_out)
{
  /*--------REGISTER--------*/
  if (reg_data[I_ADD] == reg_data[1] + reg_data[2])
    fprintf(fp_out, "ADD INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "ADD INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_SUB] == reg_data[1] - reg_data[2])
    fprintf(fp_out, "SUB INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SUB INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_SLL] == reg_data[1] << reg_data[2])
    fprintf(fp_out, "SLL INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SLL INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if ((int32_t)reg_data[1] < (int32_t)reg_data[2])
  {
    if (reg_data[I_SLT] == 1)
      fprintf(fp_out, "SLT INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLT INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  else
  {
    if (reg_data[I_SLT] == 0)
      fprintf(fp_out, "SLT INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLT INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  //
  if ((uint32_t)reg_data[1] < (uint32_t)reg_data[2])
  {
    if (reg_data[I_SLTU] == 1)
      fprintf(fp_out, "SLTU INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLTU INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  else
  {
    if (reg_data[I_SLTU] == 0)
      fprintf(fp_out, "SLTU INSTRUCTION ---- PASSED \n");
    else
      fprintf(fp_out, "SLTU INSTRUCTION ---- FAILED \n");
  }
  //
  if (reg_data[I_SRL] == reg_data[1] >> reg_data[2])
    fprintf(fp_out, "SRL INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SRL INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_SRA] == (int32_t)reg_data[1] >> reg_data[2])
    fprintf(fp_out, "SRA INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SRA INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_XOR] == reg_data[1] ^ reg_data[2])
    fprintf(fp_out, "XOR INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "XOR INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_OR] == reg_data[1] | reg_data[2])
    fprintf(fp_out, "OR INSTRUCTION ------ PASSED \n");
  else
    fprintf(fp_out, "OR INSTRUCTION ------ FAILED \n");
  //
  if (reg_data[I_AND] == (reg_data[1] & reg_data[2]))
    fprintf(fp_out, "AND INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "AND INSTRUCTION ----- FAILED \n");
    return 1;
  }

  /*--------------------------------IMMEDIATE--------------------------------*/
  if (reg_data[I_SLLI] == reg_data[1] << get_imme(instr_data[I_SLLI]))
    fprintf(fp_out, "SLLI INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SLLI INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if ((int32_t)reg_data[1] < (int32_t)get_imme(instr_data[I_SLTI]))
  {
    if (reg_data[I_SLTI] == 1)
      fprintf(fp_out, "SLTI INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLTI INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  else
  {
    if (reg_data[I_SLTI] == 0)
      fprintf(fp_out, "SLTI INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLTI INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  //
  if ((uint32_t)reg_data[1] < (uint32_t)get_imme(instr_data[I_SLTIU]))
  {
    if (reg_data[I_SLTIU] == 1)
      fprintf(fp_out, "SLTIU INSTRUCTION ----- PASSED \n");
    else{
      fprintf(fp_out, "SLTIU INSTRUCTION ----- FAILED \n");
    return 1;
    }
  }
  else
  {
    if (reg_data[I_SLTIU] == 0)
      fprintf(fp_out, "SLTIU INSTRUCTION ---- PASSED \n");
    else
      fprintf(fp_out, "SLTIU INSTRUCTION ---- FAILED \n");
  }
  //
  if (reg_data[I_SRLI] == (uint32_t)reg_data[1] >> get_imme(instr_data[I_SRLI]))
    fprintf(fp_out, "SRLI INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SRLI INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_SRAI] == (int32_t)reg_data[1] >> get_imme(instr_data[I_SRAI]))
    fprintf(fp_out, "SRAI INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SRAI INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_XORI] == reg_data[1] ^ get_imme(instr_data[I_XORI]))
    fprintf(fp_out, "XORI INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "XORI INSTRUCTION ----- FAILED \n");
    return 1;
  }
  //
  if (reg_data[I_ORI] == reg_data[1] | get_imme(instr_data[I_ORI]))
    fprintf(fp_out, "ORI INSTRUCTION ------ PASSED \n");
  else
    fprintf(fp_out, "ORI INSTRUCTION ------ FAILED \n");
  //
  if (reg_data[I_ANDI] == (reg_data[1] & get_imme(instr_data[I_ANDI])))
    fprintf(fp_out, "ANDI INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "ANDI INSTRUCTION ----- FAILED \n");
    return 1;
  }
  return 0;
}

int tb_loadstore(FILE *fp_out)
{
  reg_data[7] = reg_data[7]/4;
  uint32_t word_data;

  if(mem_data[reg_data[7]] == reg_data[1])
    fprintf(fp_out, "SW INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SW INSTRUCTION ----- FAILED \n");
    return 1;
  }

  if(mem_data[reg_data[7]+1] == (reg_data[1] & 0x0000FFFF))
    fprintf(fp_out, "SH INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SH INSTRUCTION ----- FAILED \n");
    return 1;
  }
  
  if(mem_data[reg_data[7]+2] == (reg_data[1] & 0x000000FF))
    fprintf(fp_out, "SB INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "SB INSTRUCTION ----- FAILED \n");
    return 1;
  }

  if(reg_data[2] == reg_data[1])
    fprintf(fp_out, "LW INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "LW INSTRUCTION ----- FAILED \n");
    return 1;
  }

  uint32_t lh_data = reg_data[1] & 0x0000FFFF;
  if (lh_data > 0x0008000)
    lh_data |= 0xFFFF0000;

  if(reg_data[3] == lh_data)
    fprintf(fp_out, "LH INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "LH INSTRUCTION ----- FAILED \n");
    return 1;
  }

  if(reg_data[4] == (reg_data[1] & 0x0000FFFF))
    fprintf(fp_out, "LHU INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "LHU INSTRUCTION ----- FAILED \n");
    return 1;
  }

  uint32_t lb_data = reg_data[1] & 0x000000FF;
  if (lb_data > 0x00000080)
    lb_data |= 0xFFFFFF00;

  if(reg_data[5] == lb_data)
    fprintf(fp_out, "LB INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "LB INSTRUCTION ----- FAILED \n");
    return 1;
  }

  if(reg_data[6] == (reg_data[1] & 0x000000FF))
    fprintf(fp_out, "LBU INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "LBU INSTRUCTION ----- FAILED \n");
    return 1;
  }
  return 0;
} 

int tb_branch(FILE *fp_out)
{
  if (reg_data[1] == 40 && reg_data[2] == 40 && reg_data[3] == 30 && reg_data[4] == 100)
    fprintf(fp_out, "BRANCH INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "BRANCH INSTRUCTION ----- FAILED \n");
    return 1;
  }
  return 0;
}

int tb_jal(FILE *fp_out)
{
  if (reg_data[1] == 4 && reg_data[2] == 10)
    fprintf(fp_out, "JAL INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "JAL INSTRUCTION ----- FAILED \n");
    return 1;
  }
  return 0;
}  

int tb_jalr(FILE *fp_out)
{
  if (reg_data[5] == 20)
    fprintf(fp_out, "JALR INSTRUCTION ----- PASSED \n");
  else{
    fprintf(fp_out, "JALR INSTRUCTION ----- FAILED \n");  
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[])
{
  // Mở file để đọc
  FILE *fp_reg = fopen("../mem/regfile.data", "r");
  if (fp_reg == NULL)
  {
    printf("Không thể mở file reg.\n");
    return 1;
  }
  FILE *fp_instr = fopen("../mem/instruction_mem.data", "r");
  if (fp_instr == NULL)
  {
    printf("Không thể mở file instr.\n");
    return 1;
  }
  FILE *fp_mem = fopen("../mem/mem_data.data", "r");
  if (fp_mem == NULL)
  {
    printf("Không thể mở file mem.\n");
    return 1;
  }
  // Mở file để ghi
  FILE *fp_out = fopen("./verify/output/result.txt", "a");
  if (fp_out == NULL)
  {
    printf("Không thể mở file output.\n");
    return 1;
  }

  for (int i = 0; i < 32; i++)
  {
    fscanf(fp_reg, "%X", &reg_data[i]);
  }
  for (int i = 0; i < 25; i++)
  {
    fscanf(fp_instr, "%X", &instr_data[i]);
  }
  for (int i = 0; i < 2048; i++)
  {
    fscanf(fp_mem, "%X", &mem_data[i]);
  }

  int count = atoi(argv[1]);
  fprintf(fp_out, "lần %d:\n", count);

  /*-------------------------------------------------*/
  int tb_mode = atoi(argv[2]);
  switch (tb_mode)
  {
  case 1:{
    if (tb_arithmetic(fp_out))
      return 1;
    break;
  }
  case 2:{
    if (tb_loadstore(fp_out))
      return 1;
    break;
  }
  case 3:{
    if (tb_branch(fp_out))
      return 1;
    break;
  }
  case 4:{
    if (tb_jal(fp_out))
      return 1;
    break;
  }
  case 5:{
    if (tb_jalr(fp_out))
      return 1;
    break;
  }
  default:
    break;
  }

  // Đóng file
  fclose(fp_reg);
  fclose(fp_instr);
  fclose(fp_mem);
  fclose(fp_out);
  return 0;
}
