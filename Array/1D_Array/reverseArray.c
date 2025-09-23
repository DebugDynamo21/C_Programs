//Write a C program to copy the values from an array to
//another array in reverse order.

#include <stdio.h>
int main(){
    int a[5],b[5];
    printf("Enter numbers in array = ");
    for(int i = 0; i<5; i++){
        scanf("%d",& a[i]);
    }
    printf("The value in array a: \n");
        for(int i = 0; i<5; i++){
            printf("%d\t", a[i]);
        }
            printf("\n");
        for(int i = 0; i<5; i++){
           b[i] = a[4-i]; 
        }
        printf("the value in array b: \n");
        for(int i = 0; i<5; i++){
            printf("%d\t", b[i]);
        }
        printf("\n");
     return 0; 
}