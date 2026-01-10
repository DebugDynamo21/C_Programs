// MY WRITTEN PROGRAM OF CALCULATOR.

#include <stdio.h>
#include <stdlib.h>
int main(){
    while(1){
    int n;
    double a, b, addition, substraction, multiplication, division;
    printf("\t\t\t\t CALCULATOR \n");

    printf("1. ADDITION\n");
    printf("2. SUBSTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. Press 5 to exit\n");

    printf("Enter your choice (1-5) = ");
    scanf("%d", & n);
    
    if(n==5)
    break;
    
    switch(n){
        case 1:
        
        printf("\t\t\t\tADDITION\n");
        printf("Enter two numbers to be added = ");
        scanf("%lf %lf", & a, & b);
        addition = a + b;
        printf("RESULT : %.3lf\n", addition);
        break;

        case 2:
        
        printf("\t\t\t\tSUBSTRACTED\n");
        printf("Enter two numbers to be substracted = ");
        scanf("%lf %lf", & a, & b);
        substraction = a - b;
        printf("RESULT : %.3lf\n", substraction);
        break;

        case 3:
        
        printf("\t\t\t\tMULTIPLICATION\n");
        printf("Enter two numbers to be multiplied = ");
        scanf("%lf %lf", & a, & b);
        multiplication = a * b;
        printf("RESULT : %.3lf\n", multiplication);
        break;

        case 4:
        
        printf("\t\t\t\tDIVISION\n");
        printf("Enter two numbers to be divided = ");
        scanf("%lf %lf", & a, & b);
        division = a / b;
        printf("RESULT : %.3lf\n", division);
        break;

        default :
        printf("ERROR!!!\n");
        printf("Invalid choice. Choose a valid option.\n");
    }
   }
    printf("Thanks for Using.\n");
    return 0;
}