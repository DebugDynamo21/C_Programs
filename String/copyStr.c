// Write a c program to copy sring (user defined program).

#include<stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[20];
    int i = 0;
    printf("Enter string 1: ");
    gets(s1);
    puts(s1);
    while(s1[i]!='\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("String 2: ");
    puts(s2);
    return 0;
}