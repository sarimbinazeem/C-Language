//Write a C program that accepts three integers and finds the maximum of three.

#include <stdio.h>
#include <stdlib.h>

int main()
 {
          int a,b,c;
          
          printf("Enter the first number:\n ");
          scanf("%d",&a);
          
          printf("Enter the second number:\n ");
          scanf("%d",&b);
          
          printf("Enter the third number:\n ");
          scanf("%d",&c);
          
          if (a>=b && a>=c){
                  printf("The maximum number is: %d\n",a);
                  }
                  
          else if (b>=a && b>=c) {
               printf("The maximum number is: %d\n",b);
                  }
                  
          else {
               printf("The maximum number is: %d\n",c);
                  }     
               
          system("pause");
          return 0;
                
               
          
          
      
      
      
 }
