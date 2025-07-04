/* ------------------------------------------------------------------------- */
/*  @file:    startup_K32L2A31A.s                                            */
/*  @purpose: CMSIS Cortex-M0P Core Device Startup File                      */
/*            K32L2A31A                                                      */
/*  @version: 2.0                                                            */
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
    .long   DMA0_04_IRQHandler                              /* DMA0 channel 0/4 transfer complete*/
    .long   DMA0_15_IRQHandler                              /* DMA0 channel 1/5 transfer complete*/
    .long   DMA0_26_IRQHandler                              /* DMA0 channel 2/6 transfer complete*/
    .long   DMA0_37_IRQHandler                              /* DMA0 channel 3/7 transfer complete*/
    .long   CTI0_DMA0_Error_IRQHandler                      /* CTI0 or DMA0 error*/
    .long   FLEXIO0_IRQHandler                              /* FLEXIO0*/
    .long   TPM0_IRQHandler                                 /* TPM0 single interrupt vector for all sources*/
    .long   TPM1_IRQHandler                                 /* TPM1 single interrupt vector for all sources*/
    .long   TPM2_IRQHandler                                 /* TPM2 single interrupt vector for all sources*/
    .long   LPIT0_IRQHandler                                /* LPIT0 interrupt*/
    .long   LPSPI0_IRQHandler                               /* LPSPI0 single interrupt vector for all sources*/
    .long   LPSPI1_IRQHandler                               /* LPSPI1 single interrupt vector for all sources*/
    .long   LPUART0_IRQHandler                              /* LPUART0 status and error*/
    .long   LPUART1_IRQHandler                              /* LPUART1 status and error*/
    .long   LPI2C0_IRQHandler                               /* LPI2C0 interrupt*/
    .long   LPI2C1_IRQHandler                               /* LPI2C1 interrupt*/
    .long   Reserved32_IRQHandler                           /* Reserved interrupt*/
    .long   PORTA_IRQHandler                                /* PORTA Pin detect*/
    .long   PORTB_IRQHandler                                /* PORTB Pin detect*/
    .long   PORTC_IRQHandler                                /* PORTC Pin detect*/
    .long   PORTD_IRQHandler                                /* PORTD Pin detect*/
    .long   PORTE_IRQHandler                                /* PORTE Pin detect*/
    .long   LLWU_IRQHandler                                 /* Low leakage wakeup */
    .long   Reserved39_IRQHandler                           /* Reserved interrupt*/
    .long   USB0_IRQHandler                                 /* USB0 interrupt*/
    .long   ADC0_IRQHandler                                 /* ADC0 interrupt*/
    .long   LPTMR0_IRQHandler                               /* LPTMR0 interrupt*/
    .long   RTC_Seconds_IRQHandler                          /* RTC seconds*/
    .long   INTMUX0_0_IRQHandler                            /* INTMUX0 channel 0 interrupt*/
    .long   INTMUX0_1_IRQHandler                            /* INTMUX0 channel 1 interrupt*/
    .long   INTMUX0_2_IRQHandler                            /* INTMUX0 channel 2 interrupt*/
    .long   INTMUX0_3_IRQHandler                            /* INTMUX0 channel 3 interrupt*/
    .long   LPTMR1_IRQHandler                               /* LPTMR1 interrupt  (INTMUX source IRQ0)*/
    .long   Reserved49_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved50_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved51_IRQHandler                           /* Reserved interrupt*/
    .long   LPSPI2_IRQHandler                               /* LPSPI2 single interrupt vector for all sources (INTMUX source IRQ4)*/
    .long   LPUART2_IRQHandler                              /* LPUART2 status and error (INTMUX source IRQ5)*/
    .long   EMVSIM0_IRQHandler                              /* EMVSIM0 interrupt (INTMUX source IRQ6)*/
    .long   LPI2C2_IRQHandler                               /* LPI2C2 interrupt (INTMUX source IRQ7)*/
    .long   TSI0_IRQHandler                                 /* TSI0 interrupt (INTMUX source IRQ8)*/
    .long   PMC_IRQHandler                                  /* PMC interrupt (INTMUX source IRQ9)*/
    .long   FTFA_IRQHandler                                 /* FTFA interrupt (INTMUX source IRQ10)*/
    .long   SCG_IRQHandler                                  /* SCG interrupt (INTMUX source IRQ11)*/
    .long   WDOG0_IRQHandler                                /* WDOG0 interrupt (INTMUX source IRQ12)*/
    .long   DAC0_IRQHandler                                 /* DAC0 interrupt (INTMUX source IRQ13)*/
    .long   TRNG_IRQHandler                                 /* TRNG interrupt (INTMUX source IRQ14)*/
    .long   RCM_IRQHandler                                  /* RCM interrupt (INTMUX source IRQ15)*/
    .long   CMP0_IRQHandler                                 /* CMP0 interrupt (INTMUX source IRQ16)*/
    .long   CMP1_IRQHandler                                 /* CMP1 interrupt (INTMUX source IRQ17)*/
    .long   RTC_IRQHandler                                  /* RTC Alarm interrupt (INTMUX source IRQ18)*/
    .long   Reserved67_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved68_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved69_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved70_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved71_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved72_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved73_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved74_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved75_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved76_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved77_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved78_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved79_IRQHandler                           /* Reserved interrupt*/

    .size    __Vectors, . - __Vectors

