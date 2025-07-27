// WAP to print fibonacci series using recursion.

#include <stdio.h>
int fibonacci(int);
int main(){
    int n,i;
    printf("Enter the numbers of terms in series: ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d terms: \n", n);
    for(i = 0; i<n; i++){
        printf("%d\t", fibonacci(i));
    }
    printf("\n");
    return 0; 
}
int fibonacci(int x){
    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}