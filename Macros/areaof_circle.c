//MACRO AS VARIABLE

// SYNTAX - #define macro_template macro_expansion

//WAP to find area of circle using macro as variable.

// #include <stdio.h>
// #define PI 3.14
// int main(){
//     int r;
//     float area;
//     printf("Enter the radius of circle: ");
//     scanf("%d", &r);
//     area = PI * r * r;
//     printf("%.2f\n", area);
//     return 0; 
// }

// MACRO AS FUNCTION.

// SYNTAX- #define macro_template(parameter) macro_definition

//WAP to find area of circle using macro as function.

#include <stdio.h>
#define area(r) 3.14*r*r
int main(){
    int r;
    float a;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    a = area(r);
    printf("Area of circle: %.2f\n", a);
    return 0; 
}