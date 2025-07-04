/*
** ###################################################################
**     Version:             rev. 0.9, 2015-06-08
**     Build:               b250324
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
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
**     - rev. 0.5 (2015-01-21)
**         Added FSL_FEATURE_SOC_peripheral_COUNT with number of peripheral instances
**     - rev. 0.6 (2015-02-19)
**         Renamed interrupt vector LLW to LLWU.
**     - rev. 0.7 (2015-05-19)
**         FSL_FEATURE_SOC_CAU_COUNT remamed to FSL_FEATURE_SOC_MMCAU_COUNT.
**         Added FSL_FEATURE_SOC_peripheral_COUNT for TRNG and HSADC.
**         Added features for PDB and PORT.
**     - rev. 0.8 (2015-05-25)
**         Added FSL_FEATURE_FLASH_PFLASH_START_ADDRESS
**     - rev. 0.9 (2015-06-08)
**         FTM features BUS_CLOCK and FAST_CLOCK removed.
**
** ###################################################################
*/

#ifndef _MK02F12810_FEATURES_H_
#define _MK02F12810_FEATURES_H_

/* SOC module features */

/* @brief ADC16 availability on the SoC. */
#define FSL_FEATURE_SOC_ADC16_COUNT (1)
/* @brief CMP availability on the SoC. */
#define FSL_FEATURE_SOC_CMP_COUNT (2)
/* @brief CRC availability on the SoC. */
#define FSL_FEATURE_SOC_CRC_COUNT (1)
/* @brief DAC availability on the SoC. */
#define FSL_FEATURE_SOC_DAC_COUNT (1)
/* @brief EDMA availability on the SoC. */
#define FSL_FEATURE_SOC_EDMA_COUNT (1)
/* @brief DMAMUX availability on the SoC. */
#define FSL_FEATURE_SOC_DMAMUX_COUNT (1)
/* @brief DSPI availability on the SoC. */
#define FSL_FEATURE_SOC_DSPI_COUNT (1)
/* @brief EWM availability on the SoC. */
#define FSL_FEATURE_SOC_EWM_COUNT (1)
/* @brief FMC availability on the SoC. */
#define FSL_FEATURE_SOC_FMC_COUNT (1)
/* @brief FTFA availability on the SoC. */
#define FSL_FEATURE_SOC_FTFA_COUNT (1)
/* @brief FTM availability on the SoC. */
#define FSL_FEATURE_SOC_FTM_COUNT (3)
/* @brief GPIO availability on the SoC. */
#define FSL_FEATURE_SOC_GPIO_COUNT (5)
/* @brief I2C availability on the SoC. */
#define FSL_FEATURE_SOC_I2C_COUNT (1)
/* @brief LLWU availability on the SoC. */
#define FSL_FEATURE_SOC_LLWU_COUNT (1)
/* @brief LPTMR availability on the SoC. */
#define FSL_FEATURE_SOC_LPTMR_COUNT (1)
/* @brief MCG availability on the SoC. */
#define FSL_FEATURE_SOC_MCG_COUNT (1)
/* @brief MCM availability on the SoC. */
#define FSL_FEATURE_SOC_MCM_COUNT (1)
/* @brief OSC availability on the SoC. */
#define FSL_FEATURE_SOC_OSC_COUNT (1)
/* @brief PDB availability on the SoC. */
#define FSL_FEATURE_SOC_PDB_COUNT (1)
/* @brief PIT availability on the SoC. */
#define FSL_FEATURE_SOC_PIT_COUNT (1)
/* @brief PMC availability on the SoC. */
#define FSL_FEATURE_SOC_PMC_COUNT (1)
/* @brief PORT availability on the SoC. */
#define FSL_FEATURE_SOC_PORT_COUNT (5)
/* @brief RCM availability on the SoC. */
#define FSL_FEATURE_SOC_RCM_COUNT (1)
/* @brief SIM availability on the SoC. */
#define FSL_FEATURE_SOC_SIM_COUNT (1)
/* @brief SMC availability on the SoC. */
#define FSL_FEATURE_SOC_SMC_COUNT (1)
/* @brief UART availability on the SoC. */
#define FSL_FEATURE_SOC_UART_COUNT (2)
/* @brief VREF availability on the SoC. */
#define FSL_FEATURE_SOC_VREF_COUNT (1)
/* @brief WDOG availability on the SoC. */
#define FSL_FEATURE_SOC_WDOG_COUNT (1)

/* ADC16 module features */

/* @brief Has Programmable Gain Amplifier (PGA) in ADC (register PGA). */
#define FSL_FEATURE_ADC16_HAS_PGA (0)
/* @brief Has PGA chopping control in ADC (bit PGA[PGACHPb] or PGA[PGACHP]). */
#define FSL_FEATURE_ADC16_HAS_PGA_CHOPPING (0)
/* @brief Has PGA offset measurement mode in ADC (bit PGA[PGAOFSM]). */
#define FSL_FEATURE_ADC16_HAS_PGA_OFFSET_MEASUREMENT (0)
/* @brief Has DMA support (bit SC2[DMAEN] or SC4[DMAEN]). */
#define FSL_FEATURE_ADC16_HAS_DMA (1)
/* @brief Has differential mode (bitfield SC1x[DIFF]). */
#define FSL_FEATURE_ADC16_HAS_DIFF_MODE (1)
/* @brief Has FIFO (bit SC4[AFDEP]). */
#define FSL_FEATURE_ADC16_HAS_FIFO (0)
/* @brief FIFO size if available (bitfield SC4[AFDEP]). */
#define FSL_FEATURE_ADC16_FIFO_SIZE (0)
/* @brief Has channel set a/b multiplexor (bitfield CFG2[MUXSEL]). */
#define FSL_FEATURE_ADC16_HAS_MUX_SELECT (1)
/* @brief Has HW trigger masking (bitfield SC5[HTRGMASKE]. */
#define FSL_FEATURE_ADC16_HAS_HW_TRIGGER_MASK (0)
/* @brief Has calibration feature (bit SC3[CAL] and registers CLPx, CLMx). */
#define FSL_FEATURE_ADC16_HAS_CALIBRATION (1)
/* @brief Has HW averaging (bit SC3[AVGE]). */
#define FSL_FEATURE_ADC16_HAS_HW_AVERAGE (1)
/* @brief Has offset correction (register OFS). */
#define FSL_FEATURE_ADC16_HAS_OFFSET_CORRECTION (1)
/* @brief Maximum ADC resolution. */
#define FSL_FEATURE_ADC16_MAX_RESOLUTION (16)
/* @brief Number of SC1x and Rx register pairs (conversion control and result registers). */
#define FSL_FEATURE_ADC16_CONVERSION_CONTROL_COUNT (2)

/* CMP module features */

/* @brief Has Trigger mode in CMP (register bit field CR1[TRIGM]). */
#define FSL_FEATURE_CMP_HAS_TRIGGER_MODE (1)
/* @brief Has Window mode in CMP (register bit field CR1[WE]). */
#define FSL_FEATURE_CMP_HAS_WINDOW_MODE (1)
/* @brief Has External sample supported in CMP (register bit field CR1[SE]). */
#define FSL_FEATURE_CMP_HAS_EXTERNAL_SAMPLE_SUPPORT (1)
/* @brief Has DMA support in CMP (register bit field SCR[DMAEN]). */
#define FSL_FEATURE_CMP_HAS_DMA (1)
/* @brief Has Pass Through mode in CMP (register bit field MUXCR[PSTM]). */
#define FSL_FEATURE_CMP_HAS_PASS_THROUGH_MODE (0)
/* @brief Has DAC Test function in CMP (register DACTEST). */
#define FSL_FEATURE_CMP_HAS_DAC_TEST (0)

/* CRC module features */

/* @brief Has data register with name CRC */
#define FSL_FEATURE_CRC_HAS_CRC_REG (0)

/* DAC module features */

/* @brief Define the size of hardware buffer */
#define FSL_FEATURE_DAC_BUFFER_SIZE (16)
/* @brief Define whether the buffer supports watermark event detection or not. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_DETECTION (1)
/* @brief Define whether the buffer supports watermark selection detection or not. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_SELECTION (1)
/* @brief Define whether the buffer supports watermark event 1 word before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_1_WORD (1)
/* @brief Define whether the buffer supports watermark event 2 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_2_WORDS (1)
/* @brief Define whether the buffer supports watermark event 3 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_3_WORDS (1)
/* @brief Define whether the buffer supports watermark event 4 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_4_WORDS (1)
/* @brief Define whether FIFO buffer mode is available or not. */
#define FSL_FEATURE_DAC_HAS_BUFFER_FIFO_MODE (1)
/* @brief Define whether swing buffer mode is available or not.. */
#define FSL_FEATURE_DAC_HAS_BUFFER_SWING_MODE (1)

/* EDMA module features */

/* @brief Number of DMA channels (related to number of registers TCD, DCHPRI, bit fields ERQ[ERQn], EEI[EEIn], INT[INTn], ERR[ERRn], HRS[HRSn] and bit field widths ES[ERRCHN], CEEI[CEEI], SEEI[SEEI], CERQ[CERQ], SERQ[SERQ], CDNE[CDNE], SSRT[SSRT], CERR[CERR], CINT[CINT], TCDn_CITER_ELINKYES[LINKCH], TCDn_CSR[MAJORLINKCH], TCDn_BITER_ELINKYES[LINKCH]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL (4)
/* @brief Total number of DMA channels on all modules. */
#define FSL_FEATURE_EDMA_DMAMUX_CHANNELS (4)
/* @brief Number of DMA channel groups (register bit fields CR[ERGA], CR[GRPnPRI], ES[GPE], DCHPRIn[GRPPRI]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_CHANNEL_GROUP_COUNT (1)
/* @brief Has DMA_Error interrupt vector. */
#define FSL_FEATURE_EDMA_HAS_ERROR_IRQ (1)
/* @brief Number of DMA channels with asynchronous request capability (register EARS). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_ASYNCHRO_REQUEST_CHANNEL_COUNT (4)
/* @brief Channel IRQ entry shared offset. */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL_IRQ_ENTRY_SHARED_OFFSET (0)
/* @brief If 8 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_8_BYTES_TRANSFER (0)
/* @brief If 16 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_16_BYTES_TRANSFER (1)

/* DMAMUX module features */

/* @brief Number of DMA channels (related to number of register CHCFGn). */
#define FSL_FEATURE_DMAMUX_MODULE_CHANNEL (4)
/* @brief Total number of DMA channels on all modules. */
#define FSL_FEATURE_DMAMUX_DMAMUX_CHANNELS (4)
/* @brief Has the periodic trigger capability for the triggered DMA channel (register bit CHCFG0[TRIG]). */
#define FSL_FEATURE_DMAMUX_HAS_TRIG (1)
/* @brief Register CHCFGn width. */
#define FSL_FEATURE_DMAMUX_CHCFG_REGISTER_WIDTH (8)

/* EWM module features */

/* @brief Has clock select (register CLKCTRL). */
#define FSL_FEATURE_EWM_HAS_CLOCK_SELECT (0)
/* @brief Has clock prescaler (register CLKPRESCALER). */
#define FSL_FEATURE_EWM_HAS_PRESCALER (1)

/* FLASH module features */

