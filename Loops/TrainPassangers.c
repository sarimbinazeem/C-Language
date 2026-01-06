//Task 9 – Train Ticket Checker

#include <stdio.h>

int main()
{
    //Initializing Variables for comaprtment and passangers
    int compartment, passangers, totalpassangers= 0;

    //Taking input for compartment
    printf("How many compartment are there? ");
    scanf("%d", &compartment);

    //Taking loops to calculate total passangers
    for(int i =1; i<= compartment; i++)
    {
        printf("Enter number of passangers (0-10): ");
        scanf("%d", &passangers);

        //For valid input
        while(passangers<0 || passangers>10)
         {
            printf("Enter valid input! \n");
            printf("Enter number of passangers (0-10): ");
            scanf("%d", &passangers);
         }

        //Condition for Empty Container
        if (passangers == 0)
        {
            printf("Compartment %d is Empty \n", i);
            
        }
        else
        {
             printf("There are %d passangers in compartment %d \n", passangers, i);
             totalpassangers = totalpassangers + passangers;

        }

    }

    //Final Message
    printf("The total passangers are: %d", totalpassangers);
    return 0;

}