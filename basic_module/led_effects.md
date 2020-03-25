### First project

#### LED Effects

#### Professor: Raphaell Maciel de Sousa


**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

1. Lets create some effects with LEDs and using buttons to choose different ones.

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 1 de Março de 2020, 22:05
 */

#include <xc.h>

#define _XTAL_FREQ 8000000

// CONFIG
#pragma config FOSC = EXTRCCLK  // Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define TIME 100
#define BT_EFFECT1 RA1
#define BT_EFFECT2 RA2
#define BT_EFFECT3 RA3
#define BT_EFFECT4 RA4

void firstEffect(void){
    PORTB = 0b11111111;
    __delay_ms(500);
    PORTB = 0b00000000;
    __delay_ms(500);
}

void secoundEffect(void){
    PORTB = 0b11111111;
    __delay_ms(TIME);
    PORTB = 0b01111111;
    __delay_ms(TIME);
    PORTB = 0b00111111;
    __delay_ms(TIME);
    PORTB = 0b00011111;
    __delay_ms(TIME);
    PORTB = 0b00001111;
    __delay_ms(TIME);
    PORTB = 0b00000111;
    __delay_ms(TIME);
    PORTB = 0b00000011;
    __delay_ms(TIME);
    PORTB = 0b00000001;
    __delay_ms(TIME);
    PORTB = 0b00000000;
    __delay_ms(TIME);
}

void thirdEffect(void){
    PORTB = 0b00000001;
    __delay_ms(TIME);
    PORTB = 0b00000010;
    __delay_ms(TIME);
    PORTB = 0b00000100;
    __delay_ms(TIME);
    PORTB = 0b00001000;
    __delay_ms(TIME);
    PORTB = 0b00010000;
    __delay_ms(TIME);
    PORTB = 0b00100000;
    __delay_ms(TIME);
    PORTB = 0b01000000;
    __delay_ms(TIME);
    PORTB = 0b10000000;
    __delay_ms(TIME);   
}

void fourthEffect(void){
    
    PORTB = 0b00000001;
    __delay_ms(TIME);
    PORTB = 0b00000010;
    __delay_ms(TIME);
    PORTB = 0b00000100;
    __delay_ms(TIME);
    PORTB = 0b00001000;
    __delay_ms(TIME);
    PORTB = 0b00010000;
    __delay_ms(TIME);
    PORTB = 0b00100000;
    __delay_ms(TIME);
    PORTB = 0b01000000;
    __delay_ms(TIME);
    PORTB = 0b10000000;
    __delay_ms(TIME);   
    
    PORTB = 0b01000000;
    __delay_ms(TIME);    
    PORTB = 0b00100000;
    __delay_ms(TIME); 
    PORTB = 0b00010000;
    __delay_ms(TIME); 
    PORTB = 0b00001000;
    __delay_ms(TIME); 
    PORTB = 0b00000100;
    __delay_ms(TIME); 
    PORTB = 0b00000010;
    __delay_ms(TIME); 
    PORTB = 0b00000001;
    __delay_ms(TIME);    
}

void main(void) {
    
    TRISB = 0;  //Output
    TRISA1 = 1; //Input
    TRISA2 = 1; //Input
    TRISA3 = 1; //Input
    TRISA4 = 1; //Input
    
    while(1){
        
        if(BT_EFFECT1 == 0){
            firstEffect();
        }
        else if (BT_EFFECT2 == 0){
            secoundEffect();
        }
        else if (BT_EFFECT3 == 0){
            thirdEffect();
        }
        else if (BT_EFFECT4 == 0){
            fourthEffect();
        }
    }    
    return;
}

```

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

