//Write a C program that prints all even numbers between 1 and 50 (inclusive).

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    for (i=2 ; i <51; i = i + 2)
    {
        printf("%d ", i);
    }
    
    
    system("pause");
    return 0;
}
    
