// Ten numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are even and
// how many are odd. */

#include <stdio.h>
int main(){
    int a[10], odd = 0, even = 0;

    printf("Enter values in array a: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", & a[i]);
    }

    printf("Values in a: \n");
    for(int i = 0; i < 10; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    
    printf("Number of even number = %d\n", even);
    printf("Number of odd number = %d\n", odd);
     return 0; 
}
