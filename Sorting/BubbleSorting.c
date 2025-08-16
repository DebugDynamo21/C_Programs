// *** BUBBLE SORTING ***

#include <stdio.h>
int main(){
    int a[5], t;
    printf("Enter the values in array a: ");
    for(int i = 0; i<5; i++){
        scanf("%d", & a[i]);
    }
    printf("Values in array a: \n");
    for(int i = 0; i<5; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    for(int i= 0; i<5; i++){
        for(int j = 0; j<5-i-1; j++){
            if(a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("The sorted array is: \n");
     for(int i = 0; i<5; i++){
        printf("%d\t", a[i]);
     }
     printf("\n");
     return 0; 
}