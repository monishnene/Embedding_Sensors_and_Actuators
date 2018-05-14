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
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("LASER");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("LAB3");
        return;
}

void LCDvalue(int value) // LCD Display Degree
{       
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("               ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("PWM=");
        LCD_Char_1_PrintU32Number(value);
        
        return;
}

int main(void)
{   int8_t value;
    uint8_t i,count=128,value2;
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Char_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    VDAC8_1_Start();
    VDAC8_1_SetRange(255);
    LCD();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        value = ADC_SAR_1_GetResult8();
        value2=value;
            // input from ADC 2's Compliment form 
        if(i<value2)
        {
            p0_5_Write(1);
            p0_7_Write(1);
            p0_6_Write(1);
        }
        else
        {
            p0_5_Write(0);
            p0_6_Write(0);
            p0_7_Write(0);
        }    
        /* Place your application code here. */
        if(p3_2_Read()==1u)
        {
        count++;   ..
            
        }
        
        if(i==255)
        {
            VDAC8_1_SetValue(count+128);
            count=128;
        }
        i++;
}
}

/* [] END OF FILE */
