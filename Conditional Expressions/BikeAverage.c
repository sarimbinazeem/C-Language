//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float distance;
    float litres;
    
    printf("Enter the distance(in km) the bike has covered: \n");
    scanf("%f",&distance);
    
    printf("Enter the petrol (in litres) the bike has consumed: \n");
    scanf("%f",&litres);
    
     if (litres == 0) {
        printf("Fuel consumption cannot be zero!\n");
    } else {
        printf("The average consumption of the bike is %.2f km per litre \n", distance / litres);
    }
    system("pause");
    
    return 0;
    
    
}
