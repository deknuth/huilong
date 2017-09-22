/* --COPYRIGHT--,BSD
 * Copyright (c) 2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
//*****************************************************************************
// Development main.c for MSP430FR2633, MSP430FR2533, MSP430FR2632, and
// MSP430FR2532.
//
// This starter application initializes the CapTIvate touch library
// for the touch panel specified by CAPT_UserConfig.c/.h via a call to
// CAPT_appStart(), which initializes and calibrates all sensors in the
// application, and starts the CapTIvate interval timer.
//
// Then, the capacitive touch interface is driven by calling the CapTIvate
// application handler, CAPT_appHandler().  The application handler manages
// whether the user interface (UI) is running in full active scan mode, or
// in a low-power wake-on-proximity mode.
//
// The CapTIvate application handler will return true if proximity was
// detected on any of the sensors in the application, which is used here
// to control the state of LED2. LED1 is set while the background loop enters
// the handler, and is cleared when the background loop leaves the handler.
//
// \version 1.10.03.04
// Released on July 12, 2017
//
//*****************************************************************************

#include <msp430.h>                      // Generic MSP430 Device Include
#include "driverlib.h"                   // MSPWare Driver Library
#include "captivate.h"                   // CapTIvate Touch Software Library
#include "CAPT_App.h"                    // CapTIvate Application Code
#include "CAPT_BSP.h"                    // CapTIvate EVM Board Support Package

#define delay_us(us)    __delay_cycles(8*(us))
#define delay_ms(ms)    __delay_cycles(8000*(ms))


int main(void)
{
    int res = 0;
    unsigned char t1Stat = 1;
    unsigned char t2Stat = 0;
	WDTCTL = WDTPW | WDTHOLD;
	BSP_configureMCU();
	__bis_SR_register(GIE);

	CAPT_appStart();

	LED1_OFF;
	LED2_OFF;
	while(1)
	{
	    res = CAPT_appHandler();
	    if(res != -1)
	    {
	        switch(res)
	        {
	        case 0:
	            __delay_cycles(40000);
	            if(CAPT_appHandler() == 0)
	            {
                    if(t1Stat)
                    {
                        LED1_OFF;
                        t1Stat = 0;
                    }
                    else
                    {
                        LED1_ON;
                        t1Stat = 1;
                    }
                    while(CAPT_appHandler()!=-1);
	            }
	            break;
	        case 1:
	            __delay_cycles(40000);
                if(CAPT_appHandler() == 1)
                {
                    if(t2Stat)
                    {
                        LED2_OFF;
                        t2Stat = 0;
                    }
                    else
                    {
                        LED2_ON;
                        t2Stat = 1;
                    }
                    while(CAPT_appHandler()!=-1);
                }
	            break;
	        case 2:
	            break;
	        default:
	            break;
	        }
	    }

		__no_operation();
		// Go to sleep if there is nothing left to do
		CAPT_appSleep();
	}
}
