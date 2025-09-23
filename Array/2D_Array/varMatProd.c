// Product of two matrix of variable order.

#include <stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter the order of matrix A: ");
    scanf("%d%d", & m, & n);
    printf("Enter order of matrix B: ");
    scanf("%d%d", & p, & q);
    int a[m][n],b[p][q],c[m][q],i,j,t;
    
    if(n!=p){
         printf("Product is not possible.\n");
         return 1;
        }

    printf("Enter elements in matrix A: ");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", & a[i][j]);
        }
    }

    printf("\nMATRIX [A]%dx%d: \n",m,n);
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
            printf("\n");
    }

    printf("Enter elements in matrix B: ");
    for(i = 0; i<p; i++){
        for(j = 0; j<q; j++){
            scanf("%d", & b[i][j]);
        }
    }

    printf("\nMATRIX [B]%dx%d: \n",p,q);
    for(i = 0; i<p; i++){
        for(j = 0; j<q; j++){
            printf("%d\t",a[i][j]);
        }
            printf("\n");
    }

        for(i = 0; i<m; i++){
            for(j = 0; j<q; j++){
                c[i][j] = 0;
            }
        }
        for(i = 0; i<m; i++){
            for(j = 0; j<q; j++){
                    for(int k = 0; k<n; k++){
                        c[i][j] = c[i][j] + a[i][k] * b[k][i];
                    }
            }
        }
        
        printf("Product [AB]%dx%d: \n", m,q);
        for(i = 0; i<m; i++){
            for(j = 0; j<q; j++){
                printf("%d\t",c[i][j]);
            }
        printf("\n");
      }
    return 0;
}