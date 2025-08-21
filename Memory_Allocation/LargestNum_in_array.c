// WAP to find the largest number amont 20 integers arrays using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n , i, *p, max;
    printf("Enter the size of array : ");
    scanf("%d", & n);
    p = (int*)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Memory not available.\n");
        exit (1);
    }else{
        printf("Enter 20 integers: \n");
        for(i = 0; i < n; i++){
            scanf("%d", &p[i]);
        }

        max = p[0];
        for(i = 0; i < n; i++){
            if(p[i] > max){
                max = p[i];
            }
        }
        printf("The largest number in array is: %d\n", max);
    }
    return 0; 
}