#if defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN128VLF10) || defined(CPU_MK02FN128VLH10)
    /* @brief Is of type FTFA. */
    #define FSL_FEATURE_FLASH_IS_FTFA (1)
    /* @brief Is of type FTFE. */
    #define FSL_FEATURE_FLASH_IS_FTFE (0)
    /* @brief Is of type FTFL. */
    #define FSL_FEATURE_FLASH_IS_FTFL (0)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FSL_FEATURE_FLASH_HAS_FLEX_RAM_FLAGS (0)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FSL_FEATURE_FLASH_HAS_PFLASH_SWAPPING_STATUS_FLAG (0)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FSL_FEATURE_FLASH_HAS_EEROM_REGION_PROTECTION (0)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FSL_FEATURE_FLASH_HAS_DATA_FLASH_REGION_PROTECTION (0)
    /* @brief Has flash access control (registers XACCHn, SACCHn, where n is a number, FACSS and FACSN). */
    #define FSL_FEATURE_FLASH_HAS_ACCESS_CONTROL (1)
    /* @brief Has flash cache control in FMC module. */
    #define FSL_FEATURE_FLASH_HAS_FMC_FLASH_CACHE_CONTROLS (1)
    /* @brief Has flash cache control in MCM module. */
    #define FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS (0)
    /* @brief Has flash cache control in MSCM module. */
    #define FSL_FEATURE_FLASH_HAS_MSCM_FLASH_CACHE_CONTROLS (0)
    /* @brief Has prefetch speculation control in flash, such as kv5x. */
    #define FSL_FEATURE_FLASH_PREFETCH_SPECULATION_CONTROL_IN_FLASH (0)
    /* @brief P-Flash flash size coding rule version, value 0 for K1 and K2, value 1 for K3. */
    #define FSL_FEATURE_FLASH_SIZE_ENCODING_RULE_VERSION (0)
    /* @brief P-Flash start address. */
    #define FSL_FEATURE_FLASH_PFLASH_START_ADDRESS (0x00000000)
    /* @brief P-Flash block count. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_COUNT (1)
    /* @brief P-Flash block size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_SIZE (131072)
    /* @brief P-Flash sector size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_SECTOR_SIZE (2048)
    /* @brief P-Flash write unit size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_WRITE_UNIT_SIZE (4)
    /* @brief P-Flash data path width. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_DATA_PATH_WIDTH (8)
    /* @brief P-Flash block swap feature. */
    #define FSL_FEATURE_FLASH_HAS_PFLASH_BLOCK_SWAP (0)
    /* @brief P-Flash protection region count. */
    #define FSL_FEATURE_FLASH_PFLASH_PROTECTION_REGION_COUNT (32)
    /* @brief Has FlexNVM memory. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_NVM (0)
    /* @brief Has FlexNVM alias. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_NVM_ALIAS (0)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FSL_FEATURE_FLASH_FLEX_NVM_START_ADDRESS (0x00000000)
    /* @brief FlexNVM alias start address. (Valid only if FlexNVM alias is available.) */
    #define FSL_FEATURE_FLASH_FLEX_NVM_ALIAS_START_ADDRESS (0x00000000)
    /* @brief FlexNVM block count. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_COUNT (0)
    /* @brief FlexNVM block size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SIZE (0)
    /* @brief FlexNVM sector size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SECTOR_SIZE (0)
    /* @brief FlexNVM write unit size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_WRITE_UNIT_SIZE (0)
    /* @brief FlexNVM data path width. */
    #define FSL_FEATURE_FLASH_FLEX_BLOCK_DATA_PATH_WIDTH (0)
    /* @brief Has FlexRAM memory. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_RAM (0)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FSL_FEATURE_FLASH_FLEX_RAM_START_ADDRESS (0x00000000)
    /* @brief FlexRAM size. */
    #define FSL_FEATURE_FLASH_FLEX_RAM_SIZE (0)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_BLOCK_CMD (0)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_SECTION_CMD (1)
    /* @brief Has 0x02 Program Check command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_CHECK_CMD (1)
    /* @brief Has 0x03 Read Resource command. */
    #define FSL_FEATURE_FLASH_HAS_READ_RESOURCE_CMD (1)
    /* @brief Has 0x06 Program Longword command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_LONGWORD_CMD (1)
    /* @brief Has 0x07 Program Phrase command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_PHRASE_CMD (0)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_BLOCK_CMD (0)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_SECTOR_CMD (1)
    /* @brief Has 0x0B Program Section command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_SECTION_CMD (0)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_ALL_BLOCKS_CMD (1)
    /* @brief Has 0x41 Read Once command. */
    #define FSL_FEATURE_FLASH_HAS_READ_ONCE_CMD (1)
    /* @brief Has 0x43 Program Once command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_ONCE_CMD (1)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_BLOCKS_CMD (1)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FSL_FEATURE_FLASH_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1)
    /* @brief Has 0x46 Swap Control command. */
    #define FSL_FEATURE_FLASH_HAS_SWAP_CONTROL_CMD (0)
    /* @brief Has 0x49 Erase All Blocks Unsecure command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (0)
    /* @brief Has 0x4A Read 1s All Execute-only Segments command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_ALL_EXECUTE_ONLY_SEGMENTS_CMD (0)
    /* @brief Has 0x4B Erase All Execute-only Segments command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_EXECUTE_ONLY_SEGMENTS_CMD (0)
    /* @brief Has 0x80 Program Partition command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_PARTITION_CMD (0)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FSL_FEATURE_FLASH_HAS_SET_FLEXRAM_FUNCTION_CMD (0)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SECTOR_CMD_ADDRESS_ALIGMENT (8)
    /* @brief P-Flash Rrogram/Verify section command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SECTION_CMD_ADDRESS_ALIGMENT (8)
    /* @brief P-Flash Read resource command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_RESOURCE_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Program check command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_CHECK_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Program check command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_SECTOR_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Rrogram/Verify section command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_SECTION_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_RESOURCE_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Program check command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_CHECK_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0000 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0001 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0010 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0011 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0100 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0101 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0110 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0111 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1000 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1001 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1010 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1011 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1100 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1101 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1110 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1111 (0xFFFFFFFFU)
    /* @brief Emulated eeprom size code 0000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0000 (0xFFFF)
    /* @brief Emulated eeprom size code 0001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0001 (0xFFFF)
    /* @brief Emulated eeprom size code 0010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0010 (0xFFFF)
    /* @brief Emulated eeprom size code 0011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0011 (0xFFFF)
    /* @brief Emulated eeprom size code 0100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0100 (0xFFFF)
    /* @brief Emulated eeprom size code 0101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0101 (0xFFFF)
    /* @brief Emulated eeprom size code 0110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0110 (0xFFFF)
    /* @brief Emulated eeprom size code 0111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0111 (0xFFFF)
    /* @brief Emulated eeprom size code 1000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1000 (0xFFFF)
    /* @brief Emulated eeprom size code 1001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1001 (0xFFFF)
    /* @brief Emulated eeprom size code 1010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1010 (0xFFFF)
    /* @brief Emulated eeprom size code 1011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1011 (0xFFFF)
    /* @brief Emulated eeprom size code 1100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1100 (0xFFFF)
    /* @brief Emulated eeprom size code 1101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1101 (0xFFFF)
    /* @brief Emulated eeprom size code 1110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1110 (0xFFFF)
    /* @brief Emulated eeprom size code 1111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1111 (0xFFFF)
#elif defined(CPU_MK02FN64VFM10) || defined(CPU_MK02FN64VLF10) || defined(CPU_MK02FN64VLH10)
    /* @brief Is of type FTFA. */
    #define FSL_FEATURE_FLASH_IS_FTFA (1)
    /* @brief Is of type FTFE. */
    #define FSL_FEATURE_FLASH_IS_FTFE (0)
    /* @brief Is of type FTFL. */
    #define FSL_FEATURE_FLASH_IS_FTFL (0)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FSL_FEATURE_FLASH_HAS_FLEX_RAM_FLAGS (0)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FSL_FEATURE_FLASH_HAS_PFLASH_SWAPPING_STATUS_FLAG (0)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FSL_FEATURE_FLASH_HAS_EEROM_REGION_PROTECTION (0)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FSL_FEATURE_FLASH_HAS_DATA_FLASH_REGION_PROTECTION (0)
    /* @brief Has flash access control (registers XACCHn, SACCHn, where n is a number, FACSS and FACSN). */
    #define FSL_FEATURE_FLASH_HAS_ACCESS_CONTROL (1)
    /* @brief Has flash cache control in FMC module. */
    #define FSL_FEATURE_FLASH_HAS_FMC_FLASH_CACHE_CONTROLS (1)
    /* @brief Has flash cache control in MCM module. */
    #define FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS (0)
    /* @brief Has flash cache control in MSCM module. */
    #define FSL_FEATURE_FLASH_HAS_MSCM_FLASH_CACHE_CONTROLS (0)
    /* @brief Has prefetch speculation control in flash, such as kv5x. */
    #define FSL_FEATURE_FLASH_PREFETCH_SPECULATION_CONTROL_IN_FLASH (0)
    /* @brief P-Flash flash size coding rule version, value 0 for K1 and K2, value 1 for K3. */
    #define FSL_FEATURE_FLASH_SIZE_ENCODING_RULE_VERSION (0)
    /* @brief P-Flash start address. */
    #define FSL_FEATURE_FLASH_PFLASH_START_ADDRESS (0x00000000)
    /* @brief P-Flash block count. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_COUNT (1)
    /* @brief P-Flash block size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_SIZE (65536)
    /* @brief P-Flash sector size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_SECTOR_SIZE (2048)
    /* @brief P-Flash write unit size. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_WRITE_UNIT_SIZE (4)
    /* @brief P-Flash data path width. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_DATA_PATH_WIDTH (8)
    /* @brief P-Flash block swap feature. */
    #define FSL_FEATURE_FLASH_HAS_PFLASH_BLOCK_SWAP (0)
    /* @brief P-Flash protection region count. */
    #define FSL_FEATURE_FLASH_PFLASH_PROTECTION_REGION_COUNT (32)
    /* @brief Has FlexNVM memory. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_NVM (0)
    /* @brief Has FlexNVM alias. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_NVM_ALIAS (0)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FSL_FEATURE_FLASH_FLEX_NVM_START_ADDRESS (0x00000000)
    /* @brief FlexNVM alias start address. (Valid only if FlexNVM alias is available.) */
    #define FSL_FEATURE_FLASH_FLEX_NVM_ALIAS_START_ADDRESS (0x00000000)
    /* @brief FlexNVM block count. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_COUNT (0)
    /* @brief FlexNVM block size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SIZE (0)
    /* @brief FlexNVM sector size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SECTOR_SIZE (0)
    /* @brief FlexNVM write unit size. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_WRITE_UNIT_SIZE (0)
    /* @brief FlexNVM data path width. */
    #define FSL_FEATURE_FLASH_FLEX_BLOCK_DATA_PATH_WIDTH (0)
    /* @brief Has FlexRAM memory. */
    #define FSL_FEATURE_FLASH_HAS_FLEX_RAM (0)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FSL_FEATURE_FLASH_FLEX_RAM_START_ADDRESS (0x00000000)
    /* @brief FlexRAM size. */
    #define FSL_FEATURE_FLASH_FLEX_RAM_SIZE (0)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_BLOCK_CMD (0)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_SECTION_CMD (1)
    /* @brief Has 0x02 Program Check command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_CHECK_CMD (1)
    /* @brief Has 0x03 Read Resource command. */
    #define FSL_FEATURE_FLASH_HAS_READ_RESOURCE_CMD (1)
    /* @brief Has 0x06 Program Longword command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_LONGWORD_CMD (1)
    /* @brief Has 0x07 Program Phrase command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_PHRASE_CMD (0)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_BLOCK_CMD (0)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_SECTOR_CMD (1)
    /* @brief Has 0x0B Program Section command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_SECTION_CMD (0)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_ALL_BLOCKS_CMD (1)
    /* @brief Has 0x41 Read Once command. */
    #define FSL_FEATURE_FLASH_HAS_READ_ONCE_CMD (1)
    /* @brief Has 0x43 Program Once command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_ONCE_CMD (1)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_BLOCKS_CMD (1)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FSL_FEATURE_FLASH_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1)
    /* @brief Has 0x46 Swap Control command. */
    #define FSL_FEATURE_FLASH_HAS_SWAP_CONTROL_CMD (0)
    /* @brief Has 0x49 Erase All Blocks Unsecure command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (0)
    /* @brief Has 0x4A Read 1s All Execute-only Segments command. */
    #define FSL_FEATURE_FLASH_HAS_READ_1S_ALL_EXECUTE_ONLY_SEGMENTS_CMD (0)
    /* @brief Has 0x4B Erase All Execute-only Segments command. */
    #define FSL_FEATURE_FLASH_HAS_ERASE_ALL_EXECUTE_ONLY_SEGMENTS_CMD (0)
    /* @brief Has 0x80 Program Partition command. */
    #define FSL_FEATURE_FLASH_HAS_PROGRAM_PARTITION_CMD (0)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FSL_FEATURE_FLASH_HAS_SET_FLEXRAM_FUNCTION_CMD (0)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_BLOCK_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SECTOR_CMD_ADDRESS_ALIGMENT (8)
    /* @brief P-Flash Rrogram/Verify section command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SECTION_CMD_ADDRESS_ALIGMENT (8)
    /* @brief P-Flash Read resource command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_RESOURCE_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Program check command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_CHECK_CMD_ADDRESS_ALIGMENT (4)
    /* @brief P-Flash Program check command address alignment. */
    #define FSL_FEATURE_FLASH_PFLASH_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_SECTOR_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Rrogram/Verify section command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_SECTION_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_RESOURCE_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM Program check command address alignment. */
    #define FSL_FEATURE_FLASH_FLEX_NVM_CHECK_CMD_ADDRESS_ALIGMENT (0)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0000 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0001 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0010 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0011 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0100 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0101 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0110 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0111 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1000 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1001 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1010 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1011 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1100 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1101 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1110 (0xFFFFFFFFU)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1111 (0xFFFFFFFFU)
    /* @brief Emulated eeprom size code 0000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0000 (0xFFFF)
    /* @brief Emulated eeprom size code 0001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0001 (0xFFFF)
    /* @brief Emulated eeprom size code 0010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0010 (0xFFFF)
    /* @brief Emulated eeprom size code 0011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0011 (0xFFFF)
    /* @brief Emulated eeprom size code 0100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0100 (0xFFFF)
    /* @brief Emulated eeprom size code 0101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0101 (0xFFFF)
    /* @brief Emulated eeprom size code 0110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0110 (0xFFFF)
    /* @brief Emulated eeprom size code 0111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0111 (0xFFFF)
    /* @brief Emulated eeprom size code 1000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1000 (0xFFFF)
    /* @brief Emulated eeprom size code 1001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1001 (0xFFFF)
    /* @brief Emulated eeprom size code 1010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1010 (0xFFFF)
    /* @brief Emulated eeprom size code 1011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1011 (0xFFFF)
    /* @brief Emulated eeprom size code 1100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1100 (0xFFFF)
    /* @brief Emulated eeprom size code 1101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1101 (0xFFFF)
    /* @brief Emulated eeprom size code 1110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1110 (0xFFFF)
    /* @brief Emulated eeprom size code 1111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
    #define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1111 (0xFFFF)
#endif /* defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN128VLF10) || defined(CPU_MK02FN128VLH10) */

