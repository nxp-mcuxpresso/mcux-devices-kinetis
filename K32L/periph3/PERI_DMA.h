/*
** ###################################################################
**     Processors:          K32L3A60VPJ1A_cm0plus
**                          K32L3A60VPJ1A_cm4
**
**     Version:             rev. 1.0, 2019-04-22
**     Build:               b240709
**
**     Abstract:
**         CMSIS Peripheral Access Layer for DMA
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2019-04-22)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file DMA.h
 * @version 1.0
 * @date 2019-04-22
 * @brief CMSIS Peripheral Access Layer for DMA
 *
 * CMSIS Peripheral Access Layer for DMA
 */

#if !defined(DMA_H_)
#define DMA_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_K32L3A60VPJ1A_cm0plus))
#include "K32L3A60_cm0plus_COMMON.h"
#elif (defined(CPU_K32L3A60VPJ1A_cm4))
#include "K32L3A60_cm4_COMMON.h"
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
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */

/** DMA - Size of Registers Arrays */
#define DMA_TCD_COUNT                             16u

/** DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
  __I  uint32_t ES;                                /**< Error Status Register, offset: 0x4 */
       uint8_t RESERVED_0[4];
  __IO uint32_t ERQ;                               /**< Enable Request Register, offset: 0xC */
       uint8_t RESERVED_1[4];
  __IO uint32_t EEI;                               /**< Enable Error Interrupt Register, offset: 0x14 */
  __O  uint8_t CEEI;                               /**< Clear Enable Error Interrupt Register, offset: 0x18 */
  __O  uint8_t SEEI;                               /**< Set Enable Error Interrupt Register, offset: 0x19 */
  __O  uint8_t CERQ;                               /**< Clear Enable Request Register, offset: 0x1A */
  __O  uint8_t SERQ;                               /**< Set Enable Request Register, offset: 0x1B */
  __O  uint8_t CDNE;                               /**< Clear DONE Status Bit Register, offset: 0x1C */
  __O  uint8_t SSRT;                               /**< Set START Bit Register, offset: 0x1D */
  __O  uint8_t CERR;                               /**< Clear Error Register, offset: 0x1E */
  __O  uint8_t CINT;                               /**< Clear Interrupt Request Register, offset: 0x1F */
       uint8_t RESERVED_2[4];
  __IO uint32_t INT;                               /**< Interrupt Request Register, offset: 0x24 */
       uint8_t RESERVED_3[4];
  __IO uint32_t ERR;                               /**< Error Register, offset: 0x2C */
       uint8_t RESERVED_4[4];
  __I  uint32_t HRS;                               /**< Hardware Request Status Register, offset: 0x34 */
       uint8_t RESERVED_5[12];
  __IO uint32_t EARS;                              /**< Enable Asynchronous Request in Stop Register, offset: 0x44 */
       uint8_t RESERVED_6[184];
  __IO uint8_t DCHPRI3;                            /**< Channel Priority Register, offset: 0x100 */
  __IO uint8_t DCHPRI2;                            /**< Channel Priority Register, offset: 0x101 */
  __IO uint8_t DCHPRI1;                            /**< Channel Priority Register, offset: 0x102 */
  __IO uint8_t DCHPRI0;                            /**< Channel Priority Register, offset: 0x103 */
  __IO uint8_t DCHPRI7;                            /**< Channel Priority Register, offset: 0x104 */
  __IO uint8_t DCHPRI6;                            /**< Channel Priority Register, offset: 0x105 */
  __IO uint8_t DCHPRI5;                            /**< Channel Priority Register, offset: 0x106 */
  __IO uint8_t DCHPRI4;                            /**< Channel Priority Register, offset: 0x107 */
  __IO uint8_t DCHPRI11;                           /**< Channel Priority Register, offset: 0x108, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI10;                           /**< Channel Priority Register, offset: 0x109, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI9;                            /**< Channel Priority Register, offset: 0x10A, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI8;                            /**< Channel Priority Register, offset: 0x10B, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI15;                           /**< Channel Priority Register, offset: 0x10C, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI14;                           /**< Channel Priority Register, offset: 0x10D, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI13;                           /**< Channel Priority Register, offset: 0x10E, available only on: DMA0 (missing on DMA1) */
  __IO uint8_t DCHPRI12;                           /**< Channel Priority Register, offset: 0x10F, available only on: DMA0 (missing on DMA1) */
       uint8_t RESERVED_7[3824];
  struct {                                         /* offset: 0x1000, array step: 0x20 */
    __IO uint32_t SADDR;                             /**< TCD Source Address, array offset: 0x1000, array step: 0x20, irregular array, not all indices are valid */
    __IO uint16_t SOFF;                              /**< TCD Signed Source Address Offset, array offset: 0x1004, array step: 0x20, irregular array, not all indices are valid */
    __IO uint16_t ATTR;                              /**< TCD Transfer Attributes, array offset: 0x1006, array step: 0x20, irregular array, not all indices are valid */
    union {                                          /* offset: 0x1008, array step: 0x20 */
      __IO uint32_t NBYTES_MLNO;                       /**< TCD Minor Byte Count (Minor Loop Mapping Disabled), array offset: 0x1008, array step: 0x20, irregular array, not all indices are valid */
      __IO uint32_t NBYTES_MLOFFNO;                    /**< TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled), array offset: 0x1008, array step: 0x20, irregular array, not all indices are valid */
      __IO uint32_t NBYTES_MLOFFYES;                   /**< TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled), array offset: 0x1008, array step: 0x20, irregular array, not all indices are valid */
    };
    __IO int32_t SLAST;                              /**< TCD Last Source Address Adjustment, array offset: 0x100C, array step: 0x20, irregular array, not all indices are valid */
    __IO uint32_t DADDR;                             /**< TCD Destination Address, array offset: 0x1010, array step: 0x20, irregular array, not all indices are valid */
    __IO uint16_t DOFF;                              /**< TCD Signed Destination Address Offset, array offset: 0x1014, array step: 0x20, irregular array, not all indices are valid */
    union {                                          /* offset: 0x1016, array step: 0x20 */
      __IO uint16_t CITER_ELINKNO;                     /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x1016, array step: 0x20, irregular array, not all indices are valid */
      __IO uint16_t CITER_ELINKYES;                    /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x1016, array step: 0x20, irregular array, not all indices are valid */
    };
    __IO int32_t DLAST_SGA;                          /**< TCD Last Destination Address Adjustment/Scatter Gather Address, array offset: 0x1018, array step: 0x20, irregular array, not all indices are valid */
    __IO uint16_t CSR;                               /**< TCD Control and Status, array offset: 0x101C, array step: 0x20, irregular array, not all indices are valid */
    union {                                          /* offset: 0x101E, array step: 0x20 */
      __IO uint16_t BITER_ELINKNO;                     /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x101E, array step: 0x20, irregular array, not all indices are valid */
      __IO uint16_t BITER_ELINKYES;                    /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x101E, array step: 0x20, irregular array, not all indices are valid */
    };
  } TCD[DMA_TCD_COUNT];
} DMA_Type;

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CR - Control Register */
/*! @{ */

#define DMA_CR_EDBG_MASK                         (0x2U)
#define DMA_CR_EDBG_SHIFT                        (1U)
/*! EDBG - Enable Debug
 *  0b0..When in debug mode, the DMA continues to operate.
 *  0b1..When in debug mode, the DMA stalls the start of a new channel. Executing channels are allowed to
 *       complete. Channel execution resumes when the system exits debug mode or the EDBG bit is cleared.
 */
#define DMA_CR_EDBG(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EDBG_SHIFT)) & DMA_CR_EDBG_MASK)

#define DMA_CR_ERCA_MASK                         (0x4U)
#define DMA_CR_ERCA_SHIFT                        (2U)
/*! ERCA - Enable Round Robin Channel Arbitration
 *  0b0..Fixed priority arbitration is used for channel selection .
 *  0b1..Round robin arbitration is used for channel selection .
 */
#define DMA_CR_ERCA(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_ERCA_SHIFT)) & DMA_CR_ERCA_MASK)

#define DMA_CR_HOE_MASK                          (0x10U)
#define DMA_CR_HOE_SHIFT                         (4U)
/*! HOE - Halt On Error
 *  0b0..Normal operation
 *  0b1..Any error causes the HALT bit to set. Subsequently, all service requests are ignored until the HALT bit is cleared.
 */
#define DMA_CR_HOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_HOE_SHIFT)) & DMA_CR_HOE_MASK)

#define DMA_CR_HALT_MASK                         (0x20U)
#define DMA_CR_HALT_SHIFT                        (5U)
/*! HALT - Halt DMA Operations
 *  0b0..Normal operation
 *  0b1..Stall the start of any new channels. Executing channels are allowed to complete. Channel execution resumes when this bit is cleared.
 */
#define DMA_CR_HALT(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_HALT_SHIFT)) & DMA_CR_HALT_MASK)

#define DMA_CR_CLM_MASK                          (0x40U)
#define DMA_CR_CLM_SHIFT                         (6U)
/*! CLM - Continuous Link Mode
 *  0b0..A minor loop channel link made to itself goes through channel arbitration before being activated again.
 *  0b1..A minor loop channel link made to itself does not go through channel arbitration before being activated
 *       again. Upon minor loop completion, the channel activates again if that channel has a minor loop channel
 *       link enabled and the link channel is itself. This effectively applies the minor loop offsets and restarts the
 *       next minor loop.
 */
#define DMA_CR_CLM(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_CLM_SHIFT)) & DMA_CR_CLM_MASK)

#define DMA_CR_EMLM_MASK                         (0x80U)
#define DMA_CR_EMLM_SHIFT                        (7U)
/*! EMLM - Enable Minor Loop Mapping
 *  0b0..Disabled. TCDn.word2 is defined as a 32-bit NBYTES field.
 *  0b1..Enabled. TCDn.word2 is redefined to include individual enable fields, an offset field, and the NBYTES
 *       field. The individual enable fields allow the minor loop offset to be applied to the source address, the
 *       destination address, or both. The NBYTES field is reduced when either offset is enabled.
 */
#define DMA_CR_EMLM(x)                           (((uint32_t)(((uint32_t)(x)) << DMA_CR_EMLM_SHIFT)) & DMA_CR_EMLM_MASK)

