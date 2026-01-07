//Write a C program that acts as a decision-based student logic simulator for FAST-NUCES. The program should first greet the user and then collect three pieces of information: the student’s batch year (restricted to a small fixed range), the campus location represented by a single character, and a four-digit number derived from the student’s roll number. The batch year should determine which welcome message is displayed, making sure that only valid batch inputs are handled.
//
//Once the batch is identified, the program should branch again based on campus location. Each campus must follow a different rule for processing the roll number digits. One campus requires examining each digit individually by repeatedly separating digits from the number until all have been processed and then combining them into a single numeric result. Another campus requires focusing only on the last two digits of the roll number and performing a single arithmetic operation using those digits. The remaining campus should depend only on the final digit of the roll number and apply the same mathematical operation on it more than once to produce the result.
//
//Throughout the program, ensure that digit extraction is done using integer division and the modulus operator, and that repetition is controlled using a loop where necessary. The program should display the calculated result clearly at the end. This task is intended to strengthen your understanding of nested switch structures, loop-based digit processing, and numeric logic design, while encouraging clean separation of conditions and readable output.

#include <stdio.h>

int main()
{
	int batch, rollnumber, digit,sum_K=0, Last_L, SecondLast_L, product_L=0,Last_I,cube_I=0;
	char Location;
	
	printf("Welcome to FAST-NUCES \n");
	
	printf("Enter your batch year: (18-21)");
	scanf("%d",&batch);
	
	printf("Enter your location: (K = Karachi , L = Lahore, I= Islamabad) ");
	scanf(" %c", &Location);
	
	printf("Enter last 4 digits of Roll Number: ");
	scanf("%d",&rollnumber);
	
	switch(batch)
	{
		case 18:
			printf("Hello Seniors! Welcome to FAST- NUCES \n");
			switch(Location)
			{
				case 'K':
				case 'k':
				for (int i=1 ; i<=4; i++)
				{
					digit = rollnumber %10;
					sum_K = sum_K + digit;
					rollnumber /=10;
				}
				printf("Your Result is: %d \n", sum_K);
				break;
		
				case 'L':
				case 'l':
					Last_L = rollnumber %10;
					SecondLast_L = (rollnumber/10) %10;
					product_L = Last_L * SecondLast_L ;
					printf("Your Result is: %d \n", product_L);
					break;
			
				case 'i':
				case 'I':
					Last_I = rollnumber %10;
					cube_I = Last_I * Last_I * Last_I;
					printf("Your Result is: %d \n", cube_I);
					break;
				
				default:
					printf("Invalid Input! \n");
					break;
			}
			break;
			
		case 19:
			printf("Hello Juniors! Welcome to FAST- NUCES \n");
			switch(Location)
			{
				case 'K':
				case 'k':
				for (int i=1 ; i<=4; i++)
				{
					digit = rollnumber %10;
					sum_K = sum_K + digit;
					rollnumber /=10;
				}
				printf("Your Result is: %d \n", sum_K);
				break;
		
				case 'L':
				case 'l':
					Last_L = rollnumber %10;
					SecondLast_L = (rollnumber/10) %10;
					product_L = Last_L * SecondLast_L ;
					printf("Your Result is: %d \n", product_L);
					break;
			
				case 'i':
				case 'I':
					Last_I = rollnumber %10;
					cube_I = Last_I * Last_I * Last_I;
					printf("Your Result is: %d \n", cube_I);
					break;
				
				default:
					printf("Invalid Input! \n");
					break;
			}
			break;
			
		
		case 20:
			printf("Hello Sophomores! Welcome to FAST- NUCES \n");
			switch(Location)
			{
				case 'K':
				case 'k':
				for (int i=1 ; i<=4; i++)
				{
					digit = rollnumber %10;
					sum_K = sum_K + digit;
					rollnumber /=10;
				}
				printf("Your Result is: %d \n", sum_K);
				break;
		
				case 'L':
				case 'l':
					Last_L = rollnumber %10;
					SecondLast_L = (rollnumber/10) %10;
					product_L = Last_L * SecondLast_L ;
					printf("Your Result is: %d \n", product_L);
					break;
			
				case 'i':
				case 'I':
					Last_I = rollnumber %10;
					cube_I = Last_I * Last_I * Last_I;
					printf("Your Result is: %d \n", cube_I);
					break;
				
				default:
					printf("Invalid Input! \n");
					break;
			}
			break;
			
		
		case 21:
			printf("Hello Freshmans! Welcome to FAST- NUCES \n");
			switch(Location)
			{
				case 'K':
				case 'k':
				for (int i=1 ; i<=4; i++)
				{
					digit = rollnumber %10;
					sum_K = sum_K + digit;
					rollnumber /=10;
				}
				printf("Your Result is: %d \n", sum_K);
				break;
		
				case 'L':
				case 'l':
					Last_L = rollnumber %10;
					SecondLast_L = (rollnumber/10) %10;
					product_L = Last_L * SecondLast_L ;
					printf("Your Result is: %d \n", product_L);
					break;
			
				case 'i':
				case 'I':
					Last_I = rollnumber %10;
					cube_I = Last_I * Last_I * Last_I;
					printf("Your Result is: %d \n", cube_I);
					break;
				
				default:
					printf("Invalid Input! \n");
					break;
			}
			break;
			
		
	}
	return 0;
		
}