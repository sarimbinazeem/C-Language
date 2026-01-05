// Write a C program that validates a student’s course registration based on predefined academic rules and constraints.

// The program should ask the user to enter the number of courses they want to register and then input the course codes in the order selected.

// Course Codes

// 1 → CS101

// 2 → CS102

// 3 → CS103

// 4 → CAL1001

// 5 → AP1010

// Limits & Constraints

// A student can register for minimum 1 and maximum 5 courses.

// Duplicate course selection is not allowed.

// Prerequisite rules must be followed:

// CS102 requires CS101

// CS103 requires CS102

// Time clash restrictions:

// CS101 cannot be taken with CAL1001

// CS102 cannot be taken with AP1010

// Courses must be taken in a valid academic order.

// If any rule is violated, the registration should be declared invalid.

// If all conditions are satisfied, display a successful registration message.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Initializing variables for number of courses and courses
    int n, c1=0,c2=0,c3=0,c4=0,c5=0;
    int valid = 1;
    
    
    //Taking input for number of courses
    printf("Enter number of courses: ");
    scanf("%d",&n);
    
    //Invalid case
    if (n>5 || n<1)
    {
            printf("Invalid number of cases! \n");
            system("pause");
            return 0;
    }
    
    //Taking input for courses
    if(n >= 1)
    {
           printf("Enter course 1 code: (1 for CS101, 2 For CS102, 3 for CS103, 4 FOR CAL1001, 5 FOR AP1010) ");
           scanf("%d", &c1);
    }
    if(n >= 2)
    {
           printf("Enter course 2 code: (1 for CS101, 2 For CS102, 3 for CS103, 4 FOR CAL1001, 5 FOR AP1010) ");
           scanf("%d", &c2);
    }
    if(n >= 3)
    {
           printf("Enter course 3 code: (1 for CS101, 2 For CS102, 3 for CS103, 4 FOR CAL1001, 5 FOR AP1010) ");
           scanf("%d", &c3);
    }
    if(n >= 4)
    {
           printf("Enter course 4 code: (1 for CS101, 2 For CS102, 3 for CS103, 4 FOR CAL1001, 5 FOR AP1010) ");
           scanf("%d", &c4);
    }
    if(n >= 5)
    {
           printf("Enter course 5 code: (1 for CS101, 2 For CS102, 3 for CS103, 4 FOR CAL1001, 5 FOR AP1010) ");
           scanf("%d", &c5);
    }
    
    
    //--Duplicate courses--
    if ((c1==c2 && c1!=0) || (c1==c3 && c1!=0) || (c1==c4 && c1!=0) || (c1==c5 && c1!=0) ||
    (c2==c3 && c2!=0) || (c2==c4 && c2!=0) || (c2==c5 && c2!=0) ||
    (c3==c4 && c3!=0) || (c3==c5 && c3!=0) ||
    (c4==c5 && c4!=0))
     {
             printf("Invalid! Duplicate course selection.\n");
              valid = 0;
             }
    // ----- PREREQUISITES -----

    // CS102 (2) requires CS101 (1)
    if (c1 == 2) 
    {
       printf("Wrong order: CS102 requires CS101 first\n");
       valid = 0;
       }
       if (c2 == 2 && !(c1 == 1)) 
       {
                   printf("Wrong order: CS102 requires CS101 first\n");
                   valid = 0;
               }
       if (c3 == 2 && !(c1 == 1 || c2 == 1)) 
       {
                   printf("Wrong order: CS102 requires CS101 first\n");
                   valid = 0;
        }
       if (c4 == 2 && !(c1 == 1 || c2 == 1 || c3 == 1)) 
       {
                      printf("Wrong order: CS102 requires CS101 first\n");
                      valid = 0;
       }   
       if (c5 == 2 && !(c1 == 1 || c2 == 1 || c3 == 1 || c4 == 1)) 
       {
                      printf("Wrong order: CS102 requires CS101 first\n");
                      valid = 0;
       }

       // CS103 (3) requires CS102 (2)
       if (c1 == 3) 
       { 
                       printf("Wrong order: CS103 requires CS102 first\n"); 
                       valid = 0; 
       }
       if (c2 == 3 && !(c1 == 2)) 
       { 
                       printf("Wrong order: CS103 requires CS102 first\n"); 
                       valid = 0; 
       }
       if (c3 == 3 && !(c1 == 2 || c2 == 2)) 
       { 
                       printf("Wrong order: CS103 requires CS102 first\n"); 
                       valid = 0; 
       }
       if (c4 == 3 && !(c1 == 2 || c2 == 2 || c3 == 2)) 
       {
                       printf("Wrong order: CS103 requires CS102 first\n"); 
                       valid = 0; 
       }
       if (c5 == 3 && !(c1 == 2 || c2 == 2 || c3 == 2 || c4 == 2)) 
       { 
                       printf("Wrong order: CS103 requires CS102 first\n"); 
                       valid = 0; 
       }
  
    //// --- TIME CLASHES ---
    // CS101 (1) clashes with CAL1001 (4)
    if((c1==1 || c2==1 || c3==1 || c4==1 || c5==1) &&
     (c1==4 || c2==4 || c3==4 || c4==4 || c5==4))
      {
             printf("Invalid! CS101 clashes with CAL1001.\n");
               valid=0;
      }

      // CS102 (2) clashes with AP1010 (5)
      if((c1==2 || c2==2 || c3==2 || c4==2 || c5==2) &&
        (c1==5 || c2==5 || c3==5 || c4==5 || c5==5)) 
        {
               printf("Invalid! CS102 clashes with AP1010.\n");
               valid=0;
        }
        
      if(valid)
      {
            printf("Course registration successful! \n");
      }
      else
      {
          printf("Course registration unsuccessful! \n");
      }
      system("pause");
      return 0;
}
    
    
