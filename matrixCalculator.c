/* Write a menu driven program to read and display an m x n matrix.
   Also find the sum, transpose, and the product of two m x n matrices. */

#include <stdio.h>
void read_matrix(int mat[2][2], int, int);
void sum_matrix(int mat1[2][2], int mat2[2][2], int, int);
void product_matrix(int mat1[2][2], int mat2[2][2], int, int);
void transpose_matrix(int mat2[2][2], int, int);
void display_matrix(int mat[2][2], int r, int c);

int main(){
    int option, row, column;
    int mat1[2][2], mat2[2][2];

    do
    {

        printf("\n ******* MAIN MENU *******");
        printf("\n 1. Read the two matrices");
        printf("\n 2. Add the two matrices");
        printf("\n 3. Multily the two matrices");
        printf("\n 4. Transpose the two matrices");
        printf("\n 5. EXIT");

        printf("\n\n Enter you option: ");
        scanf("%d", & option);
        switch(option){
            case 1:
                printf("\n Enter the number of rows and columns of the matrix: ");
                scanf("%d%d", & row, & column);
                
                printf("\n Enter the first matrix: ");
                read_matrix(mat1, row, column);

                printf("\n Enter the second matrix:");
                read_matrix(mat2, row, column);
                break;

            case 2:
                sum_matrix(mat1, mat2, row, column);
                break;
            case 3:
                if(column == row){
                    product_matrix(mat1, mat2, row, column);
                }
                else{
                    printf("\n To multiply two matrices number of columns in first matrix must be equal to the number of rows in the second matrix");
                }
                break;
            case 4:
                transpose_matrix(mat1, row, column);
                break;
        }
    }while(option != 5);
    return 0;
}

void read_matrix(int mat[2][2], int r, int c){
    int i ,j;
    for(i = 0; i < r; i++){
        printf("\n");
        for(j = 0; j < c; j++){
            printf("\t mat[%d][%d] = ", i, j);
            scanf("%d", & mat[i][j]);
        }
    }
}

void sum_matrix(int mat1[2][2], int mat2[2][2], int r, int c){
    int i, j, sum[2][2];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    display_matrix(sum, r, c);
}

void product_matrix(int mat1[2][2], int mat2[2][2], int r, int c){
    int i, j, k, prod[2][2];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            prod[i][j] = 0;
            for(k = 0; k < c; k++){
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    display_matrix(prod, r, c);
}

void transpose_matrix(int mat[2][2], int r, int c){
    int i, j, tp_mat[2][2];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++)
            tp_mat[j][i] = mat[i][j];
    }
    display_matrix(tp_mat, r, c);
}

void display_matrix(int mat[2][2], int r, int c){
    int i, j;
    for(i = 0; i < r; i++){
        printf("\n");
        for(j = 0; j < c; j++){
            printf("\t mat[%d][%d] = %d", i, j, mat[i][j]);
        }
    }
}