//Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n[5],positive,negative,i;
    positive = 0;
    negative = 0;
    
    printf("Enter first number: ");
    scanf("%d", &n[0]);
    
    printf("Enter second number: ");
    scanf("%d", &n[1]);
    
    printf("Enter third number: ");
    scanf("%d", &n[2]);
    
    printf("Enter fourth number: ");
    scanf("%d", &n[3]);
    
    printf("Enter fifth  number: ");
    scanf("%d", &n[4]);
    
    for (i = 0 ; i<5; i++)
    {
        if ( n[i] > 0 )
        {
             positive++;
             
        }
        else if ( n[i] < 0)
        {
             negative++;
        }
        
    } 
    
    printf("The number of positive number: %d\n", positive);
    printf("The number of negative number: %d\n", negative);
    
    system("pause");
    return 0;
}
