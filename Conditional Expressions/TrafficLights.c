// Write a C program that controls a traffic signal based on the number of vehicles waiting and the presence of emergency vehicles.

// The program should take the following inputs:

// Number of vehicles at the traffic signal (positive integer)

// Emergency vehicle presence:

// 'Y' → Yes

// 'N' → No

// Traffic signal rules:

// If there is an emergency vehicle, the signal turns green immediately.

// Otherwise, the green light duration depends on the number of vehicles:

// 1–9 vehicles → 15 seconds

// 10–30 vehicles → 30 seconds

// More than 30 vehicles → 60 seconds

// Invalid inputs should be handled with an error message.

// The program should print either the emergency override message or the green light duration.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initiliazing variables for vehicles
    int vehicles;
    char emergency;
    
    
    //Taking input for number of vehicles present
    printf("Enter the number of vehicles at the traffic: ");
    scanf("%d",&vehicles);
    
    printf("Is there any emergency vehicle?: (Y for yes and N for no): ");
    scanf(" %c", &emergency);
    
    //Conditions
    //Condtion to check for emergency vehicles
    if (emergency == 'Y' || emergency == 'y')
    {
                  printf("Emergency! Signal turns GREEN immediately.\n");
    }
    else //To show duration of green light
    {
         if(vehicles<10 && vehicles>0)
         {
                        printf("Green light turns on for 15 seconds!\n");
         }
         
         else if(vehicles>=10 && vehicles<=30)
         {
                        printf("Green light turns on for 30 seconds!\n");
         }
         
         else if(vehicles>30)
         {
                        printf("Green light turns on for 60 seconds!\n");
         }
         
         else
         {
                        printf("Invalid Input !\n");
         }
         
    }
    
    system("pause");
    return 0;
}
