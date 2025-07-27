//WAP to find sum of digits a 5-digit number using recursion.

#include <stdio.h>
int sod(int);
int main(){
    long int n,r;
    printf("Enter a 5 digit number: ");
    scanf("%ld", & n);
    r = sod(n);
    printf("Sum of digits: %ld\n", r);
    return 0; 
}
int sod(int m){
    int a;
    if(m==0)
    return 0;
    else
    a = m % 10;
    return (a + sod(m/10));
}