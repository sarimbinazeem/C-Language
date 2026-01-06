//Pattern 
//A
//BB
//CCC
//DDD


#include <stdio.h>

int main()
{
	char alphabeth;
	
	for (int i = 1; i<=5 ; i++)
	{
		alphabeth = 'A' + i -1;
		for (int j =1; j<=i ; j++)
		{
			printf(" %c", alphabeth);
		}
		printf("\n");
	}
	
}