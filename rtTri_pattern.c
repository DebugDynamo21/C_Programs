// Printing right triangle pattern using single loop.

#include <stdio.h>
#include <string.h>

void printPattern(int n){
    int i = 0;
    char s[1] = "*";
    char s1[10000] = "";
    while(i <= n){
        strcat(s1,s);
        printf("%s\n", s1);
        i++;
    }
}
int main(){
    int n;
    printf("Enter a value of n: ");
    scanf("%d", & n);
    printPattern(n);
    return 0; 
}