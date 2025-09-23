/* Write a C program to find the biggest element of array of
    size 10. */

#include <stdio.h>
int main(){
    int a[10], largest;
    printf("Enter 10 numbers in array a: ");
    for(int i =0; i<10; i++){
        scanf("%d", & a[i]);
    }
    printf("Values in a: \n");
    for(int i = 0; i< 10; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    largest = a[0];
    for(int i = 0; i < 10; i++){
        if(a[i]>largest){
          largest = a[i];
        }
    }
    printf("Largest number: %d\n", largest);
     return 0; 
}