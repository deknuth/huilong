#include <msp430.h>                      // Generic MSP430 Device Include
#include "driverlib.h"                   // MSPWare Driver Library
#include "captivate.h"                   // CapTIvate Touch Software Library
#include "CAPT_App.h"                    // CapTIvate Application Code
#include "CAPT_BSP.h"                    // CapTIvate EVM Board Support Package
#include "A7139.h"

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
