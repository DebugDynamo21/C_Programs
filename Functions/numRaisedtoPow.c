// To calculate a number raised to some power using functions.

#include <stdio.h>
int square(int, int);
int main(){
    int r,b,p;
    printf("Enter the base: ");
    scanf("%d", & b);
    printf("Enter the power: ");
    scanf("%d", & p);
    r = square(b,p);
    printf("%d Raised to power is %d: %d\n",b ,p, r);
    return 0; 
}
int square(int x, int y){
    int i, r = 1;
    for(i = 1; i<=y; i++)
    r *= x;
    return r;
}