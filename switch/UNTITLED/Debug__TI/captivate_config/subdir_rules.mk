################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
captivate_config/CAPT_UserConfig.obj: ../captivate_config/CAPT_UserConfig.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"D:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.4.LTS/bin/cl430" -vmspx --code_model=small --use_hw_mpy=F5 --include_path="D:/ti/ccsv7/UNTITLED/captivate/BASE" --include_path="D:/ti/ccsv7/UNTITLED/A7139" --include_path="D:/ti/ccsv7/UNTITLED/captivate_config" --include_path="D:/ti/ccsv7/UNTITLED/captivate_app" --include_path="D:/ti/ccsv7/UNTITLED/captivate" --include_path="D:/ti/ccsv7/UNTITLED/driverlib/MSP430FR2xx_4xx" --include_path="D:/ti/ccsv7/UNTITLED/captivate/ADVANCED" --include_path="D:/ti/ccsv7/UNTITLED/captivate/COMM" --include_path="D:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/ti/ccsv7/UNTITLED" --include_path="D:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.4.LTS/include" --advice:power=all --advice:hw_config=all --define=__MSP430FR2632__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="captivate_config/CAPT_UserConfig.d" --obj_directory="captivate_config" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


