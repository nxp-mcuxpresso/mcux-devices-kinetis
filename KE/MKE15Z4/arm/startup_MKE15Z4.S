/* ------------------------------------------------------------------------- */
/*  @file:    startup_MKE15Z4.s                                              */
/*  @purpose: CMSIS Cortex-M0P Core Device Startup File                      */
/*            MKE15Z4                                                        */
/*  @version: 4.0                                                            */
/*  @date:    2024-10-29                                                     */
/*  @build:   b250520                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2025 NXP                                                   */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv6-m
    .eabi_attribute Tag_ABI_align_preserved, 1 /*8-byte alignment */

    .section .isr_vector, "a"
    .align 2
    .globl __Vectors
__Vectors:
    .long   Image$$ARM_LIB_STACK$$ZI$$Limit                 /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   Reserved16_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved17_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved18_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved19_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved20_IRQHandler                           /* Reserved interrupt*/
    .long   FTFA_IRQHandler                                 /* Flash memory single interrupt vector for all sources*/
    .long   LVD_LVW_IRQHandler                              /* Low-voltage detect, low-voltage warning*/
    .long   PORTAE_IRQHandler                               /* Pin detect (Port A, E)*/
    .long   LPI2C0_IRQHandler                               /* Inter-integrated circuit 0 interrupt*/
    .long   Reserved25_IRQHandler                           /* Reserved interrupt*/
    .long   LPSPI0_IRQHandler                               /* Serial peripheral Interface 0 interrupt*/
    .long   Reserved27_IRQHandler                           /* Reserved interrupt*/
    .long   LPUART0_IRQHandler                              /* Single interrupt vector for all sources*/
    .long   LPUART1_IRQHandler                              /* Single interrupt vector for all sources*/
    .long   LPUART2_IRQHandler                              /* Single interrupt vector for all sources*/
    .long   ADC0_IRQHandler                                 /* ADC0 conversion complete interrupt*/
    .long   CMP0_IRQHandler                                 /* CMP0 interrupt*/
    .long   FTM0_IRQHandler                                 /* FTM0 single interrupt vector for all sources*/
    .long   FTM1_IRQHandler                                 /* FTM1 single interrupt vector for all sources*/
    .long   Reserved35_IRQHandler                           /* Reserved interrupt*/
    .long   RTC_IRQHandler                                  /* Single interrupt vector for all sources*/
    .long   Reserved37_IRQHandler                           /* Reserved interrupt*/
    .long   LPIT0_IRQHandler                                /* LPIT channel 0-1*/
    .long   Reserved39_IRQHandler                           /* Reserved interrupt*/
    .long   TSI_IRQHandler                                  /* TSI interrupt*/
    .long   PDB0_IRQHandler                                 /* Programmable delay block interrupt*/
    .long   PORTBCD_IRQHandler                              /* Pin detect (Port B, C, D)*/
    .long   SCG_RCM_IRQHandler                              /* Single interrupt vector for SCG and RCM*/
    .long   WDOG_EWM_IRQHandler                             /* Single interrupt vector for WDOG and EWM*/
    .long   PWT_LPTMR0_IRQHandler                           /* Single interrupt vector for PWT and LPTMR0*/
    .long   Reserved46_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved47_IRQHandler                           /* Reserved interrupt*/

    .size    __Vectors, . - __Vectors

/* Flash Configuration */
    .section .FlashConfig, "a"
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFFFFFE

    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__Vectors
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
    ldr     r0,=SystemInit
    blx     r0
    cpsie   i               /* Unmask interrupts */
    ldr     r0,=__main
    bx      r0

    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    ldr r0, =DefaultISR
    bx r0
    .size DefaultISR, . - DefaultISR

    .align 1
    .thumb_func
    .weak NMI_Handler
    .type NMI_Handler, %function
NMI_Handler:
    ldr   r0,=NMI_Handler
    bx    r0
    .size NMI_Handler, . - NMI_Handler

    .align 1
    .thumb_func
    .weak HardFault_Handler
    .type HardFault_Handler, %function
