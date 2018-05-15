/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ADC_SAR_1_ADC_SAR */
.set ADC_SAR_1_ADC_SAR__CLK, CYREG_SAR0_CLK
.set ADC_SAR_1_ADC_SAR__CSR0, CYREG_SAR0_CSR0
.set ADC_SAR_1_ADC_SAR__CSR1, CYREG_SAR0_CSR1
.set ADC_SAR_1_ADC_SAR__CSR2, CYREG_SAR0_CSR2
.set ADC_SAR_1_ADC_SAR__CSR3, CYREG_SAR0_CSR3
.set ADC_SAR_1_ADC_SAR__CSR4, CYREG_SAR0_CSR4
.set ADC_SAR_1_ADC_SAR__CSR5, CYREG_SAR0_CSR5
.set ADC_SAR_1_ADC_SAR__CSR6, CYREG_SAR0_CSR6
.set ADC_SAR_1_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_SAR_1_ADC_SAR__PM_ACT_MSK, 0x01
.set ADC_SAR_1_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_SAR_1_ADC_SAR__PM_STBY_MSK, 0x01
.set ADC_SAR_1_ADC_SAR__SW0, CYREG_SAR0_SW0
.set ADC_SAR_1_ADC_SAR__SW2, CYREG_SAR0_SW2
.set ADC_SAR_1_ADC_SAR__SW3, CYREG_SAR0_SW3
.set ADC_SAR_1_ADC_SAR__SW4, CYREG_SAR0_SW4
.set ADC_SAR_1_ADC_SAR__SW6, CYREG_SAR0_SW6
.set ADC_SAR_1_ADC_SAR__TR0, CYREG_SAR0_TR0
.set ADC_SAR_1_ADC_SAR__WRK0, CYREG_SAR0_WRK0
.set ADC_SAR_1_ADC_SAR__WRK1, CYREG_SAR0_WRK1

/* ADC_SAR_1_IRQ */
.set ADC_SAR_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_SAR_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_SAR_1_IRQ__INTC_MASK, 0x01
.set ADC_SAR_1_IRQ__INTC_NUMBER, 0
.set ADC_SAR_1_IRQ__INTC_PRIOR_NUM, 7
.set ADC_SAR_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_SAR_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_SAR_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_SAR_1_theACLK */
.set ADC_SAR_1_theACLK__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set ADC_SAR_1_theACLK__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set ADC_SAR_1_theACLK__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set ADC_SAR_1_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_SAR_1_theACLK__INDEX, 0x02
.set ADC_SAR_1_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_SAR_1_theACLK__PM_ACT_MSK, 0x04
.set ADC_SAR_1_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_SAR_1_theACLK__PM_STBY_MSK, 0x04

/* ADC_SAR_2_ADC_SAR */
.set ADC_SAR_2_ADC_SAR__CLK, CYREG_SAR1_CLK
.set ADC_SAR_2_ADC_SAR__CSR0, CYREG_SAR1_CSR0
.set ADC_SAR_2_ADC_SAR__CSR1, CYREG_SAR1_CSR1
.set ADC_SAR_2_ADC_SAR__CSR2, CYREG_SAR1_CSR2
.set ADC_SAR_2_ADC_SAR__CSR3, CYREG_SAR1_CSR3
.set ADC_SAR_2_ADC_SAR__CSR4, CYREG_SAR1_CSR4
.set ADC_SAR_2_ADC_SAR__CSR5, CYREG_SAR1_CSR5
.set ADC_SAR_2_ADC_SAR__CSR6, CYREG_SAR1_CSR6
.set ADC_SAR_2_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_SAR_2_ADC_SAR__PM_ACT_MSK, 0x02
.set ADC_SAR_2_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_SAR_2_ADC_SAR__PM_STBY_MSK, 0x02
.set ADC_SAR_2_ADC_SAR__SW0, CYREG_SAR1_SW0
.set ADC_SAR_2_ADC_SAR__SW2, CYREG_SAR1_SW2
.set ADC_SAR_2_ADC_SAR__SW3, CYREG_SAR1_SW3
.set ADC_SAR_2_ADC_SAR__SW4, CYREG_SAR1_SW4
.set ADC_SAR_2_ADC_SAR__SW6, CYREG_SAR1_SW6
.set ADC_SAR_2_ADC_SAR__TR0, CYREG_SAR1_TR0
.set ADC_SAR_2_ADC_SAR__WRK0, CYREG_SAR1_WRK0
.set ADC_SAR_2_ADC_SAR__WRK1, CYREG_SAR1_WRK1

