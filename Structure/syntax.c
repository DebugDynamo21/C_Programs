//Example of structure program.

#include <stdio.h>
int main(){
    struct student{     //this can be declared in or outside the main function.
        float h;            //Height of student
        char sec;           //section of student
        int r;              // Roll no. of student
    };
    struct student s = {6.0,'A',54};
    printf("%.2f\n%c\n%d", s.h, s.sec, s.r);      // To access structure value we use (.)dot operator.
    printf("\n");
     return 0; 
}