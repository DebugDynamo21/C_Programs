//To copy values in structure.

#include <stdio.h>
struct Book{
    int page;
    char name[20];
    float price;
};
int main(){
    struct Book B1 = {200,"Modern Physics",100.50};
    struct Book B2;

    B2.page = B1.page;      //Pages in B1 will be copied to B2.

    printf("Book1 details: \n");
    printf("Number of pages: %d\n",B1.page);
    printf("Booke Name: %s\n", B1.name);
    printf("Price: %.2f\n", B1.price);

    printf("\nNumber of pages in Book2: %d\n",B2.page);

    printf("Enter price of Book2: ");
    scanf("%f", &B2.price);
    
    printf("Enter Book2 Name: ");
    scanf("%s", & B2.name);
    return 0;
}