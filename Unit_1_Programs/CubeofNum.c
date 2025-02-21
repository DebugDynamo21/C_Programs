/* Write a C program to find cube of a number. */

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    long int cube;

    printf("Enter value of n: ");
    scanf("%d", &n);

    //Calculate cube
    cube = pow(n , 3);

    //Print cube
    printf("Cube of number: %ld\n", cube); 
    return 0; 
}