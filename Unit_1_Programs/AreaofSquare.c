//Write a program to find area of square taken input from keyboard.

#include <stdio.h>
int main(){
    int side, area;
    printf("Enter the side of square: ");
    scanf("%d", & side);        // Input side of square
    area = side * side;
    printf("Area of square is: %d\n", area);    ///print area of square
    return 0; 
}