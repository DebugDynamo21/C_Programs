/* The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as
per the following rules:

Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 – Fail

Write a program to calculate the division obtained by the
student. */ 

#include <stdio.h>
int main(){
    double P, C,  M, B, E, percenatge, total;
    
    //Input marks of 5 subjects
    printf("Enter Physics marks: ");
    scanf("%lf", & P);

    printf("Enter Chemistry marks: ");
    scanf("%lf", & C);

    printf("Enter Maths marks: ");
    scanf("%lf", & M);

    printf("Enter Biology marks: ");
    scanf("%lf", & B);

    printf("Enter English marks: ");
    scanf("%lf", & E);

    //Calculate Percentage and find grade corresponding to percentage obtained
    total = P + C + M + B + E;
    percenatge = (total / 500) * 100;

    if(percenatge >= 60){
        printf("First Division\n");
    }else if(percenatge < 60 && percenatge >= 50){
        printf("Second Division\n");
    }else if(percenatge < 50 && percenatge >= 40){
        printf("Third Division\n");
    }else{
        printf("Fail\n");
    }
    return 0; 
}