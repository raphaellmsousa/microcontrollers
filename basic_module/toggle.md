### First project

#### Toggle

#### Professor: Raphaell Maciel de Sousa


**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 25 de Março de 2020, 21:33
 */

#include <xc.h>
#include <stdbool.h> 

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

#define LED RA0
#define button RA1 

int count = 0;

int buttonState = 1; //not active
int lastButtonState = 1; //not active

bool ledStatus = 0;

void main(void) {

    TRISA0 = 0; //Output
    TRISA2 = 1; //Input   
    
    while(1){    
        
        buttonState = button;
        
        if(buttonState != lastButtonState){  
            ledStatus = !ledStatus;
        }
        else{
            ledStatus = ledStatus;
        }
        
        LED = ledStatus;
       
        lastButtonState = buttonState;
    }
    
    return;
}

```

**Challange**: modify the above code as follow: the LED just should change their status when you push the button.

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

