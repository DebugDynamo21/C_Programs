/* Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not. */

#include <stdio.h>
int main(){
    int year;

    //Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    //Check whether the year is leap year or not
    if((year % 4 == 0 && year % 100) == 0 || (year % 400 == 0)){
        printf("%d is a leap year.\n", year);
    }else{
        printf("%d is not a leap year.\n", year);
    }
    return 0; 
}