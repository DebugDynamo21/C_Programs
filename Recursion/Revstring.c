// Write a program to reverse a string using recursion

#include <stdio.h>
#include <string.h>

void revstr(char*, int, int);
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n'){
        str[len - 1] = '\0';
    }
    revstr(str, 0, strlen(str) - 1);
    printf("Reversed string is: %s\n", str);
    return 0;
}
void revstr(char *str, int start, int end){
    if(start >= end){
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    revstr(str, start + 1, end - 1);
}