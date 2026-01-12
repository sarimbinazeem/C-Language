// Write a C program that implements a simple calendar-based task management system using a three-dimensional character array. The program should represent tasks for each day of the year by organizing data into months (1–12), days (1–31), and task descriptions.

// The system should provide a menu-driven interface that allows the user to:

// Add a task by specifying a valid month and day along with a textual description,

// Remove an existing task from a selected date,

// View all scheduled tasks across the calendar.

// The program must include input validation for dates, custom string-handling functions (such as copying and clearing strings), and demonstrate the use of multi-dimensional arrays and user-defined functions to manage and display calendar tasks efficiently.

#include <stdio.h>
#define MONTHS 12
#define DAYS 31
#define LENGHT 100

void preloadTasks(char tasks[MONTHS][DAYS][LENGHT]);
void copyString(char dest[], char src[]);
void addTasks(char tasks[MONTHS][DAYS][LENGHT]);
void inputString(char temp[]);
void removeTasks(char tasks[MONTHS][DAYS][LENGHT]);
void view(char tasks[MONTHS][DAYS][LENGHT]);

int main()
{
	int operation;
	char tasks[MONTHS][DAYS][LENGHT] = {0};
	
	preloadTasks(tasks);
	
	do
	{
		printf("\n\n==========Calender Task Management==========\n");
		printf("1. Add a Task\n");
        printf("2. Remove a Task\n");
        printf("3. View All Tasks\n");
        printf("4. Exit\n");
        
        printf("Enter your Operation: ");
        scanf("%d", &operation);
        
        switch(operation)
        {
        	case 1:
        		addTasks(tasks);
        		break;
        	
        	case 2:
        		removeTasks(tasks);
        		break;
        		
        	case 3:
        		view(tasks);
				break;
				
			case 4:
				printf("Exiting The Program... \n");
				break;
				
			default:
				printf("Invalid input! \n");
				break;		
		}
	}while(operation!=4);
	
	return 0;
}

void inputString(char temp[])
{
	int i=0;
	char ch;
	scanf("%c",&ch);
	
	while(ch == '\n')
	{
		scanf("%c",&ch);
	}
	
	while(ch != '\n' && i <LENGHT -1 )
	{
		temp[i++] = ch;
		scanf("%c",&ch);
	}
	
	temp[i] = '\0';
}

void clearString(char text[])
{
	for(int i=0; i<LENGHT; i++)
	{
		text[i] = '\0';
	}
}

void copyString(char dest[], char src[])
{
	int i =0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	dest[i] = '\0';
}

void preloadTasks(char tasks[MONTHS][DAYS][LENGHT])
{
	copyString(tasks[10][4],"Pay Bills ");
	copyString(tasks[2][6],"Doctor's Appointment");
}



void addTasks(char tasks[MONTHS][DAYS][LENGHT])
{
	int month,day;
	char temp[LENGHT];
	
	printf("\nEnter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);

    while (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("\nInvalid date!\n");
        
    	printf("\nEnter month number (1-12): ");
  	 	scanf("%d", &month);
   		printf("Enter day (1-31): ");
   	 	scanf("%d", &day);	
    }
    
    printf("Enter Task Description: ");
    inputString(temp);
    
    copyString(tasks[month - 1][day - 1],temp);
    
    printf("Task added successfully!\n");
}

void removeTasks(char tasks[MONTHS][DAYS][LENGHT])
{
	int month,day;
	
	printf("\nEnter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);

    while (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("\nInvalid date!\n");
        
    	printf("\nEnter month number (1-12): ");
  	 	scanf("%d", &month);
   		printf("Enter day (1-31): ");
   	 	scanf("%d", &day);	
    }
    
    
    clearString(tasks[month - 1][day - 1]);
    
    printf("Task Removed successfully!\n");
}

void view(char tasks[MONTHS][DAYS][LENGHT])
{
	 int count = 0;

    printf("\n=====Scheduled Tasks=====\n");
    for (int i = 0; i < MONTHS; i++) {
     	for (int j = 0; j < DAYS; j++) {
            if (tasks[i][j][0] != '\0') {
                printf("Month %d, Day %d: %s\n", i + 1, j + 1, tasks[i][j]);
                count++;
            }
        }
    }

    if (count == 0)
        printf("No tasks scheduled.\n");
}

