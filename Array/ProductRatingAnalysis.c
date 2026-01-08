//Write a C program that stores ratings for a fixed number of products in an array.
// The program should take valid ratings (between 0 and 10) for each product, calculate the average rating, display all product ratings, and identify which products need improvement based on their ratings.

#include <stdio.h>
#define products 5

int main()
{
	int ratings[products],flag=0;
	float sum=0,average;
	
	for(int i=0; i<products ; i++)
	{
		printf("Enter Ratings For Product %d (0-10) ", i+1);
		scanf("%d",&ratings[i]);
		
		while(ratings[i]<0 || ratings[i]>10)
		{
			printf("Enter Valid Rating! (0-10) ");
			scanf("%d",&ratings[i]);
		}
		
		sum = sum + ratings[i];
	}
	
	printf("The Ratings Of The Products Are: ");
	for(int i =0; i<products ; i++)
	{
		printf("%d ",ratings[i]);
		
	}
	
	average = sum/products;
	
	printf("\nThe Average Rating Of The Products Is: %.2f\n",average);
	
	printf("Products That Needs Improvement: \n");
	for(int i=0 ; i<products; i++)
	{
		if(ratings[i]<5)
		{
			printf("Product %d \n",i+1);
			flag =1;
			
		}
	}
	
	if (flag == 0)
	{
		printf("None! \n");
		
	}
	
	
	return 0;
	
}