/* Flash Configuration */
    .section .FlashConfig, "a"
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFF3DFE

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
    .weak DMA0_04_IRQHandler
    .type DMA0_04_IRQHandler, %function
DMA0_04_IRQHandler:
    ldr   r0,=DMA0_04_DriverIRQHandler
    bx    r0
    .size DMA0_04_IRQHandler, . - DMA0_04_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_15_IRQHandler
    .type DMA0_15_IRQHandler, %function
DMA0_15_IRQHandler:
    ldr   r0,=DMA0_15_DriverIRQHandler
    bx    r0
    .size DMA0_15_IRQHandler, . - DMA0_15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_26_IRQHandler
    .type DMA0_26_IRQHandler, %function
DMA0_26_IRQHandler:
    ldr   r0,=DMA0_26_DriverIRQHandler
    bx    r0
    .size DMA0_26_IRQHandler, . - DMA0_26_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_37_IRQHandler
    .type DMA0_37_IRQHandler, %function
DMA0_37_IRQHandler:
    ldr   r0,=DMA0_37_DriverIRQHandler
    bx    r0
    .size DMA0_37_IRQHandler, . - DMA0_37_IRQHandler

    .align 1
    .thumb_func
    .weak CTI0_DMA0_Error_IRQHandler
    .type CTI0_DMA0_Error_IRQHandler, %function
CTI0_DMA0_Error_IRQHandler:
    ldr   r0,=CTI0_DMA0_Error_DriverIRQHandler
    bx    r0
    .size CTI0_DMA0_Error_IRQHandler, . - CTI0_DMA0_Error_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXIO0_IRQHandler
    .type FLEXIO0_IRQHandler, %function
FLEXIO0_IRQHandler:
    ldr   r0,=FLEXIO0_DriverIRQHandler
    bx    r0
    .size FLEXIO0_IRQHandler, . - FLEXIO0_IRQHandler

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
    .weak LPSPI1_IRQHandler
    .type LPSPI1_IRQHandler, %function
LPSPI1_IRQHandler:
    ldr   r0,=LPSPI1_DriverIRQHandler
    bx    r0
    .size LPSPI1_IRQHandler, . - LPSPI1_IRQHandler

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
    .weak LPI2C0_IRQHandler
    .type LPI2C0_IRQHandler, %function
LPI2C0_IRQHandler:
    ldr   r0,=LPI2C0_DriverIRQHandler
    bx    r0
    .size LPI2C0_IRQHandler, . - LPI2C0_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C1_IRQHandler
    .type LPI2C1_IRQHandler, %function
LPI2C1_IRQHandler:
    ldr   r0,=LPI2C1_DriverIRQHandler
    bx    r0
    .size LPI2C1_IRQHandler, . - LPI2C1_IRQHandler

    .align 1
    .thumb_func
    .weak INTMUX0_0_IRQHandler
    .type INTMUX0_0_IRQHandler, %function
INTMUX0_0_IRQHandler:
    ldr   r0,=INTMUX0_0_DriverIRQHandler
    bx    r0
    .size INTMUX0_0_IRQHandler, . - INTMUX0_0_IRQHandler

    .align 1
    .thumb_func
    .weak INTMUX0_1_IRQHandler
    .type INTMUX0_1_IRQHandler, %function
INTMUX0_1_IRQHandler:
    ldr   r0,=INTMUX0_1_DriverIRQHandler
    bx    r0
    .size INTMUX0_1_IRQHandler, . - INTMUX0_1_IRQHandler

    .align 1
    .thumb_func
    .weak INTMUX0_2_IRQHandler
    .type INTMUX0_2_IRQHandler, %function
INTMUX0_2_IRQHandler:
    ldr   r0,=INTMUX0_2_DriverIRQHandler
    bx    r0
    .size INTMUX0_2_IRQHandler, . - INTMUX0_2_IRQHandler

    .align 1
    .thumb_func
    .weak INTMUX0_3_IRQHandler
    .type INTMUX0_3_IRQHandler, %function
