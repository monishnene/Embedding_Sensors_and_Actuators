/*******************************************************************************
* File Name: p3_4_Yellow.h  
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

#if !defined(CY_PINS_p3_4_Yellow_H) /* Pins p3_4_Yellow_H */
#define CY_PINS_p3_4_Yellow_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "p3_4_Yellow_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 p3_4_Yellow__PORT == 15 && ((p3_4_Yellow__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    p3_4_Yellow_Write(uint8 value);
void    p3_4_Yellow_SetDriveMode(uint8 mode);
uint8   p3_4_Yellow_ReadDataReg(void);
uint8   p3_4_Yellow_Read(void);
void    p3_4_Yellow_SetInterruptMode(uint16 position, uint16 mode);
uint8   p3_4_Yellow_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the p3_4_Yellow_SetDriveMode() function.
     *  @{
     */
        #define p3_4_Yellow_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define p3_4_Yellow_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define p3_4_Yellow_DM_RES_UP          PIN_DM_RES_UP
        #define p3_4_Yellow_DM_RES_DWN         PIN_DM_RES_DWN
        #define p3_4_Yellow_DM_OD_LO           PIN_DM_OD_LO
        #define p3_4_Yellow_DM_OD_HI           PIN_DM_OD_HI
        #define p3_4_Yellow_DM_STRONG          PIN_DM_STRONG
        #define p3_4_Yellow_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define p3_4_Yellow_MASK               p3_4_Yellow__MASK
#define p3_4_Yellow_SHIFT              p3_4_Yellow__SHIFT
#define p3_4_Yellow_WIDTH              1u

/* Interrupt constants */
#if defined(p3_4_Yellow__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in p3_4_Yellow_SetInterruptMode() function.
     *  @{
     */
        #define p3_4_Yellow_INTR_NONE      (uint16)(0x0000u)
        #define p3_4_Yellow_INTR_RISING    (uint16)(0x0001u)
        #define p3_4_Yellow_INTR_FALLING   (uint16)(0x0002u)
        #define p3_4_Yellow_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define p3_4_Yellow_INTR_MASK      (0x01u) 
#endif /* (p3_4_Yellow__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define p3_4_Yellow_PS                     (* (reg8 *) p3_4_Yellow__PS)
/* Data Register */
#define p3_4_Yellow_DR                     (* (reg8 *) p3_4_Yellow__DR)
/* Port Number */
#define p3_4_Yellow_PRT_NUM                (* (reg8 *) p3_4_Yellow__PRT) 
/* Connect to Analog Globals */                                                  
#define p3_4_Yellow_AG                     (* (reg8 *) p3_4_Yellow__AG)                       
/* Analog MUX bux enable */
#define p3_4_Yellow_AMUX                   (* (reg8 *) p3_4_Yellow__AMUX) 
/* Bidirectional Enable */                                                        
#define p3_4_Yellow_BIE                    (* (reg8 *) p3_4_Yellow__BIE)
/* Bit-mask for Aliased Register Access */
#define p3_4_Yellow_BIT_MASK               (* (reg8 *) p3_4_Yellow__BIT_MASK)
/* Bypass Enable */
#define p3_4_Yellow_BYP                    (* (reg8 *) p3_4_Yellow__BYP)
/* Port wide control signals */                                                   
#define p3_4_Yellow_CTL                    (* (reg8 *) p3_4_Yellow__CTL)
/* Drive Modes */
#define p3_4_Yellow_DM0                    (* (reg8 *) p3_4_Yellow__DM0) 
#define p3_4_Yellow_DM1                    (* (reg8 *) p3_4_Yellow__DM1)
#define p3_4_Yellow_DM2                    (* (reg8 *) p3_4_Yellow__DM2) 
/* Input Buffer Disable Override */
#define p3_4_Yellow_INP_DIS                (* (reg8 *) p3_4_Yellow__INP_DIS)
/* LCD Common or Segment Drive */
#define p3_4_Yellow_LCD_COM_SEG            (* (reg8 *) p3_4_Yellow__LCD_COM_SEG)
/* Enable Segment LCD */
#define p3_4_Yellow_LCD_EN                 (* (reg8 *) p3_4_Yellow__LCD_EN)
/* Slew Rate Control */
#define p3_4_Yellow_SLW                    (* (reg8 *) p3_4_Yellow__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define p3_4_Yellow_PRTDSI__CAPS_SEL       (* (reg8 *) p3_4_Yellow__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define p3_4_Yellow_PRTDSI__DBL_SYNC_IN    (* (reg8 *) p3_4_Yellow__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define p3_4_Yellow_PRTDSI__OE_SEL0        (* (reg8 *) p3_4_Yellow__PRTDSI__OE_SEL0) 
#define p3_4_Yellow_PRTDSI__OE_SEL1        (* (reg8 *) p3_4_Yellow__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define p3_4_Yellow_PRTDSI__OUT_SEL0       (* (reg8 *) p3_4_Yellow__PRTDSI__OUT_SEL0) 
#define p3_4_Yellow_PRTDSI__OUT_SEL1       (* (reg8 *) p3_4_Yellow__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define p3_4_Yellow_PRTDSI__SYNC_OUT       (* (reg8 *) p3_4_Yellow__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(p3_4_Yellow__SIO_CFG)
    #define p3_4_Yellow_SIO_HYST_EN        (* (reg8 *) p3_4_Yellow__SIO_HYST_EN)
    #define p3_4_Yellow_SIO_REG_HIFREQ     (* (reg8 *) p3_4_Yellow__SIO_REG_HIFREQ)
    #define p3_4_Yellow_SIO_CFG            (* (reg8 *) p3_4_Yellow__SIO_CFG)
    #define p3_4_Yellow_SIO_DIFF           (* (reg8 *) p3_4_Yellow__SIO_DIFF)
#endif /* (p3_4_Yellow__SIO_CFG) */

/* Interrupt Registers */
#if defined(p3_4_Yellow__INTSTAT)
    #define p3_4_Yellow_INTSTAT            (* (reg8 *) p3_4_Yellow__INTSTAT)
    #define p3_4_Yellow_SNAP               (* (reg8 *) p3_4_Yellow__SNAP)
    
	#define p3_4_Yellow_0_INTTYPE_REG 		(* (reg8 *) p3_4_Yellow__0__INTTYPE)
#endif /* (p3_4_Yellow__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_p3_4_Yellow_H */


/* [] END OF FILE */
