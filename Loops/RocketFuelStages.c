
//Write a C program named Rocket Fuel Stage Tracker that simulates burning stages of a rocket based on fuel levels using sentinel-controlled looping. The program should first ask the user to enter the total fuel in liters, ensuring the input is a positive number. Then, the program repeatedly “burns” 100 liters per stage, printing the stage number and remaining fuel after each burn. This continues until the remaining fuel is less than 100 liters. At the end, the program should indicate whether no stages were burned (if the initial fuel was less than 100 liters) or that the final stage has been reached.

#include <stdio.h>

int main()
{
    //Initializing Variables for fuels
    int liters, stage =1;

    //Taking input of number of litres
    printf("Enter number of litres in rocket: ");
    scanf("%d", &liters);

    //Valid input
    while (liters<=0)
    {
        printf("Enter valid input! (Greater than 0): ");
        scanf("%d", &liters);
    }

    //loop to deduct litres
    while (liters>=100)
    {
        liters = liters -100;
        printf("Stage %d completed. \n Remaining Fuel: %d liters \n ", stage, liters);
        stage++;
        
    }
    
    //Final message
    if(stage == 1)
    {
          printf("Fuel less than 100 liters. No stages burned.\n");
    }
    else
    {
        printf("Final Stage Reached! Fuel is less than 100 liters.\n");
    }

    return 0;
}