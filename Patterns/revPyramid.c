/* ***********
    *********
     *******
      *****
       ***
        *     */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d",& n);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int k = 0; k<((n*2)-(2*i-1)); k++){
            printf("*");
        }
        printf("\n");
    }
     return 0; 
}

