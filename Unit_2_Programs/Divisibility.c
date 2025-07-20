/* WAP to to check whether the number is divisible by 5 and 11. */

#include <stdio.h>
int main(){
    int n;

    //Input a number n
    printf("Enter a number: ");
    scanf("%d", & n);

    //Check whether n is divisible by 5 and 11.
    if(n % 5 == 0 && n % 11 == 0){
        printf("%d is divisible by 5 and 11.\n", n);
    }else{
        printf("%d is not divisible by 5 and 11.\n", n);
    }
    return 0; 
}