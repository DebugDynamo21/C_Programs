/*Any integer is input through the keyboard. Write a program
to find out whether it is an odd number or an even number.*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d", & n);
    if(n % 2 == 0){
        printf("%d is even number.\n", n);
    }else{
        printf("%d is odd number.\n", n);
    }
     return 0; 
}