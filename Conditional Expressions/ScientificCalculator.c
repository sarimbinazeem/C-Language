//Write a C program that functions as a scientific calculator. The program should first ask the user to enter a value and then choose a mode, either Basic or Advanced. In Basic mode, the user can perform square root, power, or logarithm operations. Ensure that logarithms are only calculated for non-negative numbers. For the power operation, the program should ask for the exponent. In Advanced mode, the user can perform trigonometric calculations: sine, cosine, or tangent, with the value assumed to be in radians. The program should validate both the mode and the operation and display an appropriate message for any invalid input. Make use of conditional statements to manage the choices and mathematical functions from the math.h library to compute results.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Initializing Variables for Scientific Calculator
    char mode,Operation;
    float value, power;
    
    //Taking Input from User
    printf("Enter the value: ");
    scanf("%f",&value);
    
    printf("Enter The Mode You Want To Choose: (B for Basic, A for Advanced) ");
    scanf(" %c",&mode);
    
    
    
    //Using Conditions to calculate the desired operation
    if (mode == 'B' || mode == 'b')
    {
             //Basic Operations
             printf("Which Operation Do You Want To Perform? (R = Square Root, P = Powers, L = Logarithm) ");
             scanf(" %c", &Operation);
             
             //Condition for operations
             if (Operation == 'R' || Operation == 'r') //Square Root
             {
                           printf("The Square Root of %.2f is: %.2f \n", value , sqrt( value ));
             }
             
             else if (Operation == 'P' || Operation == 'p') //Power 
             {
                  printf("Which power you want to take? ");
                  scanf("%f", &power);
                  
                  printf("Power %.1f of %.2f is: %.2f \n", power, value,pow(value,power));
             }
             
             else if (Operation == 'L' || Operation == 'l') //logarithm
             {
                  if (value <0) //negative
                  {
                            printf("For Negative Values, Logarithm Can Not Be Performed! \n");
                            system("pause");
                            return 0;
                  }
                  else
                  {
                            printf("Logarithm of %.2f is: %2f \n", value , log(value));
                  }
             }
             
             else 
             {
                  printf("Invalid Operation! \n");
             }
    }
    
    else if (mode == 'A' || mode == 'a')
    {
         //Advanced Operations
             printf("Which Trigonometric Operation Do You Want To Perform? (S = Sine, C = Cosine, T=Tangent) ");
             scanf(" %c", &Operation);
             
             //Condition for operations
             if (Operation == 'S' || Operation == 's') //Sine
             {
                           printf("The Sine of %.2f radians is: %.2f \n", value , sin( value ));
             }
             
             else if (Operation == 'C' || Operation == 'c') //Cosine
             {    
                  printf("The Cosine of %.2f radians is: %.2f \n", value,cos(value));
             }
             
             else if (Operation == 'T' || Operation == 't') //Tangent
             {
                  printf("The Tangent of %.2f radians is: %.2f \n", value , tan(value));
             }
             
             else 
             {
                  printf("Invalid Operation! \n");
             }
                               
    }
    
    else
    {
        printf("Invalid Mode! \n");
    }
    
    
    system("pause");
    return 0;
}
    
    
             
     
     
    
