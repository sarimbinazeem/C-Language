//Write a program in C to read n number of values in an array and display them in reverse order.
#include <stdio.h>

int main()
{
	int n;
	
	printf("Number of values in array are: ");
	scanf("%d", &n);
	
	int a[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Element %d: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("The elements stored in the array are: ");
	for (int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
	
	printf("\nThe elements of the array in reverse order: ");
	for (int i=n-1; i>=0; i--)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}