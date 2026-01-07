//Write a C program that repeatedly reduces a given positive integer to a single-digit value by summing its digits again and again. The program should take an integer input from the user and calculate the sum of its digits using a loop. If the resulting sum is still more than one digit, the process should repeat until a single-digit number is obtained. During execution, the program should display the intermediate sums at each step and finally print the single-digit result known as the digital root. While solving this problem, think about how nested loops can be used to separate digits of a number, how integer division and modulus help in digit extraction, and how a condition can control repetition until the number becomes a single digit.

#include <stdio.h>

int main()
{
	int number,sum=0,temp=0;
	
	printf("Enter A Number: ");
	scanf("%d", &number);
	
	while(number>=10)
	{
		sum = 0;
		temp = number;
		while(temp>0)
		{
			sum = sum + (temp%10);
			temp = temp/10;
		}
		printf("The Sum Of %d is : %d\n",number,sum);
		number = sum;	
	}
	
	printf("The Digital Root is: %d", number);
	
	
}