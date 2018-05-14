/* ========================================
 *
 * ECEN 5053 -  Lab 4
 * Monish Nene
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

#define COUNTER_TICK_RATE 10000 // 10 kHz //Counter_2 count pin clock setting
#define COUNTSPERREVOFGEAR 300 //64 COUNTER PER REV X 18.75 GEAR RATIO / 4 PULSES OF ENCODER 
#define SECONDS 60
#define DEMO 4
#define resistance 2.7

 uint8 ADC_Count_Output = 0,source_voltage;
    uint8 ADC_2_Count_Output=0,current=0,current_ref=100,ADC_2_Count_Output_1=0,ADC_2_Count_Output_2=0,ADC_2_Count_Output_3=0,ADC_2_Count_Output_5 = 0,ADC_2_Count_Output_4=0;    
    int16 quadcountnew = 0;
    int16 quadcount = 0;
    int8 quadcountprevious = 0,error_prev,error_new,error,ierror=0;    
    int32 loop = 0;
    uint16 time = 180,period;  //mS - time to toggle pin P0_0 - the duration of the for loop - from the scop0
    int16 emfrpm = 0;
    int32 speedref = 40,mode=1,rpm;
    uint8 inertia=128,prev_inertia;
    
void LCD() // LCD Display
{    
           
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("DC MOTOR SPEED");
        LCD_Char_1_Position(0,9);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,9);
        LCD_Char_1_PrintString("LAB5");
        return;
}

void LCDvalue(int value) // LCD Display Degree
{   
        {
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("               ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("PWM=");
        LCD_Char_1_PrintU32Number(value);
        } 
        return;
}
 CY_ISR(isr_2_Interrupt)
{   PWM_1_STATUS;
    p0_0_Write(!p0_0_Read());    
    CyDelayUs(20);
    source_voltage = ADC_SAR_1_GetResult8();
    current = (source_voltage*2048)/(255.0 * 2.7);
    //delay 3 sec
    ierror = current_ref - current;
    inertia = inertia + 0.2 * ierror;
    VDAC8_1_SetValue(current);
    VDAC8_2_SetValue(current_ref);
    PWM_1_WriteCompare(inertia); 
    if(inertia > 200)//handling math overflow
        {inertia=prev_inertia;}
    else if (inertia < 50)
        {inertia=prev_inertia;}
     prev_inertia=inertia;
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    //int16 threesecsync=100000*3.000/time;
    LCD_Char_1_Start();
    LCD();
    CyDelay(1000);     
    LCD_Char_1_ClearDisplay();     
    PWM_1_Start(); //creates a pwm from pot
    QuadDec_1_Start();  //count encoder edges
    ADC_SAR_2_Start();
    ADC_SAR_2_StartConvert();  
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();  
    VDAC8_1_Start();
    VDAC8_2_Start();  
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_1_Start();
    isr_1_StartEx(isr_2_Interrupt);
    for(;;)
    {  
        PWM_1_WriteCompare(inertia); 
        
     //PWM_1_WriteCompare(inertia);      
     loop++;    //  LCDvalue(ADC_Count_Output);
           //creates a PWM signal comparing a counter clock to the ADC counts output.
        
       // STEP 3 - Speed measurement by encoder
       // motor pins green - vssd, blue - vddd, yellow - A P0_1, white - B P0-2
       // method 2 - read the time between rising edges

 
       /* if (loop % 100000 == 0) 
        {        
          quadcountnew = QuadDec_1_GetCounter();//returned the edges counted - about 304 per revolution
          if(quadcountnew < 0)          
          {
            quadcountnew *= -1;
          }   

        quadcount = quadcountnew - quadcountprevious;//calculate RPM
        rpm = (quadcount * 1000 * 60 )/ (300.0 * time) ;    //304 = counts per rev. of gear shaft
        //p0_0_Write( ~p0_0_Read() ); //toggle pin to get time from scope            
        quadcountprevious = quadcountnew;
       
        PWM_1_Stop();
        p3_7_Write(0);//interrupt the pwm for
        p0_0_Write(0);
        CyDelayUs(1200);
        //the longer the delay, the more pulsing we see on the scope on the drain
        //Convert the measured voltage to rpm and display the result on the LCD 
        //Step 4 - Speed measurement by Back-EMF
        //briefly interrupt the PWM switching on a periodic basis so that you can measure the Back-EMF of the motor
        ADC_2_Count_Output = ADC_SAR_2_GetResult8();
        ADC_2_Count_Output_5 = 255 - ADC_2_Count_Output;   
        average =(ADC_2_Count_Output_5+ADC_2_Count_Output_4)/2.0;
        ADC_2_Count_Output_4=average;
        PWM_1_Start();
        p0_0_Write(1);
        VDAC8_1_Start();
        VDAC8_2_Start();
        //calculate RPM from EMF voltage
        emfrpm = 0.8858 * average + 7.0034;
        
        //3 sec mode change
        if(mode==1)
        {speedref=40;}
        if(mode==2)
        {speedref=80;}
        if(mode==3)
        {speedref=120;}
        
        //Feedback section
        //error = speedref - rpm;
        error = speedref - emfrpm;
        //error = (error_new + error_prev)/2;
        //error_prev = error_new;
        inertia = inertia + error;
        if(inertia>255|inertia<0)//handling math overflow
        {inertia=100;}
        VDAC8_1_SetValue(speedref);
        VDAC8_2_SetValue(emfrpm);
        if(loop % 500000 == 0)    
            {
            LCD_Char_1_Position(0,0);
            LCD_Char_1_PrintString("Shaftrpm:            ");     
            LCD_Char_1_Position(0,9);        
            LCD_Char_1_PrintU32Number(rpm);    
            LCD_Char_1_Position(1,0);
            LCD_Char_1_PrintString("emfrpm:            ");     
            LCD_Char_1_Position(1,7);        
            LCD_Char_1_PrintU32Number(emfrpm);  
            LCD_Char_1_Position(0,12);
            LCD_Char_1_PrintString("e:");     
            LCD_Char_1_Position(0,14);        
            LCD_Char_1_PrintInt8(error);   
            LCD_Char_1_Position(1,12);
            LCD_Char_1_PrintString("m: ");     
            LCD_Char_1_Position(1,14);        
            LCD_Char_1_PrintNumber(mode);
            }    
        }
        //delay 3 sec
         if (loop % 1600000 == 0) 
        {
        loop=0;    
        if(mode==3)
        {mode=1;}
        else
        {mode++;}
        }
    }*/    
    if(p3_7_Read()==1) 
    {
        //interrupt the pwm for
    /*PWM_1_Stop();
       if(ierror<0)
        p3_7_Write(0);//interrupt the pwm for
       if(ierror>0)
        p3_7_Write(1);
       CyDelayUs(1200);
    PWM_1_Start();
    */   
    PWM_1_Stop();
    if(current_ref > current)
    {inertia ++;}
    else
    {inertia--;}
    PWM_1_Start();
    }
    if (loop % 100000 == 0) 
    {LCD_Char_1_Position(1,0);
            LCD_Char_1_PrintString("current:        ");     
            LCD_Char_1_Position(1,8);        
            LCD_Char_1_PrintU32Number(current);    
            LCD_Char_1_Position(0,0);
            LCD_Char_1_PrintString("ref:     ");     
            LCD_Char_1_Position(0,4);        
            LCD_Char_1_PrintU32Number(current_ref);  
            LCD_Char_1_Position(0,8);
            LCD_Char_1_PrintString("duty:   ");     
            LCD_Char_1_Position(0,13);        
            LCD_Char_1_PrintU32Number((100*inertia/255.0));
            /*LCD_Char_1_Position(1,11);
            LCD_Char_1_PrintString("e:   ");     
            LCD_Char_1_Position(1,13);        
            LCD_Char_1_PrintU32Number((100*inertia/255.0));*/
     } 
     if (loop % 450000 == 0) 
     {
     loop=0;    
     if(current_ref==100)
     {current_ref=200;}
      else
        {current_ref=100;}
     } 
}
}
/* [] END OF FILE */
