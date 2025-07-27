//Passing 2D array to function.

#include <stdio.h>
int sum(int[][3]);
int main(){
    int a[3][3],i,j,r;
    printf("Enter values in array: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            scanf("%d", & a[i][j]);
        }
    }
    printf("\nMatrix: \n");
    for(i = 0; i<3; i++){
        for(j = 0;j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    r = sum(a);
    printf("\n The sum is: %d\n", r);
}
int sum(int a[][3]){
    int i, j,s=0;
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            s = s + a[i][j];
        }
    }
    return s;
}