/*******************************************************************************
* File Name: DFB_1_PM.c
* Version 1.40
*
* Description:
*  This file contains the setup, control and status commands to support
*  component operations in low power mode.
*
* Note:
*
********************************************************************************
* Copyright 2011-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "DFB_1.h"

static DFB_1_BACKUP_STRUCT DFB_1_backup = { 0u };


/*******************************************************************************
* Function Name: DFB_1_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the user configuration of the DFB non-retention registers. This routine
*  is called by DFB_Sleep() to save the component configuration before entering
*  sleep.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void DFB_1_SaveConfig(void) 
{
    uint8 count;
    uint8 i = 0u;
	
    DFB_1_backup.sr = DFB_1_SR_REG;
    DFB_1_backup.sem = DFB_1_SEM_REG;

    /* ACU RAM */
    count = DFB_1_ACU_RAM_SIZE_CUR;
    while (count > 0u)
    {
        DFB_1_backup.acu[i] = CY_GET_REG32(& DFB_1_ACU_RAM_PTR[i]);
        count--;
        i++;
    }
	
    /* Take DFB RAM off the bus */
    DFB_1_RAM_DIR_REG = DFB_1_RAM_DIR_DFB;
}


/*******************************************************************************
* Function Name: DFB_1_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the user configuration of the DFB non-retention registers. This
*  routine is called by DFB_Wakeup() to restore the component configuration when
*  exiting sleep.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void DFB_1_RestoreConfig(void) 
{
    uint8 count;
    uint8 i = 0u;

    DFB_1_SR_REG = DFB_1_backup.sr;
    DFB_1_SEM_REG = DFB_1_backup.sem;
    
    /* Power on DFB before initializing the RAMs */
    DFB_1_PM_ACT_CFG_REG |= DFB_1_PM_ACT_MSK;
    /* Enables DFB block in Alternate Active (Standby) mode */
    DFB_1_PM_STBY_CFG_REG |= DFB_1_PM_STBY_MSK;
    
    /* Put DFB RAM on the bus */
    DFB_1_RAM_DIR_REG = DFB_1_RAM_DIR_BUS;

    /* ACU RAM */
    count = DFB_1_ACU_RAM_SIZE_CUR;
    while (count > 0u)
    {
        CY_SET_REG32(& DFB_1_ACU_RAM_PTR[i], DFB_1_backup.acu[i]);
        count--;
        i++;
    }

    /* Take DFB RAM off the bus */
    DFB_1_RAM_DIR_REG = DFB_1_RAM_DIR_DFB;
}


/*******************************************************************************
* Function Name: DFB_1_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep. The
*  DFB_1_Sleep() routine saves the current component state. Then it
*  calls the DFB_Stop() function and calls DFB_1_SaveConfig() to save
*  the hardware configuration. Call the DFB_1_Sleep() function before
*  calling the CyPmSleep() or the CyPmHibernate() function. Refer to the PSoC
*  Creator System Reference Guide for more information about power management
*  functions.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void DFB_1_Sleep(void) 
{
    if (0u != (DFB_1_CR_REG & DFB_1_RUN_MASK))
    {
        DFB_1_backup.enableState = 1u;
    }
    else /* The DFB block is disabled */
    {
        DFB_1_backup.enableState = 0u;
    }

    /* Turn off the run bit, and put the DFB RAM on the bus */
    DFB_1_Pause();
    
    /* Save the configuration */
    DFB_1_SaveConfig();
    
    /* Disables the clock to the entire core of the block */
    DFB_1_CR_REG |= DFB_1_CORECLK_DISABLE;
}


/*******************************************************************************
* Function Name: DFB_1_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  DFB_1_Sleep() was called. The DFB_1_Wakeup() function
*  calls the DFB_1_RestoreConfig() function to restore the
*  configuration. If the component was enabled before the
*  DFB_1_Sleep() function was called, the DFB_1_Wakeup()
*  function will also re-enable the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  Calling the DFB_1_Wakeup() function without first calling the
*  DFB_1_Sleep() or DFB_1_SaveConfig() function may
*  produce unexpected behavior.
*
*******************************************************************************/
void DFB_1_Wakeup(void) 
{
    DFB_1_RestoreConfig();

    if (DFB_1_backup.enableState != 0u)
    {
        /* Enables component's operation */
        DFB_1_Resume();
    } /* Left Run Bit in off state if component's block was disabled before */
    else
    {
        /* Clears any pending interrupts */
        DFB_1_SR_REG = 0xFFu;
    }
    /* Enables the clock to the entire core of the block */
    DFB_1_CR_REG &= (uint8) (~DFB_1_CORECLK_DISABLE);
}


/* [] END OF FILE */
