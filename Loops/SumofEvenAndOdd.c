//Sum of Even and Odd Numbers

//Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.

#include <stdio.h>

int main()
{
	int SumEven= 0 , SumOdd=0;
	int num=1;
	
	do
	{
		if(num%2 ==0)
		{
			SumEven =SumEven + num;
		}
		else if (num%2 !=0)
		{
			SumOdd = SumOdd + num;
		}
		num++;
		
	}while(num<=50);
	
	printf("The sum of even numbers between 1 and 50 is: %d \n", SumEven);
	printf("The sum of odd numbers between 1 and 50 is: %d \n", SumOdd);
	
	return 0;
}