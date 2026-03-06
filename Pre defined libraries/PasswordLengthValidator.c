// A small tech startup is developing a basic login security system for their internal software. To prevent unauthorized access, the system must verify whether a user enters a sufficiently strong password when attempting to log in.

// For security purposes, the system will allow a limited number of login attempts. Each time a user enters a password, the system should check if it meets the minimum length requirement defined by the company’s security policy. If the password meets the requirement, the user is granted access immediately. Otherwise, the system informs the user that the password is not acceptable and allows another attempt.

// If the user continues to enter invalid passwords and exceeds the allowed number of attempts, the system must automatically lock the account to prevent further access attempts.

// Write a program that simulates this password verification process.

#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int attempts = 5 , valid = 0;

    for (int i = 1; i<= attempts; i++)
    {
        printf("Attempt %d: Enter your password: ",i);
        scanf("%s", password);

        if(strlen(password) >=6)
        {
            printf("Valid Password!. Access granted! \n");
            valid = 1;
            break;
        }
        else
        {
            printf("Password too short. Try again! \n");
        }
    }

    if(!valid)
    {
        printf("Maximum attempts! Account locked. \n");

    }

    return 0;
    
}   