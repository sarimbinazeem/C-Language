//Write a C program that prompts the user to enter two integer numbers and displays them before swapping. The program should then swap the values of these two numbers using a user-defined function named swap, which takes the addresses of the two numbers as arguments. The swapping must be performed without using a temporary variable, instead utilizing pointer arithmetic to exchange the values. After swapping, the program should display the updated numbers. This exercise is intended to demonstrate the use of pointers, function arguments by reference, and arithmetic operations for manipulating variable values directly in memory. Ensure that your program correctly handles user input and clearly shows the numbers before and after the swap.


#include <stdio.h>

void swap(int *n1, int *n2);

int main()
{
	int n1,n2;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	printf("Number Before Swapping: %d and %d \n",n1,n2);
	swap(&n1,&n2);
	
	printf("Number After Swapping: %d and %d \n",n1,n2);
	
	return 0;
}

void swap(int *n1, int *n2)
{
		*n1 = *n1 + *n2;
		*n2 = *n1 - *n2;
		*n1 = *n1 - *n2;		
}