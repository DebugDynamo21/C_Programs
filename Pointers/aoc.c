// Area of circle using Pass by refernce approach.

#include <stdio.h>
float area(int *);
int main(){
    float res;
    int r;
    printf("Enter the radius: ");
    scanf("%d", & r);
    res = area (& r);
    printf("Area is: %.2f\n", res);
    return 0; 
}
float area(int * x){
    float a;
    a = 3.14 *(* x) * (* x);
    return a;
}