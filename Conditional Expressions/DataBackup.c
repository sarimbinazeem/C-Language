//Write a C program that schedules data backups based on the day and whether any data corruption is detected. The program should first take the day number as input and then ask if there is any corruption in the data. If the day number is invalid (zero or negative), the program should display an error message. If corruption is detected, the program should immediately run a full backup. If no corruption is found and the day is a multiple of seven, the program should perform the regular weekly full backup. On all other days without corruption, an incremental backup should run. Use conditional statements to check the day and corruption status, and ensure all edge cases are handled properly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for data backup
    int day;
    char corruption;
    
    //Taking input for variables
    printf("Enter the day number: ");
    scanf("%d",&day);
    
    printf("Is there any corruption in the data?: (Y=yes , N = no) ");
    scanf(" %c",&corruption);
    
    
    //Conditions for backup
    if (day <= 0)
    {
        printf("Invalid day number!\n");
    }
    
    else if (corruption == 'y' || corruption == 'Y')
    {
        printf("Corruption detected! Immediate FULL  backup running.\n");
    }
    
    else if (day % 7 == 0)
    {
        printf("Weekly FULL backup .\n");
    }
    
    else
    {
        printf("Incremental backup running.\n");
    }
    
    system("pause");
    return 0;
    
}
    
