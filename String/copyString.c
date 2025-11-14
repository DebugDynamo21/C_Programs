/* To copy one string to another.
 we use one library function i.e. strcpy() */

#include <stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[20];
    printf("Enter the String 1: ");
    gets(s1);
    puts(s1);
    strcpy(s2,s1);
    printf("String 2: ");
    puts(s2);
    return 0;
}