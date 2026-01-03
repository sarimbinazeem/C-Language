// Write a C program that assigns passengers to boarding groups based on their seat number, ticket class, and whether they have a child under five years of age.

// The program should take the following inputs:

// Seat number (positive integer)

// Ticket class:

// 'B' → Business

// 'E' → Economy

// Children under five:

// 'Y' → Yes

// 'N' → No

// Boarding rules:

// Any passenger with a Business class ticket or traveling with a child under five is assigned to Group A.

// Economy class passengers are assigned based on seat number:

// Seats 1–10 → Group B

// Seats 11–20 → Group C

// Seats 21 and above → Group D

// If the seat number or inputs are invalid, display an error message.

// The program should print the assigned boarding group for each passenger.

#include <stdio.h>
#include <stdlib.h>

int main()
{
     //initializing variables for detail 
    int seat;
    char ticket_class, children;
    
    //Input the details
    printf("Enter the seat number: ");
    scanf("%d",&seat);
    
    printf("Enter your ticket class (B for Business , E for Economy): ");
    scanf(" %c",&ticket_class);
    
    printf("Is there any child younger than five?: (Y for Yes , N for No): ");
    scanf(" %c",&children);
    
    //Conditions for assigning to boarding group
    
    if(ticket_class == 'B' || children == 'Y')
    {
        printf("You are assigned to Group A! \n");
    }
    else if(ticket_class == 'E')   
    {
        if (seat>=1 && seat<=10)
        {
            printf("You are assigned to Group B! \n");
        }
        else if (seat>=11 && seat<=20)
        {
            printf("You are assigned to Group C! \n");
        }
        else if (seat>=21)
        {
            printf("You are assigned to Group D! \n");
        }
        else
        {
            printf("Invalid seat number! \n");
        }
    }
    else
    {
        printf("Invalid input! Try again. \n");
    }
    
    system("pause");
    return 0;
}
         
                    
