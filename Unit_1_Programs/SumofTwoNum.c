//Write a program to find the sum of two integers.input two numbers from the keyboard.

#include <stdio.h>
int main(){
    int a, b;   //Initialize a and b two integer numbers
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);      //Input two numbers from the user
    int sum = a + b;        //process sum
    printf("The sum %d and %d is: %d\n",a, b, sum);        //Print the sum  of a and b
    return 0; 
}