#define DMA_CR_ECX_MASK                          (0x10000U)
#define DMA_CR_ECX_SHIFT                         (16U)
/*! ECX - Error Cancel Transfer
 *  0b0..Normal operation
 *  0b1..Cancel the remaining data transfer in the same fashion as the CX bit. Stop the executing channel and
 *       force the minor loop to finish. The cancel takes effect after the last write of the current read/write
 *       sequence. The ECX bit clears itself after the cancel is honored. In addition to cancelling the transfer, ECX
 *       treats the cancel as an error condition, thus updating the Error Status register (DMAx_ES) and generating an
 *       optional error interrupt.
 */
#define DMA_CR_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_CR_ECX_SHIFT)) & DMA_CR_ECX_MASK)

#define DMA_CR_CX_MASK                           (0x20000U)
#define DMA_CR_CX_SHIFT                          (17U)
/*! CX - Cancel Transfer
 *  0b0..Normal operation
 *  0b1..Cancel the remaining data transfer. Stop the executing channel and force the minor loop to finish. The
 *       cancel takes effect after the last write of the current read/write sequence. The CX bit clears itself after
 *       the cancel has been honored. This cancel retires the channel normally as if the minor loop was completed.
 */
#define DMA_CR_CX(x)                             (((uint32_t)(((uint32_t)(x)) << DMA_CR_CX_SHIFT)) & DMA_CR_CX_MASK)

#define DMA_CR_ACTIVE_MASK                       (0x80000000U)
#define DMA_CR_ACTIVE_SHIFT                      (31U)
/*! ACTIVE - DMA Active Status
 *  0b0..eDMA is idle.
 *  0b1..eDMA is executing a channel.
 */
#define DMA_CR_ACTIVE(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_CR_ACTIVE_SHIFT)) & DMA_CR_ACTIVE_MASK)
/*! @} */

/*! @name ES - Error Status Register */
/*! @{ */

#define DMA_ES_DBE_MASK                          (0x1U)
#define DMA_ES_DBE_SHIFT                         (0U)
/*! DBE - Destination Bus Error
 *  0b0..No destination bus error
 *  0b1..The last recorded error was a bus error on a destination write
 */
#define DMA_ES_DBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DBE_SHIFT)) & DMA_ES_DBE_MASK)

#define DMA_ES_SBE_MASK                          (0x2U)
#define DMA_ES_SBE_SHIFT                         (1U)
/*! SBE - Source Bus Error
 *  0b0..No source bus error
 *  0b1..The last recorded error was a bus error on a source read
 */
#define DMA_ES_SBE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SBE_SHIFT)) & DMA_ES_SBE_MASK)

#define DMA_ES_SGE_MASK                          (0x4U)
#define DMA_ES_SGE_SHIFT                         (2U)
/*! SGE - Scatter/Gather Configuration Error
 *  0b0..No scatter/gather configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DLASTSGA field. This field is
 *       checked at the beginning of a scatter/gather operation after major loop completion if TCDn_CSR[ESG] is
 *       enabled. TCDn_DLASTSGA is not on a 32 byte boundary.
 */
#define DMA_ES_SGE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SGE_SHIFT)) & DMA_ES_SGE_MASK)

#define DMA_ES_NCE_MASK                          (0x8U)
#define DMA_ES_NCE_SHIFT                         (3U)
/*! NCE - NBYTES/CITER Configuration Error
 *  0b0..No NBYTES/CITER configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_NBYTES or TCDn_CITER fields.
 *       TCDn_NBYTES is not a multiple of TCDn_ATTR[SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] is equal to zero,
 *       or TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK]
 */
#define DMA_ES_NCE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_NCE_SHIFT)) & DMA_ES_NCE_MASK)

#define DMA_ES_DOE_MASK                          (0x10U)
#define DMA_ES_DOE_SHIFT                         (4U)
/*! DOE - Destination Offset Error
 *  0b0..No destination offset configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
 */
#define DMA_ES_DOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DOE_SHIFT)) & DMA_ES_DOE_MASK)

#define DMA_ES_DAE_MASK                          (0x20U)
#define DMA_ES_DAE_SHIFT                         (5U)
/*! DAE - Destination Address Error
 *  0b0..No destination address configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
 */
#define DMA_ES_DAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_DAE_SHIFT)) & DMA_ES_DAE_MASK)

#define DMA_ES_SOE_MASK                          (0x40U)
#define DMA_ES_SOE_SHIFT                         (6U)
/*! SOE - Source Offset Error
 *  0b0..No source offset configuration error
 *  0b1..The last recorded error was a configuration error detected in the TCDn_SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
 */
#define DMA_ES_SOE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SOE_SHIFT)) & DMA_ES_SOE_MASK)

#define DMA_ES_SAE_MASK                          (0x80U)
#define DMA_ES_SAE_SHIFT                         (7U)
/*! SAE - Source Address Error
 *  0b0..No source address configuration error.
 *  0b1..The last recorded error was a configuration error detected in the TCDn_SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
 */
#define DMA_ES_SAE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_SAE_SHIFT)) & DMA_ES_SAE_MASK)

#define DMA_ES_ERRCHN_MASK                       (0xF00U)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_ES_ERRCHN_SHIFT                      (8U)
/*! ERRCHN - Error Channel Number or Canceled Channel Number */
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ES_ERRCHN_SHIFT)) & DMA_ES_ERRCHN_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_ES_CPE_MASK                          (0x4000U)
#define DMA_ES_CPE_SHIFT                         (14U)
/*! CPE - Channel Priority Error
 *  0b0..No channel priority error
 *  0b1..The last recorded error was a configuration error in the channel priorities . Channel priorities are not unique.
 */
#define DMA_ES_CPE(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_CPE_SHIFT)) & DMA_ES_CPE_MASK)

#define DMA_ES_ECX_MASK                          (0x10000U)
#define DMA_ES_ECX_SHIFT                         (16U)
/*! ECX - Transfer Canceled
 *  0b0..No canceled transfers
 *  0b1..The last recorded entry was a canceled transfer by the error cancel transfer input
 */
#define DMA_ES_ECX(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_ECX_SHIFT)) & DMA_ES_ECX_MASK)

#define DMA_ES_VLD_MASK                          (0x80000000U)
#define DMA_ES_VLD_SHIFT                         (31U)
/*! VLD - VLD
 *  0b0..No ERR bits are set.
 *  0b1..At least one ERR bit is set indicating a valid error exists that has not been cleared.
 */
#define DMA_ES_VLD(x)                            (((uint32_t)(((uint32_t)(x)) << DMA_ES_VLD_SHIFT)) & DMA_ES_VLD_MASK)
/*! @} */

/*! @name ERQ - Enable Request Register */
/*! @{ */

#define DMA_ERQ_ERQ0_MASK                        (0x1U)
#define DMA_ERQ_ERQ0_SHIFT                       (0U)
/*! ERQ0 - Enable DMA Request 0
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ0_SHIFT)) & DMA_ERQ_ERQ0_MASK)

#define DMA_ERQ_ERQ1_MASK                        (0x2U)
#define DMA_ERQ_ERQ1_SHIFT                       (1U)
/*! ERQ1 - Enable DMA Request 1
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ1_SHIFT)) & DMA_ERQ_ERQ1_MASK)

#define DMA_ERQ_ERQ2_MASK                        (0x4U)
#define DMA_ERQ_ERQ2_SHIFT                       (2U)
/*! ERQ2 - Enable DMA Request 2
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ2_SHIFT)) & DMA_ERQ_ERQ2_MASK)

#define DMA_ERQ_ERQ3_MASK                        (0x8U)
#define DMA_ERQ_ERQ3_SHIFT                       (3U)
/*! ERQ3 - Enable DMA Request 3
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ3_SHIFT)) & DMA_ERQ_ERQ3_MASK)

#define DMA_ERQ_ERQ4_MASK                        (0x10U)
#define DMA_ERQ_ERQ4_SHIFT                       (4U)
/*! ERQ4 - Enable DMA Request 4
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ4_SHIFT)) & DMA_ERQ_ERQ4_MASK)

#define DMA_ERQ_ERQ5_MASK                        (0x20U)
#define DMA_ERQ_ERQ5_SHIFT                       (5U)
/*! ERQ5 - Enable DMA Request 5
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ5_SHIFT)) & DMA_ERQ_ERQ5_MASK)

#define DMA_ERQ_ERQ6_MASK                        (0x40U)
#define DMA_ERQ_ERQ6_SHIFT                       (6U)
/*! ERQ6 - Enable DMA Request 6
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ6_SHIFT)) & DMA_ERQ_ERQ6_MASK)

#define DMA_ERQ_ERQ7_MASK                        (0x80U)
#define DMA_ERQ_ERQ7_SHIFT                       (7U)
/*! ERQ7 - Enable DMA Request 7
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ7_SHIFT)) & DMA_ERQ_ERQ7_MASK)

#define DMA_ERQ_ERQ8_MASK                        (0x100U)
#define DMA_ERQ_ERQ8_SHIFT                       (8U)
/*! ERQ8 - Enable DMA Request 8
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ8_SHIFT)) & DMA_ERQ_ERQ8_MASK)

#define DMA_ERQ_ERQ9_MASK                        (0x200U)
#define DMA_ERQ_ERQ9_SHIFT                       (9U)
/*! ERQ9 - Enable DMA Request 9
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ9_SHIFT)) & DMA_ERQ_ERQ9_MASK)

#define DMA_ERQ_ERQ10_MASK                       (0x400U)
#define DMA_ERQ_ERQ10_SHIFT                      (10U)
/*! ERQ10 - Enable DMA Request 10
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ10_SHIFT)) & DMA_ERQ_ERQ10_MASK)

#define DMA_ERQ_ERQ11_MASK                       (0x800U)
#define DMA_ERQ_ERQ11_SHIFT                      (11U)
/*! ERQ11 - Enable DMA Request 11
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ11_SHIFT)) & DMA_ERQ_ERQ11_MASK)

#define DMA_ERQ_ERQ12_MASK                       (0x1000U)
#define DMA_ERQ_ERQ12_SHIFT                      (12U)
/*! ERQ12 - Enable DMA Request 12
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ12_SHIFT)) & DMA_ERQ_ERQ12_MASK)

#define DMA_ERQ_ERQ13_MASK                       (0x2000U)
#define DMA_ERQ_ERQ13_SHIFT                      (13U)
/*! ERQ13 - Enable DMA Request 13
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ13_SHIFT)) & DMA_ERQ_ERQ13_MASK)

#define DMA_ERQ_ERQ14_MASK                       (0x4000U)
#define DMA_ERQ_ERQ14_SHIFT                      (14U)
/*! ERQ14 - Enable DMA Request 14
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ14_SHIFT)) & DMA_ERQ_ERQ14_MASK)

#define DMA_ERQ_ERQ15_MASK                       (0x8000U)
#define DMA_ERQ_ERQ15_SHIFT                      (15U)
/*! ERQ15 - Enable DMA Request 15
 *  0b0..The DMA request signal for the corresponding channel is disabled
 *  0b1..The DMA request signal for the corresponding channel is enabled
 */
