// Write a C program that simulates a mobile call recharge countdown system. The program should take the user’s current balance as input and repeatedly allow calls to be made as long as the balance is sufficient. Each call should reduce the balance by a fixed amount, and the updated balance should be displayed after every call. The repetition should continue until the balance is no longer enough to make another call, at which point the program should display a message indicating that a recharge is required.
#include <stdio.h>

int main()
{
    //Initliazing variables for balance
    int balance;

    //Taking balance as input
    printf("What is your current balance (In Rupees)? ");
    scanf("%d", &balance);

    //Loop and condition to check if balance is enough for a call
    while (balance >=10)
    {
        printf("Calling... \n");
        balance = balance -10;
        printf("The new balance after call is: %d \n", balance);
    }

    printf("Recharge Required! \n");

    return 0;

}