// To find biggest number in 2D array.

#include <stdio.h>
int main(){
    int a[3][3],largest;

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

    largest = a[0][0];
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(a[i][j]>largest){
                largest = a[i][j];
            }
        }
    }

    printf("Largest number in the matrix is: %d", largest);
    printf("\n");
    return 0; 
}