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

#define Kp 0.05

#define C1 0.00202727317810059
#define C2 0.00185632705688477
#define C3 0
#define C4 -0.00507450103759766
#define C5 -0.0129343271255493
#define C6 -0.0195416212081909
#define C7 -0.0176916122436523
#define C8 0
#define C9 0.0367516279220581
#define C10 0.0882844924926758
#define C11 0.142722129821777
#define C12 0.184384346008301
#define C13 0.200000047683716
#define C14 0.184384346008301
#define C15 0.142722129821777
#define C16 0.0882844924926758
#define C17 0.0367516279220581
#define C18 0
#define C19 -0.0176916122436523
#define C20 -0.0195416212081909
#define C21 -0.0129343271255493
#define C22 -0.00507450103759766
#define C23 0
#define C24 0.00185632705688477
#define C25 0.00202727317810059

#define sample_period 0.01  // defines sample period in seconds for speed measurement

#define size1 20
#define size2 20

#define CMP_ref 150

uint16_t prev_count =0;
uint16_t curr_count=0;
int16_t diff =0;
float degrees =0;

float RPM_f=0;  

uint16_t RPM_i=0;

uint16_t change_cnt =0;
uint16_t speed_cnt =0;

uint16_t current_RPM=0;

uint16_t RPM_ref =205;

uint16_t prev_RPM=201;

int16_t error=0;

uint8_t flag =0;

uint8_t Avg_array[25] ={0};
volatile uint8_t current_Avg =0;
uint8_t current_sample =0;

uint8_t sample_array1[size1] ={0};
uint8_t sample_array2[size2]={0};

uint32_t low_sum =0;
uint16_t high_sum=0;

uint8_t low_avg =0;
uint8_t high_avg =0;


uint8_t peak_cnt=0;

uint8_t UP_FLAG=0;
uint8_t DWN_FLAG=0;

int pos = 0;
int newAvg = 0;
long sum = 0;
uint8 moving_avg;

int k=0;
int l=0;

uint8_t max_value =0;
    
uint16_t Output_Volt =255;
    
int8_t Output_Delta =0;

CY_ISR(CMP)
{
    peak_cnt++;
   
    if(peak_cnt ==24)
    {
        peak_cnt=0;
         if (speed_cnt<5)
             {}
        else
        {
        current_RPM = 6000000.0/(speed_cnt*18.75);//convert us/ rotation to rotations/min
        speed_cnt=0;
        
        if(current_RPM-prev_RPM>50 || current_RPM-prev_RPM < -5)
        {
            current_RPM=prev_RPM;
        }
        
        
            error =  RPM_ref - current_RPM;
            
            //Output_Delta = (int8_t) (Kp*error);
        
            //Output_Volt += Output_Delta; // change PWM compare value base on PI controller output
        
            if (error>5)
            {
                Output_Volt+=2;
            }
            
            if(error<-5)
            
            {
                Output_Volt-=2;
            }
            
            if(Output_Volt > 255)
            Output_Volt=255;
            
            if(Output_Volt <235)
            Output_Volt=235;
        
        
            prev_RPM=current_RPM;
        
        
        }
        
    }
    
     
           
         
    
}


CY_ISR(Motor_Current)
{
    /*
    
    ADC_SAR_2_IsEndConversion(ADC_SAR_2_RETURN_STATUS);
    
    //Subtract the oldest number from the prev sum, add the new number
    sum = sum - sample_array2[pos] + ADC_SAR_2_GetResult8();
  //Assign the nextNum to the position in the array
  sample_array2[pos] = ADC_SAR_2_GetResult8();
  //return the average
    moving_avg = sum/size2;
    pos++;
    if (pos == size2){
      pos = 0;
    }
    VDAC8_2_SetValue((moving_avg*1.2)+12);
        
    
        for (k=0; k<size1-1; k++)
        {
            sample_array1[k]=sample_array1[k+1];
            
        }
    
         
         for (k=0; k<size2-1; k++)
        {
            sample_array2[k]=sample_array2[k+1];
            
        }
        
        sample_array2[size2-1]=ADC_SAR_2_GetResult8();
        
        
       
        
        //sample_array1[size1-1]=ADC_SAR_2_GetResult8();
        
        for (l=0; l<size2; l++)
        {
            low_sum +=sample_array2[k];
        }
        
        low_avg =low_sum/size2;
        low_sum=0;
    
    */
        
        
        
       
        /*
         for (k=0; k<size1; k++)
        {
            high_sum +=sample_array1[k];
        }
        
        high_avg =high_sum/size1;
        
        */
        
        
        
        
        /*
        if (low_avg >high_avg)
        {
            
            if(DWN_FLAG==1)
            {
                Digital_Output_1_Write(0);
            }
            
            
            UP_FLAG=1;
            DWN_FLAG=0;
            
            
            
          
        }
        
        else if (low_avg <high_avg)
        {
            if(UP_FLAG==1)
            {
               // peak_cnt++;
                Digital_Output_1_Write(1);
                Digital_Output_1_Write(0);
            }
            
        
            DWN_FLAG=1;
            UP_FLAG=0;
            
        }
        */
    
}


