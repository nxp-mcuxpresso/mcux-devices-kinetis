/* ------------------------------------------------------------------------- */
/*  @file:    startup_MK02F12810.s                                           */
/*  @purpose: CMSIS Cortex-M4 Core Device Startup File                       */
/*            MK02F12810                                                     */
/*  @version: 1.0                                                            */
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
    .arch armv7-m
    .eabi_attribute Tag_ABI_align_preserved, 1 /*8-byte alignment */

    .section .isr_vector, "a"
    .align 2
    .globl __Vectors
__Vectors:
    .long   Image$$ARM_LIB_STACK$$ZI$$Limit                 /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   DMA0_IRQHandler                                 /* DMA Channel 0 Transfer Complete*/
    .long   DMA1_IRQHandler                                 /* DMA Channel 1 Transfer Complete*/
    .long   DMA2_IRQHandler                                 /* DMA Channel 2 Transfer Complete*/
    .long   DMA3_IRQHandler                                 /* DMA Channel 3 Transfer Complete*/
    .long   Reserved20_IRQHandler                           /* Reserved interrupt 20*/
    .long   Reserved21_IRQHandler                           /* Reserved interrupt 21*/
    .long   Reserved22_IRQHandler                           /* Reserved interrupt 22*/
    .long   Reserved23_IRQHandler                           /* Reserved interrupt 23*/
    .long   Reserved24_IRQHandler                           /* Reserved interrupt 24*/
    .long   Reserved25_IRQHandler                           /* Reserved interrupt 25*/
    .long   Reserved26_IRQHandler                           /* Reserved interrupt 26*/
    .long   Reserved27_IRQHandler                           /* Reserved interrupt 27*/
    .long   Reserved28_IRQHandler                           /* Reserved interrupt 28*/
    .long   Reserved29_IRQHandler                           /* Reserved interrupt 29*/
    .long   Reserved30_IRQHandler                           /* Reserved interrupt 30*/
    .long   Reserved31_IRQHandler                           /* Reserved interrupt 31*/
    .long   DMA_Error_IRQHandler                            /* DMA Error Interrupt*/
    .long   MCM_IRQHandler                                  /* Normal Interrupt*/
    .long   FTF_IRQHandler                                  /* FTFA Command complete interrupt*/
    .long   Read_Collision_IRQHandler                       /* Read Collision Interrupt*/
    .long   LVD_LVW_IRQHandler                              /* Low Voltage Detect, Low Voltage Warning*/
    .long   LLWU_IRQHandler                                 /* Low Leakage Wakeup Unit*/
    .long   WDOG_EWM_IRQHandler                             /* WDOG Interrupt*/
    .long   Reserved39_IRQHandler                           /* Reserved Interrupt 39*/
    .long   I2C0_IRQHandler                                 /* I2C0 interrupt*/
    .long   Reserved41_IRQHandler                           /* Reserved Interrupt 41*/
    .long   SPI0_IRQHandler                                 /* SPI0 Interrupt*/
    .long   Reserved43_IRQHandler                           /* Reserved Interrupt 43*/
    .long   Reserved44_IRQHandler                           /* Reserved Interrupt 44*/
    .long   Reserved45_IRQHandler                           /* Reserved interrupt 45*/
    .long   Reserved46_IRQHandler                           /* Reserved interrupt 46*/
    .long   UART0_RX_TX_IRQHandler                          /* UART0 Receive/Transmit interrupt*/
    .long   UART0_ERR_IRQHandler                            /* UART0 Error interrupt*/
    .long   UART1_RX_TX_IRQHandler                          /* UART1 Receive/Transmit interrupt*/
    .long   UART1_ERR_IRQHandler                            /* UART1 Error interrupt*/
    .long   Reserved51_IRQHandler                           /* Reserved interrupt 51*/
    .long   Reserved52_IRQHandler                           /* Reserved interrupt 52*/
    .long   Reserved53_IRQHandler                           /* Reserved interrupt 53*/
    .long   Reserved54_IRQHandler                           /* Reserved interrupt 54*/
    .long   ADC0_IRQHandler                                 /* ADC0 interrupt*/
    .long   CMP0_IRQHandler                                 /* CMP0 interrupt*/
    .long   CMP1_IRQHandler                                 /* CMP1 interrupt*/
    .long   FTM0_IRQHandler                                 /* FTM0 fault, overflow and channels interrupt*/
    .long   FTM1_IRQHandler                                 /* FTM1 fault, overflow and channels interrupt*/
    .long   FTM2_IRQHandler                                 /* FTM2 fault, overflow and channels interrupt*/
    .long   Reserved61_IRQHandler                           /* Reserved interrupt 61*/
    .long   Reserved62_IRQHandler                           /* Reserved interrupt 62*/
    .long   Reserved63_IRQHandler                           /* Reserved interrupt 63*/
    .long   PIT0_IRQHandler                                 /* PIT timer channel 0 interrupt*/
    .long   PIT1_IRQHandler                                 /* PIT timer channel 1 interrupt*/
    .long   PIT2_IRQHandler                                 /* PIT timer channel 2 interrupt*/
    .long   PIT3_IRQHandler                                 /* PIT timer channel 3 interrupt*/
    .long   PDB0_IRQHandler                                 /* PDB0 Interrupt*/
    .long   Reserved69_IRQHandler                           /* Reserved interrupt 69*/
    .long   Reserved70_IRQHandler                           /* Reserved interrupt 70*/
    .long   Reserved71_IRQHandler                           /* Reserved interrupt 71*/
    .long   DAC0_IRQHandler                                 /* DAC0 interrupt*/
    .long   MCG_IRQHandler                                  /* MCG Interrupt*/
    .long   LPTMR0_IRQHandler                               /* LPTimer interrupt*/
    .long   PORTA_IRQHandler                                /* Port A interrupt*/
    .long   PORTB_IRQHandler                                /* Port B interrupt*/
    .long   PORTC_IRQHandler                                /* Port C interrupt*/
    .long   PORTD_IRQHandler                                /* Port D interrupt*/
    .long   PORTE_IRQHandler                                /* Port E interrupt*/
    .long   SWI_IRQHandler                                  /* Software interrupt*/
    .long   Reserved81_IRQHandler                           /* Reserved interrupt 81*/
    .long   Reserved82_IRQHandler                           /* Reserved interrupt 82*/
    .long   Reserved83_IRQHandler                           /* Reserved interrupt 83*/
    .long   Reserved84_IRQHandler                           /* Reserved interrupt 84*/
    .long   Reserved85_IRQHandler                           /* Reserved interrupt 85*/
    .long   Reserved86_IRQHandler                           /* Reserved interrupt 86*/
    .long   Reserved87_IRQHandler                           /* Reserved interrupt 87*/
    .long   Reserved88_IRQHandler                           /* Reserved interrupt 88*/
    .long   Reserved89_IRQHandler                           /* Reserved interrupt 89*/
    .long   DefaultISR                                      /* 90*/
    .long   DefaultISR                                      /* 91*/
    .long   DefaultISR                                      /* 92*/
    .long   DefaultISR                                      /* 93*/
    .long   DefaultISR                                      /* 94*/
    .long   DefaultISR                                      /* 95*/
    .long   DefaultISR                                      /* 96*/
    .long   DefaultISR                                      /* 97*/
    .long   DefaultISR                                      /* 98*/
    .long   DefaultISR                                      /* 99*/
    .long   DefaultISR                                      /* 100*/
    .long   DefaultISR                                      /* 101*/
    .long   DefaultISR                                      /* 102*/
    .long   DefaultISR                                      /* 103*/
    .long   DefaultISR                                      /* 104*/
    .long   DefaultISR                                      /* 105*/
    .long   DefaultISR                                      /* 106*/
    .long   DefaultISR                                      /* 107*/
    .long   DefaultISR                                      /* 108*/
    .long   DefaultISR                                      /* 109*/
    .long   DefaultISR                                      /* 110*/
    .long   DefaultISR                                      /* 111*/
    .long   DefaultISR                                      /* 112*/
    .long   DefaultISR                                      /* 113*/
    .long   DefaultISR                                      /* 114*/
    .long   DefaultISR                                      /* 115*/
    .long   DefaultISR                                      /* 116*/
    .long   DefaultISR                                      /* 117*/
    .long   DefaultISR                                      /* 118*/
    .long   DefaultISR                                      /* 119*/
    .long   DefaultISR                                      /* 120*/
    .long   DefaultISR                                      /* 121*/
    .long   DefaultISR                                      /* 122*/
    .long   DefaultISR                                      /* 123*/
    .long   DefaultISR                                      /* 124*/
    .long   DefaultISR                                      /* 125*/
    .long   DefaultISR                                      /* 126*/
    .long   DefaultISR                                      /* 127*/
    .long   DefaultISR                                      /* 128*/
    .long   DefaultISR                                      /* 129*/
    .long   DefaultISR                                      /* 130*/
    .long   DefaultISR                                      /* 131*/
    .long   DefaultISR                                      /* 132*/
    .long   DefaultISR                                      /* 133*/
    .long   DefaultISR                                      /* 134*/
    .long   DefaultISR                                      /* 135*/
    .long   DefaultISR                                      /* 136*/
    .long   DefaultISR                                      /* 137*/
    .long   DefaultISR                                      /* 138*/
    .long   DefaultISR                                      /* 139*/
    .long   DefaultISR                                      /* 140*/
    .long   DefaultISR                                      /* 141*/
    .long   DefaultISR                                      /* 142*/
    .long   DefaultISR                                      /* 143*/
    .long   DefaultISR                                      /* 144*/
    .long   DefaultISR                                      /* 145*/
    .long   DefaultISR                                      /* 146*/
    .long   DefaultISR                                      /* 147*/
    .long   DefaultISR                                      /* 148*/
    .long   DefaultISR                                      /* 149*/
    .long   DefaultISR                                      /* 150*/
    .long   DefaultISR                                      /* 151*/
    .long   DefaultISR                                      /* 152*/
    .long   DefaultISR                                      /* 153*/
    .long   DefaultISR                                      /* 154*/
    .long   DefaultISR                                      /* 155*/
    .long   DefaultISR                                      /* 156*/
    .long   DefaultISR                                      /* 157*/
    .long   DefaultISR                                      /* 158*/
    .long   DefaultISR                                      /* 159*/
    .long   DefaultISR                                      /* 160*/
    .long   DefaultISR                                      /* 161*/
    .long   DefaultISR                                      /* 162*/
    .long   DefaultISR                                      /* 163*/
    .long   DefaultISR                                      /* 164*/
    .long   DefaultISR                                      /* 165*/
    .long   DefaultISR                                      /* 166*/
    .long   DefaultISR                                      /* 167*/
    .long   DefaultISR                                      /* 168*/
    .long   DefaultISR                                      /* 169*/
    .long   DefaultISR                                      /* 170*/
    .long   DefaultISR                                      /* 171*/
    .long   DefaultISR                                      /* 172*/
    .long   DefaultISR                                      /* 173*/
    .long   DefaultISR                                      /* 174*/
    .long   DefaultISR                                      /* 175*/
    .long   DefaultISR                                      /* 176*/
    .long   DefaultISR                                      /* 177*/
    .long   DefaultISR                                      /* 178*/
    .long   DefaultISR                                      /* 179*/
    .long   DefaultISR                                      /* 180*/
    .long   DefaultISR                                      /* 181*/
    .long   DefaultISR                                      /* 182*/
    .long   DefaultISR                                      /* 183*/
    .long   DefaultISR                                      /* 184*/
    .long   DefaultISR                                      /* 185*/
    .long   DefaultISR                                      /* 186*/
    .long   DefaultISR                                      /* 187*/
    .long   DefaultISR                                      /* 188*/
    .long   DefaultISR                                      /* 189*/
    .long   DefaultISR                                      /* 190*/
    .long   DefaultISR                                      /* 191*/
    .long   DefaultISR                                      /* 192*/
    .long   DefaultISR                                      /* 193*/
    .long   DefaultISR                                      /* 194*/
    .long   DefaultISR                                      /* 195*/
    .long   DefaultISR                                      /* 196*/
    .long   DefaultISR                                      /* 197*/
    .long   DefaultISR                                      /* 198*/
    .long   DefaultISR                                      /* 199*/
    .long   DefaultISR                                      /* 200*/
    .long   DefaultISR                                      /* 201*/
    .long   DefaultISR                                      /* 202*/
    .long   DefaultISR                                      /* 203*/
    .long   DefaultISR                                      /* 204*/
    .long   DefaultISR                                      /* 205*/
    .long   DefaultISR                                      /* 206*/
    .long   DefaultISR                                      /* 207*/
    .long   DefaultISR                                      /* 208*/
    .long   DefaultISR                                      /* 209*/
    .long   DefaultISR                                      /* 210*/
    .long   DefaultISR                                      /* 211*/
    .long   DefaultISR                                      /* 212*/
    .long   DefaultISR                                      /* 213*/
    .long   DefaultISR                                      /* 214*/
    .long   DefaultISR                                      /* 215*/
    .long   DefaultISR                                      /* 216*/
    .long   DefaultISR                                      /* 217*/
    .long   DefaultISR                                      /* 218*/
    .long   DefaultISR                                      /* 219*/
    .long   DefaultISR                                      /* 220*/
    .long   DefaultISR                                      /* 221*/
    .long   DefaultISR                                      /* 222*/
    .long   DefaultISR                                      /* 223*/
    .long   DefaultISR                                      /* 224*/
    .long   DefaultISR                                      /* 225*/
    .long   DefaultISR                                      /* 226*/
    .long   DefaultISR                                      /* 227*/
    .long   DefaultISR                                      /* 228*/
    .long   DefaultISR                                      /* 229*/
    .long   DefaultISR                                      /* 230*/
    .long   DefaultISR                                      /* 231*/
    .long   DefaultISR                                      /* 232*/
    .long   DefaultISR                                      /* 233*/
    .long   DefaultISR                                      /* 234*/
    .long   DefaultISR                                      /* 235*/
    .long   DefaultISR                                      /* 236*/
    .long   DefaultISR                                      /* 237*/
    .long   DefaultISR                                      /* 238*/
    .long   DefaultISR                                      /* 239*/
    .long   DefaultISR                                      /* 240*/
    .long   DefaultISR                                      /* 241*/
    .long   DefaultISR                                      /* 242*/
    .long   DefaultISR                                      /* 243*/
    .long   DefaultISR                                      /* 244*/
    .long   DefaultISR                                      /* 245*/
    .long   DefaultISR                                      /* 246*/
    .long   DefaultISR                                      /* 247*/
    .long   DefaultISR                                      /* 248*/
    .long   DefaultISR                                      /* 249*/
    .long   DefaultISR                                      /* 250*/
    .long   DefaultISR                                      /* 251*/
    .long   DefaultISR                                      /* 252*/
    .long   DefaultISR                                      /* 253*/
    .long   DefaultISR                                      /* 254*/
    .long   0xFFFFFFFF                                      /*  Reserved for user TRIM value*/

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
    b DefaultISR
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
    .weak DMA_Error_IRQHandler
    .type DMA_Error_IRQHandler, %function
DMA_Error_IRQHandler:
    ldr   r0,=DMA_Error_DriverIRQHandler
    bx    r0
    .size DMA_Error_IRQHandler, . - DMA_Error_IRQHandler

    .align 1
    .thumb_func
    .weak I2C0_IRQHandler
    .type I2C0_IRQHandler, %function
I2C0_IRQHandler:
    ldr   r0,=I2C0_DriverIRQHandler
    bx    r0
    .size I2C0_IRQHandler, . - I2C0_IRQHandler

    .align 1
    .thumb_func
    .weak SPI0_IRQHandler
    .type SPI0_IRQHandler, %function
SPI0_IRQHandler:
    ldr   r0,=SPI0_DriverIRQHandler
    bx    r0
    .size SPI0_IRQHandler, . - SPI0_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_RX_TX_IRQHandler
    .type UART0_RX_TX_IRQHandler, %function
UART0_RX_TX_IRQHandler:
    ldr   r0,=UART0_RX_TX_DriverIRQHandler
    bx    r0
    .size UART0_RX_TX_IRQHandler, . - UART0_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_ERR_IRQHandler
    .type UART0_ERR_IRQHandler, %function
UART0_ERR_IRQHandler:
    ldr   r0,=UART0_ERR_DriverIRQHandler
    bx    r0
    .size UART0_ERR_IRQHandler, . - UART0_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak UART1_RX_TX_IRQHandler
    .type UART1_RX_TX_IRQHandler, %function
UART1_RX_TX_IRQHandler:
    ldr   r0,=UART1_RX_TX_DriverIRQHandler
    bx    r0
    .size UART1_RX_TX_IRQHandler, . - UART1_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART1_ERR_IRQHandler
    .type UART1_ERR_IRQHandler, %function
UART1_ERR_IRQHandler:
    ldr   r0,=UART1_ERR_DriverIRQHandler
    bx    r0
    .size UART1_ERR_IRQHandler, . - UART1_ERR_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    DMA1_DriverIRQHandler
    def_irq_handler    DMA2_DriverIRQHandler
    def_irq_handler    DMA3_DriverIRQHandler
    def_irq_handler    Reserved20_IRQHandler
    def_irq_handler    Reserved21_IRQHandler
    def_irq_handler    Reserved22_IRQHandler
    def_irq_handler    Reserved23_IRQHandler
    def_irq_handler    Reserved24_IRQHandler
    def_irq_handler    Reserved25_IRQHandler
    def_irq_handler    Reserved26_IRQHandler
    def_irq_handler    Reserved27_IRQHandler
    def_irq_handler    Reserved28_IRQHandler
    def_irq_handler    Reserved29_IRQHandler
    def_irq_handler    Reserved30_IRQHandler
    def_irq_handler    Reserved31_IRQHandler
    def_irq_handler    DMA_Error_DriverIRQHandler
    def_irq_handler    MCM_IRQHandler
    def_irq_handler    FTF_IRQHandler
    def_irq_handler    Read_Collision_IRQHandler
    def_irq_handler    LVD_LVW_IRQHandler
    def_irq_handler    LLWU_IRQHandler
    def_irq_handler    WDOG_EWM_IRQHandler
    def_irq_handler    Reserved39_IRQHandler
    def_irq_handler    I2C0_DriverIRQHandler
    def_irq_handler    Reserved41_IRQHandler
    def_irq_handler    SPI0_DriverIRQHandler
    def_irq_handler    Reserved43_IRQHandler
    def_irq_handler    Reserved44_IRQHandler
    def_irq_handler    Reserved45_IRQHandler
    def_irq_handler    Reserved46_IRQHandler
    def_irq_handler    UART0_RX_TX_DriverIRQHandler
    def_irq_handler    UART0_ERR_DriverIRQHandler
    def_irq_handler    UART1_RX_TX_DriverIRQHandler
    def_irq_handler    UART1_ERR_DriverIRQHandler
    def_irq_handler    Reserved51_IRQHandler
    def_irq_handler    Reserved52_IRQHandler
    def_irq_handler    Reserved53_IRQHandler
    def_irq_handler    Reserved54_IRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    CMP0_IRQHandler
    def_irq_handler    CMP1_IRQHandler
    def_irq_handler    FTM0_IRQHandler
    def_irq_handler    FTM1_IRQHandler
    def_irq_handler    FTM2_IRQHandler
    def_irq_handler    Reserved61_IRQHandler
    def_irq_handler    Reserved62_IRQHandler
    def_irq_handler    Reserved63_IRQHandler
    def_irq_handler    PIT0_IRQHandler
    def_irq_handler    PIT1_IRQHandler
    def_irq_handler    PIT2_IRQHandler
    def_irq_handler    PIT3_IRQHandler
    def_irq_handler    PDB0_IRQHandler
    def_irq_handler    Reserved69_IRQHandler
    def_irq_handler    Reserved70_IRQHandler
    def_irq_handler    Reserved71_IRQHandler
    def_irq_handler    DAC0_IRQHandler
    def_irq_handler    MCG_IRQHandler
    def_irq_handler    LPTMR0_IRQHandler
    def_irq_handler    PORTA_IRQHandler
    def_irq_handler    PORTB_IRQHandler
    def_irq_handler    PORTC_IRQHandler
    def_irq_handler    PORTD_IRQHandler
    def_irq_handler    PORTE_IRQHandler
    def_irq_handler    SWI_IRQHandler
    def_irq_handler    Reserved81_IRQHandler
    def_irq_handler    Reserved82_IRQHandler
    def_irq_handler    Reserved83_IRQHandler
    def_irq_handler    Reserved84_IRQHandler
    def_irq_handler    Reserved85_IRQHandler
    def_irq_handler    Reserved86_IRQHandler
    def_irq_handler    Reserved87_IRQHandler
    def_irq_handler    Reserved88_IRQHandler
    def_irq_handler    Reserved89_IRQHandler

    .end
