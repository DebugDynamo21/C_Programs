//User defined approach to find length of string without string function.

#include <stdio.h>
#include <string.h>
int main(){
    char s[20];
    int i;
    printf("Enter a string: ");
    gets(s);
    puts(s);
    while(s[i] != '\0')
        i++;
    printf("The Length of string is: %d\n",i);
    return 0; 
}