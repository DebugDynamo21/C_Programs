//To input values in stucture(user defined code).

#include <stdio.h>
int main(){
    struct student{
        float h;            //Height of student
        char sec;           //section of student
        int r;              // Roll no. of student
    }s;

    printf("Enter the data: ");
    scanf("%f%c%d", & s.h, & s.sec, & s.r);
    printf("%.2f\n%c\n%d", s.h, s.sec, s.r);      // To access structure value we use (.)dot operator.
    printf("\n");
     return 0; 
}