/* FTM module features */

/* @brief Number of channels. */
#define FSL_FEATURE_FTM_CHANNEL_COUNTn(x) \
    (((x) == FTM0) ? (6) : \
    (((x) == FTM1) ? (2) : \
    (((x) == FTM2) ? (2) : (-1))))
/* @brief Has counter reset by the selected input capture event (register bits C0SC[ICRST], C1SC[ICRST], ...). */
#define FSL_FEATURE_FTM_HAS_COUNTER_RESET_BY_CAPTURE_EVENT (1)
/* @brief Has extended deadtime value. */
#define FSL_FEATURE_FTM_HAS_EXTENDED_DEADTIME_VALUE (0)
/* @brief Enable pwm output for the module. */
#define FSL_FEATURE_FTM_HAS_ENABLE_PWM_OUTPUT (0)
/* @brief Has half-cycle reload for the module. */
#define FSL_FEATURE_FTM_HAS_HALFCYCLE_RELOAD (0)
/* @brief Has reload interrupt. */
#define FSL_FEATURE_FTM_HAS_RELOAD_INTERRUPT (0)
/* @brief Has reload initialization trigger. */
#define FSL_FEATURE_FTM_HAS_RELOAD_INITIALIZATION_TRIGGER (0)
/* @brief Has DMA support, bitfield CnSC[DMA]. */
#define FSL_FEATURE_FTM_HAS_DMA_SUPPORT (1)
/* @brief If channel 6 is used to generate channel trigger, bitfield EXTTRIG[CH6TRIG]. */
#define FSL_FEATURE_FTM_HAS_CHANNEL6_TRIGGER (0)
/* @brief If channel 7 is used to generate channel trigger, bitfield EXTTRIG[CH7TRIG]. */
#define FSL_FEATURE_FTM_HAS_CHANNEL7_TRIGGER (0)
/* @brief Has no QDCTRL. */
#define FSL_FEATURE_FTM_HAS_NO_QDCTRL (0)
/* @brief If instance has only TPM function. */
#define FSL_FEATURE_FTM_IS_TPM_ONLY_INSTANCEn(x) (0)
/* @brief Has frequency of the reload opportunities, bitfield CONF[LDFQ]. */
#define FSL_FEATURE_FTM_HAS_CONF_LDFQ_BIT (0)
/* @brief Has filter prescaler. */
#define FSL_FEATURE_FTM_HAS_FILTER_PRESCALER (0)
/* @brief Has fault output state configurable. */
#define FSL_FEATURE_FTM_HAS_FAULT_OUTPUT_STATE (0)
/* @brief Has paired deadtime. */
#define FSL_FEATURE_FTM_HAS_PAIRED_DEADTIME (0)
/* @brief Has PWM dithering. */
#define FSL_FEATURE_FTM_HAS_DITHERING (0)
/* @brief FTM instance has PWM dithering. */
#define FSL_FEATURE_FTM_INSTANCE_HAS_DITHERINGn(x) (0)
/* @brief Has trigger mode control. */
#define FSL_FEATURE_FTM_HAS_TRIGGER_MODE (0)
/* @brief Has modified combine mode. */
#define FSL_FEATURE_FTM_HAS_MODIFIED_COMBINE_PWM (0)
/* @brief Has configurable channel input state. */
#define FSL_FEATURE_FTM_HAS_CONF_CHIS_BIT (0)
/* @brief Has configurable channel output value. */
#define FSL_FEATURE_FTM_HAS_CONF_CHOV_BIT (0)
/* @brief FTM instance has Quadrature Decoder with input filter. */
#define FSL_FEATURE_FTM_INSTANCE_HAS_QUAD_DECODEn(x) (1)
/* @brief FTM instance fault input number. */
#define FSL_FEATURE_FTM_INSTANCE_FAULT_INPUT_NUMBERn(x) (4)

/* GPIO module features */

/* @brief Has GPIO attribute checker register (GACR). */
#define FSL_FEATURE_GPIO_HAS_ATTRIBUTE_CHECKER (0)

/* I2C module features */

/* @brief Has System Management Bus support (registers SMB, A2, SLTL and SLTH). */
#define FSL_FEATURE_I2C_HAS_SMBUS (1)
/* @brief Maximum supported baud rate in kilobit per second. */
#define FSL_FEATURE_I2C_MAX_BAUD_KBPS (400)
/* @brief Is affected by errata with ID 6070 (repeat start cannot be generated if the F[MULT] bit field is set to a non-zero value). */
#define FSL_FEATURE_I2C_HAS_ERRATA_6070 (0)
/* @brief Has DMA support (register bit C1[DMAEN]). */
#define FSL_FEATURE_I2C_HAS_DMA_SUPPORT (1)
/* @brief Has I2C bus start and stop detection (register bits FLT[SSIE], FLT[STARTF] and FLT[STOPF]). */
#define FSL_FEATURE_I2C_HAS_START_STOP_DETECT (1)
/* @brief Has I2C bus stop detection (register bits FLT[STOPIE] and FLT[STOPF]). */
#define FSL_FEATURE_I2C_HAS_STOP_DETECT (0)
/* @brief Has I2C bus stop hold off (register bit FLT[SHEN]). */
#define FSL_FEATURE_I2C_HAS_STOP_HOLD_OFF (1)
/* @brief Maximum width of the glitch filter in number of bus clocks. */
#define FSL_FEATURE_I2C_MAX_GLITCH_FILTER_WIDTH (15)
/* @brief Has control of the drive capability of the I2C pins. */
#define FSL_FEATURE_I2C_HAS_HIGH_DRIVE_SELECTION (1)
/* @brief Has double buffering support (register S2). */
#define FSL_FEATURE_I2C_HAS_DOUBLE_BUFFERING (0)
/* @brief Has double buffer enable. */
#define FSL_FEATURE_I2C_HAS_DOUBLE_BUFFER_ENABLE (0)

/* LLWU module features */

