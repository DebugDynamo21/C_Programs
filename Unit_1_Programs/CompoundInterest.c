/* Write a C program to find Compound Interest. */

#include <stdio.h>
#include <math.h>
int main(){
    double principal, rate, compoundinterest, time;
    int n;

    // Input values for princiapl, rate, time, n
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    //Calculate annual rate and compound interest
    rate = rate / 100;
    compoundinterest = principal * ((1 + rate / n), (n * time));

    //Print result
    printf("Final amount after %.2lf years: %.2lf\n", time, compoundinterest);
    printf("Total Interest earned: %.2lf\n", compoundinterest - principal);
    return 0; 
}