//Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int p,q,r,s;
    
    printf("Enter the value of p: ");
    scanf("%d",&p);
    
    printf("Enter the value of q: ");
    scanf("%d",&q);
    
    printf("Enter the value of r: ");
    scanf("%d",&r);
    
    printf("Enter the value of s: ");
    scanf("%d",&s);
    
    //CHeck positivity
     if ( q<=0 || r <= 0 || s<=0) 
    {
         printf("Enter a positive number for q,r,s\n");
         system("pause");
         return 0;
         
    }
    
    //CHeck even
    if (p%2!=0)
    {
         printf("Enter an even number of p\n");
         system("pause");
         return 0;
         
    }
   
   
   //Conditions 
    if ( q>r && s>p && (r + s) > (p + q))
    {
         printf("Correct values\n");
         
    }
    else
    {
        printf("Wrong values\n");
    }   
    
    system("pause");
    
    return 0;
    
    
    
    
}


    
