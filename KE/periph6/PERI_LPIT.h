/*
** ###################################################################
**     Processors:          MKE14Z128VLH7
**                          MKE14Z128VLL7
**                          MKE14Z256VLH7
**                          MKE14Z256VLL7
**                          MKE15Z128VLH7
**                          MKE15Z128VLL7
**                          MKE15Z256VLH7
**                          MKE15Z256VLL7
**
**     Version:             rev. 6.0, 2016-09-20
**     Build:               b240715
**
**     Abstract:
**         CMSIS Peripheral Access Layer for LPIT
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2015-08-19)
**         Initial version.
**     - rev. 2.0 (2015-09-22)
**         Based on rev0final RDP, add PCC/TRGMUX.
**     - rev. 3.0 (2015-12-29)
**         Align LPFLL register names.
**     - rev. 4.0 (2016-02-19)
**         Based on rev1final RDP.
**     - rev. 5.0 (2016-08-02)
**         Based on rev1.x RDP.
**     - rev. 6.0 (2016-09-20)
**         Based on rev2 RDP.
**
** ###################################################################
*/

/*!
 * @file LPIT.h
 * @version 6.0
 * @date 2016-09-20
 * @brief CMSIS Peripheral Access Layer for LPIT
 *
 * CMSIS Peripheral Access Layer for LPIT
 */

#if !defined(LPIT_H_)
#define LPIT_H_                                  /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MKE14Z128VLH7) || defined(CPU_MKE14Z128VLL7) || defined(CPU_MKE14Z256VLH7) || defined(CPU_MKE14Z256VLL7))
#include "MKE14Z7_COMMON.h"
#elif (defined(CPU_MKE15Z128VLH7) || defined(CPU_MKE15Z128VLL7) || defined(CPU_MKE15Z256VLH7) || defined(CPU_MKE15Z256VLL7))
#include "MKE15Z7_COMMON.h"
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
   -- LPIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPIT_Peripheral_Access_Layer LPIT Peripheral Access Layer
 * @{
 */

/** LPIT - Size of Registers Arrays */
#define LPIT_CHANNEL_COUNT                        4u

/** LPIT - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t MCR;                               /**< Module Control Register, offset: 0x8 */
  __IO uint32_t MSR;                               /**< Module Status Register, offset: 0xC */
  __IO uint32_t MIER;                              /**< Module Interrupt Enable Register, offset: 0x10 */
  __IO uint32_t SETTEN;                            /**< Set Timer Enable Register, offset: 0x14 */
  __O  uint32_t CLRTEN;                            /**< Clear Timer Enable Register, offset: 0x18 */
       uint8_t RESERVED_0[4];
  struct {                                         /* offset: 0x20, array step: 0x10 */
    __IO uint32_t TVAL;                              /**< Timer Value Register, array offset: 0x20, array step: 0x10 */
    __I  uint32_t CVAL;                              /**< Current Timer Value, array offset: 0x24, array step: 0x10 */
    __IO uint32_t TCTRL;                             /**< Timer Control Register, array offset: 0x28, array step: 0x10 */
         uint8_t RESERVED_0[4];
  } CHANNEL[LPIT_CHANNEL_COUNT];
} LPIT_Type;

/* ----------------------------------------------------------------------------
   -- LPIT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPIT_Register_Masks LPIT Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
/*! @{ */

#define LPIT_VERID_FEATURE_MASK                  (0xFFFFU)
#define LPIT_VERID_FEATURE_SHIFT                 (0U)
/*! FEATURE - Feature Number */
#define LPIT_VERID_FEATURE(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_FEATURE_SHIFT)) & LPIT_VERID_FEATURE_MASK)

#define LPIT_VERID_MINOR_MASK                    (0xFF0000U)
#define LPIT_VERID_MINOR_SHIFT                   (16U)
/*! MINOR - Minor Version Number */
#define LPIT_VERID_MINOR(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_MINOR_SHIFT)) & LPIT_VERID_MINOR_MASK)

#define LPIT_VERID_MAJOR_MASK                    (0xFF000000U)
#define LPIT_VERID_MAJOR_SHIFT                   (24U)
/*! MAJOR - Major Version Number */
#define LPIT_VERID_MAJOR(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_VERID_MAJOR_SHIFT)) & LPIT_VERID_MAJOR_MASK)
/*! @} */