/* ADC_SAR_2_IRQ */
.set ADC_SAR_2_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_SAR_2_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_SAR_2_IRQ__INTC_MASK, 0x02
.set ADC_SAR_2_IRQ__INTC_NUMBER, 1
.set ADC_SAR_2_IRQ__INTC_PRIOR_NUM, 7
.set ADC_SAR_2_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set ADC_SAR_2_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_SAR_2_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_SAR_2_theACLK */
.set ADC_SAR_2_theACLK__CFG0, CYREG_CLKDIST_DCFG3_CFG0
.set ADC_SAR_2_theACLK__CFG1, CYREG_CLKDIST_DCFG3_CFG1
.set ADC_SAR_2_theACLK__CFG2, CYREG_CLKDIST_DCFG3_CFG2
.set ADC_SAR_2_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_SAR_2_theACLK__INDEX, 0x03
.set ADC_SAR_2_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_SAR_2_theACLK__PM_ACT_MSK, 0x08
.set ADC_SAR_2_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_SAR_2_theACLK__PM_STBY_MSK, 0x08

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__INDEX, 0x01
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_2__PM_ACT_MSK, 0x02
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_2__PM_STBY_MSK, 0x02

/* Enc_A_P0_1 */
.set Enc_A_P0_1__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set Enc_A_P0_1__0__MASK, 0x02
.set Enc_A_P0_1__0__PC, CYREG_PRT0_PC1
.set Enc_A_P0_1__0__PORT, 0
.set Enc_A_P0_1__0__SHIFT, 1
.set Enc_A_P0_1__AG, CYREG_PRT0_AG
.set Enc_A_P0_1__AMUX, CYREG_PRT0_AMUX
.set Enc_A_P0_1__BIE, CYREG_PRT0_BIE
.set Enc_A_P0_1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Enc_A_P0_1__BYP, CYREG_PRT0_BYP
.set Enc_A_P0_1__CTL, CYREG_PRT0_CTL
.set Enc_A_P0_1__DM0, CYREG_PRT0_DM0
.set Enc_A_P0_1__DM1, CYREG_PRT0_DM1
.set Enc_A_P0_1__DM2, CYREG_PRT0_DM2
.set Enc_A_P0_1__DR, CYREG_PRT0_DR
.set Enc_A_P0_1__INP_DIS, CYREG_PRT0_INP_DIS
.set Enc_A_P0_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Enc_A_P0_1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Enc_A_P0_1__LCD_EN, CYREG_PRT0_LCD_EN
.set Enc_A_P0_1__MASK, 0x02
.set Enc_A_P0_1__PORT, 0
.set Enc_A_P0_1__PRT, CYREG_PRT0_PRT
.set Enc_A_P0_1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Enc_A_P0_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Enc_A_P0_1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Enc_A_P0_1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Enc_A_P0_1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Enc_A_P0_1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Enc_A_P0_1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Enc_A_P0_1__PS, CYREG_PRT0_PS
.set Enc_A_P0_1__SHIFT, 1
.set Enc_A_P0_1__SLW, CYREG_PRT0_SLW

