#include <stdio.h>
int sum(int);
int main(){
    long int n,r;
    printf("Enter a 5 digit number: ");
    scanf("%ld",& n);
    r = sum(n);
    printf("Sum of its digits: %ld\n",r);
    return 0;
}
int sum(int x){
    int a,i, s = 0;
    for(i = 0; i<5; i++){
        a = x%10;
        s = s + a;
        x /= 10;
    }
    return s;
}