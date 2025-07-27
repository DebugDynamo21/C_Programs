//Write a program to concatenate two string using recursion.

#include <stdio.h>
#include <string.h>

void concatstr(char *, const char *, int index);
int main(){
    char str1[200], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    size_t len1 = strlen(str1);

    if(len1 > 0 && str1[len1 - 1] == '\n'){
        str1[len1 - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    size_t len2 = strlen(str2);

    if(len2 > 0 && strlen(str2) == '\n'){
        str2[len2 - 1] = '\0';
    }
    concatstr(str1, str2, 0);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
void concatstr(char *str1, const char *str2, int index){
    
    if(str2[index] == '\0'){
        str1[strlen(str1)] = '\0';
        return;
    }
    str1[strlen(str1)] = str2[index];
    concatstr(str1, str2, index + 1);
}