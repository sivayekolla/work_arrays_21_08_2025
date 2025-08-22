#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string:\n");
    fgets(str, 100, stdin);

    // remove the trailing newline character from fgets
    str[strcspn(str, "\n")] = '\0'; 

    int len = strlen(str);

    // outer loop goes through each character
    for (int i = 0; i < len; i++) {
        // inner loop compares str[i] with the rest of the characters
        for (int j = i + 1; str[j] != '\0'; ) {
            
            if (str[i] == str[j]) {
                // if a duplicate is found, shift all chars left
                for (int k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                // length reduced after removing a character
                len--;  
                // don't increment j here, because a new char has shifted into str[j]
            } 
            else {
                j++;  // only move to next char if no deletion
            }
        }
    }

    // final string with duplicates removed
    printf("result: %s\n", str);
}
