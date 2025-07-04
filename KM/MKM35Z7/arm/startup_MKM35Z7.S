/* ------------------------------------------------------------------------- */
/*  @file:    startup_MKM35Z7.s                                              */
/*  @purpose: CMSIS Cortex-M0P Core Device Startup File                      */
/*            MKM35Z7                                                        */
/*  @version: 3.0                                                            */
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
    .long   DMA0_IRQHandler                                 /* DMA channel 0 transfer complete*/
    .long   DMA1_IRQHandler                                 /* DMA channel 1 transfer complete*/
    .long   DMA2_IRQHandler                                 /* DMA channel 2 transfer complete*/
    .long   DMA3_IRQHandler                                 /* DMA channel 3 transfer complete*/
    .long   SPI0_SPI1_SPI2_IRQHandler                       /* SPI0/SPI1/SPI2 ORed interrupt*/
    .long   PDB0_IRQHandler                                 /* PDB0 ORed interrupt*/
    .long   PMC_IRQHandler                                  /* Low-voltage detect, low-voltage warning*/
    .long   TMR0_IRQHandler                                 /* Quad Timer Channel 0*/
    .long   TMR1_IRQHandler                                 /* Quad Timer Channel 1*/
    .long   TMR2_IRQHandler                                 /* Quad Timer Channel 2*/
    .long   TMR3_IRQHandler                                 /* Quad Timer Channel 3*/
    .long   PIT0_PIT1_IRQHandler                            /* PIT0/PIT1 ORed interrupt*/
    .long   LLWU_IRQHandler                                 /* Low Leakage Wakeup*/
    .long   FTFA_IRQHandler                                 /* Command complete and read collision*/
    .long   CMP0_CMP1_CMP2_IRQHandler                       /* CMP0/CMP1/CMP2 ORed interrupt*/
    .long   LCD_IRQHandler                                  /* LCD interrupt*/
    .long   ADC0_IRQHandler                                 /* ADC0 interrupt*/
    .long   PTx_IRQHandler                                  /* Single interrupt vector for GPIOA,GPIOB,GPIOC,GPIOD,GPIOE,GPIOF,GPIOG,GPIOH,GPIOI,GPIOJ,GPIOK,GPIOL,GPIOM*/
    .long   RNGA_IRQHandler                                 /* RNGA interrupt*/
    .long   UART0_UART1_UART2_UART3_IRQHandler              /* UART0/UART1/UART2/UART3 ORed interrupt*/
    .long   MMAU_IRQHandler                                 /* Memory Mapped Arithmetic Unit interrupt*/
    .long   AFE_CH0_IRQHandler                              /* AFE Channel 0*/
    .long   AFE_CH1_IRQHandler                              /* AFE Channel 1*/
    .long   AFE_CH2_IRQHandler                              /* AFE Channel 2*/
    .long   AFE_CH3_IRQHandler                              /* AFE Channel 3*/
    .long   RTC_IRQHandler                                  /* IRTC interrupt*/
    .long   I2C0_I2C1_IRQHandler                            /* I2C0/I2C1 ORed interrupt*/
    .long   LPUART0_IRQHandler                              /* LPUART0 status and error interrupt*/
    .long   MCG_IRQHandler                                  /* MCG interrupt*/
    .long   WDOG_EWM_IRQHandler                             /* WDOG/EWM ORed interrupt*/
    .long   LPTMR0_LPTMR1_IRQHandler                        /* LPTMR0/LPTMR1 interrupt*/
    .long   XBAR_IRQHandler                                 /* XBAR interrupt*/

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
    .weak DMA0_IRQHandler
    .type DMA0_IRQHandler, %function
DMA0_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_IRQHandler, . - DMA0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_IRQHandler
    .type DMA1_IRQHandler, %function
DMA1_IRQHandler:
    ldr   r0,=DMA1_DriverIRQHandler
    bx    r0
    .size DMA1_IRQHandler, . - DMA1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA2_IRQHandler
    .type DMA2_IRQHandler, %function
DMA2_IRQHandler:
    ldr   r0,=DMA2_DriverIRQHandler
    bx    r0
    .size DMA2_IRQHandler, . - DMA2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_IRQHandler
    .type DMA3_IRQHandler, %function
DMA3_IRQHandler:
    ldr   r0,=DMA3_DriverIRQHandler
    bx    r0
    .size DMA3_IRQHandler, . - DMA3_IRQHandler

    .align 1
    .thumb_func
    .weak SPI0_SPI1_SPI2_IRQHandler
    .type SPI0_SPI1_SPI2_IRQHandler, %function
SPI0_SPI1_SPI2_IRQHandler:
    ldr   r0,=SPI0_SPI1_SPI2_DriverIRQHandler
    bx    r0
    .size SPI0_SPI1_SPI2_IRQHandler, . - SPI0_SPI1_SPI2_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_UART1_UART2_UART3_IRQHandler
    .type UART0_UART1_UART2_UART3_IRQHandler, %function
UART0_UART1_UART2_UART3_IRQHandler:
    ldr   r0,=UART0_UART1_UART2_UART3_DriverIRQHandler
    bx    r0
    .size UART0_UART1_UART2_UART3_IRQHandler, . - UART0_UART1_UART2_UART3_IRQHandler

    .align 1
    .thumb_func
    .weak I2C0_I2C1_IRQHandler
    .type I2C0_I2C1_IRQHandler, %function
I2C0_I2C1_IRQHandler:
    ldr   r0,=I2C0_I2C1_DriverIRQHandler
    bx    r0
    .size I2C0_I2C1_IRQHandler, . - I2C0_I2C1_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART0_IRQHandler
    .type LPUART0_IRQHandler, %function
LPUART0_IRQHandler:
    ldr   r0,=LPUART0_DriverIRQHandler
    bx    r0
    .size LPUART0_IRQHandler, . - LPUART0_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    DMA1_DriverIRQHandler
    def_irq_handler    DMA2_DriverIRQHandler
    def_irq_handler    DMA3_DriverIRQHandler
    def_irq_handler    SPI0_SPI1_SPI2_DriverIRQHandler
    def_irq_handler    PDB0_IRQHandler
    def_irq_handler    PMC_IRQHandler
    def_irq_handler    TMR0_IRQHandler
    def_irq_handler    TMR1_IRQHandler
    def_irq_handler    TMR2_IRQHandler
    def_irq_handler    TMR3_IRQHandler
    def_irq_handler    PIT0_PIT1_IRQHandler
    def_irq_handler    LLWU_IRQHandler
    def_irq_handler    FTFA_IRQHandler
    def_irq_handler    CMP0_CMP1_CMP2_IRQHandler
    def_irq_handler    LCD_IRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    PTx_IRQHandler
    def_irq_handler    RNGA_IRQHandler
    def_irq_handler    UART0_UART1_UART2_UART3_DriverIRQHandler
    def_irq_handler    MMAU_IRQHandler
    def_irq_handler    AFE_CH0_IRQHandler
    def_irq_handler    AFE_CH1_IRQHandler
    def_irq_handler    AFE_CH2_IRQHandler
    def_irq_handler    AFE_CH3_IRQHandler
    def_irq_handler    RTC_IRQHandler
    def_irq_handler    I2C0_I2C1_DriverIRQHandler
    def_irq_handler    LPUART0_DriverIRQHandler
    def_irq_handler    MCG_IRQHandler
    def_irq_handler    WDOG_EWM_IRQHandler
    def_irq_handler    LPTMR0_LPTMR1_IRQHandler
    def_irq_handler    XBAR_IRQHandler

    .end
