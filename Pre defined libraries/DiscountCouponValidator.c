// A retail store is running a special promotion where customers can redeem discount coupons at checkout. Each coupon has a specific format: three letters followed by four digits. The system must ensure that customers:

// Enter a coupon in the correct format.

// Can only redeem each coupon once.

// Are notified if they enter an invalid coupon or try to use a coupon that has already been redeemed.

// Design a program that allows customers to enter coupon codes one by one, validates their format, checks whether the coupon is available, and tracks which coupons have already been used. At the end, display a thank-you message.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Function prototype
int validFormat(char  input[]); //Function to check for valid format
int validCode(char input[], char copoun[][10], int used[]); //Function to check if the code is firstly used

int main()
{
	//Predefined Copouns
	char copoun[5][10] = {
		"OFF1234",
		"DIS5678",
		"BUY9999",
		"SAL1111"
	};
	
	//initializing variables
	int choice, used[5] = {0};
	char input[20];
	
	do
	{
		//Copoun input
		printf("Enter Coupon Code (AAA1234): ");
		scanf("%s",input);
	
		//Checking Valid format
		while(!validFormat(input))
		{
			printf("Invalid Input! Enter Coupon Code (AAA1234): ");
			scanf("%s",input);
		}
		
		//Checking if Code Exists or Not Used
		int found = validCode(input,copoun,used);
	
		//Code Not FOund CASE
		if(!found)
		{
			printf("Code Not Found!\n");
		}
		
		//Proceed TO NEXT code case
		printf("Do You Want To Proceed To Next Coupon (1=Yes 0=No): ");
		scanf("%d",&choice);
		}while(choice!=0);
	
	//Final message
	printf("\nThank You For Shopping! \n");
	return 0;
	
}

int validFormat(char  input[])
{
	//Code should be of 7 length
	if(strlen(input) !=7)
	{
		return 0;
	}
	
	//first three letters should be alphabeth
	for(int i =0 ; i<3;i++)
	{
		if(!isalpha(input[i]))
		{
			return 0;
		}
	}
	
	//last four letters should be digits
	for(int i =3 ; i<7;i++)
	{
		if(!isdigit(input[i]))
		{
			return 0;
		}
	}
	
	return 1;
}

int validCode(char input[], char copoun[][10], int used[])
{
	for(int i=0; i<5; i++)
	{
		//Checkingif code matches to copoun
		if(strcmp(input,copoun[i])==0)
		{
				//CHECKING if the code is already used
				if(used[i]==0)
				{
					printf("Code Redeemed! \n");
					used[i] = 1;
				}
				else
				{
					printf("Error: Code Already Redeemed! \n");
					
				}
				return 1;
		}
		
	}
	
	return 0;
}