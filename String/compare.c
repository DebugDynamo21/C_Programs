//Write a program to compare two strings.
#include <stdio.h>
#include <string.h>
int main(){
    char s1[50], s2[50];
    int i = 0,len1 = 0,len2 = 0, same = 0;
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    len1 = strlen(s1) - 1;
    len2 = strlen(s2) - 1;
    if(len1 == len2){
        while(i < len1){
            if(s1[i] == s2[i])
                i++;
            else 
                break;
        }
            if(i == len1){
                same = 1;
                printf("\nThe two strings are equal\n");
            }
        }
        if(len1 != len2)
            printf("The two strings are not equal\n");
            if(same == 0){
                if(s1[i] > s2[i])
                    printf("String1 is greater than String2\n");
                else if(s1[i] < s2[i])
                    printf("String2 is greter than String1\n");
            }
    return 0;
}