// Example of Pass by reference OR Call by reference.

#include <stdio.h>
int sum(int *, int*);
int main(){
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    r = sum(&a, &b);
    printf("Sum of numbers is: %d\n", r);
    return 0;
}
int sum(int * x, int * y){
    int s;
    s = *x + *y;
    return s;
}