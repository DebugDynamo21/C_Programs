//Fatorial of a number recursion.

#include <stdio.h>
unsigned long int fact(int);
int main(){
    int n;
    unsigned long int r;
    printf("Enter a number: ");
    scanf("%d", & n);
    r = fact(n);
    printf("Factorial of %d is : %lu\n",n,r);
    return 0; 
}
unsigned long int fact(int p){
    if(p==0 || p==1)
    return 1;
    else
    return(p * fact(p-1));
}