//Write a C program that reads 5 numbers and sums all odd values between them.

#include <stdio.h>
#include<stdlib.h>

int main() {
    int j, numbers[5], total=0; // Declare variables for loop counter, an array of numbers, and total
    
    // Prompt user for five numbers and store them in the array
    printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
    
    // Loop through the numbers to find and sum the odd ones
    for( j = 0; j < 5; j++) {
        if((numbers[j]%2) != 0) 
        {
            total += numbers[j];
        }   
    }
    
    // Print the sum of odd values
    printf("\nSum of all odd values: %d", total);
    printf("\n");
    
    system("pause");
    
    return 0;
}
