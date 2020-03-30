#### Multiplexing seven-segments displays

#### Professor: Raphaell Maciel de Sousa

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

1. Create the project seven_segments (use our first class and follow the steps to create the project).

2. Write the number zero in the right display, as follow:

<p align="center">
    <img src="./figs/zero_number.png" width="600" height="360" title="zero">
</p> 

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 1 de Março de 2020, 07:30
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

void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b111111110;
    
    return;
}
```

3. Now, write zero in the left display.

<p align="center">
    <img src="./figs/left_display.png" width="600" height="360" title="zero">
</p> 

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 1 de Março de 2020, 07:30
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

void main(void) {
    
    TRISB = 0;
    
    //PORTB = 0b111111110; //right display
    
    PORTB = 0b111101110; //left display
    
    return;
}
```

4. Write the number zero in the left and right display in the same program, but use a delay of 1s between them.

```sh
/*
 * File:   newmain.c
 * Author: raphaell
 *
 * Created on 1 de Março de 2020, 07:30
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

void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b111111110; //right display
    __delay_ms(1000);
    PORTB = 0b111101110; //left display
    __delay_ms(1000);
    
    return;
}
```

5. Change the delay for 100 ms. What is the result we should expect?

6. Decrease even more the delay. You should see both left and right displays presenting the number zero.

<p align="center">
    <img src="./figs/multiplex.png" width="600" height="360" title="zero">
</p> 

Solution:

```sh
void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b111111110; //right display
    __delay_ms(40);
    PORTB = 0b111101110; //left display
    __delay_ms(40);
    
    return;
}
```

7. Write the number 23 by using multiplexation.

<p align="center">
    <img src="./figs/display23.png" width="600" height="360" title="zero">
</p> 

Solution:

```sh
void main(void) {
    
    TRISB = 0;
    
    PORTB = 0b01111101; //right display
    __delay_ms(40);
    PORTB = 0b11001101; //left display
    __delay_ms(40);
    
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

    }    
    return;
}


```

**Challenge:** finish the code to increment (RB1) and decrement (RB0) from 0 to 99. And a button (RB2) to do a countdown:

Obs.: use a variable to selec the mode as follow:

```sh
int mode = 0; //0: increment/decrement; 1: regressive
```

```sh
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

int mode = 0; //0: increment/decrement; 1: regressive

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
        Write a code to increment and decrement a number and 
        present it on 7 segments display */
        
    }    
    return;
}

```

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  
