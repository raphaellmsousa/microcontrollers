/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 27 de Março de 2020, 15:01
 */


#include <xc.h>
#include <stdbool.h> 

#define _XTAL_FREQ 8000000

#pragma config FOSC = EXTRCCLK  // Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define pin RB0
#define buttonIncrement RA1
#define buttonDecrement RA2
#define buttonRegressive RA3

int number = 0;
int mode = 0; //0: increment/decrement; 1: regressive
int count = 0;

int segments[] = {
    /*To do
     Complete the vector with the correspondent binary numbers
     to write, in the seven-segments display, numbers
     from 0 to 9*/
    0b11111110, 0b00111000, 0b11011101, 0b01111101, 0b00111011,
    0b01110111, 0b11110111, 0b00111100, 0b11111111, 0b01111111
};

void activeDisplay(bool display, int number){
   /*To do
    Complete the function that select the seven-segments display
    Input:
    display => boolean variable that select the left or right display
    Ex.:
        display = 1; //right display
        display = 0; //left display
    number  => int variable that says which number will be written*/
    
    //1. First, you must ensure that the port B pins are deactivated
    TRISB = 0;
    
    //2. Choose the display
    pin = display;
        
    //3. Write the number on the selected display
    if(display == 1){
        int outDisplay = segments[number]|0b00010000;
        PORTB = outDisplay&0b11111111;
    }
    if(display == 0){
        int outDisplay = segments[number]|0b00010000;
        PORTB = outDisplay&0b11101111;
    }   
    
    //4. Use some delay
    __delay_ms(25);
}

void showNumber(int value){
    /*To do
    Complete the function to exhibit a number from 0 to 99
    on the seven-segments displays
    Input:
    value => int positive variable from 0 to 99*/
    
    //1. Declare 2 integer variables, 1 for units and another one for tens
    int unity;
    int ten;

    //2. Now, separate value in unity and ten
    ten = value % 1000 % 100 / 10;
    unity = value % 1000 % 100 % 10;  
    
    //3. Use the activeDisplay function to present units and tens
    activeDisplay (0, ten);
    activeDisplay (1, unity);
}

void main(void) {
    
    while (1) { 
     	/*To do
        Write a code to increment and decrement a number and 
        present it on 7 segments display */
        
        if(mode == 0){        
            if(buttonDecrement == 0){
                if(number>0){
                    number--;    
                }
                while(buttonDecrement == 0){
                    showNumber(number);
                }
            }
            if(buttonIncrement == 0){
                if(number<99){
                    number++;
                }
                while(buttonIncrement == 0){
                    showNumber(number);
                }
            }
            if(buttonRegressive == 0){            
                mode = 1;
            
                while(buttonIncrement == 0){
                    showNumber(number);
                }
            }
        }
        
        if(mode == 1){
            if(number>0){
                count++;
                if(count == 10){
                    number--;
                    count = 0;
                }                
            }
            else{
                mode = 0;
            }
        }
                
        showNumber(number);
    }    
    return;
}

