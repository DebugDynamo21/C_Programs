/* Two numbers are input through the keyboard into two locations
C and D. Write a program to interchange the contents of C and
D without using third variable. */

#include <stdio.h>
int main(){
    int c, d;
    printf("Enter two number to interchange their values: ");
    scanf("%d%d", &c, &d);

    printf("Value of c an d before interchange: %d\t%d", c ,d);

    //Logic for swapping values of c and d without using third variable.
    c = c + d;
    d = c - d;
    c = c - d;

    printf("\nThe values of c and d after interchange: %d\t%d\n", c, d);
    return 0; 
}