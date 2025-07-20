/* The basic salary of an employee is input through the
keyboard and if his basic salary is less than 1500 INR then
HRA=10% of the basic salary and DA=90% of the basic
salary. If his salary is either equal to or above 1500 INR,
then HRA= 500 INR and DA=98% of basic salary. Write a C
program to find his gross salary. */

#include <stdio.h>
int main(){
    double bs, da, hra, gs;

    //Input basic salary
    printf("Enter basic salary: ");
    scanf("%lf", & bs);

    //Calculate the gross salary
    if(bs < 1500){
        hra = 0.1 * bs;
        da = 0.9 * bs;
        gs = bs + hra + da;
        printf("Gross salry: %.2lf\n", gs);
    }else{
        hra = 500;
        da = 0.98 * bs;
        gs = hra + da + bs;
        printf("Gross salary: %.2lf\n", gs);
    }
    return 0; 
}