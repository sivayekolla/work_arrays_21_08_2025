#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], ch;
    puts("enter string :\n");

    // Input string 
    fgets(arr, 100, stdin);

    // Remove newline
    arr[strcspn(arr, "\n")] = '\0';

    int a = strlen(arr);   // length of string

//one at start, one at end
    char *st = arr;
    char *en = arr + a - 1;

    // swap characters until middle of string is reached
    for (int i = 0; i < (a / 2); i++) 
    {
        char temp = *st;  // store start character
        *st = *en;        // copy end into start
        *en = temp;       // copy stored start into end
        st++;             // move start forward
        en--;             // move end backward
    }

    // Print the reversed string
    printf("output :\n");
    st = arr;              // reset pointer back to start
    while (*st != '\0')    // traverse until null character
    {
        printf("%c", *st);
        st++;
    }
}
