// Input order of matrix from user and implement transpose opeartion.

#include <stdio.h>
int main(){
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", & n);
    int a[n][n], i,j,t;
    printf("Enter values in matrix: ");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
        scanf("%d", & a[i][j]);
        }
    }
    printf("Matrix: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i<n; i++){
        for(j = i+1; j<n; j++){
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    printf("Transpose of Matrix: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
     return 0; 
}