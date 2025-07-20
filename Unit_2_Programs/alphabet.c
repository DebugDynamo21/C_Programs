/* WAP to input a character from the user and check
whether the given char is an alphabet or not. */

#include <stdio.h>
int main(){
    char ch;
    
    //Input a character
    printf("Enter a character: ");
    scanf("%c", & ch);
    
    //Logic to check whether the character is alphabet or not
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        printf("%c is alphabet.\n", ch);
    }else{
        printf("%c is not an alphabet.\n", ch);
    }
    return 0; 
}