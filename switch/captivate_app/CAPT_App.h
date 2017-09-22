//*****************************************************************************
// CAPT_App.h
//
//! The application layer handles UI sample timing and whether the application
//! is in active mode or wake-on-proximity mode.
//
//! \version 1.10.03.04
//! Released on July 12, 2017
//
//*****************************************************************************

#ifndef CAPT_APP_H_
#define CAPT_APP_H_

//*****************************************************************************
//
// CAPT_appStart() initilizes and calibrates the user interface application
// specified in CAPT_UserConfig.  It also starts the captivate timer.
//
// \param none
// \return none
//
//*****************************************************************************
extern void CAPT_appStart(void);

//*****************************************************************************
//
// CAPT_appHandler() performs several functions:
//  (1) It manages the mode of the UI (Active versus Wake-on-Proximity)
//  (2) It controls when sensors are measured
//  (2) It handles timer requests via the flags set by the captivate ISR
//  (3) It checks for incoming packets, if the communications stack is enabled
//
// \param none
// \return none
//
//*****************************************************************************
extern int CAPT_appHandler(void);

//*****************************************************************************
//
// CAPT_appSleep() puts the MCU into the low power mode specified in the 
// global applicaiton structure, if and ONLY if no pending captivate flags
// exist.
//
// The flags that are checked are: detection, timer, and conversion counter.
//
// \param none
// \return none
//
//*****************************************************************************
extern void CAPT_appSleep(void);

#endif /* CAPT_APP_H_ */