#define DMA_ERQ_ERQ15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERQ_ERQ15_SHIFT)) & DMA_ERQ_ERQ15_MASK)
/*! @} */

/*! @name EEI - Enable Error Interrupt Register */
/*! @{ */

#define DMA_EEI_EEI0_MASK                        (0x1U)
#define DMA_EEI_EEI0_SHIFT                       (0U)
/*! EEI0 - Enable Error Interrupt 0
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI0_SHIFT)) & DMA_EEI_EEI0_MASK)

#define DMA_EEI_EEI1_MASK                        (0x2U)
#define DMA_EEI_EEI1_SHIFT                       (1U)
/*! EEI1 - Enable Error Interrupt 1
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI1_SHIFT)) & DMA_EEI_EEI1_MASK)

#define DMA_EEI_EEI2_MASK                        (0x4U)
#define DMA_EEI_EEI2_SHIFT                       (2U)
/*! EEI2 - Enable Error Interrupt 2
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI2_SHIFT)) & DMA_EEI_EEI2_MASK)

#define DMA_EEI_EEI3_MASK                        (0x8U)
#define DMA_EEI_EEI3_SHIFT                       (3U)
/*! EEI3 - Enable Error Interrupt 3
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI3_SHIFT)) & DMA_EEI_EEI3_MASK)

#define DMA_EEI_EEI4_MASK                        (0x10U)
#define DMA_EEI_EEI4_SHIFT                       (4U)
/*! EEI4 - Enable Error Interrupt 4
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI4_SHIFT)) & DMA_EEI_EEI4_MASK)

#define DMA_EEI_EEI5_MASK                        (0x20U)
#define DMA_EEI_EEI5_SHIFT                       (5U)
/*! EEI5 - Enable Error Interrupt 5
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI5_SHIFT)) & DMA_EEI_EEI5_MASK)

#define DMA_EEI_EEI6_MASK                        (0x40U)
#define DMA_EEI_EEI6_SHIFT                       (6U)
/*! EEI6 - Enable Error Interrupt 6
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI6_SHIFT)) & DMA_EEI_EEI6_MASK)

#define DMA_EEI_EEI7_MASK                        (0x80U)
#define DMA_EEI_EEI7_SHIFT                       (7U)
/*! EEI7 - Enable Error Interrupt 7
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI7_SHIFT)) & DMA_EEI_EEI7_MASK)

#define DMA_EEI_EEI8_MASK                        (0x100U)
#define DMA_EEI_EEI8_SHIFT                       (8U)
/*! EEI8 - Enable Error Interrupt 8
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI8_SHIFT)) & DMA_EEI_EEI8_MASK)

#define DMA_EEI_EEI9_MASK                        (0x200U)
#define DMA_EEI_EEI9_SHIFT                       (9U)
/*! EEI9 - Enable Error Interrupt 9
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI9_SHIFT)) & DMA_EEI_EEI9_MASK)

#define DMA_EEI_EEI10_MASK                       (0x400U)
#define DMA_EEI_EEI10_SHIFT                      (10U)
/*! EEI10 - Enable Error Interrupt 10
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI10_SHIFT)) & DMA_EEI_EEI10_MASK)

#define DMA_EEI_EEI11_MASK                       (0x800U)
#define DMA_EEI_EEI11_SHIFT                      (11U)
/*! EEI11 - Enable Error Interrupt 11
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI11_SHIFT)) & DMA_EEI_EEI11_MASK)

#define DMA_EEI_EEI12_MASK                       (0x1000U)
#define DMA_EEI_EEI12_SHIFT                      (12U)
/*! EEI12 - Enable Error Interrupt 12
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI12_SHIFT)) & DMA_EEI_EEI12_MASK)

#define DMA_EEI_EEI13_MASK                       (0x2000U)
#define DMA_EEI_EEI13_SHIFT                      (13U)
/*! EEI13 - Enable Error Interrupt 13
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI13_SHIFT)) & DMA_EEI_EEI13_MASK)

#define DMA_EEI_EEI14_MASK                       (0x4000U)
#define DMA_EEI_EEI14_SHIFT                      (14U)
/*! EEI14 - Enable Error Interrupt 14
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI14_SHIFT)) & DMA_EEI_EEI14_MASK)

#define DMA_EEI_EEI15_MASK                       (0x8000U)
#define DMA_EEI_EEI15_SHIFT                      (15U)
/*! EEI15 - Enable Error Interrupt 15
 *  0b0..The error signal for corresponding channel does not generate an error interrupt
 *  0b1..The assertion of the error signal for corresponding channel generates an error interrupt request
 */
#define DMA_EEI_EEI15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_EEI_EEI15_SHIFT)) & DMA_EEI_EEI15_MASK)
/*! @} */

/*! @name CEEI - Clear Enable Error Interrupt Register */
/*! @{ */

#define DMA_CEEI_CEEI_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CEEI_CEEI_SHIFT                      (0U)
/*! CEEI - Clear Enable Error Interrupt */
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CEEI_SHIFT)) & DMA_CEEI_CEEI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CEEI_CAEE_MASK                       (0x40U)
#define DMA_CEEI_CAEE_SHIFT                      (6U)
/*! CAEE - Clear All Enable Error Interrupts
 *  0b0..Clear only the EEI bit specified in the CEEI field
 *  0b1..Clear all bits in EEI
 */
#define DMA_CEEI_CAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_CAEE_SHIFT)) & DMA_CEEI_CAEE_MASK)

#define DMA_CEEI_NOP_MASK                        (0x80U)
#define DMA_CEEI_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CEEI_NOP_SHIFT)) & DMA_CEEI_NOP_MASK)
/*! @} */

/*! @name SEEI - Set Enable Error Interrupt Register */
/*! @{ */

#define DMA_SEEI_SEEI_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_SEEI_SEEI_SHIFT                      (0U)
/*! SEEI - Set Enable Error Interrupt */
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SEEI_SHIFT)) & DMA_SEEI_SEEI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_SEEI_SAEE_MASK                       (0x40U)
#define DMA_SEEI_SAEE_SHIFT                      (6U)
/*! SAEE - Sets All Enable Error Interrupts
 *  0b0..Set only the EEI bit specified in the SEEI field.
 *  0b1..Sets all bits in EEI
 */
#define DMA_SEEI_SAEE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_SAEE_SHIFT)) & DMA_SEEI_SAEE_MASK)

#define DMA_SEEI_NOP_MASK                        (0x80U)
#define DMA_SEEI_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SEEI_NOP_SHIFT)) & DMA_SEEI_NOP_MASK)
/*! @} */

/*! @name CERQ - Clear Enable Request Register */
/*! @{ */

#define DMA_CERQ_CERQ_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CERQ_CERQ_SHIFT                      (0U)
/*! CERQ - Clear Enable Request */
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CERQ_SHIFT)) & DMA_CERQ_CERQ_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CERQ_CAER_MASK                       (0x40U)
#define DMA_CERQ_CAER_SHIFT                      (6U)
/*! CAER - Clear All Enable Requests
 *  0b0..Clear only the ERQ bit specified in the CERQ field
 *  0b1..Clear all bits in ERQ
 */
#define DMA_CERQ_CAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_CAER_SHIFT)) & DMA_CERQ_CAER_MASK)

#define DMA_CERQ_NOP_MASK                        (0x80U)
#define DMA_CERQ_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERQ_NOP_SHIFT)) & DMA_CERQ_NOP_MASK)
/*! @} */

/*! @name SERQ - Set Enable Request Register */
/*! @{ */

#define DMA_SERQ_SERQ_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_SERQ_SERQ_SHIFT                      (0U)
/*! SERQ - Set Enable Request */
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SERQ_SHIFT)) & DMA_SERQ_SERQ_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_SERQ_SAER_MASK                       (0x40U)
#define DMA_SERQ_SAER_SHIFT                      (6U)
/*! SAER - Set All Enable Requests
 *  0b0..Set only the ERQ bit specified in the SERQ field
 *  0b1..Set all bits in ERQ
 */
#define DMA_SERQ_SAER(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_SAER_SHIFT)) & DMA_SERQ_SAER_MASK)

#define DMA_SERQ_NOP_MASK                        (0x80U)
#define DMA_SERQ_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SERQ_NOP_SHIFT)) & DMA_SERQ_NOP_MASK)
/*! @} */

/*! @name CDNE - Clear DONE Status Bit Register */
/*! @{ */

#define DMA_CDNE_CDNE_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CDNE_CDNE_SHIFT                      (0U)
/*! CDNE - Clear DONE Bit */
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CDNE_SHIFT)) & DMA_CDNE_CDNE_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CDNE_CADN_MASK                       (0x40U)
#define DMA_CDNE_CADN_SHIFT                      (6U)
/*! CADN - Clears All DONE Bits
 *  0b0..Clears only the TCDn_CSR[DONE] bit specified in the CDNE field
 *  0b1..Clears all bits in TCDn_CSR[DONE]
 */
#define DMA_CDNE_CADN(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_CADN_SHIFT)) & DMA_CDNE_CADN_MASK)

#define DMA_CDNE_NOP_MASK                        (0x80U)
#define DMA_CDNE_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CDNE_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CDNE_NOP_SHIFT)) & DMA_CDNE_NOP_MASK)
/*! @} */

/*! @name SSRT - Set START Bit Register */
/*! @{ */

#define DMA_SSRT_SSRT_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_SSRT_SSRT_SHIFT                      (0U)
/*! SSRT - Set START Bit */
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SSRT_SHIFT)) & DMA_SSRT_SSRT_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_SSRT_SAST_MASK                       (0x40U)
#define DMA_SSRT_SAST_SHIFT                      (6U)
/*! SAST - Set All START Bits (activates all channels)
 *  0b0..Set only the TCDn_CSR[START] bit specified in the SSRT field
 *  0b1..Set all bits in TCDn_CSR[START]
 */
#define DMA_SSRT_SAST(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_SAST_SHIFT)) & DMA_SSRT_SAST_MASK)

#define DMA_SSRT_NOP_MASK                        (0x80U)
#define DMA_SSRT_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_SSRT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_SSRT_NOP_SHIFT)) & DMA_SSRT_NOP_MASK)
/*! @} */

/*! @name CERR - Clear Error Register */
/*! @{ */

