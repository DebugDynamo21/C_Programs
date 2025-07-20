/* The length & breadth of a rectangle are input through the
keyboard. Write a program to calculate the area of
the rectangle. */

#include <stdio.h>
int main(){
    int length, breadth, area;      
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d", &length, &breadth);       //input length and breadth of rectangle
    area = length * breadth;                // process area
    printf("The area of rectangle: %d", area);      //print the area of rectangle
    return 0; 
}