#if defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN64VFM10)
    /* @brief Maximum number of pins (maximal index plus one) connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN (16)
    /* @brief Has pins 8-15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_EXTERNAL_PIN_GROUP2 (1)
    /* @brief Maximum number of internal modules connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE (3)
    /* @brief Number of digital filters. */
    #define FSL_FEATURE_LLWU_HAS_PIN_FILTER (2)
    /* @brief Has MF register. */
    #define FSL_FEATURE_LLWU_HAS_MF (0)
    /* @brief Has PF register. */
    #define FSL_FEATURE_LLWU_HAS_PF (0)
    /* @brief Has possibility to enable reset in low leakage power mode and enable digital filter for RESET pin (register LLWU_RST). */
    #define FSL_FEATURE_LLWU_HAS_RESET_ENABLE (0)
    /* @brief Has no internal module wakeup flag register. */
    #define FSL_FEATURE_LLWU_HAS_NO_INTERNAL_MODULE_WAKEUP_FLAG_REG (0)
    /* @brief Has external pin 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN0 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_PIN (0)
    /* @brief Has external pin 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN1 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_PIN (0)
    /* @brief Has external pin 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN2 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_PIN (0)
    /* @brief Has external pin 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN3 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_IDX (GPIOA_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_PIN (4)
    /* @brief Has external pin 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN4 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_PIN (0)
    /* @brief Has external pin 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN5 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_IDX (GPIOB_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_PIN (0)
    /* @brief Has external pin 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN6 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_PIN (1)
    /* @brief Has external pin 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN7 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_PIN (3)
    /* @brief Has external pin 8 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN8 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_PIN (4)
    /* @brief Has external pin 9 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN9 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_PIN (5)
    /* @brief Has external pin 10 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN10 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_PIN (6)
    /* @brief Has external pin 11 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN11 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_PIN (0)
    /* @brief Has external pin 12 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN12 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_PIN (0)
    /* @brief Has external pin 13 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN13 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_PIN (0)
    /* @brief Has external pin 14 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN14 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_PIN (4)
    /* @brief Has external pin 15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN15 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_PIN (6)
    /* @brief Has external pin 16 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN16 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_PIN (0)
    /* @brief Has external pin 17 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN17 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_PIN (0)
    /* @brief Has external pin 18 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN18 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_PIN (0)
    /* @brief Has external pin 19 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN19 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_PIN (0)
    /* @brief Has external pin 20 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN20 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_PIN (0)
    /* @brief Has external pin 21 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN21 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_PIN (0)
    /* @brief Has external pin 22 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN22 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_PIN (0)
    /* @brief Has external pin 23 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN23 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_PIN (0)
    /* @brief Has external pin 24 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN24 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_PIN (0)
    /* @brief Has external pin 25 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN25 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_PIN (0)
    /* @brief Has external pin 26 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN26 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_PIN (0)
    /* @brief Has external pin 27 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN27 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_PIN (0)
    /* @brief Has external pin 28 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN28 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_PIN (0)
    /* @brief Has external pin 29 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN29 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_PIN (0)
    /* @brief Has external pin 30 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN30 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_PIN (0)
    /* @brief Has external pin 31 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN31 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_PIN (0)
    /* @brief Has internal module 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE0 (1)
    /* @brief Has internal module 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE1 (1)
    /* @brief Has internal module 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE2 (1)
    /* @brief Has internal module 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE3 (0)
    /* @brief Has internal module 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE4 (0)
    /* @brief Has internal module 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE5 (0)
    /* @brief Has internal module 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE6 (0)
    /* @brief Has internal module 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE7 (0)
    /* @brief Has Version ID Register (LLWU_VERID). */
    #define FSL_FEATURE_LLWU_HAS_VERID (0)
    /* @brief Has Parameter Register (LLWU_PARAM). */
    #define FSL_FEATURE_LLWU_HAS_PARAM (0)
    /* @brief Width of registers of the LLWU. */
    #define FSL_FEATURE_LLWU_REG_BITWIDTH (8)
    /* @brief Has DMA Enable register (LLWU_DE). */
    #define FSL_FEATURE_LLWU_HAS_DMA_ENABLE_REG (0)
#elif defined(CPU_MK02FN128VLF10) || defined(CPU_MK02FN64VLF10)
    /* @brief Maximum number of pins (maximal index plus one) connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN (16)
    /* @brief Has pins 8-15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_EXTERNAL_PIN_GROUP2 (1)
    /* @brief Maximum number of internal modules connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE (3)
    /* @brief Number of digital filters. */
    #define FSL_FEATURE_LLWU_HAS_PIN_FILTER (2)
    /* @brief Has MF register. */
    #define FSL_FEATURE_LLWU_HAS_MF (0)
    /* @brief Has PF register. */
    #define FSL_FEATURE_LLWU_HAS_PF (0)
    /* @brief Has possibility to enable reset in low leakage power mode and enable digital filter for RESET pin (register LLWU_RST). */
    #define FSL_FEATURE_LLWU_HAS_RESET_ENABLE (0)
    /* @brief Has no internal module wakeup flag register. */
    #define FSL_FEATURE_LLWU_HAS_NO_INTERNAL_MODULE_WAKEUP_FLAG_REG (0)
    /* @brief Has external pin 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN0 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_PIN (0)
    /* @brief Has external pin 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN1 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_PIN (0)
    /* @brief Has external pin 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN2 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_PIN (0)
    /* @brief Has external pin 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN3 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_IDX (GPIOA_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_PIN (4)
    /* @brief Has external pin 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN4 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_PIN (0)
    /* @brief Has external pin 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN5 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_IDX (GPIOB_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_PIN (0)
    /* @brief Has external pin 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN6 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_PIN (1)
    /* @brief Has external pin 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN7 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_PIN (3)
    /* @brief Has external pin 8 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN8 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_PIN (4)
    /* @brief Has external pin 9 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN9 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_PIN (5)
    /* @brief Has external pin 10 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN10 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_PIN (6)
    /* @brief Has external pin 11 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN11 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_PIN (0)
    /* @brief Has external pin 12 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN12 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_PIN (0)
    /* @brief Has external pin 13 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN13 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_PIN (2)
    /* @brief Has external pin 14 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN14 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_PIN (4)
    /* @brief Has external pin 15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN15 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_PIN (6)
    /* @brief Has external pin 16 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN16 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_PIN (0)
    /* @brief Has external pin 17 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN17 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_PIN (0)
    /* @brief Has external pin 18 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN18 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_PIN (0)
    /* @brief Has external pin 19 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN19 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_PIN (0)
    /* @brief Has external pin 20 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN20 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_PIN (0)
    /* @brief Has external pin 21 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN21 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_PIN (0)
    /* @brief Has external pin 22 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN22 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_PIN (0)
    /* @brief Has external pin 23 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN23 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_PIN (0)
    /* @brief Has external pin 24 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN24 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_PIN (0)
    /* @brief Has external pin 25 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN25 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_PIN (0)
    /* @brief Has external pin 26 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN26 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_PIN (0)
    /* @brief Has external pin 27 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN27 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_PIN (0)
    /* @brief Has external pin 28 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN28 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_PIN (0)
    /* @brief Has external pin 29 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN29 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_PIN (0)
    /* @brief Has external pin 30 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN30 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_PIN (0)
    /* @brief Has external pin 31 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN31 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_PIN (0)
    /* @brief Has internal module 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE0 (1)
    /* @brief Has internal module 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE1 (1)
    /* @brief Has internal module 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE2 (1)
    /* @brief Has internal module 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE3 (0)
    /* @brief Has internal module 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE4 (0)
    /* @brief Has internal module 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE5 (0)
    /* @brief Has internal module 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE6 (0)
    /* @brief Has internal module 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE7 (0)
    /* @brief Has Version ID Register (LLWU_VERID). */
    #define FSL_FEATURE_LLWU_HAS_VERID (0)
    /* @brief Has Parameter Register (LLWU_PARAM). */
    #define FSL_FEATURE_LLWU_HAS_PARAM (0)
    /* @brief Width of registers of the LLWU. */
    #define FSL_FEATURE_LLWU_REG_BITWIDTH (8)
    /* @brief Has DMA Enable register (LLWU_DE). */
    #define FSL_FEATURE_LLWU_HAS_DMA_ENABLE_REG (0)
#elif defined(CPU_MK02FN128VLH10) || defined(CPU_MK02FN64VLH10)
    /* @brief Maximum number of pins (maximal index plus one) connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN (16)
    /* @brief Has pins 8-15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_EXTERNAL_PIN_GROUP2 (1)
    /* @brief Maximum number of internal modules connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE (3)
    /* @brief Number of digital filters. */
    #define FSL_FEATURE_LLWU_HAS_PIN_FILTER (2)
    /* @brief Has MF register. */
    #define FSL_FEATURE_LLWU_HAS_MF (0)
    /* @brief Has PF register. */
    #define FSL_FEATURE_LLWU_HAS_PF (0)
    /* @brief Has possibility to enable reset in low leakage power mode and enable digital filter for RESET pin (register LLWU_RST). */
    #define FSL_FEATURE_LLWU_HAS_RESET_ENABLE (0)
    /* @brief Has no internal module wakeup flag register. */
    #define FSL_FEATURE_LLWU_HAS_NO_INTERNAL_MODULE_WAKEUP_FLAG_REG (0)
    /* @brief Has external pin 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN0 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_IDX (GPIOE_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN0_GPIO_PIN (1)
    /* @brief Has external pin 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN1 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN1_GPIO_PIN (0)
    /* @brief Has external pin 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN2 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN2_GPIO_PIN (0)
    /* @brief Has external pin 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN3 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_IDX (GPIOA_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN3_GPIO_PIN (4)
    /* @brief Has external pin 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN4 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_IDX (GPIOA_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN4_GPIO_PIN (13)
    /* @brief Has external pin 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN5 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_IDX (GPIOB_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN5_GPIO_PIN (0)
    /* @brief Has external pin 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN6 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN6_GPIO_PIN (1)
    /* @brief Has external pin 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN7 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN7_GPIO_PIN (3)
    /* @brief Has external pin 8 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN8 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN8_GPIO_PIN (4)
    /* @brief Has external pin 9 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN9 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN9_GPIO_PIN (5)
    /* @brief Has external pin 10 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN10 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN10_GPIO_PIN (6)
    /* @brief Has external pin 11 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN11 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_IDX (GPIOC_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN11_GPIO_PIN (11)
    /* @brief Has external pin 12 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN12 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN12_GPIO_PIN (0)
    /* @brief Has external pin 13 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN13 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN13_GPIO_PIN (2)
    /* @brief Has external pin 14 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN14 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN14_GPIO_PIN (4)
    /* @brief Has external pin 15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN15 (1)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_IDX (GPIOD_IDX)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN15_GPIO_PIN (6)
    /* @brief Has external pin 16 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN16 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN16_GPIO_PIN (0)
    /* @brief Has external pin 17 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN17 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN17_GPIO_PIN (0)
    /* @brief Has external pin 18 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN18 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN18_GPIO_PIN (0)
    /* @brief Has external pin 19 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN19 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN19_GPIO_PIN (0)
    /* @brief Has external pin 20 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN20 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN20_GPIO_PIN (0)
    /* @brief Has external pin 21 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN21 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN21_GPIO_PIN (0)
    /* @brief Has external pin 22 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN22 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN22_GPIO_PIN (0)
    /* @brief Has external pin 23 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN23 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN23_GPIO_PIN (0)
    /* @brief Has external pin 24 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN24 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN24_GPIO_PIN (0)
    /* @brief Has external pin 25 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN25 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN25_GPIO_PIN (0)
    /* @brief Has external pin 26 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN26 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN26_GPIO_PIN (0)
    /* @brief Has external pin 27 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN27 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN27_GPIO_PIN (0)
    /* @brief Has external pin 28 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN28 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN28_GPIO_PIN (0)
    /* @brief Has external pin 29 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN29 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN29_GPIO_PIN (0)
    /* @brief Has external pin 30 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN30 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN30_GPIO_PIN (0)
    /* @brief Has external pin 31 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN31 (0)
    /* @brief Index of port of external pin. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_IDX (0)
    /* @brief Number of external pin port on specified port. */
    #define FSL_FEATURE_LLWU_PIN31_GPIO_PIN (0)
    /* @brief Has internal module 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE0 (1)
    /* @brief Has internal module 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE1 (1)
    /* @brief Has internal module 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE2 (1)
    /* @brief Has internal module 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE3 (0)
    /* @brief Has internal module 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE4 (0)
    /* @brief Has internal module 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE5 (0)
    /* @brief Has internal module 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE6 (0)
    /* @brief Has internal module 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE7 (0)
    /* @brief Has Version ID Register (LLWU_VERID). */
    #define FSL_FEATURE_LLWU_HAS_VERID (0)
    /* @brief Has Parameter Register (LLWU_PARAM). */
    #define FSL_FEATURE_LLWU_HAS_PARAM (0)
    /* @brief Width of registers of the LLWU. */
    #define FSL_FEATURE_LLWU_REG_BITWIDTH (8)
    /* @brief Has DMA Enable register (LLWU_DE). */
    #define FSL_FEATURE_LLWU_HAS_DMA_ENABLE_REG (0)
