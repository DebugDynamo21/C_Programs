// Write a C program to merge the two one-dimensional
// arrays into third one.

#include <stdio.h>
int main(){
    int a[5],b[5],c[10],i;
    printf("Enter the values for array a: ");
    for(i = 0; i<5; i++){
        scanf("%d", & a[i]);
    }
    printf("The values of array a: ");
    for(i = 0; i<5; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("Enter the values for array b: ");
    for(i = 0; i<5; i++){
        scanf("%d", & b[i]);
    }
    printf("The values of array b: ");
    for(i = 0; i<5; i++){
        printf("%d\t",b[i]);
    }
    printf("\n");

    for(i = 0; i<5; i++){
       c[i] = a[i];
       c[i+5] = b[i];
    }
    printf("Values of array c is: ");
    for(i = 0; i<10; i++){
        printf("%d\t", c[i]);
    }
    printf("\n");
     return 0; 
}