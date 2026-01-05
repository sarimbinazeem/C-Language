//Write a C program that provides feedback based on a student’s exam type and grade. The program should first ask the user to specify the type of exam, such as midterm or final, and then request the grade received, which could range from A to F. Depending on the combination of exam type and grade, the program should display a message reflecting the student’s performance. Use conditional logic or switch statements to handle the different possibilities, and make sure to account for any invalid exam types or grades with clear messages. The program should differentiate feedback for midterm and final exams while giving appropriate progress or performance statements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char exam, grade;
    
    printf("--------------- University Exam Grade Decision ---------------\n");
    printf("Enter Exam type: (M for midterm, F for final) ");
    scanf(" %c", &exam);
    
    switch (exam)
    {
           case 'M':
           case 'm':
                printf("What grade you were assigned? (A,B,C,D,F) ");
                scanf(" %c", &grade);
                switch(grade)
                {
                             case 'A':
                             case 'a':
                                  printf("Good Progress! \n");
                                  break;
                             case 'B':
                             case 'b':
                                  printf("Average Progress! \n");
                                  break;
                             case 'C':
                             case 'c':
                                  printf("Need more practice! \n");
                                  break;
                             case 'D':
                             case 'd':
                                  printf("Unsatisfactory! \n");
                                  break;
                             case 'F':
                             case 'f':
                                  printf("Failed! \n");
                                  break;
                             default:
                                     printf("Invalid Grade! \n");
                                     break;     
                }
                 break;
           
           case 'F':
           case 'f':
                printf("What grade you were assigned? (A,B,C,D,F) ");
                scanf(" %c", &grade);
                switch(grade)
                {
                             case 'A':
                             case 'a':
                                  printf("Excellent Overall Progress! \n");
                                  break;
                             case 'B':
                             case 'b':
                                  printf("Good Overall Progress! \n");
                                  break;
                             case 'C':
                             case 'c':
                                  printf("Average Overall Progress! \n");
                                  break;
                             case 'D':
                             case 'd':
                                  printf("Unsatisfactory Overall Progress! \n");
                                  break;
                             case 'F':
                             case 'f':
                                  printf("Retake Required! \n");
                                  break;
                             default:
                                     printf("Invalid Grade! \n");
                                     break;
                }
                 break;
                 default:
                                     printf("Invalid Exam Type! \n");
                                     break;
    }    
    
    system("pause");
    return 0;
}
                
                             
                
                
               
                     
           
    
