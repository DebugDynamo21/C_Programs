// 1 2 3 4 5 6 7 8 9 10.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n: ");
//     scanf("%d", & n);
//     for(int i = 1; i <= n; i++){
//         printf("%d ", i);
//     }
//     printf("\n");
//      return 0; 
// }

// 10 9 8 7 6 5 4 3 2 1.

// #include <stdio.h>
// int main(){
//     int n = 1;
//     for(int i = 10; i>=n; i--){
//         printf("%d ",i);
//     }
//     printf("\n");
//      return 0; 
// }

/* PATTERNS */
// 1. to print square pattern with numbers.

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n = ");
//     scanf("%d", & n);
//     for(int i = 0; i<n; i++){
//         for(int j = 1;j<=n;j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n = ");
//     scanf("%d",& n);

//     for(int i = 0; i<n; i++){
//         for(int j = n; j>=1; j--){
//             printf("%d ", j);
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
//     for(int i = 0;i<n; i++){
//         for(char ch = 'A'; ch <= 'E'; ch++){
//             printf("%c ", ch);
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
//     for(int i = 0; i<n; i++){
//         for(char ch = 'E'; ch>='A'; ch--){
//             printf("%c ", ch);
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
//         for(int j = 1; j<=n; j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n = ");
//     scanf("%d", & n);

//     for(int i = 0;i < n; i++){
//         for(int j = 1;j<=i+1;j++){
//             printf("%d",j);
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
//         for(int j = 65;j<65+n;j++){
//             printf("%c ",j);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n = ");
//     scanf("%d",& n);
//     for(int i = 0;i<n;i++){
//         for(int j = 65;j<65+i;j++){
//             printf("%c ",j);
//         }
//         printf("\n");
//     }
//      return 0; 
// }

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n = ");
    scanf("%d",& n);
    for(int i = 0;i<n;i++){
        for(int j = 65;j<=69;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
     return 0; 
}

