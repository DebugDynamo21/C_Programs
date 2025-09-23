// To print a 3x3 matrix.

#include <stdio.h>
int main(){
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Matrix : \n");
    for(int i =0 ;i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
     return 0; 
}