#define DMA_CERR_CERR_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CERR_CERR_SHIFT                      (0U)
/*! CERR - Clear Error Indicator */
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CERR_SHIFT)) & DMA_CERR_CERR_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CERR_CAEI_MASK                       (0x40U)
#define DMA_CERR_CAEI_SHIFT                      (6U)
/*! CAEI - Clear All Error Indicators
 *  0b0..Clear only the ERR bit specified in the CERR field
 *  0b1..Clear all bits in ERR
 */
#define DMA_CERR_CAEI(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CERR_CAEI_SHIFT)) & DMA_CERR_CAEI_MASK)

#define DMA_CERR_NOP_MASK                        (0x80U)
#define DMA_CERR_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CERR_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CERR_NOP_SHIFT)) & DMA_CERR_NOP_MASK)
/*! @} */

/*! @name CINT - Clear Interrupt Request Register */
/*! @{ */

#define DMA_CINT_CINT_MASK                       (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CINT_CINT_SHIFT                      (0U)
/*! CINT - Clear Interrupt Request */
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CINT_SHIFT)) & DMA_CINT_CINT_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CINT_CAIR_MASK                       (0x40U)
#define DMA_CINT_CAIR_SHIFT                      (6U)
/*! CAIR - Clear All Interrupt Requests
 *  0b0..Clear only the INT bit specified in the CINT field
 *  0b1..Clear all bits in INT
 */
#define DMA_CINT_CAIR(x)                         (((uint8_t)(((uint8_t)(x)) << DMA_CINT_CAIR_SHIFT)) & DMA_CINT_CAIR_MASK)

#define DMA_CINT_NOP_MASK                        (0x80U)
#define DMA_CINT_NOP_SHIFT                       (7U)
/*! NOP - No Op enable
 *  0b0..Normal operation
 *  0b1..No operation, ignore the other bits in this register
 */
#define DMA_CINT_NOP(x)                          (((uint8_t)(((uint8_t)(x)) << DMA_CINT_NOP_SHIFT)) & DMA_CINT_NOP_MASK)
/*! @} */

/*! @name INT - Interrupt Request Register */
/*! @{ */

#define DMA_INT_INT0_MASK                        (0x1U)
#define DMA_INT_INT0_SHIFT                       (0U)
/*! INT0 - Interrupt Request 0
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT0_SHIFT)) & DMA_INT_INT0_MASK)

#define DMA_INT_INT1_MASK                        (0x2U)
#define DMA_INT_INT1_SHIFT                       (1U)
/*! INT1 - Interrupt Request 1
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT1_SHIFT)) & DMA_INT_INT1_MASK)

#define DMA_INT_INT2_MASK                        (0x4U)
#define DMA_INT_INT2_SHIFT                       (2U)
/*! INT2 - Interrupt Request 2
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT2_SHIFT)) & DMA_INT_INT2_MASK)

#define DMA_INT_INT3_MASK                        (0x8U)
#define DMA_INT_INT3_SHIFT                       (3U)
/*! INT3 - Interrupt Request 3
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT3_SHIFT)) & DMA_INT_INT3_MASK)

#define DMA_INT_INT4_MASK                        (0x10U)
#define DMA_INT_INT4_SHIFT                       (4U)
/*! INT4 - Interrupt Request 4
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT4_SHIFT)) & DMA_INT_INT4_MASK)

#define DMA_INT_INT5_MASK                        (0x20U)
#define DMA_INT_INT5_SHIFT                       (5U)
/*! INT5 - Interrupt Request 5
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT5_SHIFT)) & DMA_INT_INT5_MASK)

#define DMA_INT_INT6_MASK                        (0x40U)
#define DMA_INT_INT6_SHIFT                       (6U)
/*! INT6 - Interrupt Request 6
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT6_SHIFT)) & DMA_INT_INT6_MASK)

#define DMA_INT_INT7_MASK                        (0x80U)
#define DMA_INT_INT7_SHIFT                       (7U)
/*! INT7 - Interrupt Request 7
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT7_SHIFT)) & DMA_INT_INT7_MASK)

#define DMA_INT_INT8_MASK                        (0x100U)
#define DMA_INT_INT8_SHIFT                       (8U)
/*! INT8 - Interrupt Request 8
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT8_SHIFT)) & DMA_INT_INT8_MASK)

#define DMA_INT_INT9_MASK                        (0x200U)
#define DMA_INT_INT9_SHIFT                       (9U)
/*! INT9 - Interrupt Request 9
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT9_SHIFT)) & DMA_INT_INT9_MASK)

#define DMA_INT_INT10_MASK                       (0x400U)
#define DMA_INT_INT10_SHIFT                      (10U)
/*! INT10 - Interrupt Request 10
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT10_SHIFT)) & DMA_INT_INT10_MASK)

#define DMA_INT_INT11_MASK                       (0x800U)
#define DMA_INT_INT11_SHIFT                      (11U)
/*! INT11 - Interrupt Request 11
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT11_SHIFT)) & DMA_INT_INT11_MASK)

#define DMA_INT_INT12_MASK                       (0x1000U)
#define DMA_INT_INT12_SHIFT                      (12U)
/*! INT12 - Interrupt Request 12
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT12_SHIFT)) & DMA_INT_INT12_MASK)

#define DMA_INT_INT13_MASK                       (0x2000U)
#define DMA_INT_INT13_SHIFT                      (13U)
/*! INT13 - Interrupt Request 13
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT13_SHIFT)) & DMA_INT_INT13_MASK)

#define DMA_INT_INT14_MASK                       (0x4000U)
#define DMA_INT_INT14_SHIFT                      (14U)
/*! INT14 - Interrupt Request 14
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT14_SHIFT)) & DMA_INT_INT14_MASK)

#define DMA_INT_INT15_MASK                       (0x8000U)
#define DMA_INT_INT15_SHIFT                      (15U)
/*! INT15 - Interrupt Request 15
 *  0b0..The interrupt request for corresponding channel is cleared
 *  0b1..The interrupt request for corresponding channel is active
 */
#define DMA_INT_INT15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_INT_INT15_SHIFT)) & DMA_INT_INT15_MASK)
/*! @} */

/*! @name ERR - Error Register */
/*! @{ */

#define DMA_ERR_ERR0_MASK                        (0x1U)
#define DMA_ERR_ERR0_SHIFT                       (0U)
/*! ERR0 - Error In Channel 0
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR0_SHIFT)) & DMA_ERR_ERR0_MASK)

#define DMA_ERR_ERR1_MASK                        (0x2U)
#define DMA_ERR_ERR1_SHIFT                       (1U)
/*! ERR1 - Error In Channel 1
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR1_SHIFT)) & DMA_ERR_ERR1_MASK)

#define DMA_ERR_ERR2_MASK                        (0x4U)
#define DMA_ERR_ERR2_SHIFT                       (2U)
/*! ERR2 - Error In Channel 2
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR2_SHIFT)) & DMA_ERR_ERR2_MASK)

#define DMA_ERR_ERR3_MASK                        (0x8U)
#define DMA_ERR_ERR3_SHIFT                       (3U)
/*! ERR3 - Error In Channel 3
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR3_SHIFT)) & DMA_ERR_ERR3_MASK)

#define DMA_ERR_ERR4_MASK                        (0x10U)
#define DMA_ERR_ERR4_SHIFT                       (4U)
/*! ERR4 - Error In Channel 4
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR4_SHIFT)) & DMA_ERR_ERR4_MASK)

#define DMA_ERR_ERR5_MASK                        (0x20U)
#define DMA_ERR_ERR5_SHIFT                       (5U)
/*! ERR5 - Error In Channel 5
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR5_SHIFT)) & DMA_ERR_ERR5_MASK)

#define DMA_ERR_ERR6_MASK                        (0x40U)
#define DMA_ERR_ERR6_SHIFT                       (6U)
/*! ERR6 - Error In Channel 6
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR6_SHIFT)) & DMA_ERR_ERR6_MASK)

#define DMA_ERR_ERR7_MASK                        (0x80U)
#define DMA_ERR_ERR7_SHIFT                       (7U)
/*! ERR7 - Error In Channel 7
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR7_SHIFT)) & DMA_ERR_ERR7_MASK)

#define DMA_ERR_ERR8_MASK                        (0x100U)
#define DMA_ERR_ERR8_SHIFT                       (8U)
/*! ERR8 - Error In Channel 8
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR8_SHIFT)) & DMA_ERR_ERR8_MASK)

#define DMA_ERR_ERR9_MASK                        (0x200U)
#define DMA_ERR_ERR9_SHIFT                       (9U)
/*! ERR9 - Error In Channel 9
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR9_SHIFT)) & DMA_ERR_ERR9_MASK)

#define DMA_ERR_ERR10_MASK                       (0x400U)
#define DMA_ERR_ERR10_SHIFT                      (10U)
/*! ERR10 - Error In Channel 10
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR10_SHIFT)) & DMA_ERR_ERR10_MASK)

#define DMA_ERR_ERR11_MASK                       (0x800U)
#define DMA_ERR_ERR11_SHIFT                      (11U)
/*! ERR11 - Error In Channel 11
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR11_SHIFT)) & DMA_ERR_ERR11_MASK)

#define DMA_ERR_ERR12_MASK                       (0x1000U)
#define DMA_ERR_ERR12_SHIFT                      (12U)
/*! ERR12 - Error In Channel 12
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR12_SHIFT)) & DMA_ERR_ERR12_MASK)

#define DMA_ERR_ERR13_MASK                       (0x2000U)
#define DMA_ERR_ERR13_SHIFT                      (13U)
/*! ERR13 - Error In Channel 13
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR13_SHIFT)) & DMA_ERR_ERR13_MASK)

#define DMA_ERR_ERR14_MASK                       (0x4000U)
#define DMA_ERR_ERR14_SHIFT                      (14U)
/*! ERR14 - Error In Channel 14
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR14_SHIFT)) & DMA_ERR_ERR14_MASK)

#define DMA_ERR_ERR15_MASK                       (0x8000U)
#define DMA_ERR_ERR15_SHIFT                      (15U)
/*! ERR15 - Error In Channel 15
 *  0b0..An error in this channel has not occurred
 *  0b1..An error in this channel has occurred
 */
#define DMA_ERR_ERR15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_ERR_ERR15_SHIFT)) & DMA_ERR_ERR15_MASK)
/*! @} */

/*! @name HRS - Hardware Request Status Register */
/*! @{ */

