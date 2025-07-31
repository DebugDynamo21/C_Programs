// WAP to swap two number using Pass by reference approach.

#include <stdio.h>
int swap(int *, int *);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
}
int swap(int * x, int * y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("The value after swapping %d\t%d\n", *x, *y);
    return 0;
}