#endif /* defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN64VFM10) */

/* LPTMR module features */

/* @brief Has shared interrupt handler with another LPTMR module. */
#define FSL_FEATURE_LPTMR_HAS_SHARED_IRQ_HANDLER (0)
/* @brief Whether LPTMR counter is 32 bits width. */
#define FSL_FEATURE_LPTMR_CNR_WIDTH_IS_32B (0)
/* @brief Has timer DMA request enable (register bit CSR[TDRE]). */
#define FSL_FEATURE_LPTMR_HAS_CSR_TDRE (0)

/* MCG module features */

/* @brief PRDIV base value (divider of register bit field [PRDIV] zero value). */
#define FSL_FEATURE_MCG_PLL_PRDIV_BASE (0)
/* @brief Maximum PLL external reference divider value (max. value of register bit field C5[PRVDIV]). */
#define FSL_FEATURE_MCG_PLL_PRDIV_MAX (0)
/* @brief VCO divider base value (multiply factor of register bit field C6[VDIV] zero value). */
#define FSL_FEATURE_MCG_PLL_VDIV_BASE (0)
/* @brief PLL reference clock low range. OSCCLK/PLL_R. */
#define FSL_FEATURE_MCG_PLL_REF_MIN (0)
/* @brief PLL reference clock high range. OSCCLK/PLL_R. */
#define FSL_FEATURE_MCG_PLL_REF_MAX (0)
/* @brief The PLL clock is divided by 2 before VCO divider. */
#define FSL_FEATURE_MCG_HAS_PLL_INTERNAL_DIV (0)
/* @brief FRDIV supports 1280. */
#define FSL_FEATURE_MCG_FRDIV_SUPPORT_1280 (1)
/* @brief FRDIV supports 1536. */
#define FSL_FEATURE_MCG_FRDIV_SUPPORT_1536 (1)
/* @brief MCGFFCLK divider. */
#define FSL_FEATURE_MCG_FFCLK_DIV (1)
/* @brief Is PLL clock divided by 2 before MCG PLL/FLL clock selection in the SIM module. */
#define FSL_FEATURE_MCG_HAS_PLL_EXTRA_DIV (0)
/* @brief Has 32kHz RTC external reference clock (register bits C8[LOCS1], C8[CME1], C8[LOCRE1] and RTC module are present). */
#define FSL_FEATURE_MCG_HAS_RTC_32K (0)
/* @brief Has PLL1 external reference clock (registers C10, C11, C12, S2). */
#define FSL_FEATURE_MCG_HAS_PLL1 (0)
/* @brief Has 48MHz internal oscillator. */
#define FSL_FEATURE_MCG_HAS_IRC_48M (1)
/* @brief Has OSC1 external oscillator (registers C10, C11, C12, S2). */
#define FSL_FEATURE_MCG_HAS_OSC1 (0)
/* @brief Has fast internal reference clock fine trim (register bit C2[FCFTRIM]). */
#define FSL_FEATURE_MCG_HAS_FCFTRIM (1)
/* @brief Has PLL loss of lock reset (register bit C8[LOLRE]). */
#define FSL_FEATURE_MCG_HAS_LOLRE (0)
/* @brief Has MCG OSC clock selection (register bit C7[OSCSEL]). */
#define FSL_FEATURE_MCG_USE_OSCSEL (1)
/* @brief Has PLL external reference selection (register bits C5[PLLREFSEL0] and C11[PLLREFSEL1]). */
#define FSL_FEATURE_MCG_USE_PLLREFSEL (0)
/* @brief TBD */
#define FSL_FEATURE_MCG_USE_SYSTEM_CLOCK (0)
/* @brief Has phase-locked loop (PLL) (register C5 and bits C6[VDIV], C6[PLLS], C6[LOLIE0], S[PLLST], S[LOCK0], S[LOLS0]). */
#define FSL_FEATURE_MCG_HAS_PLL (0)
/* @brief Has phase-locked loop (PLL) PRDIV (register C5[PRDIV]. */
#define FSL_FEATURE_MCG_HAS_PLL_PRDIV (0)
/* @brief Has phase-locked loop (PLL) VDIV (register C6[VDIV]. */
#define FSL_FEATURE_MCG_HAS_PLL_VDIV (0)
/* @brief PLL/OSC related register bit fields have PLL/OSC index in their name. */
#define FSL_FEATURE_MCG_HAS_PLL_OSC_INDEX (0)
/* @brief Has frequency-locked loop (FLL) (register ATCVH, ATCVL and bits C1[IREFS], C1[FRDIV]). */
#define FSL_FEATURE_MCG_HAS_FLL (1)
/* @brief Has PLL external to MCG (C9[PLL_CME], C9[PLL_LOCRE], C9[EXT_PLL_LOCS]). */
#define FSL_FEATURE_MCG_HAS_EXTERNAL_PLL (0)
/* @brief Has crystal oscillator or external reference clock low power controls (register bits C2[HGO], C2[RANGE]). */
#define FSL_FEATURE_MCG_HAS_EXT_REF_LOW_POWER_CONTROL (1)
/* @brief Has PLL/FLL selection as MCG output (register bit C6[PLLS]). */
#define FSL_FEATURE_MCG_HAS_PLL_FLL_SELECTION (0)
/* @brief Has PLL output selection (PLL0/PLL1, PLL/external PLL) (register bit C11[PLLCS]). */
#define FSL_FEATURE_MCG_HAS_PLL_OUTPUT_SELECTION (0)
/* @brief Has automatic trim machine (registers ATCVH, ATCVL and bits SC[ATMF], SC[ATMS], SC[ATME]). */
#define FSL_FEATURE_MCG_HAS_AUTO_TRIM_MACHINE (1)
/* @brief Has external clock monitor (register bit C6[CME]). */
#define FSL_FEATURE_MCG_HAS_EXTERNAL_CLOCK_MONITOR (1)
/* @brief Has low frequency internal reference clock (IRC) (registers LTRIMRNG, LFRIM, LSTRIM and bit MC[LIRC_DIV2]). */
#define FSL_FEATURE_MCG_HAS_LOW_FREQ_IRC (0)
/* @brief Has high frequency internal reference clock (IRC) (registers HCTRIM, HTTRIM, HFTRIM and bit MC[HIRCEN]). */
#define FSL_FEATURE_MCG_HAS_HIGH_FREQ_IRC (0)
/* @brief Has PEI mode or PBI mode. */
#define FSL_FEATURE_MCG_HAS_PLL_INTERNAL_MODE (0)
/* @brief Reset clock mode is BLPI. */
#define FSL_FEATURE_MCG_RESET_IS_BLPI (0)

/* interrupt module features */

/* @brief Lowest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MIN (-14)
/* @brief Highest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MAX (73)

/* OSC module features */

/* @brief Has OSC1 external oscillator. */
#define FSL_FEATURE_OSC_HAS_OSC1 (0)
/* @brief Has OSC0 external oscillator. */
#define FSL_FEATURE_OSC_HAS_OSC0 (0)
/* @brief Has OSC external oscillator (without index). */
#define FSL_FEATURE_OSC_HAS_OSC (1)
/* @brief Number of OSC external oscillators. */
#define FSL_FEATURE_OSC_OSC_COUNT (1)
/* @brief Has external reference clock divider (register bit field DIV[ERPS]). */
#define FSL_FEATURE_OSC_HAS_EXT_REF_CLOCK_DIVIDER (1)

/* PDB module features */

/* @brief Has DAC support. */
#define FSL_FEATURE_PDB_HAS_DAC (1)
/* @brief Has shared interrupt handler (has not individual interrupt handler for each channel). */
#define FSL_FEATURE_PDB_HAS_SHARED_IRQ_HANDLER (0)
/* @brief PDB channel number). */
#define FSL_FEATURE_PDB_CHANNEL_COUNT (2)
/* @brief Channel pre-trigger nunmber (related to number of registers CHmDLYn). */
#define FSL_FEATURE_PDB_CHANNEL_PRE_TRIGGER_COUNT (2)
/* @brief DAC interval trigger number). */
#define FSL_FEATURE_PDB_DAC_INTERVAL_TRIGGER_COUNT (1)
/* @brief Pulse out number). */
#define FSL_FEATURE_PDB_PULSE_OUT_COUNT (2)

/* PIT module features */

/* @brief Number of channels (related to number of registers LDVALn, CVALn, TCTRLn, TFLGn). */
#define FSL_FEATURE_PIT_TIMER_COUNT (4)
/* @brief Has lifetime timer (related to existence of registers LTMR64L and LTMR64H). */
#define FSL_FEATURE_PIT_HAS_LIFETIME_TIMER (0)
/* @brief Has chain mode (related to existence of register bit field TCTRLn[CHN]). */
#define FSL_FEATURE_PIT_HAS_CHAIN_MODE (1)
/* @brief Has shared interrupt handler (has not individual interrupt handler for each channel). */
#define FSL_FEATURE_PIT_HAS_SHARED_IRQ_HANDLER (0)
/* @brief Has timer enable control. */
#define FSL_FEATURE_PIT_HAS_MDIS (1)
/* @brief Has ERRATA 7914. */
#define FSL_FEATURE_PIT_HAS_ERRATA_7914 (0)

/* PMC module features */

/* @brief Has Bandgap Enable In VLPx Operation support. */
#define FSL_FEATURE_PMC_HAS_BGEN (1)
/* @brief Has Bandgap Buffer Enable. */
#define FSL_FEATURE_PMC_HAS_BGBE (1)
/* @brief Has Bandgap Buffer Drive Select. */
#define FSL_FEATURE_PMC_HAS_BGBDS (0)
/* @brief Has Low-Voltage Detect Voltage Select support. */
#define FSL_FEATURE_PMC_HAS_LVDV (1)
/* @brief Has Low-Voltage Warning Voltage Select support. */
#define FSL_FEATURE_PMC_HAS_LVWV (1)
/* @brief Has LPO. */
#define FSL_FEATURE_PMC_HAS_LPO (0)
/* @brief Has VLPx option PMC_REGSC[VLPO]. */
#define FSL_FEATURE_PMC_HAS_VLPO (0)
/* @brief Has acknowledge isolation support. */
#define FSL_FEATURE_PMC_HAS_ACKISO (1)
/* @brief Has Regulator In Full Performance Mode Status Bit PMC_REGSC[REGFPM]. */
#define FSL_FEATURE_PMC_HAS_REGFPM (0)
/* @brief Has Regulator In Run Regulation Status Bit PMC_REGSC[REGONS]. */
#define FSL_FEATURE_PMC_HAS_REGONS (1)
/* @brief Has PMC_HVDSC1. */
#define FSL_FEATURE_PMC_HAS_HVDSC1 (0)
/* @brief Has PMC_PARAM. */
#define FSL_FEATURE_PMC_HAS_PARAM (0)
/* @brief Has PMC_VERID. */
#define FSL_FEATURE_PMC_HAS_VERID (0)

