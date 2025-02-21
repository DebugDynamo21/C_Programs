/* Write a C program to find Simple Interest. */

#include <stdio.h>
int main(){
    double principal, rate, time, simpleInterest;
    
    //Input values
    printf("Enter principal amount: ");
    scanf("%ld", & principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", & rate);

    printf("Enter time (in years): ");
    scanf("%lf", & time);

    //Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    //Print simple interest
    printf("Simple interest: %.2lf\n", simpleInterest);
    printf("Total amount after %.2lf years: %.2lf\n", time, principal + simpleInterest);

    return 0; 
}