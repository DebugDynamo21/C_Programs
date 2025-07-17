// #include <stdio.h>
// int main(){
//     for(int i = 1; i< 255; i++){
//         printf("\t%d = %c", i, i);
//     }
//      return 0; 
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int base,pow,i,res = 1;
//     printf("Enter the base and power value: ");
//     scanf("%d %d",& base, & pow);
//     for(i=1; i<= pow; i++){
//         res = res * base;
//     }
//     printf("the output is = %d\n", res);
//      return 0; 
// }

//Sum of digit of 5 digit number using loops.

// #include <stdio.h>
// int main(){
//     long int n , a, sum =0;
//     printf("Enter value of n = ");
//     scanf("%ld", & n);
    
//     while(n!=0){
//         a = n%10;
//         sum = sum + a;
//         n = n/10;
//     }
//     printf("Sum of digits is = %ld\n",sum);
//      return 0; 
// }

// Reverse of a 5 digit number using loops.

// #include <stdio.h>
// int main(){
//     long int n, a, revNum = 0;
//     printf("Enter a 5 digit number = ");
//     scanf("%ld",& n);

//     while(n>0){
//        while (n != 0) {
//         a = n % 10;
//         revNum = revNum * 10 + a; 
//         n /= 10; 
//     }
//     printf("Reverse number is = %ld\n",revNum);
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int i;
//     for(i = 0; i<=5000;i++){
//         printf("%c", 1);
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n, factorial;
//     printf("Enter a positive integer = ");
//     scanf("%d",& n);
//     for(int i = 1; i<=n; i++){
//         factorial *= i;
//     }
//     printf("Factorial of %d = %d\n",n,factorial);
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", & n);

//     for(int i = 0; i < n;i++){
//        for(int j = 1;j <= n; j++)
//         printf("%d", j);
//     }
//      return 0; 
// }

#include <stdio.h>
int main(){
    int n;
    for(int i = 0;i < n;i+=10){
        printf("%d\n",i);
    }
     return 0; 
}