/* PORT module features */

/* @brief Has control lock (register bit PCR[LK]). */
#define FSL_FEATURE_PORT_HAS_PIN_CONTROL_LOCK (1)
/* @brief Has open drain control (register bit PCR[ODE]). */
#define FSL_FEATURE_PORT_HAS_OPEN_DRAIN (1)
/* @brief Has digital filter (registers DFER, DFCR and DFWR). */
#define FSL_FEATURE_PORT_HAS_DIGITAL_FILTER (1)
/* @brief Has DMA request (register bit field PCR[IRQC] values). */
#define FSL_FEATURE_PORT_HAS_DMA_REQUEST (1)
/* @brief Has pull resistor selection available. */
#define FSL_FEATURE_PORT_HAS_PULL_SELECTION (1)
/* @brief Has pull resistor enable (register bit PCR[PE]). */
#define FSL_FEATURE_PORT_HAS_PULL_ENABLE (1)
/* @brief Has slew rate control (register bit PCR[SRE]). */
#define FSL_FEATURE_PORT_HAS_SLEW_RATE (1)
/* @brief Has passive filter (register bit field PCR[PFE]). */
#define FSL_FEATURE_PORT_HAS_PASSIVE_FILTER (1)
/* @brief Has drive strength control (register bit PCR[DSE]). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH (1)
/* @brief Has separate drive strength register (HDRVE). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH_REGISTER (0)
/* @brief Has glitch filter (register IOFLT). */
#define FSL_FEATURE_PORT_HAS_GLITCH_FILTER (0)
/* @brief Defines width of PCR[MUX] field. */
#define FSL_FEATURE_PORT_PCR_MUX_WIDTH (3)
/* @brief Has dedicated interrupt vector. */
#define FSL_FEATURE_PORT_HAS_INTERRUPT_VECTOR (1)
/* @brief Has multiple pin IRQ configuration (register GICLR and GICHR). */
#define FSL_FEATURE_PORT_HAS_MULTIPLE_IRQ_CONFIG (0)
/* @brief Defines whether PCR[IRQC] bit-field has flag states. */
#define FSL_FEATURE_PORT_HAS_IRQC_FLAG (0)
/* @brief Defines whether PCR[IRQC] bit-field has trigger states. */
#define FSL_FEATURE_PORT_HAS_IRQC_TRIGGER (0)

/* RCM module features */

/* @brief Has Loss-of-Lock Reset support. */
#define FSL_FEATURE_RCM_HAS_LOL (0)
/* @brief Has Loss-of-Clock Reset support. */
#define FSL_FEATURE_RCM_HAS_LOC (1)
/* @brief Has JTAG generated Reset support. */
#define FSL_FEATURE_RCM_HAS_JTAG (1)
/* @brief Has EzPort generated Reset support. */
#define FSL_FEATURE_RCM_HAS_EZPORT (0)
/* @brief Has bit-field indicating EZP_MS_B pin state during last reset. */
#define FSL_FEATURE_RCM_HAS_EZPMS (0)
/* @brief Has boot ROM configuration, MR[BOOTROM], FM[FORCEROM] */
#define FSL_FEATURE_RCM_HAS_BOOTROM (0)
/* @brief Has sticky system reset status register RCM_SSRS0 and RCM_SSRS1. */
#define FSL_FEATURE_RCM_HAS_SSRS (1)
/* @brief Has Version ID Register (RCM_VERID). */
#define FSL_FEATURE_RCM_HAS_VERID (0)
/* @brief Has Parameter Register (RCM_PARAM). */
#define FSL_FEATURE_RCM_HAS_PARAM (0)
/* @brief Has Reset Interrupt Enable Register RCM_SRIE. */
#define FSL_FEATURE_RCM_HAS_SRIE (0)
/* @brief Width of registers of the RCM. */
#define FSL_FEATURE_RCM_REG_WIDTH (8)
/* @brief Has Core 1 generated Reset support RCM_SRS[CORE1] */
#define FSL_FEATURE_RCM_HAS_CORE1 (0)
/* @brief Has MDM-AP system reset support RCM_SRS1[MDM_AP] */
#define FSL_FEATURE_RCM_HAS_MDM_AP (1)
/* @brief Has wakeup reset feature. Register bit SRS[WAKEUP]. */
#define FSL_FEATURE_RCM_HAS_WAKEUP (1)

/* SIM module features */

