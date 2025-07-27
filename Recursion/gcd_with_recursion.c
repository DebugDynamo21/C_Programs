//WAP to find gcd of two numbers using recursion.

#include <stdio.h>
int gcd(int a,int b);
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n",num1,num2,result);

    return 0;
}
    int gcd(int a, int b){
        if(b == 0){
            return a;
        }
        return gcd(b,a%b);
    }

    //using swapping approach.

    // #include <stdio.h>
    // int gcd(int a,int b){
    //     if(a<b){
    //        return gcd(b,a);
    //     }
    //     if(b==0){
    //         return a;
    //     }
    //     return gcd(b, a % b);
    // }
    // int main(){
    //     int num1, num2;
    //     printf("Enter two numbers: ");
    //     scanf("%d%d", &num1, &num2);
    //     int result = gcd(num1, num2);
    //     printf("The Gcd of two numbers: %d\n", result);
    // }