/*  If the marks obtained by a student in five different subjects
    are input through the keyboard, find out the aggregate
    marks and percentage obtained by the student. Assume
    that the maximum mark that can be obtained by a student
    in each subject is 100. */

#include <stdio.h>
int main(){
    int marks[5],aggregate = 0;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i<5; i++){
        scanf("%d",& marks[i]);
    }

    printf("The marks entered are: \n");
    for(int i = 0; i<5; i++){
        printf("%d\t", marks[i]);
    }
    printf("\n");

    for(int i = 0;i<5;i++){
        aggregate = aggregate + marks[i];
    }

    percentage = aggregate/5;
    
    printf("The aggregate marks: %d\n", aggregate);
    printf("The percentage is: %.2f\n", percentage);
     return 0; 
}