#### Counter with seven-segments displays

#### Professor: Raphaell Maciel de Sousa

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

1. Create the project seven_segments (use our first class and follow the steps to create the project).

2. Write a program to show the number "0" on the secound display.

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 29 de Fevereiro de 2020, 09:05
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

void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b11111110;
    
    return;
}
```

<p align="center">
    <img src="./figs/zero.png" width="600" height="360" title="zero">
</p> 

3. Now, create a counter from 0 to 3.

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 29 de Fevereiro de 2020, 09:05
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

void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b11111110;
    __delay_ms(1000);
    PORTB = 0b00111000;
    __delay_ms(1000);
    PORTB = 0b11011101;
    __delay_ms(1000);
    PORTB = 0b01111101;
    __delay_ms(1000);
    
    return;
}
```
4. It is possible to use the decimal representation as follow:

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 29 de Fevereiro de 2020, 09:05
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

void main(void) {
    
    TRISB = 0;
    
    PORTB = 254;
    __delay_ms(1000);
    PORTB = 56;
    __delay_ms(1000);
    PORTB = 221;
    __delay_ms(1000);
    PORTB = 125;
    __delay_ms(1000);
    
    return;
}
```

**Challenge**: use a vector with the numbers from 0 to 9 and implement the seven segments display counter scanning this vector.

```sh

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
    /*To do
     Complete the vector with the correspondent binary numbers
     to write, in the seven-segments display, numbers
     from 0 to 9*/
};

void main(void) {
    
    TRISB = 0;
       
    while (1) { 
   	/*To do
	write your code here!*/

    }
    
    return;
}

```

**Challenge**: finish the follow code:

```sh

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
     to write, on the seven-segments display, numbers
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
        
    //3. Write the number on the selected display
    
    //4. Use some delay

}

void main(void) {
    
    while (1) { 
       /*To do
        Use the function "activeDisplay" to write some numbers on the 
        seven-segments display*/

    }    
    return;
}

```

**Challenge:** now, write a showNumber function to present a number from 0 to 99 on the seven-segments displays.

```sh

/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 27 de Março de 2020, 09:05
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

        
    //3. Write the number on the selected display
    

    //4. Use some delay

}

void showNumber(int value){
    /*To do
    Complete the function to exhibit a number from 0 to 99
    on the seven-segments displays
    Input:
    value => int positive variable from 0 to 99*/
    
    //1. Declare 2 integer variables, 1 for units and another one for tens
 

    //2. Now, separate value in unity and ten
 

    //3. Use the activeDisplay function to present units and tens
 
}

void main(void) {
    
    while (1) { 
       /*To do
        Use the function "showNumber" to write some numbers on the 
        seven-segments display*/
        showNumber(23);
    }    
    return;
}


```

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  
