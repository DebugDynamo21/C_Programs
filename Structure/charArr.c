// To declare a charater array.

#include <stdio.h>
struct Book{
    int page;
    char name[20];
    float price;
};
int main(){
    struct Book B1 = {200,"Modern Physics",100.50};
    struct Book B2 = {250,"Nuclear Chemistry",130.99};
    printf("%d\n%s\n%.2f\n", B1.page,B1.name,B1.price);
    printf("\n");
    printf("%d\n%s\n%.2f\n", B2.page,B2.name,B2.price);
    return 0; 
}