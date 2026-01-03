// Write a C program that monitors the energy consumption of household devices and identifies devices with high energy usage.

// The program should take the energy consumption (in kWh) of a refrigerator, an air conditioner, and a fan, then display a summary highlighting any device that exceeds the allowed consumption limit.
#include <stdio.h>
#include <stdlib.h>

int main() {
    //Initiliazing variables for devices
    int refrigerator,ac,fan;
    int ref_flag=0, ac_flag=0, fan_flag=0;
    
    //Taking input from user for connsumption of energy
    printf("Enter the consumption of refrigerator (in Kwh): ");
    scanf("%d", &refrigerator);
    
    printf("Enter the consumption of Air Conditioner (in Kwh): ");
    scanf("%d", &ac);
    
    printf("Enter the consumption of Fan (in Kwh): ");
    scanf("%d", &fan);
    
    //Flagging if limit is crossed
    if (refrigerator>10 )
    {
        ref_flag =1;
    }
    if (ac>10)
    {
        ac_flag=1;
    }
    if(fan>10)
    {
        fan_flag=1;
    }
    
    //Printing Summary
    printf("\tSummary\n");
    printf("Refrigerator Energy consumption: %d kWh\n",refrigerator);
    //Conditions to prink flagged devices
    if(ref_flag == 1)
    {
        printf("Your refrigerator is flagged as as high consumption devices. \n");
        
    }
    
    printf("AC Energy consumption: %d kWh\n",ac);
    if(ac_flag ==1)
    {
          printf("Your ac is flagged as as high consumption devices. \n");
        
    }
    
    printf("Fan Energy consumption: %d kWh\n",fan);
    if(fan_flag == 1)
    {
          printf("Your fan is flagged as as high consumption devices. \n");
        
    }
    
    system("pause");
    return 0;
}
