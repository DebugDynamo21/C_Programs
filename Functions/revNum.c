#include <stdio.h>
int revNum(int);
int main(){
    long int n,r;
    printf("Enter a 5 digit number: ");
    scanf("%ld",& n);
    r = revNum(n);
    printf("Reverse number is: %ld\n",r);
    return 0;
}
int revNum(int x){
    int a, i, m = 0;
    for(i = 0; i<5; i++){
        a = x % 10;
        m = m*10 + a;
        x /= 10;
    }
    return m;
}