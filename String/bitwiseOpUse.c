//use of bitwise operators.

#include <stdio.h>
int main(){
    int a = 5,b = 4;

    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = a >> b;
    int g = a << b;
    printf("a AND b: %d\n",c);
    printf("a OR b: %d\n",d);
    printf("a XOR b: %d\n",e);
    printf("a left shift b: %d\n", f);
    printf("a right shift b: %d\n",g);
     return 0; 
}