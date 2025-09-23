//Transpose of a matrix.

#include <stdio.h>
int main(){
    int a[3][3],i,j,t;
    printf("Enter values in a: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            scanf("%d", & a[i][j]);
        }
    }
    printf("\n");
    printf("Matrix: \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<3; i++){
        for(int j = i+1; j<3; j++){
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    printf("Transpose of Matrix: \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
         return 0; 
}