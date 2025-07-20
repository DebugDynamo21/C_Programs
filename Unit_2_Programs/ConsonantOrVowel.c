/* WAP to check whether the alphabet is a vowel or consonant. */

#include <stdio.h>
int main(){
    char ch;

    //Input an alphabet
    printf("Enter a alphabet: ");
    scanf("%c", & ch);
    
    //Check whether the alphabet entered by user is a vowel or consonant.
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("%c is vowel.\n", ch);
       }else{
        printf("%c is a consonant.\n", ch);
       }
    return 0; 
}