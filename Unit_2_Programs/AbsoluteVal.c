/* Write a C program to find the absolute value of a number
entered through the keyboard. */

#include <stdio.h>
int main(){
    int n;

    //input a number
    printf("Enter a integer n: ");
    scanf("%d", & n);

    //Logic to find absolute value
    if(n < 0){
        n = -n;
    }
    printf("Absolute value of n is: %d\n", n);
    return 0; 
}