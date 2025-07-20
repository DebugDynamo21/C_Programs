/* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */

#include <stdio.h>
int main(){
    float gs, bs, da, hra;
    printf("Enter basic salary: ");
    scanf("%f", &bs);       //input basic salary

    da = 0.4 * bs;      //process dearness allowance
    hra = 0.2 * bs;     //process house rent allowance
    gs = bs + da + hra; //process gross salary

    printf("Gross Salary : %.3f", gs);
    return 0; 
}