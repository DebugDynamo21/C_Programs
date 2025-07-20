/* If the cost price and selling price of an item are input
through the keyboard, write a program to determine
whether the seller has made a profit or incurred a loss.
Also, determine how much profit he made or loss he
incurred. */

#include <stdio.h>
int main(){
    double cp, sp, profit, loss;

    //Input cost price and selling price of the item.
    printf("Enter the cost price: ");
    scanf("%lf", & cp);

    printf("Enter the selling price: ");
    scanf("%lf", & sp);

    //Calculate whether the seller made a profit or loss
    if(sp > cp){
        profit = sp - cp;
        printf("Profit: %.2lf\n");
    }else{
        loss = cp - sp;
        printf("Loss: %.2lf\n");
    }
    return 0; 
}