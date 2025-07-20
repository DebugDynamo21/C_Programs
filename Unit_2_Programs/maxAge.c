/* If the ages of Ram, Shyam, and Ajay are input through the
keyboard, write a program to determine the eldest of the
three. */

#include <stdio.h>
int main(){
    int ram, shyam, ajay;
    
    //Input age of Ram, Shyam & Ajay
    printf("Enter the age of Ram, Shyam & Ajay: ");
    scanf("%d%d%d", & ram, & shyam, & ajay);

    //Find the eldest among them
    if(ram > shyam){
        if(ram > ajay){
            printf("Ram is eldest\n");
        }else{
            printf("Ajay is eldest\n");
        }
    }else if(shyam > ajay){
        printf("Shyam is eldest\n");
    }else{
        printf("Ajay is eldest\n");
    }
    return 0; 
}