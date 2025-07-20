/* If a five digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number. */

#include <stdio.h>
int main(){
    long int n;
    int firstdig, lastdig, sum;
    printf("Enter a 5 digit number: ");
    scanf("%ld", &n); //input a 5 digit number
    
    firstdig = n / 10000;       //process first digit
    lastdig = n % 10;           //process last digit
    sum = firstdig + lastdig;   //process sum

    printf("\nThe sum of first and last digit is: %d\n", sum);      //print sum of first and last digit
    return 0; 
}