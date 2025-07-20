#include <stdio.h>
void leapyear(int);
int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d",& y);
    leapyear(y);
     return 0; 
}
void leapyear(int n){
    if(n%100==0 && n%400==0 || n%100!=100 && n%4==0){
        printf("Leap year.\n");
    }else{
        printf("Not leap year.\n");
    }
}