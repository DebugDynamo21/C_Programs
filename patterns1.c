// Right triangle patterns

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 0;i<n;i++){
//         for(int j = n;j>=n-i;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 1;i<=n;i++){
//         for(int j = n;j>=i;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 0;i<n;i++){
//         for(int j =0; j<n-i;j++){
//             printf(" ");
//             }
//             for(int k = 0;k<=i;k++){
//                 printf("*"); // agr yaha star ke bd space diya tb triangle pattenr bn jyega.
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d", & n);
//     for(int i = 0;i<n;i++){
//         for(int j =0; j<n-i;j++){
//             printf(" ");
//             }
//             for(int k = 65;k<=65+i;k++){
//                 printf("%c",k); 
//         }
//         printf("\n");
//     }
//      return 0; 
// }

//star Triangle pattern.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d",& n);
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i==0||j==0||i==n-1||j==n-1){
//                 printf("*");
//             }else{
//             printf(" ");
//         }
//       }
//       printf("\n");
//     }
//      return 0; 
// }

// Reverse Triangle pattern.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d",& n);
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j < i; j++){
//             printf(" ");
//         }
//         for(int k = 0; k<((n*2)-(2*i-1)); k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n,k=1;
//     printf("Enter the value of n: ");
//     scanf("%d", & n);

//     for(int i=0; i<n;i++){
//         for(int j = 0; j<n;j++){
//             if(i==j){
//                 printf("%d",k++);
//             }else{
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// Reverse K star pattern.

// #include <stdio.h>
// int main(){
//     int i,j,k;
//     for(i = 0; i<5; i++){
//         for(j = 0; j<i; j++)
//             printf(" ");
//         for(k = 0; k<5-i; k++)
//             printf("*");
//             printf("\n");
//     }
//     for(i = 1; i<5; i++){
//         for(j = 0; j<5-i-1; j++)
//         printf(" ");
//         for(k = 0; k<=i; k++)
//         printf("*");
//         printf("\n");
//     }
//      return 0; 
// }