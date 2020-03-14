#include <stdio.h>

int main()
{
    int data[5];
    int evenNumbers[] = {0, 2, 4, 6, 8, 10};
    data[0] = 100;
    data[3] = 14;
    
    printf("Value of 0 index is %i", data[0]);
    printf("\nValue of 3 index is %i", data[3]);
    printf("\nEven number of the position 3 is: %i", evenNumbers[3]);

    return 0;
}
