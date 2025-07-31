/*      SYNTAX      
    datatype * pointerName
    format specifier --> %u- to printf addressof pointer. */

#include <stdio.h>
int main(){
    int * p, a; // *- value of addressof operator.
    a = 10;
    p = &a;   // &- addressof operator
    printf("%d\n", a);    //value of a
    printf("%u\n", & a);  //addressof a
    printf("%u\n", p);    //addressof p
    printf("%u\n", & p);  //addressof p
    printf("%d\n", * p);  //value at addressof p
    printf("%d\n", * (&a));
    return 0; 
}