// Write a program to find the product of two number taken input from the keyboard.

#include <stdio.h>
int main(){
    int a, b, product;      //initilize two integers and a product variable
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);  //input two number rom the user
    product = a * b;        //process product
    printf("The product of a an b is: %d\n", product);    //print the product of a and b
    return 0; 
}