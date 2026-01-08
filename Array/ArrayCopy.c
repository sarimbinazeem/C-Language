//Write a program in C to copy the elements of one array into another array.

#include <stdio.h>
int main()
{
	int n;
	
	printf("Number of values in array are: ");
	scanf("%d", &n);
	
	int a1[n],a2[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Element %d: ",i);
		scanf("%d", &a1[i]);
	}
	
	for (int i=0; i<n; i++)
	{
		a2[i] = a1[i];	
	}
	
	printf("The elements of the array are: ");
	for (int i=0; i<n; i++)
	{
		printf("%d ", a1[i]);
	}
	
	printf("\n The elements of the COPY OF THE array are: ");
	for (int i=0; i<n; i++)
	{
		printf("%d ", a2[i]);
	}
	
	
}