/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 27 de Março de 2020, 08:19
 */


#include <xc.h>

#define _XTAL_FREQ 8000000

#pragma config FOSC = EXTRCCLK  // Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

int segments[] = {
   0b11111110, 0b00111000, 0b11011101, 0b01111101
};

void main(void) {
    
    TRISB = 0;
       
    int number = 0;   
    
    while (1) { 
        PORTB = segments[number];
        number++;
        if (number > 3) {
            number = 0;
        }
        __delay_ms(1000);
    }
    
    return;
}

