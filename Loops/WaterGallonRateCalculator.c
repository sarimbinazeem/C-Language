// Write a C program named Water Usage Billing System that calculates the total water bill for a user based on their usage category and the number of gallons consumed. The program should ask the user to enter a usage code where H represents home use, C represents commercial use, and I represents industrial use. After that, the user should enter the total number of gallons used, and the program must ensure that the entered value is not negative by repeatedly asking until a valid number is provided.

// For home use, the bill is calculated at Rs. 500 per gallon, so the total bill is obtained by multiplying the number of gallons by 500. For commercial use, the billing follows a slab system where usage of up to 1000 gallons costs a flat Rs. 1000, and if the usage exceeds 1000 gallons, an additional Rs. 250 per gallon is charged for every gallon above 1000. For industrial use, the bill is Rs. 1000 if the usage is up to 500 gallons, Rs. 2000 if the usage is more than 500 but less than 2500 gallons, and Rs. 3000 if the usage is 2500 gallons or more.


#include <stdio.h>

int  main()
{
	int gallons,bill;
	char Type;
	
	printf("Enter your use code: (C for Commercial , I for industrial , H for Home use)");
	scanf(" %c", &Type);
	
	do
	{
		printf("Enter amount of gallons used: ");
		scanf("%d", &gallons);	
	} while (gallons<0);
	
	
	switch(Type)
	{
		case 'H':
		case 'h':
			bill = 500 * gallons;
			break;
			
		case 'C':
		case 'c':
			if (gallons<=1000)
			{
				bill = 1000 ;
			}
			else
			{
				bill = 1000 + (250*(gallons - 1000));
			}
			break;
			
		case 'I':
		case 'i':
			if (gallons<=500)
			{
				bill = 1000;
			}
			else if (gallons>500 && gallons<2500)
			{
				bill = (2000) ;
			}
			else if(gallons >=2500)
			{
				bill = (3000) ;
			}
			break;
			
		default:
			printf("Invalid Use Input! \n");
			break;
	}
	
	printf("You used %d gallons in %c use. \n",gallons,Type);
	printf("Total Bill: %d",bill);
	
	return 0;
}