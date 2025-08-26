#include <stdio.h>
struct Book
{
    int page;
    char name[20];
    float price;
};

int main(){
    struct Book B1;
    printf("%lu\n",sizeof(B1));     //for size we use %lu format specifier to avoid warnings.
    return 0; 
}