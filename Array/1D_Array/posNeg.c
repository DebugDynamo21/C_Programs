/* Q-8) Ten numbers are entered from the keyboard into an array.
        Write a program to find out how many of them are positive
        and how many are negative. */

#include <stdio.h>
int main(){
    int a[10], positive = 0, negative = 0;

    printf("Enter 10 positive and negative numbers: ");
    for(int i = 0; i<10; i++){
        scanf("%d", & a[i]);
    }

    printf("Values in a: ");
    for(int i = 0; i<10; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            positive++;
        }else{
            negative++;
        }
    }
    
    printf("Number of positive number = %d\n", positive);
    printf("Number of negative number = %d\n", negative); 
     return 0; 
}