/*  Write a program to reverse the elements of an array without
    using another array. */

#include <stdio.h>
int main(){
    int a[10], t;
    printf("Enter elements in array; ");
    for(int i = 0; i < 10; i++){
        scanf("%d", & a[i]);
    }
    printf("\n");
    printf("Values in array a: \n");
    for(int i = 0; i<10; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
     for(int i = 0, j = 9; i<j; i++, j--){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
     }
     printf("Values after reversing: \n");
    for(int i = 0; i < 10; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
     return 0; 
}