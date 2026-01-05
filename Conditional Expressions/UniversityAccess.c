//The access control system follows specific rules based on the identity of the person entering the university. Students, faculty members, and visitors are treated differently. Students are further categorized by their academic level, and access may depend on whether they are undergraduate or postgraduate students. In some cases, access decisions are influenced by the current time, as certain users are only permitted entry during standard university working hours. Faculty access rules differ depending on whether the faculty member is full-time or visiting, with visiting faculty having more restricted access. Visitors are generally subject to stricter control and must satisfy basic entry conditions before being allowed access. Any input that does not match the expected categories or conditions should be handled as invalid, and the system must clearly indicate whether access is granted or denied along with a suitable message.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initializing variables for details
    char identity, graduate, faculty, appointment;
    int time;
    
    //Taking the identity of the user
    printf("What are you? (S for student, V for visitor, F for faculty) ");
    scanf(" %c",&identity);
    
    //Condition for Student
    if(identity == 'S' || identity == 's')
    {
                printf("Are you an undergraduate or postgraduate? (U for undergraduate, P for postgraduate) ");
                scanf(" %c",&graduate);
                if(graduate == 'U' || graduate == 'u')
                {
                             printf("Enter current time in 24 hours format: ");
                             scanf("%d", &time);
                             if (time>= 8 && time<= 18)
                             {
                                        printf("Access Granted (Undergraduate Student  within hours)  \n");
                             }
                             else
                             {
                                  printf("Access Denied (Undergraduate outside 8 AM to6 PM). \n");
                             }
                            
                }
                else if (graduate == 'P' || graduate == 'p')
                {
                            printf("Access granted (Postgraduate Student 24/7).  \n");
                }
                else
                {
                    printf("Invalid Input! \n");
                }
                
    }
    
    //Condition for faculty
    else if(identity == 'F' || identity == 'f')
    {
                printf("Are you Full-time or visiting faculty? (F for Full time and V for visiting ) ");
                scanf(" %c",&faculty);
                if(faculty == 'F' || faculty == 'f')
                {
                            printf("Access Granted (Full-time Faculty  always allowed). \n");
                }
                else if (faculty == 'V' || faculty == 'v')
                {

                            printf("Enter current time in 24 hours format: ");
                            scanf("%d", &time);
                            if (time>= 8 && time<= 18)
                            {
                                        printf("Access Granted (Visiting Faculty within hours) \n");
                            }
                            else
                            {
                                  printf("Access Denied (Visiting Faculty outside 8 AM to6 PM).\n");
                            }
                }
                else
                {
                    printf("Invalid Input! \n");
                }
                
    }     
    
    //Condition for visitors
    else if(identity =='v' || identity == 'V')
    {
         printf("Do you have valid appointment? (Y for yes N for no) ");
         scanf(" %c", &appointment);
         
         if(appointment == 'Y' || appointment == 'y') 
         {
                        printf("Access Granted (Visitor with appointment) \n");
         }
         else
         {
             printf("Access Denied (Visitor without appointment). \n");
         }
    }
    
    //Invalid case
    else
    {
        printf("Invalid Input! \n");
    }
    
    system("pause");
    return 0;
}         
