/*A 
  A B 
  A B C 
  A B C D */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d",& n);
    for(int i = 1;i<n;i++){
        for(int j = 65; j < 65 + i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
     return 0; 
}