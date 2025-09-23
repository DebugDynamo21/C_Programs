// Write a program to multiply two square n x n matrices.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", & n);
    int a[n][n], b[n][n], c[n][n],i,j,k;
    printf("Enter the values in matrix A: ");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
        scanf("%d", & a[i][j]);
        }
    }
    printf("Matrix A: \n");
    for(i = 0; i<n; i++){
        for(j = 0;j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values in matrix B: ");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
        scanf("%d", & b[i][j]);
        }
    }
    printf("Matrix B: \n");
    for(i = 0; i<n; i++){
        for(j = 0;j<n; j++){
            printf("%d\t", b[i][j]);
        }
    }

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            c[i][j] = 0;
            for(k = 0; k<n; k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("Product AB: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
     return 0;
}