################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./sources/DSP281x_Adc.obj" \
"./sources/DSP281x_CodeStartBranch.obj" \
"./sources/DSP281x_CpuTimers.obj" \
"./sources/DSP281x_DBGIER.obj" \
"./sources/DSP281x_DefaultIsr.obj" \
"./sources/DSP281x_ECan.obj" \
"./sources/DSP281x_Ev.obj" \
"./sources/DSP281x_GlobalVariableDefs.obj" \
"./sources/DSP281x_Gpio.obj" \
"./sources/DSP281x_InitPeripherals.obj" \
"./sources/DSP281x_Mcbsp.obj" \
"./sources/DSP281x_MemCopy.obj" \
"./sources/DSP281x_PieCtrl.obj" \
"./sources/DSP281x_PieVect.obj" \
"./sources/DSP281x_Sci.obj" \
"./sources/DSP281x_Spi.obj" \
"./sources/DSP281x_SysCtrl.obj" \
"./sources/DSP281x_XIntrupt.obj" \
"./sources/DSP281x_Xintf.obj" \
"./sources/DSP281x_XintfBootReset.obj" \
"./sources/DSP281x_usDelay.obj" \
"../2812_RAM_lnk.cmd" \
"../DSP281x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \
-l"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/lib/rts2800_ml.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include sources/subdir_vars.mk
-include subdir_rules.mk
-include sources/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Test.out \

EXE_OUTPUTS__QUOTED += \
"Test.out" \

BIN_OUTPUTS += \
Test.hex \

BIN_OUTPUTS__QUOTED += \
"Test.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "Test.out"

# Tool invocations
Test.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/bin/cl2000" -v28 -ml -mt --advice:performance=all -g --diag_warning=225 --diag_wrap=off --display_error_number --issue_remarks --verbose_diagnostics -z -m"Test.map" --warn_sections -i"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/lib" -i"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="Test_linkInfo.xml" --rom_model -o "Test.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

Test.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/bin/hex2000"  -o "Test.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "sources\DSP281x_Adc.obj" "sources\DSP281x_CodeStartBranch.obj" "sources\DSP281x_CpuTimers.obj" "sources\DSP281x_DBGIER.obj" "sources\DSP281x_DefaultIsr.obj" "sources\DSP281x_ECan.obj" "sources\DSP281x_Ev.obj" "sources\DSP281x_GlobalVariableDefs.obj" "sources\DSP281x_Gpio.obj" "sources\DSP281x_InitPeripherals.obj" "sources\DSP281x_Mcbsp.obj" "sources\DSP281x_MemCopy.obj" "sources\DSP281x_PieCtrl.obj" "sources\DSP281x_PieVect.obj" "sources\DSP281x_Sci.obj" "sources\DSP281x_Spi.obj" "sources\DSP281x_SysCtrl.obj" "sources\DSP281x_XIntrupt.obj" "sources\DSP281x_Xintf.obj" "sources\DSP281x_XintfBootReset.obj" "sources\DSP281x_usDelay.obj" 
	-$(RM) "main.d" "sources\DSP281x_Adc.d" "sources\DSP281x_CpuTimers.d" "sources\DSP281x_DefaultIsr.d" "sources\DSP281x_ECan.d" "sources\DSP281x_Ev.d" "sources\DSP281x_GlobalVariableDefs.d" "sources\DSP281x_Gpio.d" "sources\DSP281x_InitPeripherals.d" "sources\DSP281x_Mcbsp.d" "sources\DSP281x_MemCopy.d" "sources\DSP281x_PieCtrl.d" "sources\DSP281x_PieVect.d" "sources\DSP281x_Sci.d" "sources\DSP281x_Spi.d" "sources\DSP281x_SysCtrl.d" "sources\DSP281x_XIntrupt.d" "sources\DSP281x_Xintf.d" 
	-$(RM) "sources\DSP281x_CodeStartBranch.d" "sources\DSP281x_DBGIER.d" "sources\DSP281x_XintfBootReset.d" "sources\DSP281x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

