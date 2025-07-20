// WAP to create a aquare pattern with characters.
/*  A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E  */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d", & n);
    for(int i = 0;i<n; i++){
        for(char ch = 'A'; ch <= 'E'; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
     return 0; 
}