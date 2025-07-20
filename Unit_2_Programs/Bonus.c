/* The current year and the year in which the employee joined
the organization are entered through the keyboard. If the
number of years for which the employee has served the
organization is greater than 3 then a bonus of Rs. 2500/- is
given to the employee. If the years of service are not
greater than 3, then the program should do nothing. */

#include <stdio.h>
int main(){
    int current_year, joining_year, diff, bonus;
    
    //Input current year and joining year
    printf("Enter the current year: ");
    scanf("%d", &current_year);

    printf("Enter joining year: ");
    scanf("%d", & joining_year);

    //Calculate number of years empolyee served
    diff = (current_year - joining_year);
    if(diff > 3)
        bonus = 2500;
    
    printf("Bonus:%d\n", bonus);
    return 0; 
}