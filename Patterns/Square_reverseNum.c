// Print square pattern of numbers: 
/*  5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 */

#include <stdio.h>
int main(){
    int n;
    printf("Enter value of n = ");
    scanf("%d",& n);

    for(int i = 0; i<n; i++){
        for(int j = n; j>=1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
     return 0; 
}
