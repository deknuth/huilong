//  captivate.h
//! This is the top level CapTIvate Touch Library include file.
//! Function prototypes are kept in their module header files.
//!
//! The CapTIvate Touch Library includes the following modules:
//!
//!  BASE
//!  - CAPT_Type      (Type definition file)
//!  - CAPT_HAL       (Hardware abstraction layer)
//!  - CAPT_Touch     (Touch layer (detection, processing, calibration, ect.)
//!  - CAPT_ISR       (CapTIvate interrupt handler)
//!
//!  ADVANCED
//!  - CAPT_Manager   (Management layer for updating/calibrating sensors)
//!  - CAPT_EMC       (Electromagnetic compatibility layer)
//!  - CAPT_Buttons   (Button dominant element detection)
//!  - CAPT_Slider    (Slider/wheel position algorithm)
//!
//!  COMM
//!  - CAPT_Interface (Top level communications interface layer)
//!  - CAPT_Protocol  (CapTIvate communications packet protocol layer)
//!  - CAPT_ByteQueue (General purpose communications byte queue (FIFO)
//!  - CAPT_PingPongBuffer (General purpose communications ping pong buffer)
//!  - UART           (General purpose UART driver for communication)
//!  - I2CSlave       (General purpose I2C slave driver for communication)
//!  - FunctionTimer  (Time-out generator for communication functions)
//
//! \version 1.10.03.04
//! Released on July 12, 2017
//
//*****************************************************************************

#ifndef CAPTIVATE_H__
#define CAPTIVATE_H__

//
// CapTIvate Software Library Version
//
#ifndef __CAPTIVATE_LIB_VERSION__
#define __CAPTIVATE_LIB_VERSION__ 11003
#endif

//
// Library Modules
//
#include "CAPT_Type.h"
#include "CAPT_HAL.h"
#include "CAPT_Touch.h"
#include "CAPT_EMC.h"
#include "CAPT_Buttons.h"
#include "CAPT_Slider.h"
#include "CAPT_Trackpad.h"
#include "CAPT_Interface.h"
#include "CAPT_Manager.h"

//
// ROM Headers
//
#include "rom_captivate.h"
#include "rom_map_captivate.h"

//
// User Configuration
//
#include "CAPT_UserConfig.h"

//*****************************************************************************
//
//! \var g_bEndOfConversionFlag is a global flag used to indicate to the
//! CAPT_Touch layer when a conversion has completed.  This flag must be set
//! by the application's CapTIvate ISR to communicate to the touch layer
//! when a conversion has completed.
//
//! \var g_bDetectionFlag
//! This bool is set by the Captivate ISR when a detection interrupt occurs.
//
//! \var g_bConvTimerFlag
//! This bool is set by the Captivate timer when it is time to update (refresh)
//! the user interface.
//
//! \var g_bConvCounterFlag
//! This bool is set by the Captivate ISR when a conversion counter interrupt
//! occurs.
//
//! \var g_bMaxCountErrorFlag
//! This bool is set by the Captivate ISR when a maximum count error interrupt
//! occurs.
//
//*****************************************************************************
extern volatile bool g_bEndOfConversionFlag;
extern volatile bool g_bDetectionFlag;
extern volatile bool g_bConvTimerFlag;
extern volatile bool g_bConvCounterFlag;
extern volatile bool g_bMaxCountErrorFlag;

//*****************************************************************************
//
//! Software Library / User Configuration Version Check
//
//*****************************************************************************
#ifndef __CAPTIVATE_CONFIG_VERSION__
#warning "CapTIvate user configuration version not found by software library."
#elif __CAPTIVATE_LIB_VERSION__ != __CAPTIVATE_CONFIG_VERSION__
#warning "CapTIvate software library and user configuration version mismatch."
#endif

#endif
