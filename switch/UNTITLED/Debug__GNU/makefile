################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccsv7/tools/compiler/msp430-gcc-6.2.1.16_win32

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.o" \
"./A7139/A7139.o" \
"./captivate/ADVANCED/CAPT_Manager.o" \
"./captivate/BASE/CAPT_ISR.o" \
"./captivate/COMM/CAPT_Interface.o" \
"./captivate/COMM/FunctionTimer.o" \
"./captivate/COMM/I2CSlave.o" \
"./captivate/COMM/UART.o" \
"./captivate_app/CAPT_App.o" \
"./captivate_app/CAPT_BSP.o" \
"./captivate_config/CAPT_UserConfig.o" \
-T"../msp430fr2632.ld" \
"../captivate/BASE/libraries/captivate_fr2633_family.lib" \
"../driverlib/MSP430FR2xx_4xx/libraries/driverlib.lib" \
"../driverlib/MSP430FR2xx_4xx/libraries/driverlib_lcsd.lib" \
"../driverlib/MSP430FR2xx_4xx/libraries/driverlib_scsd.lib" \
"../mathlib/libraries/IQmathLib.lib" \
"../mathlib/libraries/IQmathLib_CCS_MPY32_5xx_6xx_CPUX_small_code_small_data.lib" \
"../mathlib/libraries/QmathLib.lib" \
"../mathlib/libraries/QmathLib_CCS_MPY32_5xx_6xx_CPUX_small_code_small_data.lib" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-lgcc \
-lc \
-Wl,--end-group \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include A7139/subdir_vars.mk
-include captivate/ADVANCED/subdir_vars.mk
-include captivate/BASE/subdir_vars.mk
-include captivate/BASE/libraries/subdir_vars.mk
-include captivate/COMM/subdir_vars.mk
-include captivate_app/subdir_vars.mk
-include captivate_config/subdir_vars.mk
-include driverlib/MSP430FR2xx_4xx/libraries/subdir_vars.mk
-include mathlib/libraries/subdir_vars.mk
-include subdir_rules.mk
-include A7139/subdir_rules.mk
-include captivate/ADVANCED/subdir_rules.mk
-include captivate/BASE/subdir_rules.mk
-include captivate/BASE/libraries/subdir_rules.mk
-include captivate/COMM/subdir_rules.mk
-include captivate_app/subdir_rules.mk
-include captivate_config/subdir_rules.mk
-include driverlib/MSP430FR2xx_4xx/libraries/subdir_rules.mk
-include mathlib/libraries/subdir_rules.mk
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
UNTITLED.out \

EXE_OUTPUTS__QUOTED += \
"UNTITLED.out" \

BIN_OUTPUTS += \
UNTITLED.hex \

BIN_OUTPUTS__QUOTED += \
"UNTITLED.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(LD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "UNTITLED.out"

# Tool invocations
UNTITLED.out: $(OBJS) $(CMD_SRCS) $(LD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU Linker'
	"D:/ti/ccsv7/tools/compiler/msp430-gcc-6.2.1.16_win32/bin/msp430-elf-gcc.exe" -Os -g -gdwarf-3 -gstrict-dwarf -Wall -mhwmult=f5series -mmcu=msp430fr2632 -Wl,-Map,"UNTITLED.map" -Wl,--gc-sections -L"D:/ti/ccsv7/ccs_base/msp430/include_gcc" -o"UNTITLED.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

UNTITLED.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: GNU Objcopy Utility'
	"D:/ti/ccsv7/tools/compiler/msp430-gcc-6.2.1.16_win32/bin/msp430-elf-objcopy.exe"  $(EXE_OUTPUTS__QUOTED) "UNTITLED.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.o" "A7139\A7139.o" "captivate\ADVANCED\CAPT_Manager.o" "captivate\BASE\CAPT_ISR.o" "captivate\COMM\CAPT_Interface.o" "captivate\COMM\FunctionTimer.o" "captivate\COMM\I2CSlave.o" "captivate\COMM\UART.o" "captivate_app\CAPT_App.o" "captivate_app\CAPT_BSP.o" "captivate_config\CAPT_UserConfig.o" 
	-$(RM) "main.d" "A7139\A7139.d" "captivate\ADVANCED\CAPT_Manager.d" "captivate\BASE\CAPT_ISR.d" "captivate\COMM\CAPT_Interface.d" "captivate\COMM\FunctionTimer.d" "captivate\COMM\I2CSlave.d" "captivate\COMM\UART.d" "captivate_app\CAPT_App.d" "captivate_app\CAPT_BSP.d" "captivate_config\CAPT_UserConfig.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

