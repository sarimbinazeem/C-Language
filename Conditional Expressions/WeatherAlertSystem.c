//Write a C program that displays appropriate weather safety alerts based on the temperature entered by the user. The program should take temperature in degrees Celsius and, if the temperature is below freezing, determine whether snowfall is occurring to decide the alert. If the temperature is very high, it should check whether humidity is present before displaying the alert. For temperatures that fall within the normal range, the program should display a normal weather message. The solution should use conditional statements to make decisions.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for temperature and weather details
    float temperature;
    char humidity, snowfall;
    
    //Taking temperature input 
    printf("Entre temperature in Celcius: ");
    scanf("%f", &temperature);

    //Conditions for weather
    if(temperature<0)
    {
                     printf("Is there any snowfall? (Y for yes, N for No)");
                     scanf(" %c", &snowfall);
                     //Conditions for snowfall
                     if(snowfall=='Y' || snowfall == 'y')
                     {
                                      printf("Snowstorm Alert! \n");
                     }
                     else if (snowfall=='N' || snowfall == 'n')
                     {
                         printf("Frost Warning! \n");
                     }
                     
                     else
                     {
                         printf("Invalid input! \n");
                     }
    }
          
    else if(temperature>35)
    {
                     printf("Is there high humidity? (Y for Yes, N for No): ");
                      scanf(" %c", &humidity);        
                      //condition for humidty       
                     if(humidity=='Y' || humidity == 'y')
                     {
                                      printf("High Humidity Alert! \n");
                     }
                     else if (humidity=='N' || humidity == 'n')
                     {
                         printf("Dry Heatwave Alert! \n");
                     }
                     else
                     {
                         printf("Invalid input! \n");
                     }
    }         
    
    else   //Normal weather              
                                                     
    {
                                                     printf("Normal Weather Alert! \n");
    }
    
    system("pause");
    return 0;
}
