/* If a five digit number is input through the keyboard, write a
program to obtain the sum of the digit of this number. */

#include <stdio.h>
int main(){
    long int n;
    int a, sum = 0;
    printf("Enter a 5 digit number: ");
    scanf("%ld", &n);   //input a 5 digit number

    //Logic to find sum of digit of a 5 digit number

    a = n % 10;
    sum = sum + a;
    n = n / 10;

    a = n % 10;
    sum = sum + a;
    n = n / 10;

    a = n % 10;
    sum = sum + a;
    n = n / 10;

    a = n % 10;
    sum = sum + a;
    n = n / 10;

    a = n % 10;
    sum = sum + a;
    n = n / 10;

    printf("\nThe sum of digit is: %d\n", sum);     //print the sum of digit
    return 0; 
}