//Write a c program to concatenate given two string without using library functions.

#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[50];
    int i = 0, len;
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);
    len = strlen(s1);
    while(s1[i] != '\0'){
        s1[len + i] = s2[i];
        i++;
    }
    s1[len + i] = '\0';
    printf("Concatenated string s1: %s\n", s1);
    return 0; 
}