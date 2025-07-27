/*IMPORTANT: return function does not return more than two values 
here we need 2 values in ouput so we cannot use int function here
so we use void function because in this type of question the there 
is no return value we only need to swap the values.*/

#include <stdio.h>
void swap(int, int);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",& a,& b);
    swap(a,b);
    return 0; 
}
void swap(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
    printf("Swapped values: %d\t%d\n", x,y);
}