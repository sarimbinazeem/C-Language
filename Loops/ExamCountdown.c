//Write a C program that simulates an online exam timer using a counter-controlled loop. The program should ask the user to enter the total duration of the exam in minutes and ensure that the input is valid. Once a valid duration is entered, the program should display a countdown showing the remaining time at each minute. The countdown should continue until the time reaches zero, after which an appropriate message should be displayed indicating that the exam time has ended and the exam has been submitted.
#include <stdio.h>

int main()
{
    //Initializing variables 
    int duration;

    //Taking valid input through loops
    do 
    {
        printf("Enter the duration of your exam (in minutes): ");
        scanf("%d", &duration);
    }
    while(duration < 0);


    //Loop for countdown
    for (;duration >0 ; duration-- )
    {
        printf("Time remaining: %d minutes \n", duration);
    }

    printf("Times up- Exam Submitted! \n");
    return 0;
}