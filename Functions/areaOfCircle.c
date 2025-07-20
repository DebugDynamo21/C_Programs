// To calculate area of circle using functions

#include <stdio.h>
float area(int);
#define PI 3.14     // Macro

int main(){
    int r;
    float m;
    
    printf("Enter the radius of circle: ");
    scanf("%d", & r);
    m = area(r);
    printf("Area of circle: %.2f\n", m);
    return 0; 
}

float area(int x){
    float a;
    a = PI * x * x;
    return a;
}