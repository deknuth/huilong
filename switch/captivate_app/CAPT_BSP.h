#ifndef CAPT_BSP_H_
#define CAPT_BSP_H_

#include <msp430.h>
#include "driverlib.h"

//*****************************************************************************
//
//! \def XT1_OSC_FREQ defines the frequency of the crystal oscillator on
//! XIN/XOUT.
//
//*****************************************************************************
#define XT1_OSC_FREQ                                                    (32768)
#define XT1_OSC_TIMEOUT                                                 (65000)

//*****************************************************************************
//
//! \def MCLK_FREQ defines the main clock frequency in Hz.
//! \def SMCLK_FREQ defines the sub-main clock frequency in Hz.
//! \def ACLK_FREQ defines the auxiliary clock frequency in Hz.
//! \def FLLREF_FREQ defines the FLL reference clock frequency in Hz.
//
//*****************************************************************************
#define MCLK_FREQ                                                     (8000000)
#define SMCLK_FREQ                                                    (2000000)
#define ACLK_FREQ                                                       (32768)
#define FLLREF_FREQ                                                     (32768)

//*****************************************************************************
//
//! \def FLL_RATIO defines ratio of MCLK to the FLL reference clock.
//
//*****************************************************************************
#define FLL_RATIO                                     (MCLK_FREQ / FLLREF_FREQ)

//*****************************************************************************
//
//! \def OSC_TIMEOUT defines the failure timeout for all oscillators.
//
//*****************************************************************************
#define OSC_TIMEOUT                                                      (1000)

//*****************************************************************************
//
//! \def LED1_POUT defines the port-out register LED1 is attached to.
//! \def LED1_PDIR defines the port-direction register LED1 is attached to.
//! \def LED1_PIN defines the port pin that LED1 is attached to.
//! \def LED1_ON defines macro to turn on LED1.
//! \def LED1_OFF defines a macro to turn off LED1.
//! \def LED1_TOGGLE defines a macro to toggle LED1.
//
//*****************************************************************************
#define K1_POUT                                                         (P1OUT)
#define LED1_POUT                                                       (P1OUT)
#define LED1_PDIR                                                       (P1DIR)
#define K1_PIN                                                          (BIT2)
#define LED1_PIN                                                         (BIT3)
#define LED1_ON                                         { (LED1_POUT &= ~LED1_PIN); (K1_POUT |= K1_PIN); }
#define LED1_OFF                                        { (LED1_POUT |= LED1_PIN); (K1_POUT &= ~K1_PIN);}
#define LED1_TOGGLE                                     (LED1_POUT ^= LED1_PIN)

//*****************************************************************************
//
//! \def LED2_POUT defines the port-out register LED2 is attached to.
//! \def LED2_PDIR defines the port-direction register LED2 is attached to.
//! \def LED2_PIN defines the port pin that LED2 is attached to.
//! \def LED2_ON defines macro to turn on LED2.
//! \def LED2_OFF defines a macro to turn off LED2.
//! \def LED2_TOGGLE defines a macro to toggle LED2.
//
//*****************************************************************************
#define LED2_POUT       (P2OUT)
#define K2_POUT         (P2OUT)
#define LED2_PDIR       (P2DIR)
#define LED2_PIN        (BIT7)
#define K2_PIN          (BIT5)
#define LED2_ON         { (LED2_POUT &= ~LED2_PIN); (K2_POUT |= K2_PIN); }
#define LED2_OFF        { (LED2_POUT |= LED2_PIN); (K2_POUT &= ~K2_PIN);}
#define LED2_TOGGLE     (LED2_POUT ^= LED2_PIN)

//*****************************************************************************
//
//! This function is configures the MCU for operation.
//! This involves setting up the digital IO muxes and configuring the clock
//! system (CS).
//
//! \param none
//! \return none
//
//*****************************************************************************
extern void BSP_configureMCU(void);

#endif /* CAPT_BSP_H_ */