/* Enc_B_P0_2 */
.set Enc_B_P0_2__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set Enc_B_P0_2__0__MASK, 0x04
.set Enc_B_P0_2__0__PC, CYREG_PRT0_PC2
.set Enc_B_P0_2__0__PORT, 0
.set Enc_B_P0_2__0__SHIFT, 2
.set Enc_B_P0_2__AG, CYREG_PRT0_AG
.set Enc_B_P0_2__AMUX, CYREG_PRT0_AMUX
.set Enc_B_P0_2__BIE, CYREG_PRT0_BIE
.set Enc_B_P0_2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Enc_B_P0_2__BYP, CYREG_PRT0_BYP
.set Enc_B_P0_2__CTL, CYREG_PRT0_CTL
.set Enc_B_P0_2__DM0, CYREG_PRT0_DM0
.set Enc_B_P0_2__DM1, CYREG_PRT0_DM1
.set Enc_B_P0_2__DM2, CYREG_PRT0_DM2
.set Enc_B_P0_2__DR, CYREG_PRT0_DR
.set Enc_B_P0_2__INP_DIS, CYREG_PRT0_INP_DIS
.set Enc_B_P0_2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Enc_B_P0_2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Enc_B_P0_2__LCD_EN, CYREG_PRT0_LCD_EN
.set Enc_B_P0_2__MASK, 0x04
.set Enc_B_P0_2__PORT, 0
.set Enc_B_P0_2__PRT, CYREG_PRT0_PRT
.set Enc_B_P0_2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Enc_B_P0_2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Enc_B_P0_2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Enc_B_P0_2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Enc_B_P0_2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Enc_B_P0_2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Enc_B_P0_2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Enc_B_P0_2__PS, CYREG_PRT0_PS
.set Enc_B_P0_2__SHIFT, 2
.set Enc_B_P0_2__SLW, CYREG_PRT0_SLW

/* LCD_Char_1_LCDPort */
.set LCD_Char_1_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_Char_1_LCDPort__0__MASK, 0x01
.set LCD_Char_1_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_Char_1_LCDPort__0__PORT, 2
.set LCD_Char_1_LCDPort__0__SHIFT, 0
.set LCD_Char_1_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_Char_1_LCDPort__1__MASK, 0x02
.set LCD_Char_1_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_Char_1_LCDPort__1__PORT, 2
.set LCD_Char_1_LCDPort__1__SHIFT, 1
.set LCD_Char_1_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_Char_1_LCDPort__2__MASK, 0x04
.set LCD_Char_1_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_Char_1_LCDPort__2__PORT, 2
.set LCD_Char_1_LCDPort__2__SHIFT, 2
.set LCD_Char_1_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_Char_1_LCDPort__3__MASK, 0x08
.set LCD_Char_1_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_Char_1_LCDPort__3__PORT, 2
.set LCD_Char_1_LCDPort__3__SHIFT, 3
.set LCD_Char_1_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_Char_1_LCDPort__4__MASK, 0x10
.set LCD_Char_1_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_Char_1_LCDPort__4__PORT, 2
.set LCD_Char_1_LCDPort__4__SHIFT, 4
.set LCD_Char_1_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_Char_1_LCDPort__5__MASK, 0x20
.set LCD_Char_1_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_Char_1_LCDPort__5__PORT, 2
.set LCD_Char_1_LCDPort__5__SHIFT, 5
.set LCD_Char_1_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_Char_1_LCDPort__6__MASK, 0x40
.set LCD_Char_1_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_Char_1_LCDPort__6__PORT, 2
.set LCD_Char_1_LCDPort__6__SHIFT, 6
.set LCD_Char_1_LCDPort__AG, CYREG_PRT2_AG
.set LCD_Char_1_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_Char_1_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_Char_1_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_Char_1_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_Char_1_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_Char_1_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_Char_1_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_Char_1_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_Char_1_LCDPort__DR, CYREG_PRT2_DR
.set LCD_Char_1_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_Char_1_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_Char_1_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_Char_1_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_Char_1_LCDPort__MASK, 0x7F
.set LCD_Char_1_LCDPort__PORT, 2
.set LCD_Char_1_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_Char_1_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_Char_1_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_Char_1_LCDPort__PS, CYREG_PRT2_PS
.set LCD_Char_1_LCDPort__SHIFT, 0
.set LCD_Char_1_LCDPort__SLW, CYREG_PRT2_SLW

