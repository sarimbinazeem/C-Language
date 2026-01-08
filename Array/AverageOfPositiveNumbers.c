//Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n[5],positive,i;
    float total,average;
    positive = 0;
    total = 0;
    
    
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
             total = total + n[i];
             
        }
    }
    
    average = total / positive;
    
   if (positive > 0) 
    {
        average = total / positive;
        printf("The number of positive numbers: %d\n", positive);
        printf("The average of the positive numbers is: %.2f\n", average);
    }
    else
    {
        printf("No positive numbers entered.\n");
    }
    
   
    system("pause");
    return 0;
}
