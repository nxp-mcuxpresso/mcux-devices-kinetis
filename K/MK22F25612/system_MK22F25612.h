/*
** ###################################################################
**     Processors:          MK22FN128CAH12
**                          MK22FN256CAH12
**                          MK22FN256VDC12
**                          MK22FN256VLH12
**                          MK22FN256VLL12
**                          MK22FN256VMP12
**
**     Compilers:           Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    K22P121M120SF8RM, Rev. 1, March 24, 2014
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         Provides a system configuration function and a global variable that
**         contains the system frequency. It configures the device and initializes
**         the oscillator (PLL) that is part of the microcontroller device.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2013-09-17)
**         Initial version.
**     - rev. 1.1 (2013-10-29)
**         Definition of BITBAND macros updated to support peripherals with 32-bit acces disabled.
**     - rev. 1.2 (2013-12-20)
**         Update according to reference manual rev. 0.6,
**     - rev. 1.3 (2014-02-06)
**         Update according to reference manual rev. 0.61,
**     - rev. 1.4 (2014-02-10)
**         The declaration of clock configurations has been moved to separate header file system_MK22F25612.h
**     - rev. 1.5 (2014-04-30)
**         Update of MCM and USB modules according to the RM rev. 1.
**         Update of system and startup files.
**         Module access macro module_BASES replaced by module_BASE_PTRS.
**     - rev. 1.6 (2014-08-28)
**         Update of system files - default clock configuration changed.
**         Update of startup files - possibility to override DefaultISR added.
**     - rev. 1.7 (2014-10-14)
**         Interrupt INT_LPTimer renamed to INT_LPTMR0, interrupt INT_Watchdog renamed to INT_WDOG_EWM.
**     - rev. 1.8 (2015-02-19)
**         Renamed interrupt vector LLW to LLWU.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MK22F25612
 * @version 2.0
 * @date 2024-10-29
 * @brief Device specific configuration file for MK22F25612 (header file)
 *
 * Provides a system configuration function and a global variable that contains
 * the system frequency. It configures the device and initializes the oscillator
 * (PLL) that is part of the microcontroller device.
 */

#ifndef _SYSTEM_MK22F25612_H_
#define _SYSTEM_MK22F25612_H_                    /**< Symbol preventing repeated inclusion */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


#ifndef DISABLE_WDOG
  #define DISABLE_WDOG  1
#endif

/* Define clock source values */
#define CPU_XTAL_CLK_HZ                8000000U            /* Value of the external crystal or oscillator clock frequency in Hz */
#define CPU_XTAL32k_CLK_HZ             32768U              /* Value of the external 32k crystal or oscillator clock frequency in Hz */
#define CPU_INT_SLOW_CLK_HZ            32768U              /* Value of the slow internal oscillator clock frequency in Hz */
#define CPU_INT_FAST_CLK_HZ            4000000U            /* Value of the fast internal oscillator clock frequency in Hz */
#define CPU_INT_IRC_CLK_HZ             48000000U           /* Value of the 48M internal oscillator clock frequency in Hz */

/* RTC oscillator setting */
/* RTC_CR: SC2P=0,SC4P=0,SC8P=0,SC16P=0,CLKO=1,OSCE=1,WPS=0,UM=0,SUP=0,WPE=0,SWR=0 */
#define SYSTEM_RTC_CR_VALUE            0x0300U             /* RTC_CR */

/* Low power mode enable */
/* SMC_PMPROT: AHSRUN=1,AVLP=1,ALLS=1,AVLLS=1 */
#define SYSTEM_SMC_PMPROT_VALUE        0xAAU               /* SMC_PMPROT */

#define DEFAULT_SYSTEM_CLOCK           20971520U           /* Default System clock value */



/**
 * @brief System clock frequency (core clock)
 *
 * The system clock frequency supplied to the SysTick timer and the processor
 * core clock. This variable can be used by the user application to setup the
 * SysTick timer or configure other parameters. It may also be used by debugger to
 * query the frequency of the debug timer or configure the trace clock speed
 * SystemCoreClock is initialized with a correct predefined value.
 */
extern uint32_t SystemCoreClock;

/**
 * @brief Setup the microcontroller system.
 *
 * Typically this function configures the oscillator (PLL) that is part of the
 * microcontroller device. For systems with variable clock speed it also updates
 * the variable SystemCoreClock. SystemInit is called from startup_device file.
 */
void SystemInit (void);

/**
 * @brief Updates the SystemCoreClock variable.
 *
 * It must be called whenever the core clock is changed during program
 * execution. SystemCoreClockUpdate() evaluates the clock register settings and calculates
 * the current core clock.
 */
void SystemCoreClockUpdate (void);

/**
 * @brief SystemInit function hook.
 *
 * This weak function allows to call specific initialization code during the
 * SystemInit() execution.This can be used when an application specific code needs
 * to be called as close to the reset entry as possible (for example the Multicore
 * Manager MCMGR_EarlyInit() function call).
 * NOTE: No global r/w variables can be used in this hook function because the
 * initialization of these variables happens after this function.
 */
void SystemInitHook (void);

#ifdef __cplusplus
}
#endif

#endif  /* _SYSTEM_MK22F25612_H_ */
