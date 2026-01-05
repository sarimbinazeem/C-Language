//Write a C program that calculates the interest rate for different types of loans. The program should first ask the user to enter the loan type, which can be Home Loan, Car Loan, Education Loan, or Gold Loan. For a Home Loan, the program should ask for the salary and assign a lower interest rate if the salary is above a certain threshold. For a Car Loan, it should ask for the credit score and assign a lower interest rate for higher scores. Education and Gold Loans have a fixed interest rate. If the user enters an invalid loan type, the program should display an error message. Use conditional or nested ternary operators to determine the interest and ensure the input is properly validated.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing Variables for Interest
    
    float salary,creditscore, interest = 0, NewSalary;
    char LoanType;
    
    //Enter loan type
    printf("Enter your loan type: (H for Home Loan, C for Car Loan, E for Education Loan, G for Gold Loan) ");
    scanf (" %c", &LoanType);
    
    //Nested Ternery Operator for LoanType
    interest = (LoanType == 'H' || LoanType == 'h')
               ?(printf("Enter your salary: "),scanf("%f",&salary) , (salary >100000)? 0.08: 0.1)
              : (LoanType== 'C' || LoanType == 'c')
              ?(printf("Enter your credit score: ") , scanf("%f",&creditscore), (creditscore>700)? 0.09:0.12)
              :(LoanType == 'E' || LoanType == 'e' || LoanType == 'G' || LoanType == 'g' )? 0.15 : 0 ;
            
            
    //Print Invalid Loan Type  
    if (interest == 0)
    {
                 printf("Invalid Loan Type!\n");
    }
    else
    {
        printf("You have %.2f%% interest\n", interest * 100);
    }
    
    system("pause");
    return 0;
}
    
    
   
