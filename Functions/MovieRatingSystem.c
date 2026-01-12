#include <stdio.h>
#define MOVIES 5

void inputRating(int ratings[MOVIES]);
void averageRating(int ratings[MOVIES],float average[MOVIES]);
void catergoryRating(float average[], char categories[]);
void displayRatings(int ratings[MOVIES], char categories[MOVIES]);

int main()
{
	int ratings[MOVIES];
	float average[MOVIES];
	char categories[MOVIES];
	
	printf("\n==========Movies Rating Reviewing System==========\n\n");	
	inputRating(ratings);
	averageRating(ratings,average);
	catergoryRating(average,categories);
	displayRatings(ratings,categories);
	
	return 0;
}

void inputRating(int ratings[MOVIES])
{
	for(int i=0; i<MOVIES; i++)
	{
		printf("Enter Rating For Movie %d: (0-10) ",i+1);
		scanf("%d", &ratings[i]);
		
		while(ratings[i] < 1 || ratings[i] > 10)
        {
            printf("Invalid input! Enter rating (1-10): ");
            scanf("%d", &ratings[i]);
        }
		
	}
}

void averageRating(int ratings[MOVIES],float average[MOVIES])
{
	for(int i=0; i<MOVIES; i++)
	{
		average[i] = ratings[i];
	}
	
}

void catergoryRating(float average[], char categories[])
{

	for(int i=0; i<MOVIES; i++)
	{
		if(average[i] >=8)
		{
			categories[i] = 'E';
		}
		else if(average[i] >=6)
		{
			categories[i] = 'G';
		}
		else if(average[i] >=4)
		{
			categories[i] = 'A';
		}
		else
		{
			categories[i] = 'P';
		}
	}
}

void displayRatings(int ratings[MOVIES], char categories[MOVIES])
{
	char *review;
	printf("\n==========Summary==========\n\n");
	printf("%-10s %-10s %-10s\n","Movies", "Ratings", "Categories");
	
	for(int i=0; i<MOVIES; i++)
	{
		switch(categories[i])
		{
			case 'E':
				review= "Excellent";
				break;
				
			case 'G':
				review = "Good";
				break;	
			
			case 'A':
				review= "Average";
				break;
			
			case 'P':
				review= "Poor";
				break;	
			
		}
		
		printf("%-10d %-10d %-10s\n",i+1, ratings[i], review);
	}	
}