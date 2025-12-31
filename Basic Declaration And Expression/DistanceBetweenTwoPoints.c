//Write a C program to calculate the distance between two points.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    double distance;
    
    printf("Enter the value of first point x-coordinate: ");
    scanf("%d",&x1);
    
     printf("Enter the value of first point y-coordinate: ");
    scanf("%d",&y1);
    
     printf("Enter the value of second point x-coordinate: ");
    scanf("%d",&x2);
    
     printf("Enter the value of second point y-coordinate: ");
    scanf("%d",&y2);
    distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
     
     printf("The distance between (%d,%d) and (%d,%d) is: %.2f\n",x1,y1,x2,y2,distance);
     system("pause");
     return 0;
    
    
}    