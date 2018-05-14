/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

void LCD() // LCD Display
{              
        LCD_Char_1_Start();
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("Potentiometer");
        return;
}

void LCDdegree(int value) // LCD Display Degree
{       
        uint16 degree;
        degree = (value/255.0)*270;
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("               ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("Degree=");
        LCD_Char_1_PrintU32Number(degree);
        
        return;
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    uint16 i;
    uint8 filtered,unfiltered,adcop,value;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Char_1_ClearDisplay();
    LCD();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    VDAC8_1_Start();
    VDAC8_1_SetRange(255);
    for(;;)
    {   
        value = ADC_SAR_1_GetResult8();
        if(i%8091==0)
        LCDdegree(value);
        VDAC8_1_SetValue(value);
        i++;
    }
}

/* [] END OF FILE */
