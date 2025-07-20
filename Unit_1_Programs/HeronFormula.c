/* Write a C program to calculate area of triangle using Heron's
formula. */

#include <stdio.h>
#include <math.h>
int main(){
    double x, y, z, s, area;
    printf("Enter three sides of trianlge: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    //check whether the sides form a valid triangle
    if(x + y > z && y + z > x && z + x > y){
        
        //Calculate semi perimeter
        s = (x + y + z) / 2;
        
        //Area using heron's formula
        area = sqrt(s * (s - x) * (s - y) * (s -z));
        
        //display the result
        printf("The area of triangle is: %.2lf", area);
    }else{
        printf("Invalid triangle! Please enter valid sides so that the sum of two sides is greater than the third side.");
    }

    return 0; 
}