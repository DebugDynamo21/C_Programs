//Factorial of number using pass by reference approach.

#include <stdio.h>
unsigned long int fact(int *);
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",& n);
    fact(&n);
    return 0; 
}
unsigned long int fact(int * res){
    unsigned long int p =1;
     for (int i = 1; i<=*res; i++){
        p *= i;
     }
     printf("Factorial %d is: %lu\n",* res, p);
     return 0;
}