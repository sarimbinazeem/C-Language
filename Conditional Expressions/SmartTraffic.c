//Write a C program that calculates traffic fines based on the type of vehicle and the type of violation committed. The program should first ask the user to specify the vehicle, which could be a car, motorcycle, or truck, and then the type of violation, such as overspeeding, signal breaking, or wrong parking. Based on the combination of vehicle and violation, the program should display the corresponding fine amount. Use nested conditional statements or switch cases to handle different scenarios, and ensure that the program correctly identifies invalid inputs for either the vehicle type or the violation type, providing clear messages in such cases. The program should differentiate fines for each vehicle type while keeping the rules consistent for each violation.
#include <stdio.h>
#include <stdlib.h> //without this library my .exe wont open

int main()
{
    //Initializing variables for vehicle and violation
    char vehicle, violation;
    
    //Taking input of vehicle  and violation
    printf("Enter Vehcile Type: (C for Car, M for Motorcycle, T for truck) ");
    scanf(" %c",&vehicle);
    
    printf("Enter Violation Type: (O for Overspeeding ,S for signal breaking, W for wrong parking) ");
    scanf(" %c",&violation);
    
    //Using switch case for vehicle
    switch(vehicle)
    {        
                   //Cases of vehicle
                   //Car
                   case 'C':
                   case 'c':
                        //using vioaltion switch
                        switch (violation)
                        {
                               case 'O':
                               case 'o':
                                     printf("The Fine is Rs.3000 \n");
                                     break;
                             
                               case 'S':
                               case 's':
                                      printf("The Fine is Rs.2000 \n");
                                      break;
                        
                               case 'W':
                               case 'w':
                                    printf("The Fine is Rs.1500 \n");
                                    break;
                               default:
                                       printf("Invalid violation type!\n");
                                        break;
                        }
                        break;
                   //Motorcycle
                   case 'M':
                   case 'm':
                        //using vioaltion switch
                        switch (violation)
                        {
                               case 'O':
                               case 'o':
                                     printf("The Fine is Rs.2500 \n");
                                     break;
                             
                               case 'S':
                               case 's':
                                      printf("The Fine is Rs.2000 \n");
                                      break;
                        
                               case 'W':
                               case 'w':
                                    printf("The Fine is Rs.1000 \n");
                                    break;
                               default:
                                       printf("Invalid violation type!\n");
                                        break;
                        }
                        break;
                   //TRUCK
                   case 'T':
                   case 't':
                        //using vioaltion switch
                        switch (violation)
                        {
                               case 'O':
                               case 'o':
                                     printf("The Fine is Rs.8000 \n");
                                     break;
                             
                               case 'S':
                               case 's':
                                      printf("The Fine is Rs.7000 \n");
                                      break;
                        
                               case 'W':
                               case 'w':
                                    printf("The Fine is Rs.5000 \n");
                                    break;
                               
                               default:
                                       printf("Invalid violation type!\n");
                                        break;
                        }
                        break;
                   default:
                             printf("Invalid vehicle type!\n");
                             break;
    }
    
    system("pause");
    return 0;
}
                   
                   
                               
                               
                        
                   
        
