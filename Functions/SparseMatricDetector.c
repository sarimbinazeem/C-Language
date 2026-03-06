// A data analysis team is working with 5×5 numerical matrices and wants to classify them based on their content. A matrix is considered sparse if it contains mostly zeros and dense otherwise. The team needs a system where they can input all elements of a matrix, and the program will count the zeros to determine and report whether the matrix is sparse or dense.

// Write a program that allows the user to input a 5×5 matrix and then outputs whether it is sparse or dense.

#include <stdio.h>

int zeroElements(int matrix[][5])
{
	int zero=0;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5; j++)
		{
			if(matrix[i][j] == 0)
			{
				zero++;
			}	
		}
	}
	
	return zero;
}

int main()
{
	int zero;
	int matrix[5][5];
	
	for(int i=0 ;i<5; i++)
	{
		printf("\n====Row %d====\n",i+1);
		for(int j=0; j<5 ;j++)
		{
			printf("Enter Element %d: ",j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	zero = zeroElements(matrix);
	
	if(zero <= 25/2)
	{
		printf("The Matrix Is Dense.\n");
	}
	else
	{
		printf("The Matrix Is Sparse. \n");
		
	}
}