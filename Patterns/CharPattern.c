/*A B C D E 
  A B C D E 
  A B C D E 
  A B C D E 
  A B C D E */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d", & n);
    for(int i = 0;i<n;i++){
        for(int j = 65;j<65+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
     return 0; 
}