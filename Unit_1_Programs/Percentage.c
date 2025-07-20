/* If the marks obtained by a student in five different subjects are
input through the keyboard, find out the aggregate marks and
percentage marks obtained by the student. Assume that the
maximum mark that can be obtained by a student in each
subject is 100. */

#include <stdio.h>
int main(){
    double P, C, M, B ,E;

    //Input marks in 5 subjects
    printf("Enter marks obtained in Physics: ");
    scanf("%lf", & P);

    printf("Enter marks obtained in Chemistry: ");
    scanf("%lf", & C);

    printf("Enter marks obtained in Maths: ");
    scanf("%lf", & M);

    printf("Enter marks obtained in Biology: ");
    scanf("%lf", & B);

    printf("Enter marks obtained in English: ");
    scanf("%lf", & E);

    //Calculate totale marks and percentage obtained by student.
    double total, percentage; 
    total = P + C + M + B + E;
    percentage = (total / 500) * 100;

    //Print percentage of student
    printf("Percentage Obtained: %.2lf\n", percentage);
    return 0; 
}