/* PWM_1 */
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB05_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB05_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB05_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWM_1_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B1_UDB05_06_ST
.set PWM_1_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWM_1_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWM_1_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWM_1_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWM_1_PWMUDB_genblk8_stsreg__MASK, 0x0D
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B1_UDB05_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B1_UDB05_ST
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB04_05_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB04_05_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB04_05_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB04_05_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB04_05_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB04_05_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB04_A0_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B1_UDB04_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B1_UDB04_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB04_D0_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B1_UDB04_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B1_UDB04_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB04_F0_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B1_UDB04_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B1_UDB04_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_B1_UDB05_06_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_B1_UDB05_06_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_B1_UDB05_06_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_B1_UDB05_06_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_B1_UDB05_06_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_B1_UDB05_06_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B1_UDB05_A0_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B1_UDB05_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B1_UDB05_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B1_UDB05_D0_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B1_UDB05_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B1_UDB05_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B1_UDB05_F0_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B1_UDB05_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B1_UDB05_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL

/* Pin_3_0 */
.set Pin_3_0__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set Pin_3_0__0__MASK, 0x01
.set Pin_3_0__0__PC, CYREG_PRT3_PC0
.set Pin_3_0__0__PORT, 3
.set Pin_3_0__0__SHIFT, 0
.set Pin_3_0__AG, CYREG_PRT3_AG
.set Pin_3_0__AMUX, CYREG_PRT3_AMUX
.set Pin_3_0__BIE, CYREG_PRT3_BIE
.set Pin_3_0__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Pin_3_0__BYP, CYREG_PRT3_BYP
.set Pin_3_0__CTL, CYREG_PRT3_CTL
.set Pin_3_0__DM0, CYREG_PRT3_DM0
.set Pin_3_0__DM1, CYREG_PRT3_DM1
.set Pin_3_0__DM2, CYREG_PRT3_DM2
.set Pin_3_0__DR, CYREG_PRT3_DR
.set Pin_3_0__INP_DIS, CYREG_PRT3_INP_DIS
.set Pin_3_0__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Pin_3_0__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Pin_3_0__LCD_EN, CYREG_PRT3_LCD_EN
.set Pin_3_0__MASK, 0x01
.set Pin_3_0__PORT, 3
.set Pin_3_0__PRT, CYREG_PRT3_PRT
.set Pin_3_0__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Pin_3_0__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Pin_3_0__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Pin_3_0__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Pin_3_0__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Pin_3_0__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Pin_3_0__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Pin_3_0__PS, CYREG_PRT3_PS
.set Pin_3_0__SHIFT, 0
.set Pin_3_0__SLW, CYREG_PRT3_SLW

