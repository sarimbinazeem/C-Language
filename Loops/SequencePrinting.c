//1. Print Numbers Using Do-While Loop

//Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.


#include <stdio.h>
int main()
{
	int num1= 10, num2=1;
	
	printf("Numbers from 10 to 1:\n");
	do
	{
		printf("%d \n", num1);
		num1--;
	} while(num1>=1);
	
	printf("Numbers from 1 to 10:\n");
	do
	
	{
		printf("%d \n", num2);
		num2++;
	} while(num2<=10);
}