/*       A
        AB
       ABC
      ABCD
     ABCDE   */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d", & n);
    for(int i = 0;i<n;i++){
        for(int j =0; j<n-i;j++){
            printf(" ");
            }
            for(int k = 65;k<=65+i;k++){
                printf("%c",k); 
        }
        printf("\n");
    }
     return 0; 
}