/*! @name PARAM - Parameter Register */
/*! @{ */

#define LPIT_PARAM_CHANNEL_MASK                  (0xFFU)
#define LPIT_PARAM_CHANNEL_SHIFT                 (0U)
/*! CHANNEL - Number of Timer Channels */
#define LPIT_PARAM_CHANNEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_PARAM_CHANNEL_SHIFT)) & LPIT_PARAM_CHANNEL_MASK)

#define LPIT_PARAM_EXT_TRIG_MASK                 (0xFF00U)
#define LPIT_PARAM_EXT_TRIG_SHIFT                (8U)
/*! EXT_TRIG - Number of External Trigger Inputs */
#define LPIT_PARAM_EXT_TRIG(x)                   (((uint32_t)(((uint32_t)(x)) << LPIT_PARAM_EXT_TRIG_SHIFT)) & LPIT_PARAM_EXT_TRIG_MASK)
/*! @} */

/*! @name MCR - Module Control Register */
/*! @{ */

#define LPIT_MCR_M_CEN_MASK                      (0x1U)
#define LPIT_MCR_M_CEN_SHIFT                     (0U)
/*! M_CEN - Module Clock Enable
 *  0b0..Protocol clock to timers is disabled
 *  0b1..Protocol clock to timers is enabled
 */
#define LPIT_MCR_M_CEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_M_CEN_SHIFT)) & LPIT_MCR_M_CEN_MASK)

#define LPIT_MCR_SW_RST_MASK                     (0x2U)
#define LPIT_MCR_SW_RST_SHIFT                    (1U)
/*! SW_RST - Software Reset Bit
 *  0b0..Timer channels and registers are not reset
 *  0b1..Timer channels and registers are reset
 */
#define LPIT_MCR_SW_RST(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_SW_RST_SHIFT)) & LPIT_MCR_SW_RST_MASK)

#define LPIT_MCR_DOZE_EN_MASK                    (0x4U)
#define LPIT_MCR_DOZE_EN_SHIFT                   (2U)
/*! DOZE_EN - DOZE Mode Enable Bit
 *  0b0..Timer channels are stopped in DOZE mode
 *  0b1..Timer channels continue to run in DOZE mode
 */
#define LPIT_MCR_DOZE_EN(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_DOZE_EN_SHIFT)) & LPIT_MCR_DOZE_EN_MASK)

#define LPIT_MCR_DBG_EN_MASK                     (0x8U)
#define LPIT_MCR_DBG_EN_SHIFT                    (3U)
/*! DBG_EN - Debug Enable Bit
 *  0b0..Timer channels are stopped in Debug mode
 *  0b1..Timer channels continue to run in Debug mode
 */
#define LPIT_MCR_DBG_EN(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_MCR_DBG_EN_SHIFT)) & LPIT_MCR_DBG_EN_MASK)
/*! @} */

/*! @name MSR - Module Status Register */
/*! @{ */

#define LPIT_MSR_TIF0_MASK                       (0x1U)
#define LPIT_MSR_TIF0_SHIFT                      (0U)
/*! TIF0 - Channel 0 Timer Interrupt Flag
 *  0b0..Timer has not timed out
 *  0b1..Timeout has occurred
 */
#define LPIT_MSR_TIF0(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF0_SHIFT)) & LPIT_MSR_TIF0_MASK)

#define LPIT_MSR_TIF1_MASK                       (0x2U)
#define LPIT_MSR_TIF1_SHIFT                      (1U)
/*! TIF1 - Channel 1 Timer Interrupt Flag
 *  0b0..Timer has not timed out
 *  0b1..Timeout has occurred
 */
#define LPIT_MSR_TIF1(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF1_SHIFT)) & LPIT_MSR_TIF1_MASK)

#define LPIT_MSR_TIF2_MASK                       (0x4U)
#define LPIT_MSR_TIF2_SHIFT                      (2U)
/*! TIF2 - Channel 2 Timer Interrupt Flag
 *  0b0..Timer has not timed out
 *  0b1..Timeout has occurred
 */
