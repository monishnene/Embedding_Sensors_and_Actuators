
/* ========================================
 *
 * ECEN 5053 -  Project
 * Kyle harlow and Monish Nene
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdint.h>
#define COUNTER_TICK_RATE 10000 // 10 kHz //Counter_2 count pin clock setting
#define COUNTSPERREVOFGEAR 300 //64 COUNTER PER REV X 18.75 GEAR RATIO / 4 PULSES OF ENCODER 
#define SECONDS 60
#define DEMO 4
#define resistance 2.7
_Bool flag=0,delay_flag=1;
int16 z_axis_acceleration = 0;
uint16 step_count;
uint8 potentiometer_value=0,mode_of_receiver=0;
static int32 stepper_pos=0;

//Half Stepping (4x2 phase movement)
//uint8 counter_clockwise_table[8][4]={ {1,0,0,1},  {0,0,0,1},  {0,0,1,1},  {0,0,1,0},  {0,1,1,0},  {0,1,0,0},  {1,1,0,0},  {1,0,0,0}};
uint8 counter_clockwise_table[8][4]={ {1,0,0,1},  {0,0,0,1},  {0,0,1,1},  {0,0,1,0},  {0,1,1,0},  {0,1,0,0},  {1,1,0,0},  {1,0,0,0}};//fast counter clockwise 8

typedef enum
{
    go_up,
    go_down,
    go_up_pause,
    go_down_pause,
    stop_at_top,
    stop_at_bottom,
}receiver_modes;

void control_receiver(void)
{
    potentiometer_value=ADC_SAR_2_GetResult8();
    switch (mode_of_receiver)
    {
        case go_up:
        {
            p3_0_Write(0);
            p3_1_Write(1);
/*            if(p0_6_LDR_Top_Read()==1)
            {
                mode_of_receiver= go_up_pause;
            }
*/          if(p0_7_LDR_Bottom_Read()==0)
            {
                mode_of_receiver= go_up_pause;
            }
            else if(potentiometer_value >= 250)
            {
                mode_of_receiver= stop_at_top;
            }
            break;
        }
        case go_down:
        {
            p3_0_Write(1);
            p3_1_Write(0);
 /*           if(p0_7_LDR_Bottom_Read()==1)
            {
                mode_of_receiver= go_down_pause;
            }
*/         if(p0_6_LDR_Top_Read()==0)
            {
                mode_of_receiver= go_down_pause;
            }
            else if(potentiometer_value <= 4)
            {
                mode_of_receiver= stop_at_bottom;
            }
            break;
        }
        case go_up_pause:
        {
            p3_0_Write(0);
            p3_1_Write(0);
            if(p0_6_LDR_Top_Read()==0)
            {
                mode_of_receiver= go_up;
            }
            else if(p0_7_LDR_Bottom_Read()==0)
            {
                mode_of_receiver= go_down;
            }
            
            else if(potentiometer_value >= 250)
            {
                mode_of_receiver= stop_at_top;
            }
            break;
        }
        case go_down_pause:
        {
            p3_0_Write(0);
            p3_1_Write(0);
            if(p0_7_LDR_Bottom_Read()==0)
            {
                mode_of_receiver= go_down;
            }
            else if(p0_6_LDR_Top_Read()==0)
            {
                mode_of_receiver= go_up;
            }
            else if(potentiometer_value <= 4)
            {
               mode_of_receiver= stop_at_bottom;
            }
            break;
        }
        case stop_at_top:
        {
            p3_0_Write(0);
            p3_1_Write(0);
            if(p0_7_LDR_Bottom_Read()==0)
            {
                mode_of_receiver= go_down;
            }
            break;
        }
        case stop_at_bottom:
        {
            p3_0_Write(0);
            p3_1_Write(0);
            if(p0_6_LDR_Top_Read()==0)
            {
                mode_of_receiver= go_up;
            }
            break;
        }
    }
}

void slow_step(void)
{
    //CyDelay(200);
    CyDelay(100);
    static uint8 column=0,row=0;
    if(flag==1)
    {
        if(row==7)
        {
            row=0;
        }
        else
        {
            row++;
        }
    }
    else
    {
        if(row==0)
        {
            row=7;
        }
        else
        {
            row--;
        }
    }
    p3_3_Blue_Write(counter_clockwise_table[row][0]);
    p3_4_Yellow_Write(counter_clockwise_table[row][1]);
    p3_5_Orange_Write(counter_clockwise_table[row][2]);
    p3_6_Pink_Write(counter_clockwise_table[row][3]);
    return;
}

