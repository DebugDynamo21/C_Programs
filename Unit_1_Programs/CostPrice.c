/* If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to find
the cost price of one item. */

#include <stdio.h>
int main(){
    double selling_price, profit, cost_price;

    //Input values
    printf("Enter the total selling price of 15 items: ");
    scanf("%lf", &selling_price);

    printf("Enter profit (in percentage): ");
    scanf("%lf", & profit);

    //Calculate cost price
    cost_price = (selling_price + profit) / 15;

    printf("Cost price of one item: %.2lf\n", cost_price);
    return 0; 
}