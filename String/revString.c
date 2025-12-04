//To reverse a sting we use strrev() function.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse a string in place
// Returns a pointer to the reversed string
char* strrev(char* str) {
    if (str == NULL) return NULL;

    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (end > start) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }

    return str;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0; // Remove newline character
    
    if (strlen(str) == 0) {
        printf("Empty string provided.\n");
        return 1;
    }
    printf("Original string: %s\n", str);
    strrev(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}