#define LPIT_MSR_TIF2(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF2_SHIFT)) & LPIT_MSR_TIF2_MASK)

#define LPIT_MSR_TIF3_MASK                       (0x8U)
#define LPIT_MSR_TIF3_SHIFT                      (3U)
/*! TIF3 - Channel 3 Timer Interrupt Flag
 *  0b0..Timer has not timed out
 *  0b1..Timeout has occurred
 */
#define LPIT_MSR_TIF3(x)                         (((uint32_t)(((uint32_t)(x)) << LPIT_MSR_TIF3_SHIFT)) & LPIT_MSR_TIF3_MASK)
/*! @} */

/*! @name MIER - Module Interrupt Enable Register */
/*! @{ */

#define LPIT_MIER_TIE0_MASK                      (0x1U)
#define LPIT_MIER_TIE0_SHIFT                     (0U)
/*! TIE0 - Channel 0 Timer Interrupt Enable
 *  0b0..Interrupt generation is disabled
 *  0b1..Interrupt generation is enabled
 */
#define LPIT_MIER_TIE0(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE0_SHIFT)) & LPIT_MIER_TIE0_MASK)

#define LPIT_MIER_TIE1_MASK                      (0x2U)
#define LPIT_MIER_TIE1_SHIFT                     (1U)
/*! TIE1 - Channel 1 Timer Interrupt Enable
 *  0b0..Interrupt generation is disabled
 *  0b1..Interrupt generation is enabled
 */
#define LPIT_MIER_TIE1(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE1_SHIFT)) & LPIT_MIER_TIE1_MASK)

#define LPIT_MIER_TIE2_MASK                      (0x4U)
#define LPIT_MIER_TIE2_SHIFT                     (2U)
/*! TIE2 - Channel 2 Timer Interrupt Enable
 *  0b0..Interrupt generation is disabled
 *  0b1..Interrupt generation is enabled
 */
#define LPIT_MIER_TIE2(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE2_SHIFT)) & LPIT_MIER_TIE2_MASK)

#define LPIT_MIER_TIE3_MASK                      (0x8U)
#define LPIT_MIER_TIE3_SHIFT                     (3U)
/*! TIE3 - Channel 3 Timer Interrupt Enable
 *  0b0..Interrupt generation is disabled
 *  0b1..Interrupt generation is enabled
 */
#define LPIT_MIER_TIE3(x)                        (((uint32_t)(((uint32_t)(x)) << LPIT_MIER_TIE3_SHIFT)) & LPIT_MIER_TIE3_MASK)
/*! @} */

/*! @name SETTEN - Set Timer Enable Register */
/*! @{ */

#define LPIT_SETTEN_SET_T_EN_0_MASK              (0x1U)
#define LPIT_SETTEN_SET_T_EN_0_SHIFT             (0U)
/*! SET_T_EN_0 - Set Timer 0 Enable
 *  0b0..No effect
 *  0b1..Enables the Timer Channel 0
 */
#define LPIT_SETTEN_SET_T_EN_0(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_0_SHIFT)) & LPIT_SETTEN_SET_T_EN_0_MASK)

#define LPIT_SETTEN_SET_T_EN_1_MASK              (0x2U)
#define LPIT_SETTEN_SET_T_EN_1_SHIFT             (1U)
/*! SET_T_EN_1 - Set Timer 1 Enable
 *  0b0..No Effect
 *  0b1..Enables the Timer Channel 1
 */
#define LPIT_SETTEN_SET_T_EN_1(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_1_SHIFT)) & LPIT_SETTEN_SET_T_EN_1_MASK)

#define LPIT_SETTEN_SET_T_EN_2_MASK              (0x4U)
#define LPIT_SETTEN_SET_T_EN_2_SHIFT             (2U)
/*! SET_T_EN_2 - Set Timer 2 Enable
 *  0b0..No Effect
 *  0b1..Enables the Timer Channel 2
 */
#define LPIT_SETTEN_SET_T_EN_2(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_2_SHIFT)) & LPIT_SETTEN_SET_T_EN_2_MASK)

