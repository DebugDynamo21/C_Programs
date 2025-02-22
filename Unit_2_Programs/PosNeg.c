/* Any integer is input through the keyboard. Write a program
to find out whether it is a negative number or positive
number. */

#include <stdio.h>
int main(){
    int n;
    
    //Input a nuber
    printf("Enter a number: ");
    scanf("%d", &n);
    
    //Condiiton to check whether number is odd or even
    if(n < 0){
        printf("%d is negative\n", n);
    }else{
        printf("%d is positive\n", n);
    }
    return 0; 
}