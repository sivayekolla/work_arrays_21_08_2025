#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], ch;
    // input string
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    // input character
    scanf("%c", &ch);
    char *ptr = arr;
    int index = 0, found = -1;
    // traverse string
    while (*ptr != '\0')
    {
        if (*ptr == ch)
        {
            found = index;  // store first position
            break;
        }
        ptr++;
        index++;
    }
    if (found == -1)
        printf("character not found\n");
    else
        printf("first occurrence at index: %d\n", found);
    return 0;
}
