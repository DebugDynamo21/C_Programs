//To print the default value of malloc() function.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, *p, i;
    printf("Enter the size: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Memory not avaliable\n");
        exit (1);
    }
    printf("The numbers are: ");
    for(i = 0; i < n; i++){
        printf("%d", *(p+i));
    }
    printf("\n");
    return 0; 
}