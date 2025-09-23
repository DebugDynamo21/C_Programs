// To check whether a matrix is symmetric or not.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the order of matrix: ");
    scanf("%d", & n);
    int a[n][n],i,j,t;
    printf("Enter elements in matrix: ");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", & a[i][j]);
        }
    }
    printf("\nMATRIX: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
            printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            if(i<=j){
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    if(a[i][j]==a[j][i]){
        printf("Matrix is symmetric.\n");
    }else{
        printf("Matrix is not symmetric.\n");
    }
    return 0; 
}