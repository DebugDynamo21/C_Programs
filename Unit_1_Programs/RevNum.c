/* If a five-digit number is input through the keyboard, write a
program to reverse the number. */

#include <stdio.h>
int main(){
    long int n;
    int a, revNum = 0;
    printf("Enter a 5 digit number: ");
    scanf("%ld", & n);

    // Logic to reverse a 5 digit number
    a = n % 10;
    revNum = revNum * 1 + a;
    n = n / 10;

    a = n % 10;
    revNum = revNum * 10 + a;
    n = n / 10;
    
    a = n % 10;
    revNum = revNum * 10 + a;
    n = n / 10;
    
    a = n % 10;
    revNum = revNum * 10 + a;
    n = n / 10;
    
    a = n % 10;
    revNum = revNum * 10 + a;
    
    printf("\nReverse number: %d\n",revNum);
    return 0; 
}