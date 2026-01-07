//    X
//   XXX
//  XXXXX
// XXXXXXX

#include <stdio.h>

int main()
{
	int space,rows,stars;
	
	printf("Enter Rows: ");
	scanf("%d", &rows);
	
	for(int i = 1; i<=rows ; i++)
	{
		for(int space = i; space<rows; space++)
		{
			printf(" ");
		}
		
		for(int j=1; j<= (2*i - 1); j++)
		{
			printf("X");
		}
		
		printf("\n");
	}
	
	return 0; 
}