#define DMA_HRS_HRS0_MASK                        (0x1U)
#define DMA_HRS_HRS0_SHIFT                       (0U)
/*! HRS0 - Hardware Request Status Channel 0
 *  0b0..A hardware service request for channel 0 is not present
 *  0b1..A hardware service request for channel 0 is present
 */
#define DMA_HRS_HRS0(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS0_SHIFT)) & DMA_HRS_HRS0_MASK)

#define DMA_HRS_HRS1_MASK                        (0x2U)
#define DMA_HRS_HRS1_SHIFT                       (1U)
/*! HRS1 - Hardware Request Status Channel 1
 *  0b0..A hardware service request for channel 1 is not present
 *  0b1..A hardware service request for channel 1 is present
 */
#define DMA_HRS_HRS1(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS1_SHIFT)) & DMA_HRS_HRS1_MASK)

#define DMA_HRS_HRS2_MASK                        (0x4U)
#define DMA_HRS_HRS2_SHIFT                       (2U)
/*! HRS2 - Hardware Request Status Channel 2
 *  0b0..A hardware service request for channel 2 is not present
 *  0b1..A hardware service request for channel 2 is present
 */
#define DMA_HRS_HRS2(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS2_SHIFT)) & DMA_HRS_HRS2_MASK)

#define DMA_HRS_HRS3_MASK                        (0x8U)
#define DMA_HRS_HRS3_SHIFT                       (3U)
/*! HRS3 - Hardware Request Status Channel 3
 *  0b0..A hardware service request for channel 3 is not present
 *  0b1..A hardware service request for channel 3 is present
 */
#define DMA_HRS_HRS3(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS3_SHIFT)) & DMA_HRS_HRS3_MASK)

#define DMA_HRS_HRS4_MASK                        (0x10U)
#define DMA_HRS_HRS4_SHIFT                       (4U)
/*! HRS4 - Hardware Request Status Channel 4
 *  0b0..A hardware service request for channel 4 is not present
 *  0b1..A hardware service request for channel 4 is present
 */
#define DMA_HRS_HRS4(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS4_SHIFT)) & DMA_HRS_HRS4_MASK)

#define DMA_HRS_HRS5_MASK                        (0x20U)
#define DMA_HRS_HRS5_SHIFT                       (5U)
/*! HRS5 - Hardware Request Status Channel 5
 *  0b0..A hardware service request for channel 5 is not present
 *  0b1..A hardware service request for channel 5 is present
 */
#define DMA_HRS_HRS5(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS5_SHIFT)) & DMA_HRS_HRS5_MASK)

#define DMA_HRS_HRS6_MASK                        (0x40U)
#define DMA_HRS_HRS6_SHIFT                       (6U)
/*! HRS6 - Hardware Request Status Channel 6
 *  0b0..A hardware service request for channel 6 is not present
 *  0b1..A hardware service request for channel 6 is present
 */
#define DMA_HRS_HRS6(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS6_SHIFT)) & DMA_HRS_HRS6_MASK)

#define DMA_HRS_HRS7_MASK                        (0x80U)
#define DMA_HRS_HRS7_SHIFT                       (7U)
/*! HRS7 - Hardware Request Status Channel 7
 *  0b0..A hardware service request for channel 7 is not present
 *  0b1..A hardware service request for channel 7 is present
 */
#define DMA_HRS_HRS7(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS7_SHIFT)) & DMA_HRS_HRS7_MASK)

#define DMA_HRS_HRS8_MASK                        (0x100U)
#define DMA_HRS_HRS8_SHIFT                       (8U)
/*! HRS8 - Hardware Request Status Channel 8
 *  0b0..A hardware service request for channel 8 is not present
 *  0b1..A hardware service request for channel 8 is present
 */
#define DMA_HRS_HRS8(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS8_SHIFT)) & DMA_HRS_HRS8_MASK)

#define DMA_HRS_HRS9_MASK                        (0x200U)
#define DMA_HRS_HRS9_SHIFT                       (9U)
/*! HRS9 - Hardware Request Status Channel 9
 *  0b0..A hardware service request for channel 9 is not present
 *  0b1..A hardware service request for channel 9 is present
 */
#define DMA_HRS_HRS9(x)                          (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS9_SHIFT)) & DMA_HRS_HRS9_MASK)

#define DMA_HRS_HRS10_MASK                       (0x400U)
#define DMA_HRS_HRS10_SHIFT                      (10U)
/*! HRS10 - Hardware Request Status Channel 10
 *  0b0..A hardware service request for channel 10 is not present
 *  0b1..A hardware service request for channel 10 is present
 */
#define DMA_HRS_HRS10(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS10_SHIFT)) & DMA_HRS_HRS10_MASK)

#define DMA_HRS_HRS11_MASK                       (0x800U)
#define DMA_HRS_HRS11_SHIFT                      (11U)
/*! HRS11 - Hardware Request Status Channel 11
 *  0b0..A hardware service request for channel 11 is not present
 *  0b1..A hardware service request for channel 11 is present
 */
#define DMA_HRS_HRS11(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS11_SHIFT)) & DMA_HRS_HRS11_MASK)

#define DMA_HRS_HRS12_MASK                       (0x1000U)
#define DMA_HRS_HRS12_SHIFT                      (12U)
/*! HRS12 - Hardware Request Status Channel 12
 *  0b0..A hardware service request for channel 12 is not present
 *  0b1..A hardware service request for channel 12 is present
 */
#define DMA_HRS_HRS12(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS12_SHIFT)) & DMA_HRS_HRS12_MASK)

#define DMA_HRS_HRS13_MASK                       (0x2000U)
#define DMA_HRS_HRS13_SHIFT                      (13U)
/*! HRS13 - Hardware Request Status Channel 13
 *  0b0..A hardware service request for channel 13 is not present
 *  0b1..A hardware service request for channel 13 is present
 */
#define DMA_HRS_HRS13(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS13_SHIFT)) & DMA_HRS_HRS13_MASK)

#define DMA_HRS_HRS14_MASK                       (0x4000U)
#define DMA_HRS_HRS14_SHIFT                      (14U)
/*! HRS14 - Hardware Request Status Channel 14
 *  0b0..A hardware service request for channel 14 is not present
 *  0b1..A hardware service request for channel 14 is present
 */
#define DMA_HRS_HRS14(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS14_SHIFT)) & DMA_HRS_HRS14_MASK)

#define DMA_HRS_HRS15_MASK                       (0x8000U)
#define DMA_HRS_HRS15_SHIFT                      (15U)
/*! HRS15 - Hardware Request Status Channel 15
 *  0b0..A hardware service request for channel 15 is not present
 *  0b1..A hardware service request for channel 15 is present
 */
#define DMA_HRS_HRS15(x)                         (((uint32_t)(((uint32_t)(x)) << DMA_HRS_HRS15_SHIFT)) & DMA_HRS_HRS15_MASK)
/*! @} */

/*! @name EARS - Enable Asynchronous Request in Stop Register */
/*! @{ */

#define DMA_EARS_EDREQ_0_MASK                    (0x1U)
#define DMA_EARS_EDREQ_0_SHIFT                   (0U)
/*! EDREQ_0 - Enable asynchronous DMA request in stop mode for channel 0.
 *  0b0..Disable asynchronous DMA request for channel 0.
 *  0b1..Enable asynchronous DMA request for channel 0.
 */
#define DMA_EARS_EDREQ_0(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_0_SHIFT)) & DMA_EARS_EDREQ_0_MASK)

#define DMA_EARS_EDREQ_1_MASK                    (0x2U)
#define DMA_EARS_EDREQ_1_SHIFT                   (1U)
/*! EDREQ_1 - Enable asynchronous DMA request in stop mode for channel 1.
 *  0b0..Disable asynchronous DMA request for channel 1
 *  0b1..Enable asynchronous DMA request for channel 1.
 */
#define DMA_EARS_EDREQ_1(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_1_SHIFT)) & DMA_EARS_EDREQ_1_MASK)

#define DMA_EARS_EDREQ_2_MASK                    (0x4U)
#define DMA_EARS_EDREQ_2_SHIFT                   (2U)
/*! EDREQ_2 - Enable asynchronous DMA request in stop mode for channel 2.
 *  0b0..Disable asynchronous DMA request for channel 2.
 *  0b1..Enable asynchronous DMA request for channel 2.
 */
#define DMA_EARS_EDREQ_2(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_2_SHIFT)) & DMA_EARS_EDREQ_2_MASK)

#define DMA_EARS_EDREQ_3_MASK                    (0x8U)
#define DMA_EARS_EDREQ_3_SHIFT                   (3U)
/*! EDREQ_3 - Enable asynchronous DMA request in stop mode for channel 3.
 *  0b0..Disable asynchronous DMA request for channel 3.
 *  0b1..Enable asynchronous DMA request for channel 3.
 */
#define DMA_EARS_EDREQ_3(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_3_SHIFT)) & DMA_EARS_EDREQ_3_MASK)

#define DMA_EARS_EDREQ_4_MASK                    (0x10U)
#define DMA_EARS_EDREQ_4_SHIFT                   (4U)
/*! EDREQ_4 - Enable asynchronous DMA request in stop mode for channel 4
 *  0b0..Disable asynchronous DMA request for channel 4.
 *  0b1..Enable asynchronous DMA request for channel 4.
 */
#define DMA_EARS_EDREQ_4(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_4_SHIFT)) & DMA_EARS_EDREQ_4_MASK)

#define DMA_EARS_EDREQ_5_MASK                    (0x20U)
#define DMA_EARS_EDREQ_5_SHIFT                   (5U)
/*! EDREQ_5 - Enable asynchronous DMA request in stop mode for channel 5
 *  0b0..Disable asynchronous DMA request for channel 5.
 *  0b1..Enable asynchronous DMA request for channel 5.
 */
#define DMA_EARS_EDREQ_5(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_5_SHIFT)) & DMA_EARS_EDREQ_5_MASK)

#define DMA_EARS_EDREQ_6_MASK                    (0x40U)
#define DMA_EARS_EDREQ_6_SHIFT                   (6U)
/*! EDREQ_6 - Enable asynchronous DMA request in stop mode for channel 6
 *  0b0..Disable asynchronous DMA request for channel 6.
 *  0b1..Enable asynchronous DMA request for channel 6.
 */
#define DMA_EARS_EDREQ_6(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_6_SHIFT)) & DMA_EARS_EDREQ_6_MASK)

#define DMA_EARS_EDREQ_7_MASK                    (0x80U)
#define DMA_EARS_EDREQ_7_SHIFT                   (7U)
/*! EDREQ_7 - Enable asynchronous DMA request in stop mode for channel 7
 *  0b0..Disable asynchronous DMA request for channel 7.
 *  0b1..Enable asynchronous DMA request for channel 7.
 */
