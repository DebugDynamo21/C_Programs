// Write a program to multiply two 3x3 matrices.

#include <stdio.h>
void inputMatrix(int matrix[3][3],int row,int cols){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<cols; j++){
            printf("\nEnter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
}
void printMatrix(int matrix[3][3], int row,int cols){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<cols; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrix(int matrix1[3][3],int matrix2[3][3],int res[3][3],int r1,int c1,int c2){
    for(int  i = 0; i<r1; i++){
        for(int j = 0; j< c2; j++){
            res[i][j] = 0;
        }
    }
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            for(int k = 0; k<c1; k++)
            res[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}

int main(){
    int matrix1[3][3],matrix2[3][3],res[3][3];
    int r1,c1,r2,c2;

    printf("Enter order of matrix 1: ");
    scanf("%d%d", & r1, & c1);

    printf("Enter order of matrix 2: ");
    scanf("%d %d", & r2,& c2);

    if(c1!=r2){
        printf("Invalid order! Enter valid order such that col1 = row2\n");
        return 1;
    }else{
        printf("Enter elements in matrix 1: ");
        inputMatrix(matrix1,r1,c1);

        printf("Enter elements in matrix 2: ");
        inputMatrix(matrix2,r2,c2);
        
        multiplyMatrix(matrix1, matrix2,res,r1,c1,c2);

        printf("Product of matrix: \n");
        printMatrix(res,r1,c2);
    }
    return 0; 
}
