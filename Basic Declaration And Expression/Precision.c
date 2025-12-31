//Task 9: Precision in C
//Write a C program that asks the user for a floating-point number and prints it with 3 decimal places and with 6
//decimal places using printf precision specifiers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    
    printf("The floating-point number with three decimal places is: %.3f\n", number);
    printf("The floating-point number with six decimal places is: %.6f\n", number);
    
    system("pause"); 
    return 0;
}
