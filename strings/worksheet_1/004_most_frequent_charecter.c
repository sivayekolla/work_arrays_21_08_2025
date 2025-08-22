#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], ch, fnd;
    puts("enter string :\n");

    // input string from user
    fgets(arr, 100, stdin);

    // remove the trailing newline that fgets() stores
    arr[strcspn(arr, "\n")] = '\0';

    int p = strlen(arr);  // length of string
    int max = -1;         // keep track of highest frequency found

    // loop through every character in the string
    for (int i = 0; i < p; i++)
    {
        char *ptr = arr;   // pointer to traverse string
        int count = 0;     // frequency counter for current character
        ch = arr[i];       // pick one character
        while (*ptr != '\0')
        {
            if (*ptr == ch)
            {
                count++;
            }
            ptr++;
        }
        // update max frequency and store character if higher found
        if (count > max)
        {
            max = count;
            fnd = ch;
        }
    }

    // print only the most frequent character
    printf("most frequent character: '%c' (appears %d times)\n", fnd, max);
}
