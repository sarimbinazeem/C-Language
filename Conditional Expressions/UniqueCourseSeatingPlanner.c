// Write a C program that designs a seating plan for a university examination to reduce the chances of cheating.

// The program should take the names and course codes of 10 students and generate a seating arrangement based on the following constraints:

// Course Codes

// 1 → Computer Science

// 2 → Mathematics

// 3 → Physics

// Seating Rules / Limits

// No more than 5 students from the same course are allowed in the exam hall.

// No two adjacent students (horizontally or vertically) should be from the same course.

// If any of the above constraints are violated, the seating plan should be rejected with an appropriate message.

// If all conditions are satisfied, display the final seating arrangement.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for details
    char s1name[20],s2name[20],s3name[20],s4name[20],s5name[20],s6name[20],s7name[20],s8name[20],s9name[20],s10name[20];
    int s1course,s2course,s3course,s4course,s5course,s6course,s7course,s8course,s9course,s10course;
    int count1=0 , count2=0 , count3=0;
    //Taking input for details of each student
    printf("Enter name of student 1: ");
    scanf("%s",&s1name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s1course);
    
    printf("Enter name of student 2: ");
    scanf("%s",&s2name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s2course);
    
    printf("Enter name of student 3: ");
    scanf("%s",&s3name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s3course);
    
    printf("Enter name of student 4: ");
    scanf("%s",&s4name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s4course);
    
    printf("Enter name of student 5: ");
    scanf("%s",&s5name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s5course);
    
    printf("Enter name of student 6: ");
    scanf("%s",&s6name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s6course);
    
    printf("Enter name of student 7: ");
    scanf("%s",&s7name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s7course);
    
    printf("Enter name of student 8: ");
    scanf("%s",&s8name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s8course);
    
    printf("Enter name of student 9: ");
    scanf("%s",&s9name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s9course);
    
    printf("Enter name of student 10: ");
    scanf("%s",&s10name);
    
    printf("Enter their course code: (1 for CS ,2 for Maths ,3 for Physics) ");
    scanf("%d",&s10course);
    
    //Counting how many same course exists
    //Course 1
    if(s1course == 1)
    {
                count1++;
    }
    if(s2course == 1)
    {
                count1++;
    }
    if(s3course == 1)
    {
                count1++;
    }
    if(s4course == 1)
    {
                count1++;
    }
    if(s5course == 1)
    {
                count1++;
    }
    if(s6course == 1)
    {
                count1++;
    }
    if(s7course == 1)
    {
                count1++;
    }
    if(s8course == 1)
    {
                count1++;
    }
    if(s9course == 1)
    {
                count1++;
    }
    if(s10course == 1)
    {
                count1++;
    }
    //Course 2 
    if(s1course == 2)
    {
                count2++;
    }
    if(s2course == 2)
    {
                count2++;
    }
    if(s3course == 2)
    {
                count2++;
    }
    if(s4course == 2)
    {
                count2++;
    }
    if(s5course == 2)
    {
                count2++;
    }
    if(s6course == 2)
    {
                count2++;
    }
    if(s7course == 2)
    {
                count2++;
    }
    if(s8course == 2)
    {
                count2++;
    }
    if(s9course == 2)
    {
                count2++;
    }
    if(s10course == 2)
    {
                count2++;
    }
    
    //Course 3
    if(s1course == 3)
    {
                count3++;
    }
    if(s2course == 3)
    {
                count3++;
    }
    if(s3course == 3)
    {
                count3++;
    }
    if(s4course == 3)
    {
                count3++;
    }
    if(s5course == 3)
    {
                count3++;
    }
    if(s6course == 3)
    {
                count3++;
    }
    if(s7course == 3)
    {
                count3++;
    }
    if(s8course == 3)
    {
                count3++;
    }
    if(s9course == 3)
    {
                count3++;
    }
    if(s10course == 3)
    {
                count3++;
    }
    
    
    //Condition to check for too many same course students
    if(count1>5 || count2>5 || count3>5)
    {
                printf("Seating plan can not be satified! (Too many students of same courses) \n");
    }
    //Condition to check for adjacent students same course
    else if (//Horizontal check
    s1course == s2course || s3course == s4course || s5course == s6course || s7course== s8course || s9course== s10course||
    //Vertical check
    s1course == s3course || s3course == s5course || s5course == s7course || s7course== s9course || 
    s2course == s4course || s4course == s6course || s6course == s8course || s8course== s10course )
    {
         printf("Seating plan can not be satified! (Adjacent students have same courses) \n");
    }
    
    //Printing final seating plan
    else
    {
        printf("----------------------Seating Plan----------------------\n");
        printf("%s C(%d) \t %s C(%d)\n",s1name,s1course,s2name,s2course);
        printf("%s C(%d) \t %s C(%d)\n",s3name,s3course,s4name,s4course);
        printf("%s C(%d) \t %s C(%d)\n",s5name,s5course,s6name,s6course);
        printf("%s C(%d) \t %s C(%d)\n",s7name,s7course,s8name,s8course);
        printf("%s C(%d) \t %s C(%d)\n",s9name,s9course,s10name,s10course);
    }
    
    system("pause");
    return 0;
}
        
        
                
    