/* QuadDec_1 */
.set QuadDec_1_bQuadDec_Stsreg__0__MASK, 0x01
.set QuadDec_1_bQuadDec_Stsreg__0__POS, 0
.set QuadDec_1_bQuadDec_Stsreg__1__MASK, 0x02
.set QuadDec_1_bQuadDec_Stsreg__1__POS, 1
.set QuadDec_1_bQuadDec_Stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB05_06_ACTL
.set QuadDec_1_bQuadDec_Stsreg__16BIT_STATUS_REG, CYREG_B0_UDB05_06_ST
.set QuadDec_1_bQuadDec_Stsreg__2__MASK, 0x04
.set QuadDec_1_bQuadDec_Stsreg__2__POS, 2
.set QuadDec_1_bQuadDec_Stsreg__3__MASK, 0x08
.set QuadDec_1_bQuadDec_Stsreg__3__POS, 3
.set QuadDec_1_bQuadDec_Stsreg__MASK, 0x0F
.set QuadDec_1_bQuadDec_Stsreg__MASK_REG, CYREG_B0_UDB05_MSK
.set QuadDec_1_bQuadDec_Stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB05_ACTL
.set QuadDec_1_bQuadDec_Stsreg__STATUS_REG, CYREG_B0_UDB05_ST
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG, CYREG_B0_UDB02_03_A0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG, CYREG_B0_UDB02_03_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG, CYREG_B0_UDB02_03_D0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG, CYREG_B0_UDB02_03_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG, CYREG_B0_UDB02_03_F0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG, CYREG_B0_UDB02_03_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__A0_A1_REG, CYREG_B0_UDB02_A0_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__A0_REG, CYREG_B0_UDB02_A0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__A1_REG, CYREG_B0_UDB02_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__D0_D1_REG, CYREG_B0_UDB02_D0_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__D0_REG, CYREG_B0_UDB02_D0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__D1_REG, CYREG_B0_UDB02_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__F0_F1_REG, CYREG_B0_UDB02_F0_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__F0_REG, CYREG_B0_UDB02_F0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u0__F1_REG, CYREG_B0_UDB02_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A0_REG, CYREG_B0_UDB03_04_A0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A1_REG, CYREG_B0_UDB03_04_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D0_REG, CYREG_B0_UDB03_04_D0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D1_REG, CYREG_B0_UDB03_04_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F0_REG, CYREG_B0_UDB03_04_F0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F1_REG, CYREG_B0_UDB03_04_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__A0_A1_REG, CYREG_B0_UDB03_A0_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__A0_REG, CYREG_B0_UDB03_A0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__A1_REG, CYREG_B0_UDB03_A1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__D0_D1_REG, CYREG_B0_UDB03_D0_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__D0_REG, CYREG_B0_UDB03_D0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__D1_REG, CYREG_B0_UDB03_D1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__F0_F1_REG, CYREG_B0_UDB03_F0_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__F0_REG, CYREG_B0_UDB03_F0
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__F1_REG, CYREG_B0_UDB03_F1
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sC16_counterdp_u1__PER_DP_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB03_04_MSK
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB03_04_MSK
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__MASK, 0x80
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__POS, 7
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG, CYREG_B0_UDB03_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB03_ST_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG, CYREG_B0_UDB03_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB03_ST_CTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK, 0x80
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG, CYREG_B0_UDB03_MSK
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__0__MASK, 0x01
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__0__POS, 0
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__1__MASK, 0x02
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__1__POS, 1
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB04_05_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB04_05_ST
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__2__MASK, 0x04
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__2__POS, 2
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__3__MASK, 0x08
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__3__POS, 3
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__5__MASK, 0x20
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__5__POS, 5
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__6__MASK, 0x40
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__6__POS, 6
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__MASK, 0x6F
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__MASK_REG, CYREG_B0_UDB04_MSK
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB04_ACTL
.set QuadDec_1_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_REG, CYREG_B0_UDB04_ST

/* VDAC8_1 */
.set VDAC8_1_viDAC8__CR0, CYREG_DAC3_CR0
.set VDAC8_1_viDAC8__CR1, CYREG_DAC3_CR1
.set VDAC8_1_viDAC8__D, CYREG_DAC3_D
.set VDAC8_1_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set VDAC8_1_viDAC8__PM_ACT_MSK, 0x08
.set VDAC8_1_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set VDAC8_1_viDAC8__PM_STBY_MSK, 0x08
.set VDAC8_1_viDAC8__STROBE, CYREG_DAC3_STROBE
.set VDAC8_1_viDAC8__SW0, CYREG_DAC3_SW0
.set VDAC8_1_viDAC8__SW2, CYREG_DAC3_SW2
.set VDAC8_1_viDAC8__SW3, CYREG_DAC3_SW3
.set VDAC8_1_viDAC8__SW4, CYREG_DAC3_SW4
.set VDAC8_1_viDAC8__TR, CYREG_DAC3_TR
.set VDAC8_1_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC3_M1
.set VDAC8_1_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC3_M2
.set VDAC8_1_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC3_M3
.set VDAC8_1_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC3_M4
.set VDAC8_1_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC3_M5
.set VDAC8_1_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC3_M6
.set VDAC8_1_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC3_M7
.set VDAC8_1_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC3_M8
.set VDAC8_1_viDAC8__TST, CYREG_DAC3_TST

