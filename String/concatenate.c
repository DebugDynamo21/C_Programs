//Write a c program to concatenate given two string using library functions.

#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[50];
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);
    strcat(s1,s2);
    printf("Concatenated string s1: %s\n", s1);
    return 0;
}
