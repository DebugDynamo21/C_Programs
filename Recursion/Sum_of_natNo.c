//Sum of first n natural numbers using recursion

#include <stdio.h>
int natural(int);
int main(){
    int r,n;
    printf("Enter a number: ");
    scanf("%d", & n);
    r = natural(n);
    printf("The sum is: %d\n", r);
    return 0; 
}
int natural(int n){
    if(n==1)
    return 1;
    else
    return (n + natural(n-1));
}