//Write a C program that takes a password as input and ensures it contains only numeric and symbolic characters (no alphabets allowed). The program should calculate and display the length of the entered password and check whether it meets the minimum length requirement of at least 6 characters. Based on this check, display an appropriate message indicating whether the password is valid or too short.


#include <stdio.h>

#define PASSWORD 100

int main()
{
    // Initializing Variables
    char password[PASSWORD];
    int passwordLength = 0;

    // Prompting user for password
    printf("Enter a Password (Numeric & Symbolic, At least 6 characters long): ");

    // Using negated scanset to reject alphabets
    if (scanf("%[^A-Za-z\n]", password) != 1)
    {
        printf("Invalid Input! Password should not contain alphabets!\n");
        return 0;
    }

    // Displaying Password
    printf("\nYour Password is: %s\n", password);

    // Counting the Length of the Password
    while (password[passwordLength] != '\0')
    {
        passwordLength++;
    }

    // Display Length
    printf("The Length of the Password is: %d\n", passwordLength);

    // Checking Minimum Password Length Requirement
    if (passwordLength < 6)
    {
        printf("Password is too short! It must be at least 6 characters long.\n");
    }
    else
    {
        printf("Valid Password!\n");
    }

    return 0;
}