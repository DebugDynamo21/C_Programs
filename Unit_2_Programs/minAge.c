/* If the ages of Ram, Shyam, and Ajay are input through the
keyboard, write a program to determine the youngest of the
three. */

#include <stdio.h>
int main(){
    int ram, shyam, ajay;
    
    //Input age of Ram, Shyam & Ajay
    printf("Enter the age of Ram, Shyam & Ajay ");
    scanf("%d%d%d", &ram, &shyam, &ajay);

    //Find the youngest of them
    if(ram < shyam){
        if(ram < ajay){
            printf("Ram is youngest\n");
        }else{
            printf("Ajay is youngest\n");
        }
    }else if(shyam < ajay){
            printf("Shyam is youngest\n");
        }else{
            printf("Ajay is youngest\n");
        }
    return 0; 
}