#define LPIT_SETTEN_SET_T_EN_3_MASK              (0x8U)
#define LPIT_SETTEN_SET_T_EN_3_SHIFT             (3U)
/*! SET_T_EN_3 - Set Timer 3 Enable
 *  0b0..No effect
 *  0b1..Enables the Timer Channel 3
 */
#define LPIT_SETTEN_SET_T_EN_3(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_SETTEN_SET_T_EN_3_SHIFT)) & LPIT_SETTEN_SET_T_EN_3_MASK)
/*! @} */

/*! @name CLRTEN - Clear Timer Enable Register */
/*! @{ */

#define LPIT_CLRTEN_CLR_T_EN_0_MASK              (0x1U)
#define LPIT_CLRTEN_CLR_T_EN_0_SHIFT             (0U)
/*! CLR_T_EN_0 - Clear Timer 0 Enable
 *  0b0..No action
 *  0b1..Clear T_EN bit for Timer Channel 0
 */
#define LPIT_CLRTEN_CLR_T_EN_0(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_0_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_0_MASK)

#define LPIT_CLRTEN_CLR_T_EN_1_MASK              (0x2U)
#define LPIT_CLRTEN_CLR_T_EN_1_SHIFT             (1U)
/*! CLR_T_EN_1 - Clear Timer 1 Enable
 *  0b0..No Action
 *  0b1..Clear T_EN bit for Timer Channel 1
 */
#define LPIT_CLRTEN_CLR_T_EN_1(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_1_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_1_MASK)

#define LPIT_CLRTEN_CLR_T_EN_2_MASK              (0x4U)
#define LPIT_CLRTEN_CLR_T_EN_2_SHIFT             (2U)
/*! CLR_T_EN_2 - Clear Timer 2 Enable
 *  0b0..No Action
 *  0b1..Clear T_EN bit for Timer Channel 2
 */
#define LPIT_CLRTEN_CLR_T_EN_2(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_2_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_2_MASK)

#define LPIT_CLRTEN_CLR_T_EN_3_MASK              (0x8U)
#define LPIT_CLRTEN_CLR_T_EN_3_SHIFT             (3U)
/*! CLR_T_EN_3 - Clear Timer 3 Enable
 *  0b0..No Action
 *  0b1..Clear T_EN bit for Timer Channel 3
 */
#define LPIT_CLRTEN_CLR_T_EN_3(x)                (((uint32_t)(((uint32_t)(x)) << LPIT_CLRTEN_CLR_T_EN_3_SHIFT)) & LPIT_CLRTEN_CLR_T_EN_3_MASK)
/*! @} */

/*! @name TVAL - Timer Value Register */
/*! @{ */

#define LPIT_TVAL_TMR_VAL_MASK                   (0xFFFFFFFFU)
#define LPIT_TVAL_TMR_VAL_SHIFT                  (0U)
/*! TMR_VAL - Timer Value
 *  0b00000000000000000000000000000000..Invalid load value in compare modes
 */
#define LPIT_TVAL_TMR_VAL(x)                     (((uint32_t)(((uint32_t)(x)) << LPIT_TVAL_TMR_VAL_SHIFT)) & LPIT_TVAL_TMR_VAL_MASK)
/*! @} */

/* The count of LPIT_TVAL */
#define LPIT_TVAL_COUNT                          (4U)

/*! @name CVAL - Current Timer Value */
/*! @{ */

#define LPIT_CVAL_TMR_CUR_VAL_MASK               (0xFFFFFFFFU)
#define LPIT_CVAL_TMR_CUR_VAL_SHIFT              (0U)
/*! TMR_CUR_VAL - Current Timer Value */
#define LPIT_CVAL_TMR_CUR_VAL(x)                 (((uint32_t)(((uint32_t)(x)) << LPIT_CVAL_TMR_CUR_VAL_SHIFT)) & LPIT_CVAL_TMR_CUR_VAL_MASK)
/*! @} */

/* The count of LPIT_CVAL */
#define LPIT_CVAL_COUNT                          (4U)

/*! @name TCTRL - Timer Control Register */
/*! @{ */

#define LPIT_TCTRL_T_EN_MASK                     (0x1U)
#define LPIT_TCTRL_T_EN_SHIFT                    (0U)
/*! T_EN - Timer Enable
 *  0b0..Timer Channel is disabled
 *  0b1..Timer Channel is enabled
 */
