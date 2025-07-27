// Category of functions.
// 1.Function with no argumnets and no return value.

// #include <stdio.h>
// void sum();                              // Function declaration
// int main(){
//     sum();                               // Function calling
//      return 0; 
// }
// void sum(){                              // Function definition
// int a,b,s;
// printf("Enter two numbers: ");
// scanf("%d%d",& a,& b);
// s = a+b;
// printf("The sum is: %d\n", s);
// }

// 2.Function with no arguments but with return value.

// #include <stdio.h>
// int sum();
// int main(){
//     int r;
//     r = sum();
//     printf("The sum is: %d\n",r);
// return 0; 
// }
// int sum(){
//     int a, b, s;
//     printf("Enter two numbers: ");
//     scanf("%d%d", & a,& b);
//     s = a+b;
//     return s;
// }

// 3. Function with arguments but no return value.(PASS BY VALUE EXAMPLE)

// #include <stdio.h>
// void sum(int, int);
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d",& a,& b);
//     sum(a,b);                    // (ACTUAL ARGUMENTS)
//     return 0; 
// }
// void sum(int x, int y){          //(FORMAL ARGUMENTS)
//     int s;
//     s = x+y;
//     printf("The sum is: %d\n",s);
// }

// 4. Function with arguments with return value.

// #include <stdio.h>
// int sum(int, int);
// int main(){
//     int a,b,r;
//     printf("Enter two numbers: ");
//     scanf("%d%d", & a, & b);
//     r = sum(a,b);
//     printf("The sum is: %d\n", r);
//     return 0; 
// }
// int sum(int x,int y){
//     int s; 
//     s =x+y;
//     return (s);
// }