#include <stdio.h>
unsigned long int fact(int);
int main(){
    int n;
    unsigned long int r;
    printf("Enter the value of n: ");
    scanf("%d",& n);
    r = fact(n);
    printf("\n The factorial of %d is: %lu\n",n,r);
}

unsigned long int fact(int r){
    unsigned long int j = 1;
    int i;
    for(i = 1; i<=r; i++){
        j = j*i;
    }
    return j;
}