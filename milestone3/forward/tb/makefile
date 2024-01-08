#*******************************************************************************
# Creator:        Hai Cao Xuan (cxhai.sdh221@hcmut.edu.vn)
# Description:    makefile
#*******************************************************************************
# Copyright (c) 2022 Hai Cao Xuan
#*******************************************************************************

FILES := $(shell cat filelist)

VERILATOR = verilator
VERILATOR_COV = verilator_coverage

### LINT FLAGS
LINT_FLAGS = -Wall --lint-only -sv

### VERILATE FLAGS
# Generate C++ in executable form
VERILATOR_FLAGS += -sv -cc
# Optimize
VERILATOR_FLAGS += -x-initial unique
VERILATOR_FLAGS += -x-assign unique
VERILATOR_FLAGS += -O3 -CFLAGS -DCOVERAGE
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Enable assertion
VERILATOR_FLAGS += --assert
# Make waveforms
VERILATOR_FLAGS += --trace-fst
VERILATOR_FLAGS += --build -j

# Input files for Verilator
VERILATOR_INPUT = $(FILES) top.sv --top-module top

.PHONY: help
help:
	@echo "make [option]"
	@echo "\tlint    run lint checks for syntax and violations"
	@echo "\tbuild   verilate and build modules"
	@echo "\tsim     run simulation"
	@echo "\twave    open waveforms"
	@echo "\tclean   clean the working folder"
	@echo "\thelp    print this help"

.PHONY: lint
lint:
	@echo "<> LINT CHECK ----------------"
	@$(VERILATOR) $(LINT_FLAGS) $(FILES)

.PHONY: build
build: ./obj_dir/Vtop
./obj_dir/Vtop: $(FILES) driver.cpp top.sv
	@echo "<> BUILD ---------------------"
	@$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT) --exe tb_top.cpp

.PHONY: sim
sim: ./obj_dir/Vtop
	@echo "<> SIMULATING ----------------"
	@./obj_dir/Vtop

.PHONY: wave
wave: wave.fst
	@echo "<> WAVEFORMS -----------------"
	@gtkwave wave.fst wave.gtkw

.PHONY: clean
clean:
	@rm -rf obj_dir
	@rm -f *.fst
	@echo "<> CLEAN ---------------------"

#*******************************************************************************
# Define directories
MF_DIR := .
SRC_DIR := $(MF_DIR)/verify/source
OUTPUT_DIR := $(MF_DIR)/verify/output
SV_DIR := .$(MF_DIR)/src
MEM_DIR := .$(MF_DIR)/mem

# Define testbench targets
TB_ARITH := 1
TB_LDST := 2
TB_BRANCH := 3
TB_JAL := 4
TB_JALR := 5

# Generate test cases
.PHONY: gen
gen:
	@echo "Generating test cases..."
	gcc -o $(OUTPUT_DIR)/generate $(SRC_DIR)/generate.c
	gcc -o $(OUTPUT_DIR)/compare $(SRC_DIR)/compare.c

# Verify all testbenches
.PHONY: verify
verify:
	@echo "Verifying testbenches..."
	rm -f $(OUTPUT_DIR)/result.txt

	@echo "*****Arithmetic testbench*****"
	cp $(SV_DIR)/tb_arithmetic.sv $(SV_DIR)/instr_test.sv
	@for i in `seq 1 10`; do \
		echo "...Running test bench TB_ARITH (iteration $$i)"; \
		make gen; \
		$(OUTPUT_DIR)/generate $(TB_ARITH); \
		make sim; \
		if ! $(OUTPUT_DIR)/compare $$i $(TB_ARITH); then \
			echo "Error in Arithmetic testbench, stopping makefile."; \
        	exit 1; \
		fi \
	done

	@echo "*****Load/Store testbench*****"
	cp $(SV_DIR)/tb_loadstore.sv $(SV_DIR)/instr_test.sv
	@for i in `seq 1 10`; do \
		echo "...Running test bench TB_LDST (iteration $$i)"; \
		make gen; \
		$(OUTPUT_DIR)/generate $(TB_LDST); \
		make sim; \
		if ! $(OUTPUT_DIR)/compare $$i $(TB_LDST); then \
			echo "Error in Load/Store testbench, stopping makefile."; \
			exit 1; \
		fi \
	done

	@echo "*****Branch testbench*****"
	cp $(SV_DIR)/tb_branch.sv $(SV_DIR)/instr_test.sv
	echo "...Running test bench TB_BRANCH"
	make sim
	if ! $(OUTPUT_DIR)/compare 1 $(TB_BRANCH); then \
		echo "Error in Branch testbench, stopping makefile."; \
		exit 1; \
	fi

	@echo "*****Jump testbench*****"
	cp $(SV_DIR)/tb_jump.sv $(SV_DIR)/instr_test.sv
	@for i in `seq 1 10`; do \
		echo "...Running test bench TB_JUMP"; \
		make gen; \
		$(OUTPUT_DIR)/generate $(TB_JAL); \
		make sim; \
		if ! $(OUTPUT_DIR)/compare $$i $(TB_JAL); then \
			echo "Error in JAL testbench, stopping makefile."; \
        	exit 1; \
		fi; \
		make gen; \
		$(OUTPUT_DIR)/generate $(TB_JALR); \
		make sim; \
		if ! $(OUTPUT_DIR)/compare $$i $(TB_JALR); then\
			echo "Error in JALR testbench, stopping makefile."; \
        	exit 1; \
		fi; \
	done
	@gcc -o $(OUTPUT_DIR)/summary $(SRC_DIR)/summary.c
	$(OUTPUT_DIR)/summary

# Calculate CPI
.PHONY: cpi
cpi:
	cp $(MEM_DIR)/application_mem.data $(MEM_DIR)/instruction_mem.data
	cp $(SV_DIR)/tb_cpi.sv $(SV_DIR)/instr_test.sv
	make sim
