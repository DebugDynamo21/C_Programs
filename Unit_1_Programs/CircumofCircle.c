/* The radius of a circle is input through the keyboard. Write a
program to calculate the circumference of the circle. */

#include <stdio.h>
int main(){
    int radius;
    float circumference;
    printf("Enter the radius of cirlce: ");
    scanf("%d", &radius);      // input radius of circle
    circumference = 2 * 3.14 * radius; //process circumference
    printf("Circumference of circle: %.2f\n", circumference);   //print circumference of circle
    return 0; 
}