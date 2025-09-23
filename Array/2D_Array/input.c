// Take input in 2D array.

#include <stdio.h>
int main(){
    int a[3][3];
    printf("Enter values in a: ");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", & a[i][j]);
        }
    }
    printf("Matrix: \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
     return 0; 
}