#define DMA_EARS_EDREQ_7(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_7_SHIFT)) & DMA_EARS_EDREQ_7_MASK)

#define DMA_EARS_EDREQ_8_MASK                    (0x100U)
#define DMA_EARS_EDREQ_8_SHIFT                   (8U)
/*! EDREQ_8 - Enable asynchronous DMA request in stop mode for channel 8
 *  0b0..Disable asynchronous DMA request for channel 8.
 *  0b1..Enable asynchronous DMA request for channel 8.
 */
#define DMA_EARS_EDREQ_8(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_8_SHIFT)) & DMA_EARS_EDREQ_8_MASK)

#define DMA_EARS_EDREQ_9_MASK                    (0x200U)
#define DMA_EARS_EDREQ_9_SHIFT                   (9U)
/*! EDREQ_9 - Enable asynchronous DMA request in stop mode for channel 9
 *  0b0..Disable asynchronous DMA request for channel 9.
 *  0b1..Enable asynchronous DMA request for channel 9.
 */
#define DMA_EARS_EDREQ_9(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_9_SHIFT)) & DMA_EARS_EDREQ_9_MASK)

#define DMA_EARS_EDREQ_10_MASK                   (0x400U)
#define DMA_EARS_EDREQ_10_SHIFT                  (10U)
/*! EDREQ_10 - Enable asynchronous DMA request in stop mode for channel 10
 *  0b0..Disable asynchronous DMA request for channel 10.
 *  0b1..Enable asynchronous DMA request for channel 10.
 */
#define DMA_EARS_EDREQ_10(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_10_SHIFT)) & DMA_EARS_EDREQ_10_MASK)

#define DMA_EARS_EDREQ_11_MASK                   (0x800U)
#define DMA_EARS_EDREQ_11_SHIFT                  (11U)
/*! EDREQ_11 - Enable asynchronous DMA request in stop mode for channel 11
 *  0b0..Disable asynchronous DMA request for channel 11.
 *  0b1..Enable asynchronous DMA request for channel 11.
 */
#define DMA_EARS_EDREQ_11(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_11_SHIFT)) & DMA_EARS_EDREQ_11_MASK)

#define DMA_EARS_EDREQ_12_MASK                   (0x1000U)
#define DMA_EARS_EDREQ_12_SHIFT                  (12U)
/*! EDREQ_12 - Enable asynchronous DMA request in stop mode for channel 12
 *  0b0..Disable asynchronous DMA request for channel 12.
 *  0b1..Enable asynchronous DMA request for channel 12.
 */
#define DMA_EARS_EDREQ_12(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_12_SHIFT)) & DMA_EARS_EDREQ_12_MASK)

#define DMA_EARS_EDREQ_13_MASK                   (0x2000U)
#define DMA_EARS_EDREQ_13_SHIFT                  (13U)
/*! EDREQ_13 - Enable asynchronous DMA request in stop mode for channel 13
 *  0b0..Disable asynchronous DMA request for channel 13.
 *  0b1..Enable asynchronous DMA request for channel 13.
 */
#define DMA_EARS_EDREQ_13(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_13_SHIFT)) & DMA_EARS_EDREQ_13_MASK)

#define DMA_EARS_EDREQ_14_MASK                   (0x4000U)
#define DMA_EARS_EDREQ_14_SHIFT                  (14U)
/*! EDREQ_14 - Enable asynchronous DMA request in stop mode for channel 14
 *  0b0..Disable asynchronous DMA request for channel 14.
 *  0b1..Enable asynchronous DMA request for channel 14.
 */
#define DMA_EARS_EDREQ_14(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_14_SHIFT)) & DMA_EARS_EDREQ_14_MASK)

#define DMA_EARS_EDREQ_15_MASK                   (0x8000U)
#define DMA_EARS_EDREQ_15_SHIFT                  (15U)
/*! EDREQ_15 - Enable asynchronous DMA request in stop mode for channel 15
 *  0b0..Disable asynchronous DMA request for channel 15.
 *  0b1..Enable asynchronous DMA request for channel 15.
 */
#define DMA_EARS_EDREQ_15(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_EARS_EDREQ_15_SHIFT)) & DMA_EARS_EDREQ_15_MASK)
/*! @} */

/*! @name DCHPRI3 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI3_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI3_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI3_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_CHPRI_SHIFT)) & DMA_DCHPRI3_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI3_DPA_MASK                     (0x40U)
#define DMA_DCHPRI3_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI3_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_DPA_SHIFT)) & DMA_DCHPRI3_DPA_MASK)

#define DMA_DCHPRI3_ECP_MASK                     (0x80U)
#define DMA_DCHPRI3_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI3_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI3_ECP_SHIFT)) & DMA_DCHPRI3_ECP_MASK)
/*! @} */

/*! @name DCHPRI2 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI2_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI2_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI2_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_CHPRI_SHIFT)) & DMA_DCHPRI2_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI2_DPA_MASK                     (0x40U)
#define DMA_DCHPRI2_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI2_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_DPA_SHIFT)) & DMA_DCHPRI2_DPA_MASK)

#define DMA_DCHPRI2_ECP_MASK                     (0x80U)
#define DMA_DCHPRI2_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI2_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI2_ECP_SHIFT)) & DMA_DCHPRI2_ECP_MASK)
/*! @} */

/*! @name DCHPRI1 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI1_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI1_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI1_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_CHPRI_SHIFT)) & DMA_DCHPRI1_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI1_DPA_MASK                     (0x40U)
#define DMA_DCHPRI1_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI1_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_DPA_SHIFT)) & DMA_DCHPRI1_DPA_MASK)

#define DMA_DCHPRI1_ECP_MASK                     (0x80U)
#define DMA_DCHPRI1_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI1_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI1_ECP_SHIFT)) & DMA_DCHPRI1_ECP_MASK)
/*! @} */

/*! @name DCHPRI0 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI0_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI0_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI0_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_CHPRI_SHIFT)) & DMA_DCHPRI0_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI0_DPA_MASK                     (0x40U)
#define DMA_DCHPRI0_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI0_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_DPA_SHIFT)) & DMA_DCHPRI0_DPA_MASK)

#define DMA_DCHPRI0_ECP_MASK                     (0x80U)
#define DMA_DCHPRI0_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI0_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI0_ECP_SHIFT)) & DMA_DCHPRI0_ECP_MASK)
/*! @} */

/*! @name DCHPRI7 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI7_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI7_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI7_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_CHPRI_SHIFT)) & DMA_DCHPRI7_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI7_DPA_MASK                     (0x40U)
#define DMA_DCHPRI7_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI7_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_DPA_SHIFT)) & DMA_DCHPRI7_DPA_MASK)

#define DMA_DCHPRI7_ECP_MASK                     (0x80U)
#define DMA_DCHPRI7_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI7_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI7_ECP_SHIFT)) & DMA_DCHPRI7_ECP_MASK)
/*! @} */

/*! @name DCHPRI6 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI6_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI6_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI6_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_CHPRI_SHIFT)) & DMA_DCHPRI6_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI6_DPA_MASK                     (0x40U)
#define DMA_DCHPRI6_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI6_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_DPA_SHIFT)) & DMA_DCHPRI6_DPA_MASK)

#define DMA_DCHPRI6_ECP_MASK                     (0x80U)
#define DMA_DCHPRI6_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI6_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI6_ECP_SHIFT)) & DMA_DCHPRI6_ECP_MASK)
/*! @} */

/*! @name DCHPRI5 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI5_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI5_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI5_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_CHPRI_SHIFT)) & DMA_DCHPRI5_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI5_DPA_MASK                     (0x40U)
#define DMA_DCHPRI5_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI5_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_DPA_SHIFT)) & DMA_DCHPRI5_DPA_MASK)

#define DMA_DCHPRI5_ECP_MASK                     (0x80U)
#define DMA_DCHPRI5_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI5_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI5_ECP_SHIFT)) & DMA_DCHPRI5_ECP_MASK)
/*! @} */

/*! @name DCHPRI4 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI4_CHPRI_MASK                   (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_DCHPRI4_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI4_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_CHPRI_SHIFT)) & DMA_DCHPRI4_CHPRI_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_DCHPRI4_DPA_MASK                     (0x40U)
#define DMA_DCHPRI4_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI4_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_DPA_SHIFT)) & DMA_DCHPRI4_DPA_MASK)

#define DMA_DCHPRI4_ECP_MASK                     (0x80U)
#define DMA_DCHPRI4_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI4_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI4_ECP_SHIFT)) & DMA_DCHPRI4_ECP_MASK)
/*! @} */

/*! @name DCHPRI11 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI11_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI11_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI11_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_CHPRI_SHIFT)) & DMA_DCHPRI11_CHPRI_MASK)

#define DMA_DCHPRI11_DPA_MASK                    (0x40U)
#define DMA_DCHPRI11_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI11_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_DPA_SHIFT)) & DMA_DCHPRI11_DPA_MASK)

#define DMA_DCHPRI11_ECP_MASK                    (0x80U)
#define DMA_DCHPRI11_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI11_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI11_ECP_SHIFT)) & DMA_DCHPRI11_ECP_MASK)
/*! @} */

/*! @name DCHPRI10 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI10_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI10_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI10_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_CHPRI_SHIFT)) & DMA_DCHPRI10_CHPRI_MASK)

#define DMA_DCHPRI10_DPA_MASK                    (0x40U)
#define DMA_DCHPRI10_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI10_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_DPA_SHIFT)) & DMA_DCHPRI10_DPA_MASK)

#define DMA_DCHPRI10_ECP_MASK                    (0x80U)
#define DMA_DCHPRI10_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI10_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI10_ECP_SHIFT)) & DMA_DCHPRI10_ECP_MASK)
/*! @} */

/*! @name DCHPRI9 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI9_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI9_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI9_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_CHPRI_SHIFT)) & DMA_DCHPRI9_CHPRI_MASK)

#define DMA_DCHPRI9_DPA_MASK                     (0x40U)
#define DMA_DCHPRI9_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI9_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_DPA_SHIFT)) & DMA_DCHPRI9_DPA_MASK)

#define DMA_DCHPRI9_ECP_MASK                     (0x80U)
#define DMA_DCHPRI9_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI9_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI9_ECP_SHIFT)) & DMA_DCHPRI9_ECP_MASK)
/*! @} */

