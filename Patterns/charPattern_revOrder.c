// WAP to create a pattern with character in reverse order.
/*  E D C B A 
    E D C B A 
    E D C B A 
    E D C B A 
    E D C B A */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d", & n);
    for(int i = 0; i<n; i++){
        for(char ch = 'E'; ch>='A'; ch--){
            printf("%c ", ch);
        }
        printf("\n");
    }
     return 0; 
}