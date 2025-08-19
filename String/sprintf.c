// sprintf - it is used to copy string 
//str(target string, source string)
#include <stdio.h>
#include <string.h>
int main(){
    char s1[]="Hello World";
    char s2[20];
    printf("The string s1: ");
    puts(s1);
    sprintf(s2,s1);
    printf("The string s2: ");
    puts(s2);
    return 0;
}