HardFault_Handler:
    ldr   r0,=HardFault_Handler
    bx    r0
    .size HardFault_Handler, . - HardFault_Handler

    .align 1
    .thumb_func
    .weak SVC_Handler
    .type SVC_Handler, %function
SVC_Handler:
    ldr   r0,=SVC_Handler
    bx    r0
    .size SVC_Handler, . - SVC_Handler

    .align 1
    .thumb_func
    .weak PendSV_Handler
    .type PendSV_Handler, %function
PendSV_Handler:
    ldr   r0,=PendSV_Handler
    bx    r0
    .size PendSV_Handler, . - PendSV_Handler

    .align 1
    .thumb_func
    .weak SysTick_Handler
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr   r0,=SysTick_Handler
    bx    r0
    .size SysTick_Handler, . - SysTick_Handler

    .align 1
    .thumb_func
    .weak LPI2C0_IRQHandler
    .type LPI2C0_IRQHandler, %function
LPI2C0_IRQHandler:
    ldr   r0,=LPI2C0_DriverIRQHandler
    bx    r0
    .size LPI2C0_IRQHandler, . - LPI2C0_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI0_IRQHandler
    .type LPSPI0_IRQHandler, %function
LPSPI0_IRQHandler:
    ldr   r0,=LPSPI0_DriverIRQHandler
    bx    r0
    .size LPSPI0_IRQHandler, . - LPSPI0_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART0_IRQHandler
    .type LPUART0_IRQHandler, %function
LPUART0_IRQHandler:
    ldr   r0,=LPUART0_DriverIRQHandler
    bx    r0
    .size LPUART0_IRQHandler, . - LPUART0_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART1_IRQHandler
    .type LPUART1_IRQHandler, %function
LPUART1_IRQHandler:
    ldr   r0,=LPUART1_DriverIRQHandler
    bx    r0
    .size LPUART1_IRQHandler, . - LPUART1_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART2_IRQHandler
    .type LPUART2_IRQHandler, %function
LPUART2_IRQHandler:
    ldr   r0,=LPUART2_DriverIRQHandler
    bx    r0
    .size LPUART2_IRQHandler, . - LPUART2_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    Reserved16_IRQHandler
    def_irq_handler    Reserved17_IRQHandler
    def_irq_handler    Reserved18_IRQHandler
    def_irq_handler    Reserved19_IRQHandler
    def_irq_handler    Reserved20_IRQHandler
    def_irq_handler    FTFA_IRQHandler
    def_irq_handler    LVD_LVW_IRQHandler
    def_irq_handler    PORTAE_IRQHandler
    def_irq_handler    LPI2C0_DriverIRQHandler
    def_irq_handler    Reserved25_IRQHandler
    def_irq_handler    LPSPI0_DriverIRQHandler
    def_irq_handler    Reserved27_IRQHandler
    def_irq_handler    LPUART0_DriverIRQHandler
    def_irq_handler    LPUART1_DriverIRQHandler
    def_irq_handler    LPUART2_DriverIRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    CMP0_IRQHandler
    def_irq_handler    FTM0_IRQHandler
    def_irq_handler    FTM1_IRQHandler
    def_irq_handler    Reserved35_IRQHandler
    def_irq_handler    RTC_IRQHandler
    def_irq_handler    Reserved37_IRQHandler
    def_irq_handler    LPIT0_IRQHandler
    def_irq_handler    Reserved39_IRQHandler
    def_irq_handler    TSI_IRQHandler
    def_irq_handler    PDB0_IRQHandler
    def_irq_handler    PORTBCD_IRQHandler
    def_irq_handler    SCG_RCM_IRQHandler
    def_irq_handler    WDOG_EWM_IRQHandler
    def_irq_handler    PWT_LPTMR0_IRQHandler
    def_irq_handler    Reserved46_IRQHandler
    def_irq_handler    Reserved47_IRQHandler

    .end
