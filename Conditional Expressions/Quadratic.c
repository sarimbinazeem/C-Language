#include <stdio.h>
#include <math.h>    
// Include math.h header file for mathematical functions

int main() {
    double a, b, c, pr1; // Declare variables for coefficients and discriminant

    // Prompt user for coefficients 'a', 'b', and 'c'
    printf("\nInput the first number(a): "); 
    scanf("%lf", &a);
    printf("\nInput the second number(b): "); 
    scanf("%lf", &b);
    printf("\nInput the third number(c): "); 
    scanf("%lf", &c);

    pr1 = (b*b) - (4*(a)*(c)); // Calculate discriminant

    if(pr1 > 0 && a != 0) { // Check conditions for real roots
        double x, y;
        pr1 = sqrt(pr1); // Calculate square root of discriminant
        x = (-b + pr1)/(2*a); // Calculate first root
        y = (-b - pr1)/(2*a); // Calculate second root
        printf("Root1 = %.5lf\n", x); // Print first root
        printf("Root2 = %.5lf\n", y); // Print second root
    } 
    else {
        printf("\nImpossible to find the roots.\n"); // Print message for no real roots
    }
    
    return 0;
}