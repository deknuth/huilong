// CAPT_BSP.c
//
// *** CLOCK CONFIGURATION ***
// MCLK is 8 MHz, sourced from the DCO
// SMCLK is 2 MHz, sourced from MCLK
// ACLK is 32kHz, sourced from XT1 or REFO, with XT1 having priority
// FLLREF is 32kHz, sourced from XT1 or REFO, with XT1 having priority
//
// *** SERIAL INTERFACES ***
// This board support package supports the MSP430FR2633 device.
// UCA0 is muxed in UART mode to P1.4 and P1.5
// UCB0 is muxed in I2C mode to P1.2 and P1.3
// P1.1 is set up as an open drain input
//
// \version 1.10.03.04
// Released on July 12, 2017
//
//*****************************************************************************

#include <msp430.h>
#include <stdint.h>

#include "CAPT_BSP.h"

//*****************************************************************************
//
//! This function is configures the MCU Digital IO and CS for operation.
//
//*****************************************************************************
void BSP_configureMCU(void)
{
	CS_initFLLParam fllParams = {0};
	uint8_t ui8LFOsc = CS_XT1CLK_SELECT;

	// P1.0: OUTPUT LOW
	// P1.1: IRQ (OPEN DRAIN)
	// P1.2: UCB0 I2C SDA
	// P1.3: UCB0 I2C SCL
	// P1.4: UCA0 UART TXD
	// P1.5: UCA0 UART RXD
	// P1.6: LED2
	// P1.7: LED1
	P1OUT  = (GPIO_PIN3);
	P1DIR  = (GPIO_PIN6 | GPIO_PIN7 | GPIO_PIN3 | GPIO_PIN2);
	P1SEL0 = (GPIO_PIN4);
	P1SEL1 = (0);

	// P2.0: XOUT
	// P2.1: XIN
	// P2.2: SYNC (SET OUTPUT LOW UNLESS USED)
	// P2.3: OUTPUT LOW
	// P2.4: OUTPUT LOW
	// P2.5: OUTPUT LOW
	// P2.6: OUTPUT LOW
	// P2.7: OUTPUT LOW
	P2OUT  =  (GPIO_PIN7);
	P2DIR  =  (GPIO_PIN4 | GPIO_PIN5 | GPIO_PIN6 | GPIO_PIN7);
	P2SEL0 =  (GPIO_PIN1);
	P2SEL1 =  (0);

	// P3.0: OUTPUT LOW
	// P3.1: OUTPUT LOW
	// P3.2: OUTPUT LOW
	P3OUT  =  (0);
	P3DIR  =  (GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2);
	P3SEL0 =  (0);
	P3SEL1 =  (0);

	//
	// Clear port lock
	//
	PM5CTL0 &= ~LOCKLPM5;

	//
	// Attempt to start the low frequency crystal oscillator
	//
	CS_setExternalClockSource(XT1_OSC_FREQ);
	if (CS_turnOnXT1LFWithTimeout(CS_XT1_DRIVE_0, XT1_OSC_TIMEOUT) == STATUS_FAIL)
	{
		//
		// If a crystal is not present or is failing, switch the LF
		// clock definition to the internal 32kHz reference oscillator.
		//
		ui8LFOsc = CS_REFOCLK_SELECT;
	}

	//
	// Initialize Clock Signals
	//
	CS_initClockSignal(CS_FLLREF, ui8LFOsc, CS_CLOCK_DIVIDER_1);
	CS_initClockSignal(CS_ACLK, ui8LFOsc, CS_CLOCK_DIVIDER_1);
	CS_initClockSignal(CS_MCLK, CS_DCOCLKDIV_SELECT, CS_CLOCK_DIVIDER_1);
	CS_initClockSignal(CS_SMCLK, CS_DCOCLKDIV_SELECT, CS_CLOCK_DIVIDER_4);

	//
	// Tune the DCO parameters
	//
	CS_initFLLCalculateTrim((MCLK_FREQ/1000), FLL_RATIO, &fllParams);
	CS_clearAllOscFlagsWithTimeout(1000);
}

//*****************************************************************************
//
//! This function disables the watchdog timer during boot, ensuring a WDT
//! reset does not occur during boot before main() is entered.
//
//*****************************************************************************
int _system_pre_init(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    return 1;
}
