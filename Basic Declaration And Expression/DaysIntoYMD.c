//Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int days,y,m,d;
    
    printf("Enter number of days: " );
    scanf("%d",&days);
    
    y = days/365;
    days = days - (365 * y);
    m = days/30;
    d = days - (30*m);
    
    printf("years:%d \n months:%d \n days:%d \n",y,m,d);
    
    system("pause");
    
} 