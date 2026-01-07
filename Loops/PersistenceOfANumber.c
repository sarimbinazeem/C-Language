//Write a C program that determines how many steps it takes for a given positive integer to reduce to a single-digit number by repeatedly multiplying its digits together. The program should accept an integer input from the user and then repeatedly process the number by breaking it into individual digits, multiplying those digits to form a new number, and replacing the original number with this result. This process should continue until the number becomes a single digit. Each full digit-multiplication cycle counts as one step, and the total number of such steps should be displayed at the end. To solve this problem, think about how to repeatedly extract digits using arithmetic operators, how to reset calculations for each step, and how to use loops to control both digit processing and repetition until the stopping condition is met.

#include <stdio.h>

int main()
{
    int number, temp, product, persistence = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    // Continue until number becomes a single-digit number
    while (number >= 10)
    {
        product = 1;       // ? Reset product each time
        temp = number;

        while (temp > 0)
        {
            product *= (temp % 10);
            temp /= 10;
        }

        number = product;
        persistence++;
    }

    printf("The persistence of the number is: %d\n", persistence);

    return 0;
}