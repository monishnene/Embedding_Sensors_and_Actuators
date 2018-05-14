/* ========================================
 *
 * ECEN 5053 - Lab 2
 * Angela Maio and Monish Nene
 * Reads the digital outputs A and B of a rotary encoder and decodes them to determine 
 * rotation count [-20, 20] and rotation angle [0,360)
 * Demo 4 - Filter rotary encoder outputs using passive analog RC filters to remove 
 * switch-bounce noise above 500 Hz
 *
 * ========================================
*/
#include "project.h"
#define Delay_us 50

void LCD() // LCD Display Initializing
{              
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("Rotary Encoder");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("Rotate to start");
        return;
}

void LCDcount(int8 count)           // LCD Display Count and Angle
{           
        int16 count2,degree;
        if(count < 0)               // if count is negative
        {count *= -1;
        count2 = count/2 % 20;      // store remainder to calculate angle in deg
            
        degree = (360-count2*18);   // angle subtracts from 360
        
        if(degree==360)
        {degree=0;}
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("                "); // clear first row
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("Cnt = -");  // display negative sign for count
        LCD_Char_1_PrintU32Number(count/2); // display count
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("                "); // clear second row
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("Deg = ");   // display degree label
        LCD_Char_1_PrintU32Number(degree);  // display degree
        }
        else                        // count is positive
        {
        count2 = count/2 % 20;  
        degree = (count2*18);   
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(0,0);
        LCD_Char_1_PrintString("Cnt = ");
        LCD_Char_1_PrintU32Number(count/2);
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("                ");
        LCD_Char_1_Position(1,0);
        LCD_Char_1_PrintString("Deg = ");
        LCD_Char_1_PrintU32Number(degree);
        }
        return;
}

int main(void)
{   
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Initialize variables */
    int8 count=0;           // create count signed integer
    uint8 A_State;          // create unsigned int to store pin A state
    uint8 B_State;          // create unsigned int to store pin B state
    uint8 B_Prev_State = 1; // initialize pin B previous state to digital high
    
    /* Initialization/startup code */
    LCD_Char_1_Start();
    LCD();   
    
    for(;;)
    {
        /* Read from digital pins A and B */
        A_State = p3_0_Read();
        B_State = p3_1_Read();
        
        /* Check if pulse has occurred */
        if(B_State != B_Prev_State) {       // if B pin has changed states
            if(A_State != B_State){         // check if A pin is also high
                count++;                    // increment counter (CW rotation)
                LCDcount(count);            // display count and angle
                CyDelayUs(Delay_us);          // delay to digitally filter
            } else {                        // if A pin is low
                count--;                    // decrement counter (CCW rotation)
                LCDcount(count);            // display count and angle
                CyDelayUs(Delay_us);          // delay to digitally filter
            }
        }
        
        B_Prev_State = B_State;             // save previous B pin state
    }
}

/* [] END OF FILE */