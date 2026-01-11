//Write a C program that reads two integers and checks whether they are multiplied or not.


#include <stdio.h>
#include <stdlib.h>

int reverse(int*,int*);

int reverse(int* x, int* y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

// The reverse function is not needed we can just do if ( x%y == 0|| y % x == 0) and it will do the trick!



int main() 
{
    int x,y;
    
    printf("Enter 1st number: ");
    scanf("%d",&x);
    
    printf("Enter 2nd number: ");
    scanf("%d",&y);
    
    if (y>x)
    {
            reverse(&x,&y);
    }
    
   
   if ( x%y == 0) 
   {
        printf("Multiplied! \n");
   }
   
   else
   {
       printf("Cant be multiplied! \n");
   }
    
    system("pause");
    return 0;
    
}
