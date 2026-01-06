//Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for ( i = 2; i<= n ; i= i +2)
    {  
       
        printf("%d^2 = %d\n",i,i*i);
        
    }
    
    
    system("pause");
    return 0;
}


//same as 
//for(i = 2; i <= x; i++) { // Loop through numbers from 2 to x
  //      if((i%2) == 0) { // Check if the number is even
    //        printf("%d^2 = %d\n", i, i*i); // Print the square of the even number
      //  }