/*! @name DCHPRI8 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI8_CHPRI_MASK                   (0xFU)
#define DMA_DCHPRI8_CHPRI_SHIFT                  (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI8_CHPRI(x)                     (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_CHPRI_SHIFT)) & DMA_DCHPRI8_CHPRI_MASK)

#define DMA_DCHPRI8_DPA_MASK                     (0x40U)
#define DMA_DCHPRI8_DPA_SHIFT                    (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI8_DPA(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_DPA_SHIFT)) & DMA_DCHPRI8_DPA_MASK)

#define DMA_DCHPRI8_ECP_MASK                     (0x80U)
#define DMA_DCHPRI8_ECP_SHIFT                    (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI8_ECP(x)                       (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI8_ECP_SHIFT)) & DMA_DCHPRI8_ECP_MASK)
/*! @} */

/*! @name DCHPRI15 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI15_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI15_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI15_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_CHPRI_SHIFT)) & DMA_DCHPRI15_CHPRI_MASK)

#define DMA_DCHPRI15_DPA_MASK                    (0x40U)
#define DMA_DCHPRI15_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI15_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_DPA_SHIFT)) & DMA_DCHPRI15_DPA_MASK)

#define DMA_DCHPRI15_ECP_MASK                    (0x80U)
#define DMA_DCHPRI15_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI15_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI15_ECP_SHIFT)) & DMA_DCHPRI15_ECP_MASK)
/*! @} */

/*! @name DCHPRI14 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI14_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI14_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI14_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_CHPRI_SHIFT)) & DMA_DCHPRI14_CHPRI_MASK)

#define DMA_DCHPRI14_DPA_MASK                    (0x40U)
#define DMA_DCHPRI14_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI14_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_DPA_SHIFT)) & DMA_DCHPRI14_DPA_MASK)

#define DMA_DCHPRI14_ECP_MASK                    (0x80U)
#define DMA_DCHPRI14_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI14_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI14_ECP_SHIFT)) & DMA_DCHPRI14_ECP_MASK)
/*! @} */

/*! @name DCHPRI13 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI13_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI13_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI13_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_CHPRI_SHIFT)) & DMA_DCHPRI13_CHPRI_MASK)

#define DMA_DCHPRI13_DPA_MASK                    (0x40U)
#define DMA_DCHPRI13_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI13_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_DPA_SHIFT)) & DMA_DCHPRI13_DPA_MASK)

#define DMA_DCHPRI13_ECP_MASK                    (0x80U)
#define DMA_DCHPRI13_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI13_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI13_ECP_SHIFT)) & DMA_DCHPRI13_ECP_MASK)
/*! @} */

/*! @name DCHPRI12 - Channel Priority Register */
/*! @{ */

#define DMA_DCHPRI12_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI12_CHPRI_SHIFT                 (0U)
/*! CHPRI - Channel n Arbitration Priority */
#define DMA_DCHPRI12_CHPRI(x)                    (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_CHPRI_SHIFT)) & DMA_DCHPRI12_CHPRI_MASK)

#define DMA_DCHPRI12_DPA_MASK                    (0x40U)
#define DMA_DCHPRI12_DPA_SHIFT                   (6U)
/*! DPA - Disable Preempt Ability. This field resets to 0.
 *  0b0..Channel n can suspend a lower priority channel.
 *  0b1..Channel n cannot suspend any channel, regardless of channel priority.
 */
#define DMA_DCHPRI12_DPA(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_DPA_SHIFT)) & DMA_DCHPRI12_DPA_MASK)

#define DMA_DCHPRI12_ECP_MASK                    (0x80U)
#define DMA_DCHPRI12_ECP_SHIFT                   (7U)
/*! ECP - Enable Channel Preemption. This field resets to 0.
 *  0b0..Channel n cannot be suspended by a higher priority channel's service request.
 *  0b1..Channel n can be temporarily suspended by the service request of a higher priority channel.
 */
#define DMA_DCHPRI12_ECP(x)                      (((uint8_t)(((uint8_t)(x)) << DMA_DCHPRI12_ECP_SHIFT)) & DMA_DCHPRI12_ECP_MASK)
/*! @} */

/*! @name SADDR - TCD Source Address */
/*! @{ */

#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFU)
#define DMA_SADDR_SADDR_SHIFT                    (0U)
/*! SADDR - Source Address */
#define DMA_SADDR_SADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SADDR_SADDR_SHIFT)) & DMA_SADDR_SADDR_MASK)
/*! @} */

/* The count of DMA_SADDR */
#define DMA_SADDR_COUNT                          (16U)

/*! @name SOFF - TCD Signed Source Address Offset */
/*! @{ */

#define DMA_SOFF_SOFF_MASK                       (0xFFFFU)
#define DMA_SOFF_SOFF_SHIFT                      (0U)
/*! SOFF - Source address signed offset */
#define DMA_SOFF_SOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_SOFF_SOFF_SHIFT)) & DMA_SOFF_SOFF_MASK)
/*! @} */

/* The count of DMA_SOFF */
#define DMA_SOFF_COUNT                           (16U)

/*! @name ATTR - TCD Transfer Attributes */
/*! @{ */

#define DMA_ATTR_DSIZE_MASK                      (0x7U)
#define DMA_ATTR_DSIZE_SHIFT                     (0U)
/*! DSIZE - Destination data transfer size */
#define DMA_ATTR_DSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DSIZE_SHIFT)) & DMA_ATTR_DSIZE_MASK)

#define DMA_ATTR_DMOD_MASK                       (0xF8U)
#define DMA_ATTR_DMOD_SHIFT                      (3U)
/*! DMOD - Destination Address Modulo */
#define DMA_ATTR_DMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_DMOD_SHIFT)) & DMA_ATTR_DMOD_MASK)

#define DMA_ATTR_SSIZE_MASK                      (0x700U)
#define DMA_ATTR_SSIZE_SHIFT                     (8U)
/*! SSIZE - Source data transfer size
 *  0b000..8-bit
 *  0b001..16-bit
 *  0b010..32-bit
 *  0b011..Reserved
 *  0b100..16-byte burst
 *  0b101..32-byte burst
 *  0b110..Reserved
 *  0b111..Reserved
 */
#define DMA_ATTR_SSIZE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SSIZE_SHIFT)) & DMA_ATTR_SSIZE_MASK)

#define DMA_ATTR_SMOD_MASK                       (0xF800U)
#define DMA_ATTR_SMOD_SHIFT                      (11U)
/*! SMOD - Source Address Modulo
 *  0b00000..Source address modulo feature is disabled
 *  0b00001-0b11111..This value defines a specific address range specified to be the value after SADDR + SOFF
 *                   calculation is performed on the original register value. Setting this field provides the ability
 *                   to implement a circular data queue easily. For data queues requiring power-of-2 size bytes, the
 *                   queue should start at a 0-modulo-size address and the SMOD field should be set to the
 *                   appropriate value for the queue, freezing the desired number of upper address bits. The value
 *                   programmed into this field specifies the number of lower address bits allowed to change. For a
 *                   circular queue application, the SOFF is typically set to the transfer size to implement
 *                   post-increment addressing with the SMOD function constraining the addresses to a 0-modulo-size range.
 */
#define DMA_ATTR_SMOD(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_ATTR_SMOD_SHIFT)) & DMA_ATTR_SMOD_MASK)
/*! @} */

/* The count of DMA_ATTR */
#define DMA_ATTR_COUNT                           (16U)

/*! @name NBYTES_MLNO - TCD Minor Byte Count (Minor Loop Mapping Disabled) */
/*! @{ */

#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFU)
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             (0U)
/*! NBYTES - Minor Byte Transfer Count */
#define DMA_NBYTES_MLNO_NBYTES(x)                (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLNO_NBYTES_SHIFT)) & DMA_NBYTES_MLNO_NBYTES_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLNO */
#define DMA_NBYTES_MLNO_COUNT                    (16U)

/*! @name NBYTES_MLOFFNO - TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled) */
/*! @{ */

#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFU)
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          (0U)
/*! NBYTES - Minor Byte Transfer Count */
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFNO_NBYTES_MASK)

#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x40000000U)
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           (30U)
/*! DMLOE - Destination Minor Loop Offset enable
 *  0b0..The minor loop offset is not applied to the DADDR
 *  0b1..The minor loop offset is applied to the DADDR
 */
#define DMA_NBYTES_MLOFFNO_DMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_DMLOE_MASK)

#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x80000000U)
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           (31U)
/*! SMLOE - Source Minor Loop Offset Enable
 *  0b0..The minor loop offset is not applied to the SADDR
 *  0b1..The minor loop offset is applied to the SADDR
 */
#define DMA_NBYTES_MLOFFNO_SMLOE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFNO_SMLOE_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLOFFNO */
#define DMA_NBYTES_MLOFFNO_COUNT                 (16U)

/*! @name NBYTES_MLOFFYES - TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled) */
/*! @{ */

#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFU)
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         (0U)
/*! NBYTES - Minor Byte Transfer Count */
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)) & DMA_NBYTES_MLOFFYES_NBYTES_MASK)

#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0x3FFFFC00U)
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          (10U)
/*! MLOFF - If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the
 *    source or destination address to form the next-state value after the minor loop completes.
 */
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)) & DMA_NBYTES_MLOFFYES_MLOFF_MASK)

#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x40000000U)
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          (30U)
/*! DMLOE - Destination Minor Loop Offset enable
 *  0b0..The minor loop offset is not applied to the DADDR
 *  0b1..The minor loop offset is applied to the DADDR
 */
#define DMA_NBYTES_MLOFFYES_DMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_DMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_DMLOE_MASK)

#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x80000000U)
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          (31U)
/*! SMLOE - Source Minor Loop Offset Enable
 *  0b0..The minor loop offset is not applied to the SADDR
 *  0b1..The minor loop offset is applied to the SADDR
 */
#define DMA_NBYTES_MLOFFYES_SMLOE(x)             (((uint32_t)(((uint32_t)(x)) << DMA_NBYTES_MLOFFYES_SMLOE_SHIFT)) & DMA_NBYTES_MLOFFYES_SMLOE_MASK)
/*! @} */

/* The count of DMA_NBYTES_MLOFFYES */
#define DMA_NBYTES_MLOFFYES_COUNT                (16U)

/*! @name SLAST - TCD Last Source Address Adjustment */
/*! @{ */

#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFU)
#define DMA_SLAST_SLAST_SHIFT                    (0U)
/*! SLAST - Last Source Address Adjustment */
#define DMA_SLAST_SLAST(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_SLAST_SLAST_SHIFT)) & DMA_SLAST_SLAST_MASK)
/*! @} */

