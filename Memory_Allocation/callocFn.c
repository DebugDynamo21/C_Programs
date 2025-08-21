// To print the default value of calloc() function.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, *a, i;
    printf("Enter the size: ");
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    if(a == NULL){
        printf("Memory allocation failed\n");
    }
    else{
        printf("\nThe array elements are: ");
        for(i = 0; i < n; i++){
            printf("%d\t", *(a + i));
        }
        printf("\n");
    }
    return 0;
}