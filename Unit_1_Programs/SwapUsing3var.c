/* Two numbers are input through the keyboard into two locations
C and D. Write a program to interchange the contents of C and
D using third variable. */

#include <stdio.h>
int main(){
    int c, d, temp;
    printf("Enter two numbers to interchange: ");
    scanf("%d%d", &c, &d);      //input c and d

    printf("Value of c and d before interchange: %d\t%d", c, d);

    //Logic for swapping values of two variable using third variable
    temp = c;
    c = d;
    d = temp;

    printf("The value of c and d after interchange: %d\t%d", c, d);
    return 0; 
}