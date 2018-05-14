/* ========================================
 *
 * ECEN 5053 -  Lab 4
 * Maria Toscano and Monish Nene
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
        LCD_Char_1_PrintString("DC MOTOR");
        LCD_Char_1_Position(0,9);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,9);
        LCD_Char_1_PrintString("LAB4");
        return;
}

void LCDvalue(int value) // LCD Display Degree
{   
   uint32 loop = 0;
       if (loop % 500000 == 0) 
        {
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("               ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("PWM=");
        LCD_Char_1_PrintU32Number(value);
        } 
        return;
}
/////////////////////////////////////////
//uint32 time = 1; // placeholder to prevent divide by zero
int16 period = 0;
#define COUNTER_TICK_RATE 10000 // 10 kHz //Counter_2 count pin clock setting
#define COUNTSPERREVOFGEAR 300 //64 COUNTER PER REV X 18.75 GEAR RATIO / 4 PULSES OF ENCODER 
#define SECONDS 60
#define DEMO 4

/*******************************************************************************/
//////////////////////////////////////////////////////////////////////////////////
int main(void)
{
   // CyGlobalIntEnable; /* Enable global interrupts. */

    uint8 ADC_Count_Output = 0;
    uint8 ADC_2_Count_Output=0,ADC_2_Count_Output_1=0,ADC_2_Count_Output_2=0,ADC_2_Count_Output_3=0,ADC_2_Count_Output_5 = 0,ADC_2_Count_Output_4=0;    
    int16 quadcountnew = 0;
    int16 quadcount = 0;
    int16 quadcountprevious = 0;    
    int32 loop = 0;
    int16 time = 180;  //mS - time to toggle pin P0_0 - the duration of the for loop - from the scope
    int16 rpm = 0;
    int16 average = 0;
    int16 emfrpm = 0;
   

    
    LCD_Char_1_Start();
    LCD();
    CyDelay(1000);     
    LCD_Char_1_ClearDisplay();     
    
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();  

    Counter_1_Start(); //creates a pwm from pot
    QuadDec_1_Start();  //count encoder edges
    
    ADC_SAR_2_Start();
    ADC_SAR_2_StartConvert();  
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {   
      loop++;
 
        
       // STEP 2 - reading the Pot and creating a PWM with a counter 
           ADC_Count_Output = ADC_SAR_1_GetResult8(); //returns the counts 0-255 based on a potentiometer input voltage 0-5V
       //  LCDvalue(ADC_Count_Output);
           Counter_1_WriteCompare(ADC_Count_Output); //creates a PWM signal comparing a counter clock to the ADC counts output.
        
       // STEP 3 - Speed measurement by encoder
       // motor pins green - vssd, blue - vddd, yellow - A P0_1, white - B P0-2
       // method 2 - read the time between rising edges

 
        if (loop % 100000 == 0) 
        {        
          quadcountnew = QuadDec_1_GetCounter();//returned the edges counted - about 304 per revolution
       /*   if(quadcountnew < 0)          
          {
            quadcountnew *= -1;
          }   
        */
            quadcount = quadcountnew - quadcountprevious;//calculate RPM
            rpm = (quadcount * 1000 * 60 )/ (300.0 * time) ;    //304 = counts per rev. of gear shaft
        
            Pin_0_0_Write( ~ Pin_0_0_Read() ); //toggle pin to get time from scope            
            
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("Shaftrpm:            ");     
        LCD_Char_1_Position(0,9);        
        LCD_Char_1_PrintU32Number(rpm);
     
    /*     
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("quadcount:      ");     
        LCD_Char_1_Position(1,10);        
        LCD_Char_1_PrintU32Number(quadcount); 
*/
        quadcountprevious = quadcountnew;
        }

        //Step 4 - Speed measurement by Back-EMF
        //briefly interrupt the PWM switching on a periodic basis so that you can measure the Back-EMF of the motor
      
        if (loop % 100000 == 0) 
        {           
         Pin_3_0_Write (~ Pin_3_0_Read() ); //toggle pin
        Counter_1_WriteCompare(0); //interrupt the pwm for
        CyDelayUs(1200);  //the longer the delay, the more pulsing we see on the scope on the drain
        //Convert the measured voltage to rpm and display the result on the LCD 
        ADC_2_Count_Output = ADC_SAR_2_GetResult8();
        ADC_2_Count_Output_5 = 255 - ADC_2_Count_Output;   
        
        average =(ADC_2_Count_Output_5+ADC_2_Count_Output_4+ADC_2_Count_Output_3+ADC_2_Count_Output_2+ADC_2_Count_Output_1)/5.0;
        ADC_2_Count_Output_1=ADC_2_Count_Output_2;
        ADC_2_Count_Output_2=ADC_2_Count_Output_3;
        ADC_2_Count_Output_3=ADC_2_Count_Output_4;
        ADC_2_Count_Output_4=average;
  /*      
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("emf:            ");     
        LCD_Char_1_Position(1,4);        
        LCD_Char_1_PrintU32Number(average);   
   */    
        //calculate RPM from EMF voltage
        //y=0.9528x +12.61
        emfrpm = (0.9528 * average) + 12.61;
        
       
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("EmfRpm:            ");     
        LCD_Char_1_Position(1,7);        
        LCD_Char_1_PrintU32Number(emfrpm);   
        
        }    
    }
}

/* [] END OF FILE */
