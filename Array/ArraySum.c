//Write a program in C to find the sum of all elements of the array.

#include <stdio.h>

int main()
{
	int n, sum=0;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int array[n];
	
	for (int i=0 ; i<n; i++)
	{
		printf("Element %d: ",i);
		scanf("%d", &array[i]);
		sum = sum + array[i];
	}
	
	printf("The elements of the array are: ");
	for (int i=0; i<n; i++)
	{
		printf("%d ", array[i]);
	}
	
	printf("\n The sum of the elments are: %d", sum);
	return 0;
	
}