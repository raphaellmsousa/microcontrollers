/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 27 de Março de 2020, 15:17
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

int segments[] = {
    /*To do
     Complete the vector with the correspondent binary numbers
     to write, in the seven-segments display, numbers
     from 0 to 9*/

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
    
    //2. Choose the display
        
    //3. Write the number in the selected display
    
    //4. Use some delay

}

void main(void) {
    
    while (1) { 
       /*To do
        Use the function "activeDisplay" to write some numbers in the 
        seven-segments display*/

    }    
    return;
}

