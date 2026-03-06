// A small graphics lab is building a simple image processing tool to simulate brightening grayscale images. Each image is represented as a matrix of pixel values ranging from 0 to 255. The system should:

// Increase the brightness of every pixel by a fixed percentage.

// Check if any pixel exceeds the maximum value (255), which indicates the image is burnt out.

// If the image is not burnt out, display the updated pixel values in a neat grid.

// Write a program that reads the pixel values of an image matrix, brightens the image, and either reports a burnout or displays the adjusted pixel values.



#include <stdio.h>


int lighten( int m, int n,int matrix[m][n])
{
	int burnout=0;
	for(int i=0 ;i< m ; i++)
	{
		for(int j=0; j<n; j++)
		{
			matrix[i][j] *= 1.1;
			
			if(matrix[i][j] >=255)
			{
				burnout =1;
			}
		}
	}
	
	return burnout;
}

void display( int m, int n,int matrix[m][n])
{
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%-10d",matrix[i][j]);	
		}
		printf("\n");
	}
	
}

int main()
{
	
	int m,n;
	
	printf("Enter Number Of Rows: ");
	scanf("%d",&m);
	
	printf("Enter Number Of Columns: ");
	scanf("%d",&n);
	
	int matrix[m][n];
	
	for(int i=0; i<m;i++)
	{
		printf("\n===Row %d===\n",i+1);
		for(int j=0; j<n; j++)
		{
			printf("Enter Element %d: (0 to 255) ",j+1);
			scanf("%d",&matrix[i][j]);
			
			while(matrix[i][j] < 0 || matrix[i][j] >255)
			{
				printf("Invalid Input! Enter Element %d: (0 to 255) ",i+1);
				scanf("%d",&matrix[i][j]);
			}
		}
	}
	
	if(lighten(m,n,matrix))
	{
		printf("Image is Burnt Out.\n");
	}
	else
	{
		display(m,n,matrix);
	}
	
	return 0;
}