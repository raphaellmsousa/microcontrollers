# Introduction To C Coding

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  

Table of Contents 

 1. [Coding in C](#coding)
 2. [C vs Assembly](#assembly)
 3. [Structure of a C program](#structure)

*******

<div id='coding'/>

## Coding in C

To coding in any language, it is necessary to understand its structure and syntax:

1. Directives;
2. Declaration;
3. Data types;
4. Functions;
5. Conditional structures;
6. Repetition structures.

*******

It is possible to create programs for many OS as follow:

1. Windows;
2. Mac OS X;
3. Linux.

*******

<div id='assembly'/>

## C vs Assembly

<p align="center">
    <img src="./figs/assembly-fundamentals.jpg" width="600" height="360" title="Open IDE">
</p> 

https://www.slideshare.net/SyedZaidIrshad/assembly-fundamentals

*******

<div id='structure'/>

## Structure of a C program

```sh
int main(){
	return 0;
}

or

void main(){

}
```

*******

The follow code it is a function that do not use so much resource from the language. To explore more functions, it is necessary including some libraries.

```sh
int main(){
	int value = 10;
	value = value + 1;
	return 0;
}
```
To including libraries, it is necessary to use some **Directives**

*******

The directive **#include** is used for pointing to a file in the PC.

```sh
#include <stdio.h>
```
**stdio.h** (standard IO) is a standard library used for input and output data.

The directive **#define** is used to assign a value to a variable. 

Ex.:

```sh
#define SPEED 50
```

Another example:

```sh
#include <stdio.h>

int main(){
    printf("Hello, World!\n");

    return 0;
}
```

In this case, the special function **printf** just can be used with the inclusion of the library **stdio.h**.

* **Problem:** write a code that uses the directive **#define SPEED 50** and print its sum with an int number.

**[*Try it yourself!*](https://www.tutorialspoint.com/compile_c_online.php)**  

**[*Problem solution*](https://github.com/raphaellmsousa/microcontrollers/blob/master/coding_in_C/solutions/printEx.c)**  

*******

**[*Back to home page*](https://github.com/raphaellmsousa/microcontrollers)**  



