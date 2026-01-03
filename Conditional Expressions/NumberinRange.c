//Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
//Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    //Check for negativity
    if (num<0)
    {
              printf("Enter a positive number \n");
              system("pause");
              return 0;
              
    }
    
    // CHeck greater than 80
     if (num>80)
    {
              printf("Enter a number less than 80 \n");
              system("pause");
              return 0;
              
    }
    
       if (num>=0 && num <=20)
    {
              printf("Range: [0,20]\n");
             
    }
    
         else if (num>=21 && num <=40)
    {
              printf("Range: [21,40]\n");
             
    }
    
         else if (num>=41 && num <=60)
    {
              printf("Range: [41,60]\n");
             
    }
    
        else  if (num>=61 && num <=80)
    {
              printf("Range: [61,80]\n");
             
    }
    
    system("pause");
    return 0;
    
}
