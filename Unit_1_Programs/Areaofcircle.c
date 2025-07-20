// Write a program to find area of circle taken radius input from the keyboard.

#include <stdio.h>
int main(){
    int r;      //initalize r as radius of circle
    float area;     //intialize area as a floating point variable
    printf("Enter the radius of circle: ");
    scanf("%d", &r);        //input radius of cirle from user
    area = 3.14 * r * r;    //process area of circle
    printf("The area of circle is: %.2f", area);  //print area of circle
    return 0; 
}