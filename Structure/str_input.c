// User defined code of structure using pointer.
//Input name, roll no. & percentage of student from the user and print the values usinf pointer of Structure.

#include <stdio.h>
struct student{
    char name[20];
    int r;
    float percentage;
};
int main(){
    struct student s;
    struct student * P;
    P = &s;

    printf("Enter your Name, Roll no. & Percentage: ");
    scanf("%s%d%f",& *P->name,& P->r,& P->percentage);
    printf("%s\n%d\n%.2f\n", P->name,P->r,P->percentage);
    return 0; 
}