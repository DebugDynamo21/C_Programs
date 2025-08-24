// To use Pointer in structure.
// Create a structure in which enter student name,roll no. and percentage and print using pointers.

#include <stdio.h>
struct student{
    int r;
    char name[20];
    float percentage;
};

int main(){
    struct student s = {1,"Amit",93.29};
    struct student *P;           //declaring a pointer structure.

    P = & s;        //pointer p which points structure of student s.

    printf("Roll no.: %d\n",P->r);          //to print a structure variable using pointer we use
    printf("Name of student: %s\n",P->name);     // arrow opeator(->).
    printf("Percentage: %.2f\n", P->percentage);
    return 0; 
}