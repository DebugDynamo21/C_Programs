// Area of circle using functions category(i).

// #include <stdio.h>
// void area();
// int main(){
//     area();
//     return 0; 
// }
// void area(){
//     int r,a;
//     printf("Enter radius of circle: ");
//     scanf("%d", & r);
//     a = 3.14 * r * r;
//     printf("The area is: %d", a);
// }

// using float return type.

// #include <stdio.h>
// float area();
// int main(){
//     area();
//     return 0; 
// }
// float area(){
//     int r;
//     float a;
//     printf("Enter radius of circle: ");
//     scanf("%d", & r);
//     a = 3.14 * r * r;
//     printf("Area is: %f\n",a);
//     return 0;
// }

//using (ii)category

// #include <stdio.h>
// int area();
// int main(){
//     int m;
//     m = area();
//     printf("Area is: %d\n", m);
//     return 0; 
// }
// int area(){
//     int r, a;
//     printf("Enter radius of circle: ");
//     scanf("%d",& r);
//     a = 3.14 * r * r;
//     return (a);
// }

//using category (function category-3)

// #include <stdio.h>
// void area(int);
// int main(){
//     int r;
//     printf("Enter the radius: ");
//     scanf("%d", & r);
//     area(r);
//      return 0; 
// }
// void area(int x){
//     int a;
//     a = 3.14 * x * x;
//     printf("\nArea of circle is: %d\n",a);
// }

//using category (iv)

#include <stdio.h>
float area(int);
int main(){
    int r;
    float p;
    printf("Enter the radius: ");
    scanf("%d", & r);
    p = area(r);
    printf("Area of circle: %.2f\n",p);
    return 0; 
}
float area(int x){
    float a;
    a = 3.14 * x * x;
    return(a);
}