/* The count of DMA_SLAST */
#define DMA_SLAST_COUNT                          (16U)

/*! @name DADDR - TCD Destination Address */
/*! @{ */

#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFU)
#define DMA_DADDR_DADDR_SHIFT                    (0U)
/*! DADDR - Destination Address */
#define DMA_DADDR_DADDR(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_DADDR_DADDR_SHIFT)) & DMA_DADDR_DADDR_MASK)
/*! @} */

/* The count of DMA_DADDR */
#define DMA_DADDR_COUNT                          (16U)

/*! @name DOFF - TCD Signed Destination Address Offset */
/*! @{ */

#define DMA_DOFF_DOFF_MASK                       (0xFFFFU)
#define DMA_DOFF_DOFF_SHIFT                      (0U)
/*! DOFF - Destination Address Signed Offset */
#define DMA_DOFF_DOFF(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_DOFF_DOFF_SHIFT)) & DMA_DOFF_DOFF_MASK)
/*! @} */

/* The count of DMA_DOFF */
#define DMA_DOFF_COUNT                           (16U)

/*! @name CITER_ELINKNO - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFU)
#define DMA_CITER_ELINKNO_CITER_SHIFT            (0U)
/*! CITER - Current Major Iteration Count */
#define DMA_CITER_ELINKNO_CITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_CITER_SHIFT)) & DMA_CITER_ELINKNO_CITER_MASK)

#define DMA_CITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_CITER_ELINKNO_ELINK_SHIFT            (15U)
/*! ELINK - Enable channel-to-channel linking on minor-loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_CITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKNO_ELINK_SHIFT)) & DMA_CITER_ELINKNO_ELINK_MASK)
/*! @} */

/* The count of DMA_CITER_ELINKNO */
#define DMA_CITER_ELINKNO_COUNT                  (16U)

/*! @name CITER_ELINKYES - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFU)
#define DMA_CITER_ELINKYES_CITER_SHIFT           (0U)
/*! CITER - Current Major Iteration Count */
#define DMA_CITER_ELINKYES_CITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_CITER_SHIFT)) & DMA_CITER_ELINKYES_CITER_MASK)

#define DMA_CITER_ELINKYES_LINKCH_MASK           (0x1E00U)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          (9U)
/*! LINKCH - Minor Loop Link Channel Number */
#define DMA_CITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_LINKCH_SHIFT)) & DMA_CITER_ELINKYES_LINKCH_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_CITER_ELINKYES_ELINK_SHIFT           (15U)
/*! ELINK - Enable channel-to-channel linking on minor-loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_CITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_CITER_ELINKYES_ELINK_SHIFT)) & DMA_CITER_ELINKYES_ELINK_MASK)
/*! @} */

/* The count of DMA_CITER_ELINKYES */
#define DMA_CITER_ELINKYES_COUNT                 (16U)

/*! @name DLAST_SGA - TCD Last Destination Address Adjustment/Scatter Gather Address */
/*! @{ */

#define DMA_DLAST_SGA_DLASTSGA_MASK              (0xFFFFFFFFU)
#define DMA_DLAST_SGA_DLASTSGA_SHIFT             (0U)
/*! DLASTSGA - DLASTSGA */
#define DMA_DLAST_SGA_DLASTSGA(x)                (((uint32_t)(((uint32_t)(x)) << DMA_DLAST_SGA_DLASTSGA_SHIFT)) & DMA_DLAST_SGA_DLASTSGA_MASK)
/*! @} */

/* The count of DMA_DLAST_SGA */
#define DMA_DLAST_SGA_COUNT                      (16U)

/*! @name CSR - TCD Control and Status */
/*! @{ */

#define DMA_CSR_START_MASK                       (0x1U)
#define DMA_CSR_START_SHIFT                      (0U)
/*! START - Channel Start
 *  0b0..The channel is not explicitly started.
 *  0b1..The channel is explicitly started via a software initiated service request.
 */
#define DMA_CSR_START(x)                         (((uint16_t)(((uint16_t)(x)) << DMA_CSR_START_SHIFT)) & DMA_CSR_START_MASK)

#define DMA_CSR_INTMAJOR_MASK                    (0x2U)
#define DMA_CSR_INTMAJOR_SHIFT                   (1U)
/*! INTMAJOR - Enable an interrupt when major iteration count completes.
 *  0b0..The end-of-major loop interrupt is disabled.
 *  0b1..The end-of-major loop interrupt is enabled.
 */
#define DMA_CSR_INTMAJOR(x)                      (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTMAJOR_SHIFT)) & DMA_CSR_INTMAJOR_MASK)

#define DMA_CSR_INTHALF_MASK                     (0x4U)
#define DMA_CSR_INTHALF_SHIFT                    (2U)
/*! INTHALF - Enable an interrupt when major counter is half complete.
 *  0b0..The half-point interrupt is disabled.
 *  0b1..The half-point interrupt is enabled.
 */
#define DMA_CSR_INTHALF(x)                       (((uint16_t)(((uint16_t)(x)) << DMA_CSR_INTHALF_SHIFT)) & DMA_CSR_INTHALF_MASK)

#define DMA_CSR_DREQ_MASK                        (0x8U)
#define DMA_CSR_DREQ_SHIFT                       (3U)
/*! DREQ - Disable Request
 *  0b0..The channel's ERQ bit is not affected.
 *  0b1..The channel's ERQ bit is cleared when the major loop is complete.
 */
#define DMA_CSR_DREQ(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DREQ_SHIFT)) & DMA_CSR_DREQ_MASK)

#define DMA_CSR_ESG_MASK                         (0x10U)
#define DMA_CSR_ESG_SHIFT                        (4U)
/*! ESG - Enable Scatter/Gather Processing
 *  0b0..The current channel's TCD is normal format.
 *  0b1..The current channel's TCD specifies a scatter gather format. The DLASTSGA field provides a memory pointer
 *       to the next TCD to be loaded into this channel after the major loop completes its execution.
 */
#define DMA_CSR_ESG(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ESG_SHIFT)) & DMA_CSR_ESG_MASK)

#define DMA_CSR_MAJORELINK_MASK                  (0x20U)
#define DMA_CSR_MAJORELINK_SHIFT                 (5U)
/*! MAJORELINK - Enable channel-to-channel linking on major loop complete
 *  0b0..The channel-to-channel linking is disabled.
 *  0b1..The channel-to-channel linking is enabled.
 */
#define DMA_CSR_MAJORELINK(x)                    (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORELINK_SHIFT)) & DMA_CSR_MAJORELINK_MASK)

#define DMA_CSR_ACTIVE_MASK                      (0x40U)
#define DMA_CSR_ACTIVE_SHIFT                     (6U)
/*! ACTIVE - Channel Active */
#define DMA_CSR_ACTIVE(x)                        (((uint16_t)(((uint16_t)(x)) << DMA_CSR_ACTIVE_SHIFT)) & DMA_CSR_ACTIVE_MASK)

#define DMA_CSR_DONE_MASK                        (0x80U)
#define DMA_CSR_DONE_SHIFT                       (7U)
/*! DONE - Channel Done */
#define DMA_CSR_DONE(x)                          (((uint16_t)(((uint16_t)(x)) << DMA_CSR_DONE_SHIFT)) & DMA_CSR_DONE_MASK)

#define DMA_CSR_MAJORLINKCH_MASK                 (0xF00U)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_CSR_MAJORLINKCH_SHIFT                (8U)
/*! MAJORLINKCH - Major Loop Link Channel Number */
#define DMA_CSR_MAJORLINKCH(x)                   (((uint16_t)(((uint16_t)(x)) << DMA_CSR_MAJORLINKCH_SHIFT)) & DMA_CSR_MAJORLINKCH_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_CSR_BWC_MASK                         (0xC000U)
#define DMA_CSR_BWC_SHIFT                        (14U)
/*! BWC - Bandwidth Control
 *  0b00..No eDMA engine stalls.
 *  0b01..Reserved
 *  0b10..eDMA engine stalls for 4 cycles after each R/W.
 *  0b11..eDMA engine stalls for 8 cycles after each R/W.
 */
#define DMA_CSR_BWC(x)                           (((uint16_t)(((uint16_t)(x)) << DMA_CSR_BWC_SHIFT)) & DMA_CSR_BWC_MASK)
/*! @} */

/* The count of DMA_CSR */
#define DMA_CSR_COUNT                            (16U)

/*! @name BITER_ELINKNO - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFU)
#define DMA_BITER_ELINKNO_BITER_SHIFT            (0U)
/*! BITER - Starting Major Iteration Count */
#define DMA_BITER_ELINKNO_BITER(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_BITER_SHIFT)) & DMA_BITER_ELINKNO_BITER_MASK)

#define DMA_BITER_ELINKNO_ELINK_MASK             (0x8000U)
#define DMA_BITER_ELINKNO_ELINK_SHIFT            (15U)
/*! ELINK - Enables channel-to-channel linking on minor loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_BITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKNO_ELINK_SHIFT)) & DMA_BITER_ELINKNO_ELINK_MASK)
/*! @} */

/* The count of DMA_BITER_ELINKNO */
#define DMA_BITER_ELINKNO_COUNT                  (16U)

/*! @name BITER_ELINKYES - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFU)
#define DMA_BITER_ELINKYES_BITER_SHIFT           (0U)
/*! BITER - Starting major iteration count */
#define DMA_BITER_ELINKYES_BITER(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_BITER_SHIFT)) & DMA_BITER_ELINKYES_BITER_MASK)

#define DMA_BITER_ELINKYES_LINKCH_MASK           (0x1E00U)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          (9U)
/*! LINKCH - Link Channel Number */
#define DMA_BITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_LINKCH_SHIFT)) & DMA_BITER_ELINKYES_LINKCH_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */

#define DMA_BITER_ELINKYES_ELINK_MASK            (0x8000U)
#define DMA_BITER_ELINKYES_ELINK_SHIFT           (15U)
/*! ELINK - Enables channel-to-channel linking on minor loop complete
 *  0b0..The channel-to-channel linking is disabled
 *  0b1..The channel-to-channel linking is enabled
 */
#define DMA_BITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x)) << DMA_BITER_ELINKYES_ELINK_SHIFT)) & DMA_BITER_ELINKYES_ELINK_MASK)
/*! @} */

/* The count of DMA_BITER_ELINKYES */
#define DMA_BITER_ELINKYES_COUNT                 (16U)


/*!
 * @}
 */ /* end of group DMA_Register_Masks */


/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
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


#endif  /* DMA_H_ */

