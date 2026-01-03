//Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float a,b,c,P;
    
    printf("Enter the first side: ");
    scanf("%f",&a);
    
    printf("Enter the second side: ");
    scanf("%f",&b);
    
    printf("Enter the third side: ");
    scanf("%f",&c);
    
    if ( a < (b+c) && b < (a+c) && c<(a+b))
    {
         P = a + b + c;
         printf("The perimeter of the triangle is:  %.2f\n",P);
    
    }
    else 
    {
         printf("Given triangle is not valid!\n");
    }
    
    system("pause");
    return 0;
    
}
