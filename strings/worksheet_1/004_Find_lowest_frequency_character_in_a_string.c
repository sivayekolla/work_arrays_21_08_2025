#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], ch, fnd;

    // Take input string from user
    fgets(arr, 100, stdin);

    // Remove newline character from fgets
    arr[strcspn(arr, "\n")] = '\0';

    int p = strlen(arr);  // length of string

    int min = 0;          // to hold frequency count
    for (int i = 0; i < p; i++)
    {
        char *ptr = arr;  // pointer to scan string
        int count = 0;    // reset count for each new char
        ch = arr[i];      // current character

        // loop through the string and count 
        while (*ptr != '\0')
        {
            if (*ptr == ch)
            {
                count++;
            }
            ptr++;
        }

        // if character found at least once
        // store count and print frequency
        if (count >= 1)
        {
            min = count;
            fnd = ch;
            printf("'%c' appears %d times\n", fnd, min);
        }
    }
}