CY_ISR(Count)
{
    
    
    speed_cnt++;  //every 1ms
    
     /*
        ADC_SAR_2_IsEndConversion(ADC_SAR_2_RETURN_STATUS);
        //moving avg filter
        Avg_array[24]=ADC_SAR_2_GetResult8( );
        current_Avg = Avg_array[0]*C1 +Avg_array[1]*C2+Avg_array[2]*C3+Avg_array[3]*C4+Avg_array[4]*C5+Avg_array[5]*C6+Avg_array[6]*C7+Avg_array[7]*C8+Avg_array[8]*C9+Avg_array[9]*C10+Avg_array[10]*C11+Avg_array[11]*C12+Avg_array[12]*C13+Avg_array[13]*C14+Avg_array[14]*C15+Avg_array[15]*C16+Avg_array[16]*C17+Avg_array[17]*C18+Avg_array[18]*C19+Avg_array[19]*C20+Avg_array[20]*C21+Avg_array[21]*C22+Avg_array[22]*C23+Avg_array[23]*C24+Avg_array[24]*C25;
        Avg_array[0]=Avg_array[1];
        Avg_array[1]=Avg_array[2];
        Avg_array[2]=Avg_array[3];
        Avg_array[3]=Avg_array[4];
        Avg_array[4]=Avg_array[5];
        Avg_array[5]=Avg_array[6];
        Avg_array[6]=Avg_array[7];
        Avg_array[7]=Avg_array[8];
        Avg_array[8]=Avg_array[9];
        Avg_array[9]=Avg_array[10];
        Avg_array[10]=Avg_array[11];
        Avg_array[11]=Avg_array[12];
        Avg_array[12]=Avg_array[13];
        Avg_array[13]=Avg_array[14];
        Avg_array[14]=Avg_array[15];
        Avg_array[15]=Avg_array[16];
        Avg_array[16]=Avg_array[17];
        Avg_array[17]=Avg_array[18];
        Avg_array[18]=Avg_array[19];
        Avg_array[19]=Avg_array[20];
        Avg_array[20]=Avg_array[21];
        Avg_array[21]=Avg_array[22];
        Avg_array[22]=Avg_array[23];
        Avg_array[23]=Avg_array[24];
        
        VDAC8_2_SetValue(current_Avg);
    */
    
}

CY_ISR(Encoder)
{
        /*Clear interrupt flag*/
        Counte0r_1_STATUS;
    
        change_cnt++;
        
    
        prev_count = curr_count;  //assigns previous counter value to compare to current value
        curr_count = QuadDec_1_GetCounter();  //reads in new counter value from quadrature decoder
       
        
        diff = curr_count - prev_count;  // find the difference between previous and current count values
        
        if (diff <0)
        {
            diff = -diff;
        }
        
        
        degrees = diff* 5.625;   // converts a change in counts to a change in degrees
        
        RPM_f = degrees/ sample_period;   // sampling period is 100ms, this gives a rate in degrees /second
        
        RPM_f = RPM_f/18.75;  //divide by gear ratio to get motor shaft speed in degrees / second
        
        RPM_i = (uint16_t) RPM_f/6;  // converts rate to rotations/min
        
        /*
        
        measured_cmp = (1.075*RPM_i) + 31.33;  //converts measure RPM to PWM compare value
        
        error = compare_ref - measured_cmp;  //determine error term
        
        
        integral = integral + error;       // integral of error term
        
        cmp_delta = (int8_t) (Kp3*error)+ (Ki3*integral);
        
        output_cmp += cmp_delta; // change PWM compare value base on PI controller output

       */
}





