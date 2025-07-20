/* The length & breadth of a rectangle are input through the
keyboard. Write a program to calculate the area & perimeter of
the rectangle. */

#include <stdio.h>
int main(){
    int length, breadth;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d", &length, &breadth);       //input length and breadth
    int perimeter = 2 * (length + breadth); //process perimeter
    printf("Perimeter of rectangle is: %d", perimeter);     //print the perimeter of rectangle
    return 0; 
}