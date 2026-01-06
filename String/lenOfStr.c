/* To get the length of String. */

#include <stdio.h>
#include <string.h>
int main(){
    char s[20];
    int i;
    printf("Enter the string: ");
    gets(s);
    puts(s);
    i = strlen(s);
    printf("Length of string: %d\n", i);
    return 0; 
}