/* @brief Has USB FS divider. */
#define FSL_FEATURE_SIM_USBFS_USE_SPECIAL_DIVIDER (0)
/* @brief Is PLL clock divided by 2 before MCG PLL/FLL clock selection. */
#define FSL_FEATURE_SIM_PLLCLK_USE_SPECIAL_DIVIDER (0)
/* @brief Has RAM size specification (register bit field SOPT1[RAMSIZE]). */
#define FSL_FEATURE_SIM_OPT_HAS_RAMSIZE (1)
/* @brief Has 32k oscillator clock output (register bit SOPT1[OSC32KOUT]). */
#define FSL_FEATURE_SIM_OPT_HAS_OSC32K_OUT (1)
/* @brief Has 32k oscillator clock selection (register bit field SOPT1[OSC32KSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_OSC32K_SELECTION (1)
/* @brief 32k oscillator clock selection width (width of register bit field SOPT1[OSC32KSEL]). */
#define FSL_FEATURE_SIM_OPT_OSC32K_SELECTION_WIDTH (2)
/* @brief Has RTC clock output selection (register bit SOPT2[RTCCLKOUTSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_RTC_CLOCK_OUT_SELECTION (0)
/* @brief Has USB voltage regulator (register bits SOPT1[USBVSTBY], SOPT1[USBSSTBY], SOPT1[USBREGEN], SOPT1CFG[URWE], SOPT1CFG[UVSWE], SOPT1CFG[USSWE]). */
#define FSL_FEATURE_SIM_OPT_HAS_USB_VOLTAGE_REGULATOR (0)
/* @brief USB has integrated PHY (register bits USBPHYCTL[USBVREGSEL], USBPHYCTL[USBVREGPD], USBPHYCTL[USB3VOUTTRG], USBPHYCTL[USBDISILIM], SOPT2[USBSLSRC], SOPT2[USBREGEN]). */
#define FSL_FEATURE_SIM_OPT_HAS_USB_PHY (0)
/* @brief Has PTD7 pad drive strength control (register bit SOPT2[PTD7PAD]). */
#define FSL_FEATURE_SIM_OPT_HAS_PTD7PAD (0)
/* @brief Has FlexBus security level selection (register bit SOPT2[FBSL]). */
#define FSL_FEATURE_SIM_OPT_HAS_FBSL (0)
/* @brief Has number of FlexBus hold cycle before FlexBus can release bus (register bit SOPT6[PCR]). */
#define FSL_FEATURE_SIM_OPT_HAS_PCR (0)
/* @brief Has number of NFC hold cycle in case of FlexBus request (register bit SOPT6[MCC]). */
#define FSL_FEATURE_SIM_OPT_HAS_MCC (0)
/* @brief Has UART open drain enable (register bits UARTnODE, where n is a number, in register SOPT5). */
#define FSL_FEATURE_SIM_OPT_HAS_ODE (0)
/* @brief Number of LPUART modules (number of register bits LPUARTn, where n is a number, in register SCGC5). */
#define FSL_FEATURE_SIM_OPT_LPUART_COUNT (0)
/* @brief Number of UART modules (number of register bits UARTn, where n is a number, in register SCGC4). */
#define FSL_FEATURE_SIM_OPT_UART_COUNT (2)
/* @brief Has UART0 open drain enable (register bit SOPT5[UART0ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_ODE (0)
/* @brief Has UART1 open drain enable (register bit SOPT5[UART1ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_ODE (0)
/* @brief Has UART2 open drain enable (register bit SOPT5[UART2ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART2_ODE (0)
/* @brief Has LPUART0 open drain enable (register bit SOPT5[LPUART0ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_ODE (0)
/* @brief Has LPUART1 open drain enable (register bit SOPT5[LPUART1ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_ODE (0)
/* @brief Has CMT/UART pad drive strength control (register bit SOPT2[CMTUARTPAD]). */
#define FSL_FEATURE_SIM_OPT_HAS_CMTUARTPAD (0)
/* @brief Has LPUART0 transmit data source selection (register bit SOPT5[LPUART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_TX_SRC (0)
/* @brief Has LPUART0 receive data source selection (register bit SOPT5[LPUART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_RX_SRC (0)
/* @brief Has LPUART1 transmit data source selection (register bit SOPT5[LPUART1TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_TX_SRC (0)
/* @brief Has LPUART1 receive data source selection (register bit SOPT5[LPUART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_RX_SRC (0)
/* @brief Has UART0 transmit data source selection (register bit SOPT5[UART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_TX_SRC (1)
/* @brief UART0 transmit data source selection width (width of register bit SOPT5[UART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART0_TX_SRC_WIDTH (2)
/* @brief Has UART0 receive data source selection (register bit SOPT5[UART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_RX_SRC (1)
/* @brief UART0 receive data source selection width (width of register bit SOPT5[UART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART0_RX_SRC_WIDTH (2)
/* @brief Has UART1 transmit data source selection (register bit SOPT5[UART1TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_TX_SRC (1)
/* @brief Has UART1 receive data source selection (register bit SOPT5[UART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_RX_SRC (1)
/* @brief UART1 receive data source selection width (width of register bit SOPT5[UART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART1_RX_SRC_WIDTH (2)
/* @brief Has FTM module(s) configuration. */
#define FSL_FEATURE_SIM_OPT_HAS_FTM (1)
/* @brief Number of FTM modules. */
#define FSL_FEATURE_SIM_OPT_FTM_COUNT (3)
/* @brief Number of FTM triggers with selectable source. */
#define FSL_FEATURE_SIM_OPT_FTM_TRIGGER_COUNT (2)
/* @brief Has FTM0 triggers source selection (register bits SOPT4[FTM0TRGnSRC], where n is a number). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM0_TRIGGER (1)
/* @brief Has FTM3 triggers source selection (register bits SOPT4[FTM3TRGnSRC], where n is a number). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM3_TRIGGER (0)
/* @brief Has FTM1 channel 0 input capture source selection (register bit SOPT4[FTM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM1_CHANNELS (1)
/* @brief Has FTM2 channel 0 input capture source selection (register bit SOPT4[FTM2CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM2_CHANNELS (1)
/* @brief Has FTM3 channel 0 input capture source selection (register bit SOPT4[FTM3CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM3_CHANNELS (0)
/* @brief Has FTM2 channel 1 input capture source selection (register bit SOPT4[FTM2CH1SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM2_CHANNEL1 (1)
/* @brief Number of configurable FTM0 fault detection input (number of register bits SOPT4[FTM0FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM0_FAULT_COUNT (2)
/* @brief Number of configurable FTM1 fault detection input (number of register bits SOPT4[FTM1FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM1_FAULT_COUNT (1)
/* @brief Number of configurable FTM2 fault detection input (number of register bits SOPT4[FTM2FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM2_FAULT_COUNT (1)
/* @brief Number of configurable FTM3 fault detection input (number of register bits SOPT4[FTM3FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM3_FAULT_COUNT (0)
/* @brief Has FTM hardware trigger 0 software synchronization (register bit SOPT8[FTMnSYNCBIT], where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM_TRIGGER_SYNC (1)
/* @brief Has FTM channels output source selection (register bit SOPT8[FTMxOCHnSRC], where x is a module instance index and n is a channel index). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM_CHANNELS_OUTPUT_SRC (1)
/* @brief Has TPM module(s) configuration. */
#define FSL_FEATURE_SIM_OPT_HAS_TPM (0)
/* @brief The highest TPM module index. */
#define FSL_FEATURE_SIM_OPT_MAX_TPM_INDEX (0)
/* @brief Has TPM module with index 0. */
#define FSL_FEATURE_SIM_OPT_HAS_TPM0 (0)
/* @brief Has TPM0 clock selection (register bit field SOPT4[TPM0CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM0_CLK_SEL (0)
/* @brief Is TPM channels configuration in the SOPT4 (not SOPT9) register (register bits TPMnCH0SRC, TPMnCLKSEL, where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM_CHANNELS_CONFIG_IN_SOPT4_REG (0)
/* @brief Has TPM1 channel 0 input capture source selection (register bit field SOPT4[TPM1CH0SRC] or SOPT9[TPM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM1_CH0_SRC_SELECTION (0)
/* @brief Has TPM1 clock selection (register bit field SOPT4[TPM1CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM1_CLK_SEL (0)
/* @brief TPM1 channel 0 input capture source selection width (width of register bit field SOPT4[TPM1CH0SRC] or SOPT9[TPM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_TPM1_CH0_SRC_SELECTION_WIDTH (0)
/* @brief Has TPM2 channel 0 input capture source selection (register bit field SOPT4[TPM2CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM2_CH0_SRC_SELECTION (0)
/* @brief Has TPM2 clock selection (register bit field SOPT4[TPM2CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM2_CLK_SEL (0)
/* @brief Has PLL/FLL clock selection (register bit field SOPT2[PLLFLLSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_PLL_FLL_SELECTION (1)
/* @brief PLL/FLL clock selection width (width of register bit field SOPT2[PLLFLLSEL]). */
#define FSL_FEATURE_SIM_OPT_PLL_FLL_SELECTION_WIDTH (1)
/* @brief Has NFC clock source selection (register bit SOPT2[NFCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_NFCSRC (0)
/* @brief Has eSDHC clock source selection (register bit SOPT2[ESDHCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_ESDHCSRC (0)
/* @brief Has SDHC clock source selection (register bit SOPT2[SDHCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_SDHCSRC (0)
/* @brief Has LCDC clock source selection (register bits SOPT2[LCDCSRC], SOPT2[LCDC_CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_LCDCSRC (0)
/* @brief Has ENET timestamp clock source selection (register bit SOPT2[TIMESRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TIMESRC (0)
/* @brief Has ENET RMII clock source selection (register bit SOPT2[RMIISRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_RMIISRC (0)
/* @brief Has USB clock source selection (register bit SOPT2[USBSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBSRC (0)
/* @brief Has USB FS clock source selection (register bit SOPT2[USBFSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBFSRC (0)
/* @brief Has USB HS clock source selection (register bit SOPT2[USBHSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBHSRC (0)
/* @brief Has LPUART clock source selection (register bit SOPT2[LPUARTSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUARTSRC (0)
/* @brief Has LPUART0 clock source selection (register bit SOPT2[LPUART0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0SRC (0)
/* @brief Has LPUART1 clock source selection (register bit SOPT2[LPUART1SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1SRC (0)
/* @brief Has FLEXIOSRC clock source selection (register bit SOPT2[FLEXIOSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FLEXIOSRC (0)
/* @brief Has UART0 clock source selection (register bit SOPT2[UART0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0SRC (0)
/* @brief Has TPM clock source selection (register bit SOPT2[TPMSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPMSRC (0)
/* @brief Has debug trace clock selection (register bit SOPT2[TRACECLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TRACE_CLKSEL (1)
/* @brief Number of ADC modules (register bits SOPT7[ADCnTRGSEL], SOPT7[ADCnPRETRGSEL], SOPT7[ADCnALTTRGSEL], where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_ADC_COUNT (1)
/* @brief ADC0 alternate trigger enable width (width of bit field ADC0ALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADC0ALTTRGEN_WIDTH (1)
/* @brief ADC1 alternate trigger enable width (width of bit field ADC1ALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADC1ALTTRGEN_WIDTH (0)
/* @brief ADC2 alternate trigger enable width (width of bit field ADC2ALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADC2ALTTRGEN_WIDTH (0)
/* @brief ADC3 alternate trigger enable width (width of bit field ADC3ALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADC3ALTTRGEN_WIDTH (0)
/* @brief HSADC0 converter A alternate trigger enable width (width of bit field HSADC0AALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_HSADC0AALTTRGEN_WIDTH (0)
/* @brief HSADC1 converter A alternate trigger enable width (width of bit field HSADC1AALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_HSADC1AALTTRGEN_WIDTH (0)
/* @brief ADC converter A alternate trigger enable width (width of bit field ADCAALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADCAALTTRGEN_WIDTH (0)
/* @brief HSADC0 converter B alternate trigger enable width (width of bit field HSADC0BALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_HSADC0BALTTRGEN_WIDTH (0)
/* @brief HSADC1 converter B alternate trigger enable width (width of bit field HSADC1BALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_HSADC1BALTTRGEN_WIDTH (0)
/* @brief ADC converter B alternate trigger enable width (width of bit field ADCBALTTRGEN of register SOPT7). */
#define FSL_FEATURE_SIM_OPT_ADCBALTTRGEN_WIDTH (0)
/* @brief Has clock 2 output divider (register bit field CLKDIV1[OUTDIV2]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV2 (1)
/* @brief Has clock 3 output divider (register bit field CLKDIV1[OUTDIV3]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV3 (0)
/* @brief Has clock 4 output divider (register bit field CLKDIV1[OUTDIV4]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV4 (1)
/* @brief Clock 4 output divider width (width of register bit field CLKDIV1[OUTDIV4]). */
#define FSL_FEATURE_SIM_DIVIDER_OUTDIV4_WIDTH (4)
/* @brief Has clock 5 output divider (register bit field CLKDIV1[OUTDIV5]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV5 (0)
/* @brief Has USB clock divider (register bit field CLKDIV2[USBDIV] and CLKDIV2[USBFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBDIV (0)
/* @brief Has USB FS clock divider (register bit field CLKDIV2[USBFSDIV] and CLKDIV2[USBFSFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBFSDIV (0)
/* @brief Has USB HS clock divider (register bit field CLKDIV2[USBHSDIV] and CLKDIV2[USBHSFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBHSDIV (0)
/* @brief Has PLL/FLL clock divider (register bit field CLKDIV3[PLLFLLDIV] and CLKDIV3[PLLFLLFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_PLLFLLDIV (0)
/* @brief Has LCDC clock divider (register bit field CLKDIV3[LCDCDIV] and CLKDIV3[LCDCFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_LCDCDIV (0)
/* @brief Has trace clock divider (register bit field CLKDIV4[TRACEDIV] and CLKDIV4[TRACEFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_TRACEDIV (0)
/* @brief Has NFC clock divider (register bit field CLKDIV4[NFCDIV] and CLKDIV4[NFCFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_NFCDIV (0)
/* @brief Has Kinetis family ID (register bit field SDID[FAMILYID]). */
#define FSL_FEATURE_SIM_SDID_HAS_FAMILYID (1)
/* @brief Has Kinetis family ID (register bit field SDID[FAMID]). */
#define FSL_FEATURE_SIM_SDID_HAS_FAMID (1)
/* @brief Has Kinetis sub-family ID (register bit field SDID[SUBFAMID]). */
#define FSL_FEATURE_SIM_SDID_HAS_SUBFAMID (1)
/* @brief Has Kinetis series ID (register bit field SDID[SERIESID]). */
#define FSL_FEATURE_SIM_SDID_HAS_SERIESID (1)
/* @brief Has device die ID (register bit field SDID[DIEID]). */
#define FSL_FEATURE_SIM_SDID_HAS_DIEID (1)
/* @brief Has system SRAM size specifier (register bit field SDID[SRAMSIZE]). */
#define FSL_FEATURE_SIM_SDID_HAS_SRAMSIZE (0)
/* @brief Has flash mode (register bit FCFG1[FLASHDOZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FLASHDOZE (1)
/* @brief Has flash disable (register bit FCFG1[FLASHDIS]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FLASHDIS (1)
/* @brief Has FTFE disable (register bit FCFG1[FTFDIS]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FTFDIS (0)
/* @brief Has FlexNVM size specifier (register bit field FCFG1[NVMSIZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_NVMSIZE (0)
/* @brief Has EEPROM size specifier (register bit field FCFG1[EESIZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_EESIZE (0)
/* @brief Has FlexNVM partition (register bit field FCFG1[DEPART]). */
#define FSL_FEATURE_SIM_FCFG_HAS_DEPART (0)
/* @brief Maximum flash address block 0 address specifier (register bit field FCFG2[MAXADDR0]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR0 (1)
/* @brief Maximum flash address block 1 address specifier (register bit field FCFG2[MAXADDR1]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR1 (0)
/* @brief Maximum flash address block 0 or 1 address specifier (register bit field FCFG2[MAXADDR01]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR01 (0)
/* @brief Maximum flash address block 2 or 3 address specifier (register bit field FCFG2[MAXADDR23]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR23 (0)
/* @brief Has program flash availability specifier (register bit FCFG2[PFLSH]). */
#define FSL_FEATURE_SIM_FCFG_HAS_PFLSH (0)
/* @brief Has program flash swapping (register bit FCFG2[SWAPPFLSH]). */
#define FSL_FEATURE_SIM_FCFG_HAS_PFLSH_SWAP (0)
/* @brief Has miscellanious control register (register MCR). */
#define FSL_FEATURE_SIM_HAS_MISC_CONTROLS (0)
/* @brief Has COP watchdog (registers COPC and SRVCOP). */
#define FSL_FEATURE_SIM_HAS_COP_WATCHDOG (0)
/* @brief Has COP watchdog stop (register bits COPC[COPSTPEN], COPC[COPDBGEN] and COPC[COPCLKSEL]). */
#define FSL_FEATURE_SIM_HAS_COP_STOP (0)
/* @brief Has LLWU clock gate bit (e.g SIM_SCGC4). */
#define FSL_FEATURE_SIM_HAS_SCGC_LLWU (0)
/* @brief Has UIDH registers. */
#define FSL_FEATURE_SIM_HAS_UIDH (1)
/* @brief Has UIDM registers. */
#define FSL_FEATURE_SIM_HAS_UIDM (0)

