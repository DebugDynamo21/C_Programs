// Write  program o check whether the string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i = 0, t = 0, len;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);  // Safer alternative to gets()
    s[strcspn(s, "\n")] = '\0';  // Remove newline character if present

    printf("\nThe string is: %s", s);

    len = strlen(s) - 1;  // Get the length of the string
    int l = len;  // Initialize the backward pointer

    while (s[i] != '\0') {
        if (s[i] != s[l]) {
            t = 1;  // If mismatch is found, set t = 1
            break;
        }
        i++;
        l--;
    }

    if (t == 0)
        printf("\nPalindrome\n");
    else
        printf("\nNot Palindrome\n");

    return 0;
}
