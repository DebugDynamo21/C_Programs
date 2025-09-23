// Write a C program to copy the values in an array from
//another array.

#include <stdio.h>
int main(){
    int a[5],b[5],i;
    printf("Enter the numbers in array a = ");
    for(int i = 0; i<5; i++){
        scanf("%d", & a[i]);
    }
        printf("The numbers in a : \n");
    for(int i = 0; i<5; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        b[i] = a[i];
    }
    printf("The numbers in array b: \n");
        for(int i = 0; i<5; i++){
            printf("%d\t", b[i]);
        }
        printf("\n");
     return 0; 
}