void step(void)
{
    //CyDelay(2);
    //CyDelayUs(1860);
    CyDelayUs(800);
    static uint8 column=0,row=0;
    if(flag==1)
    {
        if(row==7)
        {
            row=0;
        }
        else
        {
            row++;
        }
    }
    else
    {
        if(row==0)
        {
            row=7;
        }
        else
        {
            row--;
        }
    }
    p3_3_Blue_Write(counter_clockwise_table[row][0]);
    p3_4_Yellow_Write(counter_clockwise_table[row][1]);
    p3_5_Orange_Write(counter_clockwise_table[row][2]);
    p3_6_Pink_Write(counter_clockwise_table[row][3]);
    return;
}

void LCD_init(void)
{
    static int32 degree=0;
    LCD_Char_1_Position(0,0);
    LCD_Char_1_PrintString("                ");
    LCD_Char_1_Position(0,0);
    LCD_Char_1_PrintString("KYLE");
    LCD_Char_1_Position(0,5);
    LCD_Char_1_PrintString("&");
    LCD_Char_1_Position(0,7);
    LCD_Char_1_PrintString("MONISH");
    LCD_Char_1_Position(1,0);
    degree=stepper_pos/2;
    LCD_Char_1_PrintString("                ");
    LCD_Char_1_Position(1,0);
    LCD_Char_1_PrintString("degree=");
    LCD_Char_1_Position(1,7);
    if(degree<0)
    {
        degree = -1*degree;
        LCD_Char_1_PrintString("-");
    }
    LCD_Char_1_PrintU32Number(degree);
}

void LCD() // LCD Display
{          
    LCD_Char_1_Position(0,0);
    LCD_Char_1_PrintString("                ");
    LCD_Char_1_Position(0,0);
    LCD_Char_1_PrintString("pot=");
    LCD_Char_1_Position(0,4);
    LCD_Char_1_PrintU32Number(potentiometer_value);
    LCD_Char_1_Position(0,8);
    LCD_Char_1_PrintString("z=");
    LCD_Char_1_Position(0,10);
    z_axis_acceleration = ADC_SAR_1_GetResult16(); 
    LCD_Char_1_PrintU32Number(z_axis_acceleration); 
    LCD_Char_1_Position(1,0);
    LCD_Char_1_PrintString("                ");
    LCD_Char_1_Position(1,0);
    LCD_Char_1_PrintString("case:");
    LCD_Char_1_Position(1,5);
    LCD_Char_1_PrintU32Number(mode_of_receiver);
    return;
}

void align_axis(void)
{
    z_axis_acceleration = ADC_SAR_1_GetResult16();  
    static uint16 loop;
    while(z_axis_acceleration!=3807)
    {
        slow_step();
        loop++;
        z_axis_acceleration = ADC_SAR_1_GetResult16();
        if (loop == 100)
        {
            loop=0;
            LCD();
        }
    }
    return;
}

void init_stepper(void)
{
    uint16 i=0;
    int16 loop = 0;
    step_count = 200;
    for(i=0;i<step_count;i++)
    {
        loop++;
        slow_step();
        if (loop == 10)
        {
            stepper_pos+=3;
            LCD_init();
            loop=0;
        }
    }
    flag=!flag;
    step_count = 400;
    CyDelay(1000);
    for(i=0;i<step_count;i++)
    {
        loop++;
        slow_step();
        if (loop == 10)
        {
            stepper_pos-=3;
            LCD_init();
            loop=0;
        }
    }
    flag=!flag;
    step_count = 200;
    CyDelay(1000);
    for(i=0;i<step_count;i++)
    {
        loop++;
        slow_step();
        if (loop == 10)
        {
            stepper_pos+=3;
            LCD_init();
            loop=0;
        }
    }
}
int main()
{
    CyGlobalIntEnable;
    LCD_Char_1_Start();
    LCD_Char_1_ClearDisplay();    
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();  
    ADC_SAR_2_Start();
    ADC_SAR_2_StartConvert();
    //p3_0_Write(1);
    //p3_1_Write(0);
    uint32 loop=0;
    /* while(1)
    {
        align_axis();
        flag=!flag;
    }*/
    align_axis();
    flag=!flag;
    //init_stepper();
    step_count = 180;
    while(1)
    {
        loop++;
        if(loop==step_count)
        {   
           LCD();
           flag=!flag;
           loop=0;
        }
        step();
        
        if (loop == 100)
        {
            //align_axis();
            //loop=0;
            LCD();
        }
       // p3_0_Write(~p3_0_Read());
       // p3_1_Write(~p3_1_Read());
        //p3_0_Write(0);
        //p3_1_Write(0);
        control_receiver();
    }
}

/* [ END OF FILE */