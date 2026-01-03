//Write a C program that determines the location of a point on a Cartesian plane based on its coordinates.

#include <stdio.h>
#include <stdlib.h> //Without this library, my .exe wont open

int main()
{
    //initializing variables for abscissa and ordinate
    float x,y;
    
    
    //Input for abscissa and ordiante
    printf("Enter x-coordinate: ");
    scanf("%f",&x);
    
    printf("Enter y-coordinate: ");
    scanf("%f",&y);
    
    //Check Qudrant by else-if ladder
    
    if (x>0 && y>0) //(+,+)
    {
            printf("The point (%f,%f) lies in quadrant I\n",x,y);
    }
    
    else if (x<0 && y>0) // (-,+)
    { 
            printf("The point (%f,%f) lies in quadrant II\n",x,y);
    }
    
    else if (x<0 && y<0) // (-,-)
    {
            printf("The point (%f,%f) lies in quadrant III\n",x,y);
    }
    
    else if (x>0 && y<0) //(+,-)
    {
         printf("The point (%f,%f) lies in quadrant IV\n",x,y);
    }
    
    //Conditions for possibilities when x or y is equals to 0
    
    else if (x==0 && y==0) 
    {
         printf("The point (%f,%f) is at origin\n",x,y);
    }
    
    else if (x==0 && y!=0) 
    {
         printf("The point (%f,%f) is at y-axis \n",x,y);
    }
    
    else if (x!=0 && y==0) 
    {
         printf("The point (%f,%f) is at x-axis \n",x,y);
    }
    
    system("pause");
    return 0;
}
    
    
    
    
