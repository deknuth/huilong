################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
captivate_app/%.o: ../captivate_app/%.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"D:/ti/ccsv7/tools/compiler/msp430-gcc-6.2.1.16_win32/bin/msp430-elf-gcc.exe" -c -mmcu=msp430fr2632 -I"D:/ti/ccsv7/ccs_base/msp430/include_gcc" -I"D:/ti/ccsv7/UNTITLED" -I"D:/ti/ccsv7/tools/compiler/msp430-gcc-6.2.1.16_win32/msp430-elf/include" -Os -g -gdwarf-3 -gstrict-dwarf -Wall -mhwmult=f5series -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o"$@" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


