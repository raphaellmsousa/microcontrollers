#include <stdio.h>

int main()
{
    float firstGrade = 6.78;
    float secoundGrade = 8.75;
    float thirdGrade = 5.16;
    
    float averageGrade = (firstGrade + secoundGrade + thirdGrade)/3;
    
    printf("Grade 1: %.2f", firstGrade);
    printf("\nGrade 2: %.2f", secoundGrade);
    printf("\nGrade 3: %.2f", thirdGrade);
    printf("\nAverage: %.2f", averageGrade);

    return 0;
}
