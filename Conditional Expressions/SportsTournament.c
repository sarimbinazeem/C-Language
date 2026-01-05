//Write a C program to determine if a participant is eligible for a sports tournament. The program should first check whether the participant is medically fit. If they are fit, it should then ask for their age, which must be between 18 and 35 inclusive. Next, it should ask for the participant’s performance percentage, which should be greater than 80 to qualify. If all these conditions are met, the program should display a message indicating that the participant is selected; otherwise, it should display a reason for ineligibility.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for details 
    int age, performance;
    char medical;
    
    //Taking input for medical
    printf("----------------Sports Tournament Eligibility----------------\n");
    printf("Are you medically fit? (Y for yes and N for No): ");
    scanf(" %c", &medical);
    
    //Condition of medical
    if(medical == 'Y' || medical== 'y')
    {
               printf("Enter your age: ");
               scanf("%d", &age);
               //Condition of age
               if(age>=18 && age<=35) 
               {
                          printf("Enter your performance percentage (0 to 100) ");
                          scanf("%d", &performance);
                          //Condition of performance
                          if(performance >80)
                          {
                                         printf("You are selected! \n");
                          }
                          else
                          {
                              printf("Not eligible - Low performance \n");
                          }
               }
               else
               {
                   printf("Not eligible - Invalid Age \n");
               }
    }
    else
    {
        printf("Not eligible - Medically Unfit \n");
    }
    
    system("pause");
    return 0;
}
    
    
