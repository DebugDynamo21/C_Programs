/* While purchasing certain items, a discount of 10% is offered
if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a
program to calculate the total expenses. */

#include <stdio.h>
int main(){
    int quantiy;
    double ppi, expenses;  //ppi- Price per item

    //Input price item and quantiy
    printf("Enter the quantity of items: ");
    scanf("%d",   & quantiy);

    printf("Enter price per item: ");
    scanf("%lf", & ppi);
    
    //Calculate the expenses
    expenses = quantiy * ppi;
    //Apply discount idf quantity is more than 1000.
    if(quantiy > 1000){
        expenses *= 0.9;    //Applying 10% discount
    }

    //Output total expenses
    printf("Total expenses: %.2lf\n", expenses);
    return 0; 
}