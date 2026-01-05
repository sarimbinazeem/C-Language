//Write a C program that generates an emergency card for patients based on their age and health condition. The program should prompt the user to enter the patient’s name, age, and condition, which can be critical, moderate, or mild. The program should then determine the priority of the emergency card: high priority if the patient is very young, elderly, or in critical condition, medium priority if the condition is moderate, and low priority if it is mild. The output should clearly display the patient’s details along with the priority level. Include conditional statements to handle all possible inputs and ensure the program responds appropriately if the user enters an invalid condition.

#include <stdio.h>
#include <stdlib.h> //without this library my .exe wont run

int main()
{
    //Initiliazing variables for patient details
    int age;
    char name[50];
    char condition;
    
    
    //Taking input for details
    printf("Enter the age: ");
    scanf("%d",&age);
    
    printf("Enter the name: ");
    scanf("%s",&name);
    
    printf("Enter the condition: (C for critical, M for moderate, m for mild): ");
    scanf(" %c",&condition);
    
    
    //Conditions to check for critical health or not
    
    if(age<12 || age >65 || 
    condition== 'C') //Critical Condition
    {
                 //Printing the details
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n", age);
                  
                  printf("Condition: Critical \n");
                  printf("High Priority Card!\n");
             
    }
    
    else if(condition == 'M') //Moderate Condition
    {
         //Printing the details
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n" ,age);
                  printf("Condition: Moderate \n");
                  printf("Medium Priority Card!\n");
    }
    
    else if (condition== 'm') //mild condition
    {
         //Printing the details
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n" ,age);
                  printf("Condition: mild \n");
                  printf("Low Priority Card!\n");
    } 
    else //in case of invalid condition 
    {
        printf("Invalid Condition entered!\n");
    }
  
    
  
    system("pause");
    return 0;
}
    
    
    
    
    
