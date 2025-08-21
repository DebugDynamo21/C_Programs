// WAP to reallocate memory using realloc()

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, *p, i, m;
    printf("Enter the size: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Memory not available.\n");
    }
}