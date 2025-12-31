//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int seconds,hours,minutes,remsec;
    
    printf("Enter number of seconds ");
    scanf("%d",&seconds);
    
    hours = seconds / 3600;       // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60; // Seconds se 3600 hatake jitne seconds bachrahe h woh 60 se divide 
    remsec = seconds % 60;        // remaining seconds
     
     
    //Above can also be done by this
    //hours = seconds/3600;
     //minutes = (seconds - (3600*hours))/60;
      //remsec = (seconds - (3600*hours) - (60*minutes));
      
      
      
    printf("H:M:S: %d:%d:%d",hours,minutes,remsec);
    
    system("pause");
    return 0;
    
}