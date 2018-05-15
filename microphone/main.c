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
        LCD_Char_1_PrintString("Monish Nene");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("Microphone Lab 1");
        return;
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    short filtered,unfiltered,adcop;
    int prevvalue=1,prevvalue2=1,k=0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD();
    PGA_1_Start();
    Opamp_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    VDAC8_1_Start();
    VDAC8_1_SetRange(255);
    VDAC8_2_Start();
    VDAC8_2_SetRange(255);
    for(;;)
    {   
        adcop = ADC_SAR_1_GetResult8();
        unfiltered = adcop + 128;  // input from ADC 2's Compliment form 
        VDAC8_1_SetValue(unfiltered);
        //k=unfiltered;
        //filtered = (6*prevvalue+5*prevvalue2+k)/3;  //For weighted average half

          //filtered = 234-unfiltered; //For inverse
          /*if(unfiltered<88)
            {filtered=88;}
          else if (unfiltered>168)
            {filtered=168;}
          else
            {filtered=unfiltered;}*/ //For mean clipping
        VDAC8_2_SetValue(filtered);
        //prevvalue2=prevvalue;  
        //prevvalue=unfiltered;
    }
}

/* [] END OF FILE */