/* VDAC8_2 */
.set VDAC8_2_viDAC8__CR0, CYREG_DAC2_CR0
.set VDAC8_2_viDAC8__CR1, CYREG_DAC2_CR1
.set VDAC8_2_viDAC8__D, CYREG_DAC2_D
.set VDAC8_2_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set VDAC8_2_viDAC8__PM_ACT_MSK, 0x04
.set VDAC8_2_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set VDAC8_2_viDAC8__PM_STBY_MSK, 0x04
.set VDAC8_2_viDAC8__STROBE, CYREG_DAC2_STROBE
.set VDAC8_2_viDAC8__SW0, CYREG_DAC2_SW0
.set VDAC8_2_viDAC8__SW2, CYREG_DAC2_SW2
.set VDAC8_2_viDAC8__SW3, CYREG_DAC2_SW3
.set VDAC8_2_viDAC8__SW4, CYREG_DAC2_SW4
.set VDAC8_2_viDAC8__TR, CYREG_DAC2_TR
.set VDAC8_2_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC2_M1
.set VDAC8_2_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC2_M2
.set VDAC8_2_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC2_M3
.set VDAC8_2_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC2_M4
.set VDAC8_2_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC2_M5
.set VDAC8_2_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC2_M6
.set VDAC8_2_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC2_M7
.set VDAC8_2_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC2_M8
.set VDAC8_2_viDAC8__TST, CYREG_DAC2_TST

/* isr_1 */
.set isr_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_1__INTC_MASK, 0x04
.set isr_1__INTC_NUMBER, 2
.set isr_1__INTC_PRIOR_NUM, 7
.set isr_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set isr_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* p0_0 */
.set p0_0__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set p0_0__0__MASK, 0x01
.set p0_0__0__PC, CYREG_PRT0_PC0
.set p0_0__0__PORT, 0
.set p0_0__0__SHIFT, 0
.set p0_0__AG, CYREG_PRT0_AG
.set p0_0__AMUX, CYREG_PRT0_AMUX
.set p0_0__BIE, CYREG_PRT0_BIE
.set p0_0__BIT_MASK, CYREG_PRT0_BIT_MASK
.set p0_0__BYP, CYREG_PRT0_BYP
.set p0_0__CTL, CYREG_PRT0_CTL
.set p0_0__DM0, CYREG_PRT0_DM0
.set p0_0__DM1, CYREG_PRT0_DM1
.set p0_0__DM2, CYREG_PRT0_DM2
.set p0_0__DR, CYREG_PRT0_DR
.set p0_0__INP_DIS, CYREG_PRT0_INP_DIS
.set p0_0__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set p0_0__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set p0_0__LCD_EN, CYREG_PRT0_LCD_EN
.set p0_0__MASK, 0x01
.set p0_0__PORT, 0
.set p0_0__PRT, CYREG_PRT0_PRT
.set p0_0__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set p0_0__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set p0_0__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set p0_0__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set p0_0__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set p0_0__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set p0_0__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set p0_0__PS, CYREG_PRT0_PS
.set p0_0__SHIFT, 0
.set p0_0__SLW, CYREG_PRT0_SLW