/* SMC module features */

/* @brief Has partial stop option (register bit STOPCTRL[PSTOPO]). */
#define FSL_FEATURE_SMC_HAS_PSTOPO (1)
/* @brief Has LPO power option (register bit STOPCTRL[LPOPO]). */
#define FSL_FEATURE_SMC_HAS_LPOPO (0)
/* @brief Has POR power option (register bit STOPCTRL[PORPO] or VLLSCTRL[PORPO]). */
#define FSL_FEATURE_SMC_HAS_PORPO (1)
/* @brief Has low power wakeup on interrupt (register bit PMCTRL[LPWUI]). */
#define FSL_FEATURE_SMC_HAS_LPWUI (0)
/* @brief Has LLS or VLLS mode control (register bit STOPCTRL[LLSM]). */
#define FSL_FEATURE_SMC_HAS_LLS_SUBMODE (1)
/* @brief Has VLLS mode control (register bit VLLSCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_USE_VLLSCTRL_REG (0)
/* @brief Has VLLS mode control (register bit STOPCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_USE_STOPCTRL_VLLSM (0)
/* @brief Has RAM partition 2 power option (register bit STOPCTRL[RAM2PO]). */
#define FSL_FEATURE_SMC_HAS_RAM2_POWER_OPTION (0)
/* @brief Has high speed run mode (register bit PMPROT[AHSRUN]). */
#define FSL_FEATURE_SMC_HAS_HIGH_SPEED_RUN_MODE (1)
/* @brief Has low leakage stop mode (register bit PMPROT[ALLS]). */
#define FSL_FEATURE_SMC_HAS_LOW_LEAKAGE_STOP_MODE (1)
/* @brief Has very low leakage stop mode (register bit PMPROT[AVLLS]). */
#define FSL_FEATURE_SMC_HAS_VERY_LOW_LEAKAGE_STOP_MODE (1)
/* @brief Has stop submode. */
#define FSL_FEATURE_SMC_HAS_SUB_STOP_MODE (1)
/* @brief Has stop submode 0(VLLS0). */
#define FSL_FEATURE_SMC_HAS_STOP_SUBMODE0 (1)
/* @brief Has stop submode 1(VLLS1). */
#define FSL_FEATURE_SMC_HAS_STOP_SUBMODE1 (1)
/* @brief Has stop submode 2(VLLS2). */
#define FSL_FEATURE_SMC_HAS_STOP_SUBMODE2 (1)
/* @brief Has SMC_PARAM. */
#define FSL_FEATURE_SMC_HAS_PARAM (0)
/* @brief Has SMC_VERID. */
#define FSL_FEATURE_SMC_HAS_VERID (0)
/* @brief Has stop abort flag (register bit PMCTRL[STOPA]). */
#define FSL_FEATURE_SMC_HAS_PMCTRL_STOPA (1)
/* @brief Has tamper reset (register bit SRS[TAMPER]). */
#define FSL_FEATURE_SMC_HAS_SRS_TAMPER (0)
/* @brief Has security violation reset (register bit SRS[SECVIO]). */
#define FSL_FEATURE_SMC_HAS_SRS_SECVIO (0)
/* @brief Width of SMC registers. */
#define FSL_FEATURE_SMC_REG_WIDTH (8)

/* DSPI module features */

#if defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN64VFM10)
    /* @brief Receive/transmit FIFO size in number of items. */
    #define FSL_FEATURE_DSPI_FIFO_SIZEn(x) (4)
    /* @brief Maximum transfer data width in bits. */
    #define FSL_FEATURE_DSPI_MAX_DATA_WIDTH (16)
    /* @brief Maximum number of chip select pins. (Reflects the width of register bit field PUSHR[PCS].) */
    #define FSL_FEATURE_DSPI_MAX_CHIP_SELECT_COUNT (6)
    /* @brief Number of chip select pins. */
    #define FSL_FEATURE_DSPI_CHIP_SELECT_COUNT (4)
    /* @brief Number of CTAR registers. */
    #define FSL_FEATURE_DSPI_CTAR_COUNT (2)
    /* @brief Has chip select strobe capability on the PCS5 pin. */
    #define FSL_FEATURE_DSPI_HAS_CHIP_SELECT_STROBE (1)
    /* @brief Has separated TXDATA and CMD FIFOs (register SREX). */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_TXDATA_CMD_FIFO (0)
    /* @brief Has 16-bit data transfer support. */
    #define FSL_FEATURE_DSPI_16BIT_TRANSFERS (1)
    /* @brief Has separate DMA RX and TX requests. */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
#elif defined(CPU_MK02FN128VLF10) || defined(CPU_MK02FN128VLH10) || defined(CPU_MK02FN64VLF10) || defined(CPU_MK02FN64VLH10)
    /* @brief Receive/transmit FIFO size in number of items. */
    #define FSL_FEATURE_DSPI_FIFO_SIZEn(x) (4)
    /* @brief Maximum transfer data width in bits. */
    #define FSL_FEATURE_DSPI_MAX_DATA_WIDTH (16)
    /* @brief Maximum number of chip select pins. (Reflects the width of register bit field PUSHR[PCS].) */
    #define FSL_FEATURE_DSPI_MAX_CHIP_SELECT_COUNT (6)
    /* @brief Number of chip select pins. */
    #define FSL_FEATURE_DSPI_CHIP_SELECT_COUNT (5)
    /* @brief Number of CTAR registers. */
    #define FSL_FEATURE_DSPI_CTAR_COUNT (2)
    /* @brief Has chip select strobe capability on the PCS5 pin. */
    #define FSL_FEATURE_DSPI_HAS_CHIP_SELECT_STROBE (1)
    /* @brief Has separated TXDATA and CMD FIFOs (register SREX). */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_TXDATA_CMD_FIFO (0)
    /* @brief Has 16-bit data transfer support. */
    #define FSL_FEATURE_DSPI_16BIT_TRANSFERS (1)
    /* @brief Has separate DMA RX and TX requests. */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
#endif /* defined(CPU_MK02FN128VFM10) || defined(CPU_MK02FN64VFM10) */

/* SysTick module features */

/* @brief Systick has external reference clock. */
#define FSL_FEATURE_SYSTICK_HAS_EXT_REF (0)
/* @brief Systick external reference clock is core clock divided by this value. */
#define FSL_FEATURE_SYSTICK_EXT_REF_CORE_DIV (0)

/* UART module features */

/* @brief Has receive FIFO overflow detection (bit field CFIFO[RXOFE]). */
#define FSL_FEATURE_UART_HAS_IRQ_EXTENDED_FUNCTIONS (1)
/* @brief Has low power features (can be enabled in wait mode via register bit C1[DOZEEN] or CTRL[DOZEEN] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_LOW_POWER_UART_SUPPORT (0)
/* @brief Has extended data register ED (or extra flags in the DATA register if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_EXTENDED_DATA_REGISTER_FLAGS (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_UART_HAS_FIFO (1)
/* @brief Hardware flow control (RTS, CTS) is supported. */
#define FSL_FEATURE_UART_HAS_MODEM_SUPPORT (1)
/* @brief Infrared (modulation) is supported. */
#define FSL_FEATURE_UART_HAS_IR_SUPPORT (1)
/* @brief 2 bits long stop bit is available. */
#define FSL_FEATURE_UART_HAS_STOP_BIT_CONFIG_SUPPORT (0)
/* @brief If 10-bit mode is supported. */
#define FSL_FEATURE_UART_HAS_10BIT_DATA_SUPPORT (1)
/* @brief Baud rate fine adjustment is available. */
#define FSL_FEATURE_UART_HAS_BAUD_RATE_FINE_ADJUST_SUPPORT (1)
/* @brief Baud rate oversampling is available (has bit fields C4[OSR], C5[BOTHEDGE], C5[RESYNCDIS] or BAUD[OSR], BAUD[BOTHEDGE], BAUD[RESYNCDIS] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_BAUD_RATE_OVER_SAMPLING_SUPPORT (0)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_UART_HAS_RX_RESYNC_SUPPORT (0)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_UART_HAS_BOTH_EDGE_SAMPLING_SUPPORT (0)
/* @brief Peripheral type. */
#define FSL_FEATURE_UART_IS_SCI (0)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_UART_FIFO_SIZEn(x) \
    (((x) == UART0) ? (8) : \
    (((x) == UART1) ? (1) : (-1)))
/* @brief Supports two match addresses to filter incoming frames. */
#define FSL_FEATURE_UART_HAS_ADDRESS_MATCHING (1)
/* @brief Has transmitter/receiver DMA enable bits C5[TDMAE]/C5[RDMAE] (or BAUD[TDMAE]/BAUD[RDMAE] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_DMA_ENABLE (0)
/* @brief Has transmitter/receiver DMA select bits C4[TDMAS]/C4[RDMAS], resp. C5[TDMAS]/C5[RDMAS] if IS_SCI = 0. */
#define FSL_FEATURE_UART_HAS_DMA_SELECT (1)
/* @brief Data character bit order selection is supported (bit field S2[MSBF] or STAT[MSBF] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_BIT_ORDER_SELECT (1)
/* @brief Has smart card (ISO7816 protocol) support and no improved smart card support. */
#define FSL_FEATURE_UART_HAS_SMART_CARD_SUPPORT (0)
/* @brief Has improved smart card (ISO7816 protocol) support. */
#define FSL_FEATURE_UART_HAS_IMPROVED_SMART_CARD_SUPPORT (0)
/* @brief Has local operation network (CEA709.1-B protocol) support. */
#define FSL_FEATURE_UART_HAS_LOCAL_OPERATION_NETWORK_SUPPORT (0)
/* @brief Has 32-bit registers (BAUD, STAT, CTRL, DATA, MATCH, MODIR) instead of 8-bit (BDH, BDL, C1, S1, D, etc.). */
#define FSL_FEATURE_UART_HAS_32BIT_REGISTERS (0)
/* @brief Lin break detect available (has bit BDH[LBKDIE]). */
#define FSL_FEATURE_UART_HAS_LIN_BREAK_DETECT (1)
/* @brief UART stops in Wait mode available (has bit C1[UARTSWAI]). */
#define FSL_FEATURE_UART_HAS_WAIT_MODE_OPERATION (1)
/* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_UART_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)

/* VREF module features */

/* @brief Has chop oscillator (bit TRM[CHOPEN]) */
#define FSL_FEATURE_VREF_HAS_CHOP_OSC (1)
/* @brief Has second order curvature compensation (bit SC[ICOMPEN]) */
#define FSL_FEATURE_VREF_HAS_COMPENSATION (1)
/* @brief If high/low buffer mode supported */
#define FSL_FEATURE_VREF_MODE_LV_TYPE (1)
/* @brief Module has also low reference (registers VREFL/VREFH) */
#define FSL_FEATURE_VREF_HAS_LOW_REFERENCE (0)
/* @brief Has VREF_TRM4. */
#define FSL_FEATURE_VREF_HAS_TRM4 (0)

/* WDOG module features */

/* @brief Watchdog is available. */
#define FSL_FEATURE_WDOG_HAS_WATCHDOG (1)
/* @brief Has Wait mode support. */
#define FSL_FEATURE_WDOG_HAS_WAITEN (1)

#endif /* _MK02F12810_FEATURES_H_ */

