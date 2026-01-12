// Write a C program that simulates a shopping discount calculator using arrays and functions. The program should allow the user to enter the prices of multiple purchased items (with input validation to ensure all prices are positive). After entering the item prices, the program should calculate the total bill amount.

// Based on the total amount, apply a discount according to predefined criteria (for example, higher discounts for larger totals). Finally, display a detailed bill showing the list of item prices, the total amount before discount, and the final payable amount after applying the discount. The program should be menu-driven and continue running until the user chooses to exit.

#include <stdio.h>
#define items 100

int addPrice(int prices[]);
int calculateTotal(int prices[], int count );
float discount(int total);
void displayBill(int total, float Amount, int prices[], int count);

int main()
{
	int prices[items],count=0, total,operation;
	float Amount;
	
	do
	{
		printf("\n\n==========Shopping Mall Discount==========\n\n");
		printf("1.Add Price Of Items\n");
		printf("2.Display bill\n");
		printf("3.End\n");
		
		printf("Which Operation Do You Want To Perform? ");
		scanf("%d",&operation);
		
		switch(operation)
		{

		case 1:
			count = addPrice(prices);
			break;
			
		case 2:
			total = calculateTotal(prices,count);
			Amount = discount(total);
			displayBill(total,Amount,prices,count);
			break;
						
		case 3:
			printf("Thank You For Shopping! \n");
			break;
			
		default:
			printf("Invalid Input! \n");
			break;
		}
			
		
			
	}while(operation !=3);
	
	return 0;
}

int addPrice(int prices[])
{
	int count=0,choice;
	for(int i =0 ; i<items; i++)
	{
		printf("Enter Price Of Item %d: ",i+1);
		scanf("%d",&prices[i]);
		
		while(prices[i]<1)
		{
			printf("Invalid Input! Enter Again: (Positive)  ");
			scanf("%d",&prices[i]);
		}
		
		count++;
		
		printf("Do You Want To Add More Items? (0 to End, 1 To Proceed): ");
		scanf("%d",&choice);
			
		while(choice<0 || choice>1)
		{
			printf("Invalid Input! Enter Again (0 to End, 1 To Proceed): ");
			scanf("%d",&choice);
		}
		if(choice==0)
		{
			return count;
		}
	}
}

int calculateTotal(int prices[],int count)
{
	int total =0;
	for(int i=0; i<count; i++)
	{
		total += prices[i];
	}
	return total;
}

float discount(int total)
{
	float discount;
	if(total>5000)
	{
	    printf("\nCongrats! You got 20%% Discount\n");
		discount = (float)total * 0.8;
	}
	
    else if(total>=3000)
	{
	    printf("\nCongrats! You Got 10%% Discount\n");
		discount = (float)total * 0.9;
	}
	
    else
	{
	    printf("\nNo Discount Applied!\n");
		discount = total;
	}
	return discount;
}

void displayBill(int total, float Amount, int prices[],int count)
{
    printf("\n\n==========Bill==========\n");
    printf("%-10s %-10s\n","Items","Price");
    for(int i=0; i<count; i++)
    {
        printf("%-10d %-10d\n",i+1,prices[i]);
    }
    
    printf("\n----------\n");
    printf("Total: %d\n",total);
    printf("Final Bill After Discount : %.2f\n",Amount);
    printf("\n----------\n");
}