#define LPIT_TCTRL_T_EN(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_T_EN_SHIFT)) & LPIT_TCTRL_T_EN_MASK)

#define LPIT_TCTRL_CHAIN_MASK                    (0x2U)
#define LPIT_TCTRL_CHAIN_SHIFT                   (1U)
/*! CHAIN - Chain Channel
 *  0b0..Channel Chaining is disabled. Channel Timer runs independently.
 *  0b1..Channel Chaining is enabled. Timer decrements on previous channel's timeout
 */
#define LPIT_TCTRL_CHAIN(x)                      (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_CHAIN_SHIFT)) & LPIT_TCTRL_CHAIN_MASK)

#define LPIT_TCTRL_MODE_MASK                     (0xCU)
#define LPIT_TCTRL_MODE_SHIFT                    (2U)
/*! MODE - Timer Operation Mode
 *  0b00..32-bit Periodic Counter
 *  0b01..Dual 16-bit Periodic Counter
 *  0b10..32-bit Trigger Accumulator
 *  0b11..32-bit Trigger Input Capture
 */
#define LPIT_TCTRL_MODE(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_MODE_SHIFT)) & LPIT_TCTRL_MODE_MASK)

#define LPIT_TCTRL_TSOT_MASK                     (0x10000U)
#define LPIT_TCTRL_TSOT_SHIFT                    (16U)
/*! TSOT - Timer Start On Trigger
 *  0b0..Timer starts to decrement immediately based on restart condition (controlled by TSOI bit)
 *  0b1..Timer starts to decrement when rising edge on selected trigger is detected
 */
#define LPIT_TCTRL_TSOT(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TSOT_SHIFT)) & LPIT_TCTRL_TSOT_MASK)

#define LPIT_TCTRL_TSOI_MASK                     (0x20000U)
#define LPIT_TCTRL_TSOI_SHIFT                    (17U)
/*! TSOI - Timer Stop On Interrupt
 *  0b0..Timer does not stop after timeout
 *  0b1..Timer will stop after timeout and will restart after rising edge on the T_EN bit is detected (i.e. timer
 *       channel is disabled and then enabled)
 */
#define LPIT_TCTRL_TSOI(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TSOI_SHIFT)) & LPIT_TCTRL_TSOI_MASK)

#define LPIT_TCTRL_TROT_MASK                     (0x40000U)
#define LPIT_TCTRL_TROT_SHIFT                    (18U)
/*! TROT - Timer Reload On Trigger
 *  0b0..Timer will not reload on selected trigger
 *  0b1..Timer will reload on selected trigger
 */
#define LPIT_TCTRL_TROT(x)                       (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TROT_SHIFT)) & LPIT_TCTRL_TROT_MASK)

#define LPIT_TCTRL_TRG_SRC_MASK                  (0x800000U)
#define LPIT_TCTRL_TRG_SRC_SHIFT                 (23U)
/*! TRG_SRC - Trigger Source
 *  0b0..Trigger source selected in external
 *  0b1..Trigger source selected is the internal trigger
 */
#define LPIT_TCTRL_TRG_SRC(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TRG_SRC_SHIFT)) & LPIT_TCTRL_TRG_SRC_MASK)

#define LPIT_TCTRL_TRG_SEL_MASK                  (0xF000000U)
#define LPIT_TCTRL_TRG_SEL_SHIFT                 (24U)
/*! TRG_SEL - Trigger Select
 *  0b0000..Timer channel 0 trigger source is selected
 *  0b0001..Timer channel 1 trigger source is selected
 *  0b0010..Timer channel 2 trigger source is selected
 */
#define LPIT_TCTRL_TRG_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPIT_TCTRL_TRG_SEL_SHIFT)) & LPIT_TCTRL_TRG_SEL_MASK)
/*! @} */

/* The count of LPIT_TCTRL */
#define LPIT_TCTRL_COUNT                         (4U)


/*!
 * @}
 */ /* end of group LPIT_Register_Masks */


/*!
 * @}
 */ /* end of group LPIT_Peripheral_Access_Layer */


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


#endif  /* LPIT_H_ */

