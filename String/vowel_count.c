//WAP to find the frequency of vowels in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[50];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    printf("The string is: %s\n", s);
    for(int j = 0; s[j] != '\0'; j++){
        char ch = tolower(s[j]);
        
        switch(ch){
            case 'a' : a++;
                break;
            case 'e' : e++;
                break;
            case 'i' : i++;
                break;
            case 'o' : o++;
                break;
            case 'u' : u++;
                break;
        }
    }
    printf("Vowel frequencies: \n");
    printf("%d\n%d\n%d\n%d\n%d\n", a, e, i, o, u);
    return 0;
}