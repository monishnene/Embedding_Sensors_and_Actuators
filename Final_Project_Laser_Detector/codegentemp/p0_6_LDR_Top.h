/*******************************************************************************
* File Name: p0_6_LDR_Top.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_p0_6_LDR_Top_H) /* Pins p0_6_LDR_Top_H */
#define CY_PINS_p0_6_LDR_Top_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "p0_6_LDR_Top_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 p0_6_LDR_Top__PORT == 15 && ((p0_6_LDR_Top__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    p0_6_LDR_Top_Write(uint8 value);
void    p0_6_LDR_Top_SetDriveMode(uint8 mode);
uint8   p0_6_LDR_Top_ReadDataReg(void);
uint8   p0_6_LDR_Top_Read(void);
void    p0_6_LDR_Top_SetInterruptMode(uint16 position, uint16 mode);
uint8   p0_6_LDR_Top_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the p0_6_LDR_Top_SetDriveMode() function.
     *  @{
     */
        #define p0_6_LDR_Top_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define p0_6_LDR_Top_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define p0_6_LDR_Top_DM_RES_UP          PIN_DM_RES_UP
        #define p0_6_LDR_Top_DM_RES_DWN         PIN_DM_RES_DWN
        #define p0_6_LDR_Top_DM_OD_LO           PIN_DM_OD_LO
        #define p0_6_LDR_Top_DM_OD_HI           PIN_DM_OD_HI
        #define p0_6_LDR_Top_DM_STRONG          PIN_DM_STRONG
        #define p0_6_LDR_Top_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define p0_6_LDR_Top_MASK               p0_6_LDR_Top__MASK
#define p0_6_LDR_Top_SHIFT              p0_6_LDR_Top__SHIFT
#define p0_6_LDR_Top_WIDTH              1u

/* Interrupt constants */
#if defined(p0_6_LDR_Top__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in p0_6_LDR_Top_SetInterruptMode() function.
     *  @{
     */
        #define p0_6_LDR_Top_INTR_NONE      (uint16)(0x0000u)
        #define p0_6_LDR_Top_INTR_RISING    (uint16)(0x0001u)
        #define p0_6_LDR_Top_INTR_FALLING   (uint16)(0x0002u)
        #define p0_6_LDR_Top_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define p0_6_LDR_Top_INTR_MASK      (0x01u) 
#endif /* (p0_6_LDR_Top__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define p0_6_LDR_Top_PS                     (* (reg8 *) p0_6_LDR_Top__PS)
/* Data Register */
#define p0_6_LDR_Top_DR                     (* (reg8 *) p0_6_LDR_Top__DR)
/* Port Number */
#define p0_6_LDR_Top_PRT_NUM                (* (reg8 *) p0_6_LDR_Top__PRT) 
/* Connect to Analog Globals */                                                  
#define p0_6_LDR_Top_AG                     (* (reg8 *) p0_6_LDR_Top__AG)                       
/* Analog MUX bux enable */
#define p0_6_LDR_Top_AMUX                   (* (reg8 *) p0_6_LDR_Top__AMUX) 
/* Bidirectional Enable */                                                        
#define p0_6_LDR_Top_BIE                    (* (reg8 *) p0_6_LDR_Top__BIE)
/* Bit-mask for Aliased Register Access */
#define p0_6_LDR_Top_BIT_MASK               (* (reg8 *) p0_6_LDR_Top__BIT_MASK)
/* Bypass Enable */
#define p0_6_LDR_Top_BYP                    (* (reg8 *) p0_6_LDR_Top__BYP)
/* Port wide control signals */                                                   
#define p0_6_LDR_Top_CTL                    (* (reg8 *) p0_6_LDR_Top__CTL)
/* Drive Modes */
#define p0_6_LDR_Top_DM0                    (* (reg8 *) p0_6_LDR_Top__DM0) 
#define p0_6_LDR_Top_DM1                    (* (reg8 *) p0_6_LDR_Top__DM1)
#define p0_6_LDR_Top_DM2                    (* (reg8 *) p0_6_LDR_Top__DM2) 
/* Input Buffer Disable Override */
#define p0_6_LDR_Top_INP_DIS                (* (reg8 *) p0_6_LDR_Top__INP_DIS)
/* LCD Common or Segment Drive */
#define p0_6_LDR_Top_LCD_COM_SEG            (* (reg8 *) p0_6_LDR_Top__LCD_COM_SEG)
/* Enable Segment LCD */
#define p0_6_LDR_Top_LCD_EN                 (* (reg8 *) p0_6_LDR_Top__LCD_EN)
/* Slew Rate Control */
#define p0_6_LDR_Top_SLW                    (* (reg8 *) p0_6_LDR_Top__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define p0_6_LDR_Top_PRTDSI__CAPS_SEL       (* (reg8 *) p0_6_LDR_Top__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define p0_6_LDR_Top_PRTDSI__DBL_SYNC_IN    (* (reg8 *) p0_6_LDR_Top__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define p0_6_LDR_Top_PRTDSI__OE_SEL0        (* (reg8 *) p0_6_LDR_Top__PRTDSI__OE_SEL0) 
#define p0_6_LDR_Top_PRTDSI__OE_SEL1        (* (reg8 *) p0_6_LDR_Top__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define p0_6_LDR_Top_PRTDSI__OUT_SEL0       (* (reg8 *) p0_6_LDR_Top__PRTDSI__OUT_SEL0) 
#define p0_6_LDR_Top_PRTDSI__OUT_SEL1       (* (reg8 *) p0_6_LDR_Top__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define p0_6_LDR_Top_PRTDSI__SYNC_OUT       (* (reg8 *) p0_6_LDR_Top__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(p0_6_LDR_Top__SIO_CFG)
    #define p0_6_LDR_Top_SIO_HYST_EN        (* (reg8 *) p0_6_LDR_Top__SIO_HYST_EN)
    #define p0_6_LDR_Top_SIO_REG_HIFREQ     (* (reg8 *) p0_6_LDR_Top__SIO_REG_HIFREQ)
    #define p0_6_LDR_Top_SIO_CFG            (* (reg8 *) p0_6_LDR_Top__SIO_CFG)
    #define p0_6_LDR_Top_SIO_DIFF           (* (reg8 *) p0_6_LDR_Top__SIO_DIFF)
#endif /* (p0_6_LDR_Top__SIO_CFG) */

/* Interrupt Registers */
#if defined(p0_6_LDR_Top__INTSTAT)
    #define p0_6_LDR_Top_INTSTAT            (* (reg8 *) p0_6_LDR_Top__INTSTAT)
    #define p0_6_LDR_Top_SNAP               (* (reg8 *) p0_6_LDR_Top__SNAP)
    
	#define p0_6_LDR_Top_0_INTTYPE_REG 		(* (reg8 *) p0_6_LDR_Top__0__INTTYPE)
#endif /* (p0_6_LDR_Top__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_p0_6_LDR_Top_H */


/* [] END OF FILE */