/* p0_6 */
.set p0_6__0__INTTYPE, CYREG_PICU0_INTTYPE6
.set p0_6__0__MASK, 0x40
.set p0_6__0__PC, CYREG_PRT0_PC6
.set p0_6__0__PORT, 0
.set p0_6__0__SHIFT, 6
.set p0_6__AG, CYREG_PRT0_AG
.set p0_6__AMUX, CYREG_PRT0_AMUX
.set p0_6__BIE, CYREG_PRT0_BIE
.set p0_6__BIT_MASK, CYREG_PRT0_BIT_MASK
.set p0_6__BYP, CYREG_PRT0_BYP
.set p0_6__CTL, CYREG_PRT0_CTL
.set p0_6__DM0, CYREG_PRT0_DM0
.set p0_6__DM1, CYREG_PRT0_DM1
.set p0_6__DM2, CYREG_PRT0_DM2
.set p0_6__DR, CYREG_PRT0_DR
.set p0_6__INP_DIS, CYREG_PRT0_INP_DIS
.set p0_6__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set p0_6__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set p0_6__LCD_EN, CYREG_PRT0_LCD_EN
.set p0_6__MASK, 0x40
.set p0_6__PORT, 0
.set p0_6__PRT, CYREG_PRT0_PRT
.set p0_6__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set p0_6__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set p0_6__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set p0_6__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set p0_6__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set p0_6__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set p0_6__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set p0_6__PS, CYREG_PRT0_PS
.set p0_6__SHIFT, 6
.set p0_6__SLW, CYREG_PRT0_SLW

/* p3_4 */
.set p3_4__0__INTTYPE, CYREG_PICU3_INTTYPE4
.set p3_4__0__MASK, 0x10
.set p3_4__0__PC, CYREG_PRT3_PC4
.set p3_4__0__PORT, 3
.set p3_4__0__SHIFT, 4
.set p3_4__AG, CYREG_PRT3_AG
.set p3_4__AMUX, CYREG_PRT3_AMUX
.set p3_4__BIE, CYREG_PRT3_BIE
.set p3_4__BIT_MASK, CYREG_PRT3_BIT_MASK
.set p3_4__BYP, CYREG_PRT3_BYP
.set p3_4__CTL, CYREG_PRT3_CTL
.set p3_4__DM0, CYREG_PRT3_DM0
.set p3_4__DM1, CYREG_PRT3_DM1
.set p3_4__DM2, CYREG_PRT3_DM2
.set p3_4__DR, CYREG_PRT3_DR
.set p3_4__INP_DIS, CYREG_PRT3_INP_DIS
.set p3_4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set p3_4__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set p3_4__LCD_EN, CYREG_PRT3_LCD_EN
.set p3_4__MASK, 0x10
.set p3_4__PORT, 3
.set p3_4__PRT, CYREG_PRT3_PRT
.set p3_4__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set p3_4__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set p3_4__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set p3_4__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set p3_4__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set p3_4__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set p3_4__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set p3_4__PS, CYREG_PRT3_PS
.set p3_4__SHIFT, 4
.set p3_4__SLW, CYREG_PRT3_SLW

/* p3_5 */
.set p3_5__0__INTTYPE, CYREG_PICU3_INTTYPE5
.set p3_5__0__MASK, 0x20
.set p3_5__0__PC, CYREG_PRT3_PC5
.set p3_5__0__PORT, 3
.set p3_5__0__SHIFT, 5
.set p3_5__AG, CYREG_PRT3_AG
.set p3_5__AMUX, CYREG_PRT3_AMUX
.set p3_5__BIE, CYREG_PRT3_BIE
.set p3_5__BIT_MASK, CYREG_PRT3_BIT_MASK
.set p3_5__BYP, CYREG_PRT3_BYP
.set p3_5__CTL, CYREG_PRT3_CTL
.set p3_5__DM0, CYREG_PRT3_DM0
.set p3_5__DM1, CYREG_PRT3_DM1
.set p3_5__DM2, CYREG_PRT3_DM2
.set p3_5__DR, CYREG_PRT3_DR
.set p3_5__INP_DIS, CYREG_PRT3_INP_DIS
.set p3_5__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set p3_5__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set p3_5__LCD_EN, CYREG_PRT3_LCD_EN
.set p3_5__MASK, 0x20
.set p3_5__PORT, 3
.set p3_5__PRT, CYREG_PRT3_PRT
.set p3_5__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set p3_5__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set p3_5__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set p3_5__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set p3_5__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set p3_5__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set p3_5__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set p3_5__PS, CYREG_PRT3_PS
.set p3_5__SHIFT, 5
.set p3_5__SLW, CYREG_PRT3_SLW

