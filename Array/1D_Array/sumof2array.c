//Write a C program to find out the sum of two one-dimensional
//arrays and store it in another array.

#include <stdio.h>
int main(){
    int a[5],b[5],c[5];
    printf("Enter the values in array a: ");
     for(int i = 0; i < 5; i++){
        scanf("%d", & a[i]);
     }
     printf("Values in array a: ");
     for(int i = 0; i<5; i++){
        printf("%d\t",a[i]);
     }
        printf("\n");

     printf("Enter the values in array b: ");
     for(int i = 0; i<5; i++){
        scanf("%d",& b[i]);
     }
     printf("Values in array b: ");
     for(int i = 0; i<5; i++){
        printf("%d\t",b[i]);
     }
     printf("\n");

     for(int i = 0; i<5; i++){
        c[i] = a[i] + b[i];
     }
     printf("The values in array c: \n");
     for(int i = 0; i<10; i++){
        printf("%d\t", c[i]);
     }
     printf("\n");
     return 0; 
}