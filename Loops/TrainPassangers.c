//Write a C program that acts as a Train Ticket Checker to monitor the number of passengers traveling in different train compartments. The program should first ask the user to enter the total number of compartments in the train. Then, using a loop, it should take the number of passengers in each compartment, ensuring that the input is valid (between 0 and 10 passengers per compartment). If a compartment has zero passengers, the program should display a message indicating that the compartment is empty; otherwise, it should display the number of passengers present in that compartment. Finally, after checking all compartments, the program should calculate and display the total number of passengers traveling on the train.

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