// * * * FUNCTIONS * * *

#include <stdio.h>
void drawline();
int main(){
    drawline();
    printf("\nHello\n");
    drawline();
    printf("\nCSE\n");
    drawline();
    return 0; 
}
void drawline(){
   int i;
   for(i = 0; i<5; i++){
    printf("*");
   }
}