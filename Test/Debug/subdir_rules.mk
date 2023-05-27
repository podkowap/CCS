################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/Workspace8/Test" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/include" --include_path="C:/ti/Workspace8/Test/include" --include_path="C:/ti/DSP281x/v120/DSP281x_common/include" --include_path="C:/ti/DSP281x/v120/DSP281x_headers/include" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.8.LTS/include" --advice:performance=all -g --diag_warning=225 --diag_wrap=off --display_error_number --issue_remarks --verbose_diagnostics --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


