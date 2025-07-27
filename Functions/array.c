//Passing an array to function.

#include <stdio.h>
void display(int []);
int main(){
    int a[10],i;
    printf("Enter the elements in array: ");
    for(i = 0; i<10; i++)
        scanf("%d", & a[i]);
    display (a);
    return 0; 
}
void display(int a[]){
    int i;
    printf("The elements in array: \n");
    for(i = 0; i<10; i++)
    printf("%d\t", a[i]);
printf("\n");
}