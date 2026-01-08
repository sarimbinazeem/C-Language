//Write a program in C to store elements in an array and print them.
#include <stdio.h>

int main()
{
	int number;
	
	
	printf("How many numbers you want to store? ");
	scanf("%d", &number);
	
	int a[number];
	
	for(int i=0; i<number ; i++)
	{
		printf("Element %d: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Elements in the array are: ");
	for(int i=0; i<number ; i++)
	{
		
		printf("%d ", a[i]);
	}
}