int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
     ADC_SAR_2_Start();
    ADC_SAR_2_StartConvert();
   
   
    PWM_1_Start();
    //PWM_2_Start();
    
    PGA_1_Start();
    //PGA_2_Start();
    
    VDAC8_1_Start();
    VDAC8_2_Start();
    
    LCD_Char_1_Start();
    LCD_Char_1_Position(0u, 0u);
    QuadDec_1_Start();
    Counter_1_Start();
    
    Comp_1_Start();
  
    isr_1_StartEx(Encoder);
    isr_2_StartEx(Count);
   // isr_3_StartEx(Motor_Current);
    isr_4_StartEx(CMP);
    
   
    
    
    
    
    VDAC8_2_SetValue(CMP_ref);
    
    
    int j=0;
     int i=0;

    for(;;)
    { 
        
        /*
        if (change_cnt==30)
        {
            RPM_ref=100;
        }
        
        if (change_cnt==60)
        {
            change_cnt=0;
            RPM_ref=120;
        }
        */
        
        //extra credit /closed loop control//
        
       
        
       
        /*
        if (peak_cnt==6)
        {
            peak_cnt=0;
             Digital_Output_1_Write(1);
            
        }
        */
        
         
        
        
        
        ADC_SAR_2_IsEndConversion(ADC_SAR_2_RETURN_STATUS);
      
        current_sample=ADC_SAR_2_GetResult8( );
        
        if(current_sample > max_value)
        {
          max_value=current_sample;  
        }
        
        
         VDAC8_2_SetValue((max_value*1.16)-(max_value*0.22));
        /*
        if(current_sample <= min_value+10)
        {
            
            
            
            if (speed_cnt<5)
             {}
            else
            {
            flag=1;
            Digital_Output_1_Write(1);
            
            
            
            current_RPM = 60000.0/(speed_cnt*(18.75)*6);//convert ms/ rotation to rotations/min
            
            speed_cnt=0;
            if ( prev_RPM>80 && (current_RPM-prev_RPM >50 || current_RPM-prev_RPM< -50))
            {
                current_RPM = prev_RPM;
            }
            
            error =  RPM_ref - current_RPM;
            
            Output_Delta = (int8_t) (Kp*error);
        
            Output_Volt += Output_Delta; // change PWM compare value base on PI controller output
            
            if(Output_Volt > 255)
            Output_Volt=156;
            
            if(Output_Volt <200)
            Output_Volt=80;
       
            
            prev_RPM=current_RPM;
            }
        }
        
        
        */
        
        
        
        
        // i++;
        
        
       
        
        
        // ADC_SAR_1_IsEndConversion(ADC_SAR_1_RETURN_STATUS);
            
         //  VDAC8_1_SetValue(ADC_SAR_1_GetResult8( ));
        
        VDAC8_1_SetValue(Output_Volt);
       
        j++;
            if(j==100000)
            {
                j=0;
                max_value=0;
            }
        
            
        i++;
        if (i==50000)
        {
            i=0;
            
            
            
            
            
            
            
            LCD_Char_1_Position(0u, 0u);
        
            LCD_Char_1_PrintString ("                ");   // clear character display of previous data
            
            LCD_Char_1_Position(0u, 0u);
            
            LCD_Char_1_PrintNumber(RPM_i);    // write RPM value to display
            
            LCD_Char_1_Position(0u, 4u);
            
            LCD_Char_1_PrintString ("ERPM");   // write units to display
            
            //LCD_Char_1_Position(0u, 4u);
            
            //LCD_Char_1_PrintNumber(RPM_i);    // write RPM value to display
            
            LCD_Char_1_Position(1u, 0u);
        
            LCD_Char_1_PrintString ("                ");   // clear character display of previous data
            
            LCD_Char_1_Position(1u, 0u);
            
            LCD_Char_1_PrintNumber(current_RPM);    // write RPM value to display
            
            LCD_Char_1_Position(1u, 7u);
            
            LCD_Char_1_PrintString ("CRPM");   // write units to display
       
            
            
        }
        
        
        
       /* if(Sawtooth_Input_Read()==1)
        {
            Digital_Output_1_Write(1);
        }
        
        else if (Sawtooth_Input_Read()==0)
        {
             Digital_Output_1_Write(0);
        }*/
        
    }
}

/* [] END OF FILE */