/* p3_6 */
.set p3_6__0__INTTYPE, CYREG_PICU3_INTTYPE6
.set p3_6__0__MASK, 0x40
.set p3_6__0__PC, CYREG_PRT3_PC6
.set p3_6__0__PORT, 3
.set p3_6__0__SHIFT, 6
.set p3_6__AG, CYREG_PRT3_AG
.set p3_6__AMUX, CYREG_PRT3_AMUX
.set p3_6__BIE, CYREG_PRT3_BIE
.set p3_6__BIT_MASK, CYREG_PRT3_BIT_MASK
.set p3_6__BYP, CYREG_PRT3_BYP
.set p3_6__CTL, CYREG_PRT3_CTL
.set p3_6__DM0, CYREG_PRT3_DM0
.set p3_6__DM1, CYREG_PRT3_DM1
.set p3_6__DM2, CYREG_PRT3_DM2
.set p3_6__DR, CYREG_PRT3_DR
.set p3_6__INP_DIS, CYREG_PRT3_INP_DIS
.set p3_6__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set p3_6__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set p3_6__LCD_EN, CYREG_PRT3_LCD_EN
.set p3_6__MASK, 0x40
.set p3_6__PORT, 3
.set p3_6__PRT, CYREG_PRT3_PRT
.set p3_6__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set p3_6__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set p3_6__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set p3_6__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set p3_6__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set p3_6__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set p3_6__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set p3_6__PS, CYREG_PRT3_PS
.set p3_6__SHIFT, 6
.set p3_6__SLW, CYREG_PRT3_SLW

/* p3_7 */
.set p3_7__0__INTTYPE, CYREG_PICU3_INTTYPE7
.set p3_7__0__MASK, 0x80
.set p3_7__0__PC, CYREG_PRT3_PC7
.set p3_7__0__PORT, 3
.set p3_7__0__SHIFT, 7
.set p3_7__AG, CYREG_PRT3_AG
.set p3_7__AMUX, CYREG_PRT3_AMUX
.set p3_7__BIE, CYREG_PRT3_BIE
.set p3_7__BIT_MASK, CYREG_PRT3_BIT_MASK
.set p3_7__BYP, CYREG_PRT3_BYP
.set p3_7__CTL, CYREG_PRT3_CTL
.set p3_7__DM0, CYREG_PRT3_DM0
.set p3_7__DM1, CYREG_PRT3_DM1
.set p3_7__DM2, CYREG_PRT3_DM2
.set p3_7__DR, CYREG_PRT3_DR
.set p3_7__INP_DIS, CYREG_PRT3_INP_DIS
.set p3_7__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set p3_7__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set p3_7__LCD_EN, CYREG_PRT3_LCD_EN
.set p3_7__MASK, 0x80
.set p3_7__PORT, 3
.set p3_7__PRT, CYREG_PRT3_PRT
.set p3_7__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set p3_7__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set p3_7__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set p3_7__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set p3_7__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set p3_7__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set p3_7__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set p3_7__PS, CYREG_PRT3_PS
.set p3_7__SHIFT, 7
.set p3_7__SLW, CYREG_PRT3_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 16
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 16
.set CYDEV_CHIP_MEMBER_4D, 12
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 17
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 15
.set CYDEV_CHIP_MEMBER_4I, 21
.set CYDEV_CHIP_MEMBER_4J, 13
.set CYDEV_CHIP_MEMBER_4K, 14
.set CYDEV_CHIP_MEMBER_4L, 20
.set CYDEV_CHIP_MEMBER_4M, 19
.set CYDEV_CHIP_MEMBER_4N, 9
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 18
.set CYDEV_CHIP_MEMBER_4Q, 11
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 22
.set CYDEV_CHIP_MEMBER_FM3, 26
.set CYDEV_CHIP_MEMBER_FM4, 27
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 23
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 24
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 25
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 0
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000007
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif