/*
** ###################################################################
**     Processors:          MK02FN128VFM10
**                          MK02FN128VLF10
**                          MK02FN128VLH10
**                          MK02FN64VFM10
**                          MK02FN64VLF10
**                          MK02FN64VLH10
**
**     Version:             rev. 1.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for UART
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2014-02-24)
**         Initial version
**     - rev. 0.2 (2014-07-15)
**         Module access macro module_BASES replaced by module_BASE_PTRS.
**         Update of system and startup files.
**     - rev. 0.3 (2014-08-28)
**         Update of system files - default clock configuration changed.
**         Update of startup files - possibility to override DefaultISR added.
**     - rev. 0.4 (2014-10-14)
**         Interrupt INT_LPTimer renamed to INT_LPTMR0, interrupt INT_Watchdog renamed to INT_WDOG_EWM.
**     - rev. 0.5 (2015-02-19)
**         Renamed interrupt vector LLW to LLWU.
**     - rev. 1.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_UART.h
 * @version 1.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for UART
 *
 * CMSIS Peripheral Access Layer for UART
 */

#if !defined(PERI_UART_H_)
#define PERI_UART_H_                             /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN128VLF10) || defined(CPU_MK02FN128VLH10) || defined(CPU_MK02FN64VFM10) || defined(CPU_MK02FN64VLF10) || defined(CPU_MK02FN64VLH10))
#include "MK02F12810_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__CWCC__)
  #pragma push
  #pragma cpp_extensions on
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- UART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UART_Peripheral_Access_Layer UART Peripheral Access Layer
 * @{
 */

/** UART - Register Layout Typedef */
typedef struct {
  __IO uint8_t BDH;                                /**< UART Baud Rate Registers: High, offset: 0x0 */
  __IO uint8_t BDL;                                /**< UART Baud Rate Registers: Low, offset: 0x1 */
  __IO uint8_t C1;                                 /**< UART Control Register 1, offset: 0x2 */
  __IO uint8_t C2;                                 /**< UART Control Register 2, offset: 0x3 */
  __I  uint8_t S1;                                 /**< UART Status Register 1, offset: 0x4 */
  __IO uint8_t S2;                                 /**< UART Status Register 2, offset: 0x5 */
  __IO uint8_t C3;                                 /**< UART Control Register 3, offset: 0x6 */
  __IO uint8_t D;                                  /**< UART Data Register, offset: 0x7 */
  __IO uint8_t MA1;                                /**< UART Match Address Registers 1, offset: 0x8 */
  __IO uint8_t MA2;                                /**< UART Match Address Registers 2, offset: 0x9 */
  __IO uint8_t C4;                                 /**< UART Control Register 4, offset: 0xA */
  __IO uint8_t C5;                                 /**< UART Control Register 5, offset: 0xB */
  __I  uint8_t ED;                                 /**< UART Extended Data Register, offset: 0xC */
  __IO uint8_t MODEM;                              /**< UART Modem Register, offset: 0xD */
  __IO uint8_t IR;                                 /**< UART Infrared Register, offset: 0xE */
       uint8_t RESERVED_0[1];
  __IO uint8_t PFIFO;                              /**< UART FIFO Parameters, offset: 0x10 */
  __IO uint8_t CFIFO;                              /**< UART FIFO Control Register, offset: 0x11 */
  __IO uint8_t SFIFO;                              /**< UART FIFO Status Register, offset: 0x12 */
  __IO uint8_t TWFIFO;                             /**< UART FIFO Transmit Watermark, offset: 0x13 */
  __I  uint8_t TCFIFO;                             /**< UART FIFO Transmit Count, offset: 0x14 */
  __IO uint8_t RWFIFO;                             /**< UART FIFO Receive Watermark, offset: 0x15 */
  __I  uint8_t RCFIFO;                             /**< UART FIFO Receive Count, offset: 0x16 */
} UART_Type;

/* ----------------------------------------------------------------------------
   -- UART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UART_Register_Masks UART Register Masks
 * @{
 */

/*! @name BDH - UART Baud Rate Registers: High */
/*! @{ */

#define UART_BDH_SBR_MASK                        (0x1FU)
#define UART_BDH_SBR_SHIFT                       (0U)
/*! SBR - UART Baud Rate Bits */
#define UART_BDH_SBR(x)                          (((uint8_t)(((uint8_t)(x)) << UART_BDH_SBR_SHIFT)) & UART_BDH_SBR_MASK)

#define UART_BDH_RXEDGIE_MASK                    (0x40U)
#define UART_BDH_RXEDGIE_SHIFT                   (6U)
/*! RXEDGIE - RxD Input Active Edge Interrupt Enable
 *  0b0..Hardware interrupts from RXEDGIF disabled using polling.
 *  0b1..RXEDGIF interrupt request enabled.
 */
#define UART_BDH_RXEDGIE(x)                      (((uint8_t)(((uint8_t)(x)) << UART_BDH_RXEDGIE_SHIFT)) & UART_BDH_RXEDGIE_MASK)

#define UART_BDH_LBKDIE_MASK                     (0x80U)
#define UART_BDH_LBKDIE_SHIFT                    (7U)
/*! LBKDIE - LIN Break Detect Interrupt Enable
 *  0b0..LBKDIF interrupt requests disabled.
 *  0b1..LBKDIF interrupt requests enabled.
 */
#define UART_BDH_LBKDIE(x)                       (((uint8_t)(((uint8_t)(x)) << UART_BDH_LBKDIE_SHIFT)) & UART_BDH_LBKDIE_MASK)
/*! @} */

/*! @name BDL - UART Baud Rate Registers: Low */
/*! @{ */

#define UART_BDL_SBR_MASK                        (0xFFU)
#define UART_BDL_SBR_SHIFT                       (0U)
/*! SBR - UART Baud Rate Bits */
#define UART_BDL_SBR(x)                          (((uint8_t)(((uint8_t)(x)) << UART_BDL_SBR_SHIFT)) & UART_BDL_SBR_MASK)
/*! @} */

/*! @name C1 - UART Control Register 1 */
/*! @{ */

#define UART_C1_PT_MASK                          (0x1U)
#define UART_C1_PT_SHIFT                         (0U)
/*! PT - Parity Type
 *  0b0..Even parity.
 *  0b1..Odd parity.
 */
#define UART_C1_PT(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C1_PT_SHIFT)) & UART_C1_PT_MASK)

#define UART_C1_PE_MASK                          (0x2U)
#define UART_C1_PE_SHIFT                         (1U)
/*! PE - Parity Enable
 *  0b0..Parity function disabled.
 *  0b1..Parity function enabled.
 */
#define UART_C1_PE(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C1_PE_SHIFT)) & UART_C1_PE_MASK)

#define UART_C1_ILT_MASK                         (0x4U)
#define UART_C1_ILT_SHIFT                        (2U)
/*! ILT - Idle Line Type Select
 *  0b0..Idle character bit count starts after start bit.
 *  0b1..Idle character bit count starts after stop bit.
 */
#define UART_C1_ILT(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C1_ILT_SHIFT)) & UART_C1_ILT_MASK)

#define UART_C1_WAKE_MASK                        (0x8U)
#define UART_C1_WAKE_SHIFT                       (3U)
/*! WAKE - Receiver Wakeup Method Select
 *  0b0..Idle line wakeup.
 *  0b1..Address mark wakeup.
 */
#define UART_C1_WAKE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C1_WAKE_SHIFT)) & UART_C1_WAKE_MASK)

#define UART_C1_M_MASK                           (0x10U)
#define UART_C1_M_SHIFT                          (4U)
/*! M - 9-bit or 8-bit Mode Select
 *  0b0..Normal-start + 8 data bits (MSB/LSB first as determined by MSBF) + stop.
 *  0b1..Use-start + 9 data bits (MSB/LSB first as determined by MSBF) + stop.
 */
#define UART_C1_M(x)                             (((uint8_t)(((uint8_t)(x)) << UART_C1_M_SHIFT)) & UART_C1_M_MASK)

#define UART_C1_RSRC_MASK                        (0x20U)
#define UART_C1_RSRC_SHIFT                       (5U)
/*! RSRC - Receiver Source Select
 *  0b0..Selects internal loop back mode. The receiver input is internally connected to transmitter output.
 *  0b1..Single wire UART mode where the receiver input is connected to the transmit pin input signal.
 */
#define UART_C1_RSRC(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C1_RSRC_SHIFT)) & UART_C1_RSRC_MASK)

#define UART_C1_UARTSWAI_MASK                    (0x40U)
#define UART_C1_UARTSWAI_SHIFT                   (6U)
/*! UARTSWAI - UART Stops in Wait Mode
 *  0b0..UART clock continues to run in Wait mode.
 *  0b1..UART clock freezes while CPU is in Wait mode.
 */
#define UART_C1_UARTSWAI(x)                      (((uint8_t)(((uint8_t)(x)) << UART_C1_UARTSWAI_SHIFT)) & UART_C1_UARTSWAI_MASK)

#define UART_C1_LOOPS_MASK                       (0x80U)
#define UART_C1_LOOPS_SHIFT                      (7U)
/*! LOOPS - Loop Mode Select
 *  0b0..Normal operation.
 *  0b1..Loop mode where transmitter output is internally connected to receiver input. The receiver input is determined by RSRC.
 */
#define UART_C1_LOOPS(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C1_LOOPS_SHIFT)) & UART_C1_LOOPS_MASK)
/*! @} */

/*! @name C2 - UART Control Register 2 */
/*! @{ */

#define UART_C2_SBK_MASK                         (0x1U)
#define UART_C2_SBK_SHIFT                        (0U)
/*! SBK - Send Break
 *  0b0..Normal transmitter operation.
 *  0b1..Queue break characters to be sent.
 */
#define UART_C2_SBK(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C2_SBK_SHIFT)) & UART_C2_SBK_MASK)

#define UART_C2_RWU_MASK                         (0x2U)
#define UART_C2_RWU_SHIFT                        (1U)
/*! RWU - Receiver Wakeup Control
 *  0b0..Normal operation.
 *  0b1..RWU enables the wakeup function and inhibits further receiver interrupt requests. Normally, hardware
 *       wakes the receiver by automatically clearing RWU.
 */
#define UART_C2_RWU(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C2_RWU_SHIFT)) & UART_C2_RWU_MASK)

#define UART_C2_RE_MASK                          (0x4U)
#define UART_C2_RE_SHIFT                         (2U)
/*! RE - Receiver Enable
 *  0b0..Receiver off.
 *  0b1..Receiver on.
 */
#define UART_C2_RE(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C2_RE_SHIFT)) & UART_C2_RE_MASK)

#define UART_C2_TE_MASK                          (0x8U)
#define UART_C2_TE_SHIFT                         (3U)
/*! TE - Transmitter Enable
 *  0b0..Transmitter off.
 *  0b1..Transmitter on.
 */
#define UART_C2_TE(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C2_TE_SHIFT)) & UART_C2_TE_MASK)

#define UART_C2_ILIE_MASK                        (0x10U)
#define UART_C2_ILIE_SHIFT                       (4U)
/*! ILIE - Idle Line Interrupt Enable
 *  0b0..IDLE interrupt requests disabled.
 *  0b1..IDLE interrupt requests enabled.
 */
#define UART_C2_ILIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C2_ILIE_SHIFT)) & UART_C2_ILIE_MASK)

#define UART_C2_RIE_MASK                         (0x20U)
#define UART_C2_RIE_SHIFT                        (5U)
/*! RIE - Receiver Full Interrupt or DMA Transfer Enable
 *  0b0..RDRF interrupt and DMA transfer requests disabled.
 *  0b1..RDRF interrupt or DMA transfer requests enabled.
 */
#define UART_C2_RIE(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C2_RIE_SHIFT)) & UART_C2_RIE_MASK)

#define UART_C2_TCIE_MASK                        (0x40U)
#define UART_C2_TCIE_SHIFT                       (6U)
/*! TCIE - Transmission Complete Interrupt Enable
 *  0b0..TC interrupt requests disabled.
 *  0b1..TC interrupt requests enabled.
 */
#define UART_C2_TCIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C2_TCIE_SHIFT)) & UART_C2_TCIE_MASK)

#define UART_C2_TIE_MASK                         (0x80U)
#define UART_C2_TIE_SHIFT                        (7U)
/*! TIE - Transmitter Interrupt or DMA Transfer Enable.
 *  0b0..TDRE interrupt and DMA transfer requests disabled.
 *  0b1..TDRE interrupt or DMA transfer requests enabled.
 */
#define UART_C2_TIE(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C2_TIE_SHIFT)) & UART_C2_TIE_MASK)
/*! @} */

/*! @name S1 - UART Status Register 1 */
/*! @{ */

#define UART_S1_PF_MASK                          (0x1U)
#define UART_S1_PF_SHIFT                         (0U)
/*! PF - Parity Error Flag
 *  0b0..No parity error detected since the last time this flag was cleared. If the receive buffer has a depth
 *       greater than 1, then there may be data in the receive buffer what was received with a parity error.
 *  0b1..At least one dataword was received with a parity error since the last time this flag was cleared.
 */
#define UART_S1_PF(x)                            (((uint8_t)(((uint8_t)(x)) << UART_S1_PF_SHIFT)) & UART_S1_PF_MASK)

#define UART_S1_FE_MASK                          (0x2U)
#define UART_S1_FE_SHIFT                         (1U)
/*! FE - Framing Error Flag
 *  0b0..No framing error detected.
 *  0b1..Framing error.
 */
#define UART_S1_FE(x)                            (((uint8_t)(((uint8_t)(x)) << UART_S1_FE_SHIFT)) & UART_S1_FE_MASK)

#define UART_S1_NF_MASK                          (0x4U)
#define UART_S1_NF_SHIFT                         (2U)
/*! NF - Noise Flag
 *  0b0..No noise detected since the last time this flag was cleared. If the receive buffer has a depth greater
 *       than 1 then there may be data in the receiver buffer that was received with noise.
 *  0b1..At least one dataword was received with noise detected since the last time the flag was cleared.
 */
#define UART_S1_NF(x)                            (((uint8_t)(((uint8_t)(x)) << UART_S1_NF_SHIFT)) & UART_S1_NF_MASK)

#define UART_S1_OR_MASK                          (0x8U)
#define UART_S1_OR_SHIFT                         (3U)
/*! OR - Receiver Overrun Flag
 *  0b0..No overrun has occurred since the last time the flag was cleared.
 *  0b1..Overrun has occurred or the overrun flag has not been cleared since the last overrun occured.
 */
#define UART_S1_OR(x)                            (((uint8_t)(((uint8_t)(x)) << UART_S1_OR_SHIFT)) & UART_S1_OR_MASK)

#define UART_S1_IDLE_MASK                        (0x10U)
#define UART_S1_IDLE_SHIFT                       (4U)
/*! IDLE - Idle Line Flag
 *  0b0..Receiver input is either active now or has never become active since the IDLE flag was last cleared.
 *  0b1..Receiver input has become idle or the flag has not been cleared since it last asserted.
 */
#define UART_S1_IDLE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_S1_IDLE_SHIFT)) & UART_S1_IDLE_MASK)

#define UART_S1_RDRF_MASK                        (0x20U)
#define UART_S1_RDRF_SHIFT                       (5U)
/*! RDRF - Receive Data Register Full Flag
 *  0b0..The number of datawords in the receive buffer is less than the number indicated by RXWATER.
 *  0b1..The number of datawords in the receive buffer is equal to or greater than the number indicated by RXWATER
 *       at some point in time since this flag was last cleared.
 */
#define UART_S1_RDRF(x)                          (((uint8_t)(((uint8_t)(x)) << UART_S1_RDRF_SHIFT)) & UART_S1_RDRF_MASK)

#define UART_S1_TC_MASK                          (0x40U)
#define UART_S1_TC_SHIFT                         (6U)
/*! TC - Transmit Complete Flag
 *  0b0..Transmitter active (sending data, a preamble, or a break).
 *  0b1..Transmitter idle (transmission activity complete).
 */
#define UART_S1_TC(x)                            (((uint8_t)(((uint8_t)(x)) << UART_S1_TC_SHIFT)) & UART_S1_TC_MASK)

#define UART_S1_TDRE_MASK                        (0x80U)
#define UART_S1_TDRE_SHIFT                       (7U)
/*! TDRE - Transmit Data Register Empty Flag
 *  0b0..The amount of data in the transmit buffer is greater than the value indicated by TWFIFO[TXWATER].
 *  0b1..The amount of data in the transmit buffer is less than or equal to the value indicated by TWFIFO[TXWATER]
 *       at some point in time since the flag has been cleared.
 */
#define UART_S1_TDRE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_S1_TDRE_SHIFT)) & UART_S1_TDRE_MASK)
/*! @} */

/*! @name S2 - UART Status Register 2 */
/*! @{ */

#define UART_S2_RAF_MASK                         (0x1U)
#define UART_S2_RAF_SHIFT                        (0U)
/*! RAF - Receiver Active Flag
 *  0b0..UART receiver idle/inactive waiting for a start bit.
 *  0b1..UART receiver active, RxD input not idle.
 */
#define UART_S2_RAF(x)                           (((uint8_t)(((uint8_t)(x)) << UART_S2_RAF_SHIFT)) & UART_S2_RAF_MASK)

#define UART_S2_LBKDE_MASK                       (0x2U)
#define UART_S2_LBKDE_SHIFT                      (1U)
/*! LBKDE - LIN Break Detection Enable
 *  0b0..Break character detection is disabled.
 *  0b1..Break character is detected at length of 11 bit times if C1[M] = 0 or 12 bits time if C1[M] = 1.
 */
#define UART_S2_LBKDE(x)                         (((uint8_t)(((uint8_t)(x)) << UART_S2_LBKDE_SHIFT)) & UART_S2_LBKDE_MASK)

#define UART_S2_BRK13_MASK                       (0x4U)
#define UART_S2_BRK13_SHIFT                      (2U)
/*! BRK13 - Break Transmit Character Length
 *  0b0..Break character is 10, 11, or 12 bits long.
 *  0b1..Break character is 13 or 14 bits long.
 */
#define UART_S2_BRK13(x)                         (((uint8_t)(((uint8_t)(x)) << UART_S2_BRK13_SHIFT)) & UART_S2_BRK13_MASK)

#define UART_S2_RWUID_MASK                       (0x8U)
#define UART_S2_RWUID_SHIFT                      (3U)
/*! RWUID - Receive Wakeup Idle Detect
 *  0b0..S1[IDLE] is not set upon detection of an idle character.
 *  0b1..S1[IDLE] is set upon detection of an idle character.
 */
#define UART_S2_RWUID(x)                         (((uint8_t)(((uint8_t)(x)) << UART_S2_RWUID_SHIFT)) & UART_S2_RWUID_MASK)

#define UART_S2_RXINV_MASK                       (0x10U)
#define UART_S2_RXINV_SHIFT                      (4U)
/*! RXINV - Receive Data Inversion
 *  0b0..Receive data is not inverted.
 *  0b1..Receive data is inverted.
 */
#define UART_S2_RXINV(x)                         (((uint8_t)(((uint8_t)(x)) << UART_S2_RXINV_SHIFT)) & UART_S2_RXINV_MASK)

#define UART_S2_MSBF_MASK                        (0x20U)
#define UART_S2_MSBF_SHIFT                       (5U)
/*! MSBF - Most Significant Bit First
 *  0b0..LSB (bit0) is the first bit that is transmitted following the start bit. Further, the first bit received
 *       after the start bit is identified as bit0.
 *  0b1..MSB (bit8, bit7 or bit6) is the first bit that is transmitted following the start bit, depending on the
 *       setting of C1[M] and C1[PE]. Further, the first bit received after the start bit is identified as bit8,
 *       bit7, or bit6, depending on the setting of C1[M] and C1[PE].
 */
#define UART_S2_MSBF(x)                          (((uint8_t)(((uint8_t)(x)) << UART_S2_MSBF_SHIFT)) & UART_S2_MSBF_MASK)

#define UART_S2_RXEDGIF_MASK                     (0x40U)
#define UART_S2_RXEDGIF_SHIFT                    (6U)
/*! RXEDGIF - RxD Pin Active Edge Interrupt Flag
 *  0b0..No active edge on the receive pin has occurred.
 *  0b1..An active edge on the receive pin has occurred.
 */
#define UART_S2_RXEDGIF(x)                       (((uint8_t)(((uint8_t)(x)) << UART_S2_RXEDGIF_SHIFT)) & UART_S2_RXEDGIF_MASK)

#define UART_S2_LBKDIF_MASK                      (0x80U)
#define UART_S2_LBKDIF_SHIFT                     (7U)
/*! LBKDIF - LIN Break Detect Interrupt Flag
 *  0b0..No LIN break character detected.
 *  0b1..LIN break character detected.
 */
#define UART_S2_LBKDIF(x)                        (((uint8_t)(((uint8_t)(x)) << UART_S2_LBKDIF_SHIFT)) & UART_S2_LBKDIF_MASK)
/*! @} */

/*! @name C3 - UART Control Register 3 */
/*! @{ */

#define UART_C3_PEIE_MASK                        (0x1U)
#define UART_C3_PEIE_SHIFT                       (0U)
/*! PEIE - Parity Error Interrupt Enable
 *  0b0..PF interrupt requests are disabled.
 *  0b1..PF interrupt requests are enabled.
 */
#define UART_C3_PEIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C3_PEIE_SHIFT)) & UART_C3_PEIE_MASK)

#define UART_C3_FEIE_MASK                        (0x2U)
#define UART_C3_FEIE_SHIFT                       (1U)
/*! FEIE - Framing Error Interrupt Enable
 *  0b0..FE interrupt requests are disabled.
 *  0b1..FE interrupt requests are enabled.
 */
#define UART_C3_FEIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C3_FEIE_SHIFT)) & UART_C3_FEIE_MASK)

#define UART_C3_NEIE_MASK                        (0x4U)
#define UART_C3_NEIE_SHIFT                       (2U)
/*! NEIE - Noise Error Interrupt Enable
 *  0b0..NF interrupt requests are disabled.
 *  0b1..NF interrupt requests are enabled.
 */
#define UART_C3_NEIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C3_NEIE_SHIFT)) & UART_C3_NEIE_MASK)

#define UART_C3_ORIE_MASK                        (0x8U)
#define UART_C3_ORIE_SHIFT                       (3U)
/*! ORIE - Overrun Error Interrupt Enable
 *  0b0..OR interrupts are disabled.
 *  0b1..OR interrupt requests are enabled.
 */
#define UART_C3_ORIE(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C3_ORIE_SHIFT)) & UART_C3_ORIE_MASK)

#define UART_C3_TXINV_MASK                       (0x10U)
#define UART_C3_TXINV_SHIFT                      (4U)
/*! TXINV - Transmit Data Inversion.
 *  0b0..Transmit data is not inverted.
 *  0b1..Transmit data is inverted.
 */
#define UART_C3_TXINV(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C3_TXINV_SHIFT)) & UART_C3_TXINV_MASK)

#define UART_C3_TXDIR_MASK                       (0x20U)
#define UART_C3_TXDIR_SHIFT                      (5U)
/*! TXDIR - Transmitter Pin Data Direction in Single-Wire mode
 *  0b0..TXD pin is an input in single wire mode.
 *  0b1..TXD pin is an output in single wire mode.
 */
#define UART_C3_TXDIR(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C3_TXDIR_SHIFT)) & UART_C3_TXDIR_MASK)

#define UART_C3_T8_MASK                          (0x40U)
#define UART_C3_T8_SHIFT                         (6U)
/*! T8 - Transmit Bit 8 */
#define UART_C3_T8(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C3_T8_SHIFT)) & UART_C3_T8_MASK)

#define UART_C3_R8_MASK                          (0x80U)
#define UART_C3_R8_SHIFT                         (7U)
/*! R8 - Received Bit 8 */
#define UART_C3_R8(x)                            (((uint8_t)(((uint8_t)(x)) << UART_C3_R8_SHIFT)) & UART_C3_R8_MASK)
/*! @} */

/*! @name D - UART Data Register */
/*! @{ */

#define UART_D_RT_MASK                           (0xFFU)
#define UART_D_RT_SHIFT                          (0U)
#define UART_D_RT(x)                             (((uint8_t)(((uint8_t)(x)) << UART_D_RT_SHIFT)) & UART_D_RT_MASK)
/*! @} */

/*! @name MA1 - UART Match Address Registers 1 */
/*! @{ */

#define UART_MA1_MA_MASK                         (0xFFU)
#define UART_MA1_MA_SHIFT                        (0U)
/*! MA - Match Address */
#define UART_MA1_MA(x)                           (((uint8_t)(((uint8_t)(x)) << UART_MA1_MA_SHIFT)) & UART_MA1_MA_MASK)
/*! @} */

/*! @name MA2 - UART Match Address Registers 2 */
/*! @{ */

#define UART_MA2_MA_MASK                         (0xFFU)
#define UART_MA2_MA_SHIFT                        (0U)
/*! MA - Match Address */
#define UART_MA2_MA(x)                           (((uint8_t)(((uint8_t)(x)) << UART_MA2_MA_SHIFT)) & UART_MA2_MA_MASK)
/*! @} */

/*! @name C4 - UART Control Register 4 */
/*! @{ */

#define UART_C4_BRFA_MASK                        (0x1FU)
#define UART_C4_BRFA_SHIFT                       (0U)
/*! BRFA - Baud Rate Fine Adjust */
#define UART_C4_BRFA(x)                          (((uint8_t)(((uint8_t)(x)) << UART_C4_BRFA_SHIFT)) & UART_C4_BRFA_MASK)

#define UART_C4_M10_MASK                         (0x20U)
#define UART_C4_M10_SHIFT                        (5U)
/*! M10 - 10-bit Mode select
 *  0b0..The parity bit is the ninth bit in the serial transmission.
 *  0b1..The parity bit is the tenth bit in the serial transmission.
 */
#define UART_C4_M10(x)                           (((uint8_t)(((uint8_t)(x)) << UART_C4_M10_SHIFT)) & UART_C4_M10_MASK)

#define UART_C4_MAEN2_MASK                       (0x40U)
#define UART_C4_MAEN2_SHIFT                      (6U)
/*! MAEN2 - Match Address Mode Enable 2
 *  0b0..All data received is transferred to the data buffer if MAEN1 is cleared.
 *  0b1..All data received with the most significant bit cleared, is discarded. All data received with the most
 *       significant bit set, is compared with contents of MA2 register. If no match occurs, the data is discarded.
 *       If a match occurs, data is transferred to the data buffer.
 */
#define UART_C4_MAEN2(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C4_MAEN2_SHIFT)) & UART_C4_MAEN2_MASK)

#define UART_C4_MAEN1_MASK                       (0x80U)
#define UART_C4_MAEN1_SHIFT                      (7U)
/*! MAEN1 - Match Address Mode Enable 1
 *  0b0..All data received is transferred to the data buffer if MAEN2 is cleared.
 *  0b1..All data received with the most significant bit cleared, is discarded. All data received with the most
 *       significant bit set, is compared with contents of MA1 register. If no match occurs, the data is discarded.
 *       If match occurs, data is transferred to the data buffer.
 */
#define UART_C4_MAEN1(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C4_MAEN1_SHIFT)) & UART_C4_MAEN1_MASK)
/*! @} */

/*! @name C5 - UART Control Register 5 */
/*! @{ */

#define UART_C5_RDMAS_MASK                       (0x20U)
#define UART_C5_RDMAS_SHIFT                      (5U)
/*! RDMAS - Receiver Full DMA Select
 *  0b0..If C2[RIE] and S1[RDRF] are set, the RDFR interrupt request signal is asserted to request an interrupt service.
 *  0b1..If C2[RIE] and S1[RDRF] are set, the RDRF DMA request signal is asserted to request a DMA transfer.
 */
#define UART_C5_RDMAS(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C5_RDMAS_SHIFT)) & UART_C5_RDMAS_MASK)

#define UART_C5_TDMAS_MASK                       (0x80U)
#define UART_C5_TDMAS_SHIFT                      (7U)
/*! TDMAS - Transmitter DMA Select
 *  0b0..If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE interrupt request signal is asserted to request interrupt service.
 *  0b1..If C2[TIE] is set and the S1[TDRE] flag is set, the TDRE DMA request signal is asserted to request a DMA transfer.
 */
#define UART_C5_TDMAS(x)                         (((uint8_t)(((uint8_t)(x)) << UART_C5_TDMAS_SHIFT)) & UART_C5_TDMAS_MASK)
/*! @} */

/*! @name ED - UART Extended Data Register */
/*! @{ */

#define UART_ED_PARITYE_MASK                     (0x40U)
#define UART_ED_PARITYE_SHIFT                    (6U)
/*! PARITYE
 *  0b0..The dataword was received without a parity error.
 *  0b1..The dataword was received with a parity error.
 */
#define UART_ED_PARITYE(x)                       (((uint8_t)(((uint8_t)(x)) << UART_ED_PARITYE_SHIFT)) & UART_ED_PARITYE_MASK)

#define UART_ED_NOISY_MASK                       (0x80U)
#define UART_ED_NOISY_SHIFT                      (7U)
/*! NOISY
 *  0b0..The dataword was received without noise.
 *  0b1..The data was received with noise.
 */
#define UART_ED_NOISY(x)                         (((uint8_t)(((uint8_t)(x)) << UART_ED_NOISY_SHIFT)) & UART_ED_NOISY_MASK)
/*! @} */

/*! @name MODEM - UART Modem Register */
/*! @{ */

#define UART_MODEM_TXCTSE_MASK                   (0x1U)
#define UART_MODEM_TXCTSE_SHIFT                  (0U)
/*! TXCTSE - Transmitter clear-to-send enable
 *  0b0..CTS has no effect on the transmitter.
 *  0b1..Enables clear-to-send operation. The transmitter checks the state of CTS each time it is ready to send a
 *       character. If CTS is asserted, the character is sent. If CTS is deasserted, the signal TXD remains in the
 *       mark state and transmission is delayed until CTS is asserted. Changes in CTS as a character is being sent
 *       do not affect its transmission.
 */
#define UART_MODEM_TXCTSE(x)                     (((uint8_t)(((uint8_t)(x)) << UART_MODEM_TXCTSE_SHIFT)) & UART_MODEM_TXCTSE_MASK)

#define UART_MODEM_TXRTSE_MASK                   (0x2U)
#define UART_MODEM_TXRTSE_SHIFT                  (1U)
/*! TXRTSE - Transmitter request-to-send enable
 *  0b0..The transmitter has no effect on RTS.
 *  0b1..When a character is placed into an empty transmitter data buffer , RTS asserts one bit time before the
 *       start bit is transmitted. RTS deasserts one bit time after all characters in the transmitter data buffer and
 *       shift register are completely sent, including the last stop bit. (FIFO) (FIFO)
 */
#define UART_MODEM_TXRTSE(x)                     (((uint8_t)(((uint8_t)(x)) << UART_MODEM_TXRTSE_SHIFT)) & UART_MODEM_TXRTSE_MASK)

#define UART_MODEM_TXRTSPOL_MASK                 (0x4U)
#define UART_MODEM_TXRTSPOL_SHIFT                (2U)
/*! TXRTSPOL - Transmitter request-to-send polarity
 *  0b0..Transmitter RTS is active low.
 *  0b1..Transmitter RTS is active high.
 */
#define UART_MODEM_TXRTSPOL(x)                   (((uint8_t)(((uint8_t)(x)) << UART_MODEM_TXRTSPOL_SHIFT)) & UART_MODEM_TXRTSPOL_MASK)

#define UART_MODEM_RXRTSE_MASK                   (0x8U)
#define UART_MODEM_RXRTSE_SHIFT                  (3U)
/*! RXRTSE - Receiver request-to-send enable
 *  0b0..The receiver has no effect on RTS.
 *  0b1..RTS is deasserted if the number of characters in the receiver data register (FIFO) is equal to or greater
 *       than RWFIFO[RXWATER]. RTS is asserted when the number of characters in the receiver data register (FIFO)
 *       is less than RWFIFO[RXWATER].
 */
#define UART_MODEM_RXRTSE(x)                     (((uint8_t)(((uint8_t)(x)) << UART_MODEM_RXRTSE_SHIFT)) & UART_MODEM_RXRTSE_MASK)
/*! @} */

/*! @name IR - UART Infrared Register */
/*! @{ */

#define UART_IR_TNP_MASK                         (0x3U)
#define UART_IR_TNP_SHIFT                        (0U)
/*! TNP - Transmitter narrow pulse
 *  0b00..3/16.
 *  0b01..1/16.
 *  0b10..1/32.
 *  0b11..1/4.
 */
#define UART_IR_TNP(x)                           (((uint8_t)(((uint8_t)(x)) << UART_IR_TNP_SHIFT)) & UART_IR_TNP_MASK)

#define UART_IR_IREN_MASK                        (0x4U)
#define UART_IR_IREN_SHIFT                       (2U)
/*! IREN - Infrared enable
 *  0b0..IR disabled.
 *  0b1..IR enabled.
 */
#define UART_IR_IREN(x)                          (((uint8_t)(((uint8_t)(x)) << UART_IR_IREN_SHIFT)) & UART_IR_IREN_MASK)
/*! @} */

/*! @name PFIFO - UART FIFO Parameters */
/*! @{ */

#define UART_PFIFO_RXFIFOSIZE_MASK               (0x7U)
#define UART_PFIFO_RXFIFOSIZE_SHIFT              (0U)
/*! RXFIFOSIZE - Receive FIFO. Buffer Depth
 *  0b000..Receive FIFO/Buffer depth = 1 dataword.
 *  0b001..Receive FIFO/Buffer depth = 4 datawords.
 *  0b010..Receive FIFO/Buffer depth = 8 datawords.
 *  0b011..Receive FIFO/Buffer depth = 16 datawords.
 *  0b100..Receive FIFO/Buffer depth = 32 datawords.
 *  0b101..Receive FIFO/Buffer depth = 64 datawords.
 *  0b110..Receive FIFO/Buffer depth = 128 datawords.
 *  0b111..Reserved.
 */
#define UART_PFIFO_RXFIFOSIZE(x)                 (((uint8_t)(((uint8_t)(x)) << UART_PFIFO_RXFIFOSIZE_SHIFT)) & UART_PFIFO_RXFIFOSIZE_MASK)

#define UART_PFIFO_RXFE_MASK                     (0x8U)
#define UART_PFIFO_RXFE_SHIFT                    (3U)
/*! RXFE - Receive FIFO Enable
 *  0b0..Receive FIFO is not enabled. Buffer is depth 1. (Legacy support)
 *  0b1..Receive FIFO is enabled. Buffer is depth indicted by RXFIFOSIZE.
 */
#define UART_PFIFO_RXFE(x)                       (((uint8_t)(((uint8_t)(x)) << UART_PFIFO_RXFE_SHIFT)) & UART_PFIFO_RXFE_MASK)

#define UART_PFIFO_TXFIFOSIZE_MASK               (0x70U)
#define UART_PFIFO_TXFIFOSIZE_SHIFT              (4U)
/*! TXFIFOSIZE - Transmit FIFO. Buffer Depth
 *  0b000..Transmit FIFO/Buffer depth = 1 dataword.
 *  0b001..Transmit FIFO/Buffer depth = 4 datawords.
 *  0b010..Transmit FIFO/Buffer depth = 8 datawords.
 *  0b011..Transmit FIFO/Buffer depth = 16 datawords.
 *  0b100..Transmit FIFO/Buffer depth = 32 datawords.
 *  0b101..Transmit FIFO/Buffer depth = 64 datawords.
 *  0b110..Transmit FIFO/Buffer depth = 128 datawords.
 *  0b111..Reserved.
 */
#define UART_PFIFO_TXFIFOSIZE(x)                 (((uint8_t)(((uint8_t)(x)) << UART_PFIFO_TXFIFOSIZE_SHIFT)) & UART_PFIFO_TXFIFOSIZE_MASK)

#define UART_PFIFO_TXFE_MASK                     (0x80U)
#define UART_PFIFO_TXFE_SHIFT                    (7U)
/*! TXFE - Transmit FIFO Enable
 *  0b0..Transmit FIFO is not enabled. Buffer is depth 1. (Legacy support).
 *  0b1..Transmit FIFO is enabled. Buffer is depth indicated by TXFIFOSIZE.
 */
#define UART_PFIFO_TXFE(x)                       (((uint8_t)(((uint8_t)(x)) << UART_PFIFO_TXFE_SHIFT)) & UART_PFIFO_TXFE_MASK)
/*! @} */

/*! @name CFIFO - UART FIFO Control Register */
/*! @{ */

#define UART_CFIFO_RXUFE_MASK                    (0x1U)
#define UART_CFIFO_RXUFE_SHIFT                   (0U)
/*! RXUFE - Receive FIFO Underflow Interrupt Enable
 *  0b0..RXUF flag does not generate an interrupt to the host.
 *  0b1..RXUF flag generates an interrupt to the host.
 */
#define UART_CFIFO_RXUFE(x)                      (((uint8_t)(((uint8_t)(x)) << UART_CFIFO_RXUFE_SHIFT)) & UART_CFIFO_RXUFE_MASK)

#define UART_CFIFO_TXOFE_MASK                    (0x2U)
#define UART_CFIFO_TXOFE_SHIFT                   (1U)
/*! TXOFE - Transmit FIFO Overflow Interrupt Enable
 *  0b0..TXOF flag does not generate an interrupt to the host.
 *  0b1..TXOF flag generates an interrupt to the host.
 */
#define UART_CFIFO_TXOFE(x)                      (((uint8_t)(((uint8_t)(x)) << UART_CFIFO_TXOFE_SHIFT)) & UART_CFIFO_TXOFE_MASK)

#define UART_CFIFO_RXOFE_MASK                    (0x4U)
#define UART_CFIFO_RXOFE_SHIFT                   (2U)
/*! RXOFE - Receive FIFO Overflow Interrupt Enable
 *  0b0..RXOF flag does not generate an interrupt to the host.
 *  0b1..RXOF flag generates an interrupt to the host.
 */
#define UART_CFIFO_RXOFE(x)                      (((uint8_t)(((uint8_t)(x)) << UART_CFIFO_RXOFE_SHIFT)) & UART_CFIFO_RXOFE_MASK)

#define UART_CFIFO_RXFLUSH_MASK                  (0x40U)
#define UART_CFIFO_RXFLUSH_SHIFT                 (6U)
/*! RXFLUSH - Receive FIFO/Buffer Flush
 *  0b0..No flush operation occurs.
 *  0b1..All data in the receive FIFO/buffer is cleared out.
 */
#define UART_CFIFO_RXFLUSH(x)                    (((uint8_t)(((uint8_t)(x)) << UART_CFIFO_RXFLUSH_SHIFT)) & UART_CFIFO_RXFLUSH_MASK)

#define UART_CFIFO_TXFLUSH_MASK                  (0x80U)
#define UART_CFIFO_TXFLUSH_SHIFT                 (7U)
/*! TXFLUSH - Transmit FIFO/Buffer Flush
 *  0b0..No flush operation occurs.
 *  0b1..All data in the transmit FIFO/Buffer is cleared out.
 */
#define UART_CFIFO_TXFLUSH(x)                    (((uint8_t)(((uint8_t)(x)) << UART_CFIFO_TXFLUSH_SHIFT)) & UART_CFIFO_TXFLUSH_MASK)
/*! @} */

/*! @name SFIFO - UART FIFO Status Register */
/*! @{ */

#define UART_SFIFO_RXUF_MASK                     (0x1U)
#define UART_SFIFO_RXUF_SHIFT                    (0U)
/*! RXUF - Receiver Buffer Underflow Flag
 *  0b0..No receive buffer underflow has occurred since the last time the flag was cleared.
 *  0b1..At least one receive buffer underflow has occurred since the last time the flag was cleared.
 */
#define UART_SFIFO_RXUF(x)                       (((uint8_t)(((uint8_t)(x)) << UART_SFIFO_RXUF_SHIFT)) & UART_SFIFO_RXUF_MASK)

#define UART_SFIFO_TXOF_MASK                     (0x2U)
#define UART_SFIFO_TXOF_SHIFT                    (1U)
/*! TXOF - Transmitter Buffer Overflow Flag
 *  0b0..No transmit buffer overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one transmit buffer overflow has occurred since the last time the flag was cleared.
 */
#define UART_SFIFO_TXOF(x)                       (((uint8_t)(((uint8_t)(x)) << UART_SFIFO_TXOF_SHIFT)) & UART_SFIFO_TXOF_MASK)

#define UART_SFIFO_RXOF_MASK                     (0x4U)
#define UART_SFIFO_RXOF_SHIFT                    (2U)
/*! RXOF - Receiver Buffer Overflow Flag
 *  0b0..No receive buffer overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one receive buffer overflow has occurred since the last time the flag was cleared.
 */
#define UART_SFIFO_RXOF(x)                       (((uint8_t)(((uint8_t)(x)) << UART_SFIFO_RXOF_SHIFT)) & UART_SFIFO_RXOF_MASK)

#define UART_SFIFO_RXEMPT_MASK                   (0x40U)
#define UART_SFIFO_RXEMPT_SHIFT                  (6U)
/*! RXEMPT - Receive Buffer/FIFO Empty
 *  0b0..Receive buffer is not empty.
 *  0b1..Receive buffer is empty.
 */
#define UART_SFIFO_RXEMPT(x)                     (((uint8_t)(((uint8_t)(x)) << UART_SFIFO_RXEMPT_SHIFT)) & UART_SFIFO_RXEMPT_MASK)

#define UART_SFIFO_TXEMPT_MASK                   (0x80U)
#define UART_SFIFO_TXEMPT_SHIFT                  (7U)
/*! TXEMPT - Transmit Buffer/FIFO Empty
 *  0b0..Transmit buffer is not empty.
 *  0b1..Transmit buffer is empty.
 */
#define UART_SFIFO_TXEMPT(x)                     (((uint8_t)(((uint8_t)(x)) << UART_SFIFO_TXEMPT_SHIFT)) & UART_SFIFO_TXEMPT_MASK)
/*! @} */

/*! @name TWFIFO - UART FIFO Transmit Watermark */
/*! @{ */

#define UART_TWFIFO_TXWATER_MASK                 (0xFFU)
#define UART_TWFIFO_TXWATER_SHIFT                (0U)
/*! TXWATER - Transmit Watermark */
#define UART_TWFIFO_TXWATER(x)                   (((uint8_t)(((uint8_t)(x)) << UART_TWFIFO_TXWATER_SHIFT)) & UART_TWFIFO_TXWATER_MASK)
/*! @} */

/*! @name TCFIFO - UART FIFO Transmit Count */
/*! @{ */

#define UART_TCFIFO_TXCOUNT_MASK                 (0xFFU)
#define UART_TCFIFO_TXCOUNT_SHIFT                (0U)
/*! TXCOUNT - Transmit Counter */
#define UART_TCFIFO_TXCOUNT(x)                   (((uint8_t)(((uint8_t)(x)) << UART_TCFIFO_TXCOUNT_SHIFT)) & UART_TCFIFO_TXCOUNT_MASK)
/*! @} */

/*! @name RWFIFO - UART FIFO Receive Watermark */
/*! @{ */

#define UART_RWFIFO_RXWATER_MASK                 (0xFFU)
#define UART_RWFIFO_RXWATER_SHIFT                (0U)
/*! RXWATER - Receive Watermark */
#define UART_RWFIFO_RXWATER(x)                   (((uint8_t)(((uint8_t)(x)) << UART_RWFIFO_RXWATER_SHIFT)) & UART_RWFIFO_RXWATER_MASK)
/*! @} */

/*! @name RCFIFO - UART FIFO Receive Count */
/*! @{ */

#define UART_RCFIFO_RXCOUNT_MASK                 (0xFFU)
#define UART_RCFIFO_RXCOUNT_SHIFT                (0U)
/*! RXCOUNT - Receive Counter */
#define UART_RCFIFO_RXCOUNT(x)                   (((uint8_t)(((uint8_t)(x)) << UART_RCFIFO_RXCOUNT_SHIFT)) & UART_RCFIFO_RXCOUNT_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group UART_Register_Masks */


/*!
 * @}
 */ /* end of group UART_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__CWCC__)
  #pragma pop
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_UART_H_ */

