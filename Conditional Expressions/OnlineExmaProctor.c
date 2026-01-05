// Write a C program that simulates an online examination proctoring system based on the number of times a student switches browser tabs during an exam.

// The program should take the number of tab switches as input and display the appropriate exam status according to the following rules:

// 0 switches → Exam completed successfully without warnings

// 1–2 switches → Exam completed with warnings

// 3 switches → Exam terminated

// Any other value should be treated as invalid input

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variable for switch
    int switches;
    
    //Taking input for tab switch
    printf("Enter number of tab switches: \n");
    scanf("%d",&switches);
    
    //Using switch statements to print cases
    switch(switches)
    {
                    case 0:
                         printf("The exam completed successfully without any warnings!. \n");
                         break;
                         
                    case 1:
                         printf("Warning! you switched the tab once.\n");
                         printf("Exam completed with warnings.\n");
                         break;
                         
                    case 2:
                         printf("Warning! you switched the tab twice. \n");
                         printf("Exam completed with warnings.\n");
                         break;
                         
                    case 3:
                         printf("The exam is terminated. \n");
                         break;
                         
                    default:
                            printf("Invalid Input!\n");
                            break;
    }
    
    system("pause");
    return 0;
}
    
    
                         
                    
