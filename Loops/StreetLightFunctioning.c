//Write a C program to simulate a smart streetlight control system using a counter-controlled loop. The program should first ask the user whether it is day or night and take appropriate action based on the input. If it is daytime, no streetlights should be activated. If it is nighttime, the program should ask for the total number of streetlights and then, one by one, check the working status of each streetlight. For every working streetlight, display a message indicating that it has been turned on, and for faulty ones, display a message showing that it is skipped. After checking all streetlights, display a final message indicating that the streetlight activation process is complete.

#include <stdio.h>

int main()
{
    //Initializing variables for details
    char day_night ,status;
    int streetlight;

    //Taking input whether it is day or night
    printf("Is it day or night? (D for Day, N for Night) ");
    scanf(" %c", &day_night);

    //Conditions to check for day or night
    if (day_night == 'D' || day_night == 'd')
    {
        printf("No streetlight turned on for daytime. \n");
    } 
    else if (day_night == 'N' || day_night == 'n')
    {
        //Taking number of streetlights as input
        printf("How many streetlights are there? ");
        scanf("%d", &streetlight);
        
        //Looping to check wheter the light is working or not
        for (int i = 1; i <= streetlight ; i++ )
        {
            printf("Is light %d working? (F for faulty , W for working) ", i);
            scanf(" %c", &status);

            if(status == 'W' || status == 'w')
            {
                printf("Light %d is turned ON \n", i);
                
            }
            else
            {
                printf("Light %d is Faulty \n", i);
                printf("Skipping! \n");
            }
        }

        //Final message
        printf("Streetlight Activation Done. \n");
    }
    else //Invalid case 
    {
        printf("Invalid Input! \n");
    }

    
    return 0;

}