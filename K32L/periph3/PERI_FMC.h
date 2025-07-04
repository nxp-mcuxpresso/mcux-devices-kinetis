/*
** ###################################################################
**     Processors:          K32L3A60VPJ1A_cm0plus
**                          K32L3A60VPJ1A_cm4
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for FMC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2019-04-22)
**         Initial version.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_FMC.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for FMC
 *
 * CMSIS Peripheral Access Layer for FMC
 */

#if !defined(PERI_FMC_H_)
#define PERI_FMC_H_                              /**< Symbol preventing repeated inclusion */

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
   -- FMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FMC_Peripheral_Access_Layer FMC Peripheral Access Layer
 * @{
 */

/** FMC - Size of Registers Arrays */
#define FMC_TAGVDW_COUNT                          4u
#define FMC_TAGVDW_S_COUNT                        4u
#define FMC_DATAW_COUNT                           4u
#define FMC_DATAW_SET_COUNT                       4u

/** FMC - Register Layout Typedef */
typedef struct {
  __IO uint32_t PFAPR;                             /**< Flash Access Protection Register, offset: 0x0 */
  __IO uint32_t PFB0CR;                            /**< Flash Bank 0 Control Register, offset: 0x4 */
       uint32_t RESERVED_PFB1CR;                   /**< Reserved Flash Bank 1 Control Register, offset: 0x8 */
       uint8_t RESERVED_0[116];
  __IO uint32_t TAGVDWS[FMC_TAGVDW_COUNT][FMC_TAGVDW_S_COUNT]; /**< Cache Tag Storage, array offset: 0x80, array step: index*0x10, index2*0x4 */
       uint8_t RESERVED_1[64];
  struct {                                         /* offset: 0x100, array step: index*0x20, index2*0x8 */
    __IO uint32_t DATAWSU;                           /**< Cache Data Storage (upper word), array offset: 0x100, array step: index*0x20, index2*0x8 */
    __IO uint32_t DATAWSL;                           /**< Cache Data Storage (lower word), array offset: 0x104, array step: index*0x20, index2*0x8 */
  } SET[FMC_DATAW_COUNT][FMC_DATAW_SET_COUNT];
} FMC_Type;

/* ----------------------------------------------------------------------------
   -- FMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FMC_Register_Masks FMC Register Masks
 * @{
 */

/*! @name PFAPR - Flash Access Protection Register */
/*! @{ */

#define FMC_PFAPR_M0AP_MASK                      (0x3U)
#define FMC_PFAPR_M0AP_SHIFT                     (0U)
/*! M0AP - Master 0 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M0AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M0AP_SHIFT)) & FMC_PFAPR_M0AP_MASK)

#define FMC_PFAPR_M1AP_MASK                      (0xCU)
#define FMC_PFAPR_M1AP_SHIFT                     (2U)
/*! M1AP - Master 1 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M1AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M1AP_SHIFT)) & FMC_PFAPR_M1AP_MASK)

#define FMC_PFAPR_M2AP_MASK                      (0x30U)
#define FMC_PFAPR_M2AP_SHIFT                     (4U)
/*! M2AP - Master 2 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M2AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M2AP_SHIFT)) & FMC_PFAPR_M2AP_MASK)

#define FMC_PFAPR_M3AP_MASK                      (0xC0U)
#define FMC_PFAPR_M3AP_SHIFT                     (6U)
/*! M3AP - Master 3 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M3AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M3AP_SHIFT)) & FMC_PFAPR_M3AP_MASK)

#define FMC_PFAPR_M4AP_MASK                      (0x300U)
#define FMC_PFAPR_M4AP_SHIFT                     (8U)
/*! M4AP - Master 4 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M4AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M4AP_SHIFT)) & FMC_PFAPR_M4AP_MASK)

#define FMC_PFAPR_M5AP_MASK                      (0xC00U)
#define FMC_PFAPR_M5AP_SHIFT                     (10U)
/*! M5AP - Master 5 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M5AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M5AP_SHIFT)) & FMC_PFAPR_M5AP_MASK)

#define FMC_PFAPR_M6AP_MASK                      (0x3000U)
#define FMC_PFAPR_M6AP_SHIFT                     (12U)
/*! M6AP - Master 6 Access Protection
 *  0b00..No access may be performed by this master
 *  0b01..Only read accesses may be performed by this master
 *  0b10..Only write accesses may be performed by this master
 *  0b11..Both read and write accesses may be performed by this master
 */
#define FMC_PFAPR_M6AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M6AP_SHIFT)) & FMC_PFAPR_M6AP_MASK)

#define FMC_PFAPR_M7AP_MASK                      (0xC000U)
#define FMC_PFAPR_M7AP_SHIFT                     (14U)
/*! M7AP - Master 7 Access Protection
 *  0b00..No access may be performed by this master.
 *  0b01..Only read accesses may be performed by this master.
 *  0b10..Only write accesses may be performed by this master.
 *  0b11..Both read and write accesses may be performed by this master.
 */
#define FMC_PFAPR_M7AP(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M7AP_SHIFT)) & FMC_PFAPR_M7AP_MASK)

#define FMC_PFAPR_M0PFD_MASK                     (0x10000U)
#define FMC_PFAPR_M0PFD_SHIFT                    (16U)
/*! M0PFD - Master 0 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M0PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M0PFD_SHIFT)) & FMC_PFAPR_M0PFD_MASK)

#define FMC_PFAPR_M1PFD_MASK                     (0x20000U)
#define FMC_PFAPR_M1PFD_SHIFT                    (17U)
/*! M1PFD - Master 1 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M1PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M1PFD_SHIFT)) & FMC_PFAPR_M1PFD_MASK)

#define FMC_PFAPR_M2PFD_MASK                     (0x40000U)
#define FMC_PFAPR_M2PFD_SHIFT                    (18U)
/*! M2PFD - Master 2 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M2PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M2PFD_SHIFT)) & FMC_PFAPR_M2PFD_MASK)

#define FMC_PFAPR_M3PFD_MASK                     (0x80000U)
#define FMC_PFAPR_M3PFD_SHIFT                    (19U)
/*! M3PFD - Master 3 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M3PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M3PFD_SHIFT)) & FMC_PFAPR_M3PFD_MASK)

#define FMC_PFAPR_M4PFD_MASK                     (0x100000U)
#define FMC_PFAPR_M4PFD_SHIFT                    (20U)
/*! M4PFD - Master 4 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M4PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M4PFD_SHIFT)) & FMC_PFAPR_M4PFD_MASK)

#define FMC_PFAPR_M5PFD_MASK                     (0x200000U)
#define FMC_PFAPR_M5PFD_SHIFT                    (21U)
/*! M5PFD - Master 5 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M5PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M5PFD_SHIFT)) & FMC_PFAPR_M5PFD_MASK)

#define FMC_PFAPR_M6PFD_MASK                     (0x400000U)
#define FMC_PFAPR_M6PFD_SHIFT                    (22U)
/*! M6PFD - Master 6 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M6PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M6PFD_SHIFT)) & FMC_PFAPR_M6PFD_MASK)

#define FMC_PFAPR_M7PFD_MASK                     (0x800000U)
#define FMC_PFAPR_M7PFD_SHIFT                    (23U)
/*! M7PFD - Master 7 Prefetch Disable
 *  0b0..Prefetching for this master is enabled.
 *  0b1..Prefetching for this master is disabled.
 */
#define FMC_PFAPR_M7PFD(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFAPR_M7PFD_SHIFT)) & FMC_PFAPR_M7PFD_MASK)
/*! @} */

/*! @name PFB0CR - Flash Bank 0 Control Register */
/*! @{ */

#define FMC_PFB0CR_B0SEBE_MASK                   (0x1U)
#define FMC_PFB0CR_B0SEBE_SHIFT                  (0U)
/*! B0SEBE - Bank 0 Single Entry Buffer Enable
 *  0b0..Single entry buffer is disabled.
 *  0b1..Single entry buffer is enabled.
 */
#define FMC_PFB0CR_B0SEBE(x)                     (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0SEBE_SHIFT)) & FMC_PFB0CR_B0SEBE_MASK)

#define FMC_PFB0CR_B0IPE_MASK                    (0x2U)
#define FMC_PFB0CR_B0IPE_SHIFT                   (1U)
/*! B0IPE - Bank 0 Instruction Prefetch Enable
 *  0b0..Do not prefetch in response to instruction fetches.
 *  0b1..Enable prefetches in response to instruction fetches.
 */
#define FMC_PFB0CR_B0IPE(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0IPE_SHIFT)) & FMC_PFB0CR_B0IPE_MASK)

#define FMC_PFB0CR_B0DPE_MASK                    (0x4U)
#define FMC_PFB0CR_B0DPE_SHIFT                   (2U)
/*! B0DPE - Bank 0 Data Prefetch Enable
 *  0b0..Do not prefetch in response to data references.
 *  0b1..Enable prefetches in response to data references.
 */
#define FMC_PFB0CR_B0DPE(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0DPE_SHIFT)) & FMC_PFB0CR_B0DPE_MASK)

#define FMC_PFB0CR_B0ICE_MASK                    (0x8U)
#define FMC_PFB0CR_B0ICE_SHIFT                   (3U)
/*! B0ICE - Bank 0 Instruction Cache Enable
 *  0b0..Do not cache instruction fetches.
 *  0b1..Cache instruction fetches.
 */
#define FMC_PFB0CR_B0ICE(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0ICE_SHIFT)) & FMC_PFB0CR_B0ICE_MASK)

#define FMC_PFB0CR_B0DCE_MASK                    (0x10U)
#define FMC_PFB0CR_B0DCE_SHIFT                   (4U)
/*! B0DCE - Bank 0 Data Cache Enable
 *  0b0..Do not cache data references.
 *  0b1..Cache data references.
 */
#define FMC_PFB0CR_B0DCE(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0DCE_SHIFT)) & FMC_PFB0CR_B0DCE_MASK)

#define FMC_PFB0CR_CRC_MASK                      (0xE0U)
#define FMC_PFB0CR_CRC_SHIFT                     (5U)
/*! CRC - Cache Replacement Control
 *  0b000..LRU replacement algorithm per set across all four ways
 *  0b001..Reserved
 *  0b010..Independent LRU with ways [0-1] for ifetches, [2-3] for data
 *  0b011..Independent LRU with ways [0-2] for ifetches, [3] for data
 *  0b1xx..Reserved
 */
#define FMC_PFB0CR_CRC(x)                        (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_CRC_SHIFT)) & FMC_PFB0CR_CRC_MASK)

#define FMC_PFB0CR_B0MW_MASK                     (0x60000U)
#define FMC_PFB0CR_B0MW_SHIFT                    (17U)
/*! B0MW - Bank 0 Memory Width
 *  0b00..32 bits
 *  0b01..64 bits
 *  0b10..Reserved
 *  0b11..Reserved
 */
#define FMC_PFB0CR_B0MW(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0MW_SHIFT)) & FMC_PFB0CR_B0MW_MASK)

#define FMC_PFB0CR_S_B_INV_MASK                  (0x80000U)
#define FMC_PFB0CR_S_B_INV_SHIFT                 (19U)
/*! S_B_INV - Invalidate Prefetch Speculation Buffer
 *  0b0..Speculation buffer and single entry buffer are not affected.
 *  0b1..Invalidate (clear) speculation buffer and single entry buffer.
 */
#define FMC_PFB0CR_S_B_INV(x)                    (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_S_B_INV_SHIFT)) & FMC_PFB0CR_S_B_INV_MASK)

#define FMC_PFB0CR_CINV_WAY_MASK                 (0xF00000U)
#define FMC_PFB0CR_CINV_WAY_SHIFT                (20U)
/*! CINV_WAY - Cache Invalidate Way x
 *  0b0000..No cache way invalidation for the corresponding cache
 *  0b0001..Invalidate cache way for the corresponding cache: clear the tag, data, and vld bits of ways selected
 */
#define FMC_PFB0CR_CINV_WAY(x)                   (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_CINV_WAY_SHIFT)) & FMC_PFB0CR_CINV_WAY_MASK)

#define FMC_PFB0CR_CLCK_WAY_MASK                 (0xF000000U)
#define FMC_PFB0CR_CLCK_WAY_SHIFT                (24U)
/*! CLCK_WAY - Cache Lock Way x
 *  0b0000..Cache way is unlocked and may be displaced
 *  0b0001..Cache way is locked and its contents are not displaced
 */
#define FMC_PFB0CR_CLCK_WAY(x)                   (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_CLCK_WAY_SHIFT)) & FMC_PFB0CR_CLCK_WAY_MASK)

#define FMC_PFB0CR_B0RWSC_MASK                   (0xF0000000U)
#define FMC_PFB0CR_B0RWSC_SHIFT                  (28U)
/*! B0RWSC - Bank 0 Read Wait State Control */
#define FMC_PFB0CR_B0RWSC(x)                     (((uint32_t)(((uint32_t)(x)) << FMC_PFB0CR_B0RWSC_SHIFT)) & FMC_PFB0CR_B0RWSC_MASK)
/*! @} */

/*! @name TAGVDWS - Cache Tag Storage */
/*! @{ */

#define FMC_TAGVDWS_valid_MASK                   (0x1U)
#define FMC_TAGVDWS_valid_SHIFT                  (0U)
/*! valid - 1-bit valid for cache entry */
#define FMC_TAGVDWS_valid(x)                     (((uint32_t)(((uint32_t)(x)) << FMC_TAGVDWS_valid_SHIFT)) & FMC_TAGVDWS_valid_MASK)

#define FMC_TAGVDWS_tag_MASK                     (0x7FFC0U)
#define FMC_TAGVDWS_tag_SHIFT                    (6U)
/*! tag - 13-bit tag for cache entry */
#define FMC_TAGVDWS_tag(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_TAGVDWS_tag_SHIFT)) & FMC_TAGVDWS_tag_MASK)
/*! @} */

/* The count of FMC_TAGVDWS */
#define FMC_TAGVDWS_COUNT                        (4U)

/* The count of FMC_TAGVDWS */
#define FMC_TAGVDWS_COUNT2                       (4U)

/*! @name DATAWSU - Cache Data Storage (upper word) */
/*! @{ */

#define FMC_DATAWSU_data_MASK                    (0xFFFFFFFFU)
#define FMC_DATAWSU_data_SHIFT                   (0U)
/*! data - Bits [63:32] of data entry */
#define FMC_DATAWSU_data(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_DATAWSU_data_SHIFT)) & FMC_DATAWSU_data_MASK)
/*! @} */

/* The count of FMC_DATAWSU */
#define FMC_DATAWSU_COUNT                        (4U)

/* The count of FMC_DATAWSU */
#define FMC_DATAWSU_COUNT2                       (4U)

/*! @name DATAWSL - Cache Data Storage (lower word) */
/*! @{ */

#define FMC_DATAWSL_data_MASK                    (0xFFFFFFFFU)
#define FMC_DATAWSL_data_SHIFT                   (0U)
/*! data - Bits [31:0] of data entry */
#define FMC_DATAWSL_data(x)                      (((uint32_t)(((uint32_t)(x)) << FMC_DATAWSL_data_SHIFT)) & FMC_DATAWSL_data_MASK)
/*! @} */

/* The count of FMC_DATAWSL */
#define FMC_DATAWSL_COUNT                        (4U)

/* The count of FMC_DATAWSL */
#define FMC_DATAWSL_COUNT2                       (4U)


/*!
 * @}
 */ /* end of group FMC_Register_Masks */


/*!
 * @}
 */ /* end of group FMC_Peripheral_Access_Layer */


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


#endif  /* PERI_FMC_H_ */

