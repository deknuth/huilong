################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
A7139/A7139.obj: ../A7139/A7139.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"D:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.4.LTS/bin/cl430" -vmspx --code_model=small --data_model=small -O3 --opt_for_speed=0 --use_hw_mpy=F5 --include_path="D:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/ti/ccsv7/UNTITLED/A7139" --include_path="D:/ti/ccsv7/UNTITLED" --include_path="D:/ti/ccsv7/UNTITLED/driverlib" --include_path="D:/ti/ccsv7/UNTITLED/driverlib/MSP430FR2xx_4xx" --include_path="D:/ti/ccsv7/UNTITLED/mathlib" --include_path="D:/ti/ccsv7/UNTITLED/captivate" --include_path="D:/ti/ccsv7/UNTITLED/captivate/ADVANCED" --include_path="D:/ti/ccsv7/UNTITLED/captivate/BASE" --include_path="D:/ti/ccsv7/UNTITLED/captivate/COMM" --include_path="D:/ti/ccsv7/UNTITLED/captivate_app" --include_path="D:/ti/ccsv7/UNTITLED/captivate_config" --include_path="D:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.4.LTS/include" --advice:power="none" --advice:hw_config=all --define=__MSP430FR2632__ --define=TARGET_IS_MSP430FR2XX_4XX -g --gcc --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="A7139/A7139.d" --obj_directory="A7139" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