INTMUX0_3_IRQHandler:
    ldr   r0,=INTMUX0_3_DriverIRQHandler
    bx    r0
    .size INTMUX0_3_IRQHandler, . - INTMUX0_3_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI2_IRQHandler
    .type LPSPI2_IRQHandler, %function
LPSPI2_IRQHandler:
    ldr   r0,=LPSPI2_DriverIRQHandler
    bx    r0
    .size LPSPI2_IRQHandler, . - LPSPI2_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART2_IRQHandler
    .type LPUART2_IRQHandler, %function
LPUART2_IRQHandler:
    ldr   r0,=LPUART2_DriverIRQHandler
    bx    r0
    .size LPUART2_IRQHandler, . - LPUART2_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C2_IRQHandler
    .type LPI2C2_IRQHandler, %function
LPI2C2_IRQHandler:
    ldr   r0,=LPI2C2_DriverIRQHandler
    bx    r0
    .size LPI2C2_IRQHandler, . - LPI2C2_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    DMA0_04_DriverIRQHandler
    def_irq_handler    DMA0_15_DriverIRQHandler
    def_irq_handler    DMA0_26_DriverIRQHandler
    def_irq_handler    DMA0_37_DriverIRQHandler
    def_irq_handler    CTI0_DMA0_Error_DriverIRQHandler
    def_irq_handler    FLEXIO0_DriverIRQHandler
    def_irq_handler    TPM0_IRQHandler
    def_irq_handler    TPM1_IRQHandler
    def_irq_handler    TPM2_IRQHandler
    def_irq_handler    LPIT0_IRQHandler
    def_irq_handler    LPSPI0_DriverIRQHandler
    def_irq_handler    LPSPI1_DriverIRQHandler
    def_irq_handler    LPUART0_DriverIRQHandler
    def_irq_handler    LPUART1_DriverIRQHandler
    def_irq_handler    LPI2C0_DriverIRQHandler
    def_irq_handler    LPI2C1_DriverIRQHandler
    def_irq_handler    Reserved32_IRQHandler
    def_irq_handler    PORTA_IRQHandler
    def_irq_handler    PORTB_IRQHandler
    def_irq_handler    PORTC_IRQHandler
    def_irq_handler    PORTD_IRQHandler
    def_irq_handler    PORTE_IRQHandler
    def_irq_handler    LLWU_IRQHandler
    def_irq_handler    Reserved39_IRQHandler
    def_irq_handler    USB0_IRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    LPTMR0_IRQHandler
    def_irq_handler    RTC_Seconds_IRQHandler
    def_irq_handler    INTMUX0_0_DriverIRQHandler
    def_irq_handler    INTMUX0_1_DriverIRQHandler
    def_irq_handler    INTMUX0_2_DriverIRQHandler
    def_irq_handler    INTMUX0_3_DriverIRQHandler
    def_irq_handler    LPTMR1_IRQHandler
    def_irq_handler    Reserved49_IRQHandler
    def_irq_handler    Reserved50_IRQHandler
    def_irq_handler    Reserved51_IRQHandler
    def_irq_handler    LPSPI2_DriverIRQHandler
    def_irq_handler    LPUART2_DriverIRQHandler
    def_irq_handler    EMVSIM0_IRQHandler
    def_irq_handler    LPI2C2_DriverIRQHandler
    def_irq_handler    TSI0_IRQHandler
    def_irq_handler    PMC_IRQHandler
    def_irq_handler    FTFA_IRQHandler
    def_irq_handler    SCG_IRQHandler
    def_irq_handler    WDOG0_IRQHandler
    def_irq_handler    DAC0_IRQHandler
    def_irq_handler    TRNG_IRQHandler
    def_irq_handler    RCM_IRQHandler
    def_irq_handler    CMP0_IRQHandler
    def_irq_handler    CMP1_IRQHandler
    def_irq_handler    RTC_IRQHandler
    def_irq_handler    Reserved67_IRQHandler
    def_irq_handler    Reserved68_IRQHandler
    def_irq_handler    Reserved69_IRQHandler
    def_irq_handler    Reserved70_IRQHandler
    def_irq_handler    Reserved71_IRQHandler
    def_irq_handler    Reserved72_IRQHandler
    def_irq_handler    Reserved73_IRQHandler
    def_irq_handler    Reserved74_IRQHandler
    def_irq_handler    Reserved75_IRQHandler
    def_irq_handler    Reserved76_IRQHandler
    def_irq_handler    Reserved77_IRQHandler
    def_irq_handler    Reserved78_IRQHandler
    def_irq_handler    Reserved79_IRQHandler

    .end
