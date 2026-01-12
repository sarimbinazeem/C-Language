// Write a C program that evaluates a student’s academic result using arrays and functions. The program should take marks for a fixed number of subjects (ensuring each mark is between 0 and 100), calculate the total marks and percentage average, and then determine the student’s grade based on the average.

// After processing the data, display a detailed result card showing subject-wise marks, total marks, average percentage, and the final grade. The program should allow the user to evaluate results for multiple students until they choose to exit.

#include <stdio.h>
#define SUBJECTS 5

void input(int marks[]);
int calcTotal(int marks[]);
float calcAverage(int total);
char grades(float average);
void display(int marks[],int total,float average, char grade);

int main()
{
    int marks[SUBJECTS], total,choice;
    float average;
    char grade;
    
    do
    {
     printf("\n==========Student Result Evaluation==========\n\n");
    
    input(marks);
    
    total = calcTotal(marks);
    average = calcAverage(total);
     grade = grades(average);
    display(marks,total,average,grade);
     
     printf("\nDo You Want To Proceed With Another Student? (1= Yes, 0 = no)");
     scanf("%d",&choice);
    }while(choice != 0);
    
    printf("Exiting The System...\n");
    return 0;
    
}

void input(int marks[])
{
    for(int i=0; i<SUBJECTS; i++)
    {
        printf("Enter Marks (0-100) For Subject %d: ",i+1);
        scanf("%d",&marks[i]);
        while(marks[i]>100 || marks[i]<0)
        {
            printf("Invalid Input! Enter: (0-100) ");
            scanf("%d",&marks[i]);
        }
    }
}

int calcTotal(int marks[])
{
	int total = 0;
    for(int i=0; i<SUBJECTS; i++)
    {
        total += marks[i];
    }
     return total;
}

float calcAverage(int total)
{
    float average =0;
    average = (float)total/(SUBJECTS*100) * 100;
    return average;
}

char grades(float average)
{
    if(average >=90)
    {
        return 'A';
    }
    else if(average>=80)
    {
        return 'B';
    }
    else if(average>=70)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}

void display(int marks[],int total,float average, char grade)
{
    printf("\n==========Result Card==========\n");
    for(int i=0; i<SUBJECTS; i++)
    {
        printf("Marks For Subject %d: %d\n",i+1,marks[i]);
    }
    
    printf("Total: %d\n",total);
    printf("Average: %.2f\n",average);
    printf("Grade: %c\n", grade);
}