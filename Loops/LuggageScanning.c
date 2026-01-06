//Write a C program for an airport luggage scanning system where each bag is checked one by one using a loop. The program should repeatedly scan luggage by asking the user whether the current bag is safe or suspicious, and continue scanning until either a suspicious item is found or the user indicates that there are no more bags to scan. Each bag should be identified with a bag number that increases sequentially. If a suspicious item is detected, the scanning process should stop immediately and display an appropriate warning message. If all bags are scanned without detecting any suspicious item, the program should display how many bags were successfully cleared. Use a loop and appropriate decision-making statements to control the scanning process and its termination.
#include <stdio.h>

int main()
{
	//Initializing variables for luggage details
	int total_luggage, bagID=1;
	int suspicion = 0 , suspicious;
	
	//Applying Loop to check each luggage for suspicion
	while(1) //Infinite loop
	{
		printf("Scanning bag %d (1 = suspicious, 0 = safe, -1 = end) ",bagID);
		scanf("%d", &suspicious );

		//Decision to assign suspicion
		if (suspicious == -1)
		{
			printf("Scanning completed! \n");
			break;
		}

		if(suspicious == 1)
		{
			printf("Suspicious item found in bag %d! Scanning stopped! \n", bagID);
			suspicion =1;
			break;
		}

		bagID++;
		printf("Proceeding to bag %d \n",bagID);
	}

	//Final Message if all cleared
	if (!suspicion)
	{
		printf("%d bags cleared successfully! \n", bagID -1 );
	}
	
	return 0;
}
