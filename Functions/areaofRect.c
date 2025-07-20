//WAP to find area of rectangle using function.

#include <stdio.h>
int area(int,int);
int main(){
    int l,b,result;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d", &l, &b);
    result = area(l,b);
    printf("Area of rectangle: %d\n", result);
    return 0; 
}
int area(int a,int b){
    int m;
    m = a*b;
    return m;
}