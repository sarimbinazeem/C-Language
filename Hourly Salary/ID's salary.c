//Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

#include <stdio.h>
#include <stdlib.h>

int main() {
      int ID, hours, amount;
      float salary;
      printf("Enter your employee ID (max 10 charactrers) : ");
      scanf("%d",&ID);
      
      printf("Enter the number of hours you work for: ");
      scanf("%d",&hours);
      
      printf("Enter the amount you receive per hour: ");
      scanf("%d",&amount);
      
      salary = amount * hours;
      
      printf("The Salary of ID %d is: %.2f\n",ID,salary);
      system("pause");
      return 0;
      
      
             
      
      
      
      
      
}





