//Write a C program that uses an array to store the stock quantities of 8 products. The program should take stock values as input and check for invalid (negative) entries. If a negative stock value is entered, it should be corrected to zero with an appropriate message. Finally, the program should display the corrected stock levels of all products.

#include <stdio.h>
#define PRODUCTS 8

int main()
{
	//Initializing Variable
	int inventory[PRODUCTS];
	
	//Using for loop to enter stock
	for(int i = 0; i< PRODUCTS ; i++)
	{
		printf("Enter the stock for product %d: ",i+1);
		scanf("%d", &inventory[i]);
		
		//Negative Stock Cases
		if(inventory[i]<0)
		{
			printf("Stock Can Not Be Negative! Replacing it with Zero. \n");
			inventory[i]=0;
		}
		
	}
	
	//Printing Valid Stocks
	printf("The Stocks for %d Products are: ",PRODUCTS);
	for (int i=0; i<PRODUCTS ;i++)
	{
		printf("%d ",inventory[i]);
	}
	
	return 0;
}