// To print sum of elements of array using calloc() Function.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,*p, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", & n);
    p = (int*) calloc(n,sizeof(int));
    if(p == NULL){
    printf("Memory not available.\n");
    exit(1);
    }else{
        printf("Enter values in array: ");
        for(i = 0; i<n; i++){
            scanf("%d", (p+i));
        }
    }
    printf("The values in array: ");
    for(i = 0; i<n; i++){
        printf("%d\t", *(p+i));
    }
    printf("\n");

    for(i = 0; i<n; i++){
        sum += *(p+i);
    }
    printf("Sum of elements of array: %d\n",sum);
        return 0;
    }
   