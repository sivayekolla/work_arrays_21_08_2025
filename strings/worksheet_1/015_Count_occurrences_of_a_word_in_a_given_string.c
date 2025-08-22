#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], ch[20];
    puts("enter string:");
    fgets(arr, 100, stdin);
    puts("enter substring:");
    fgets(ch, 20, stdin);
    // remove newline characters
    arr[strcspn(arr, "\n")] = '\0';
    ch[strcspn(ch, "\n")] = '\0';
    char *ptr = arr;
    int count = 0;
    int b = strlen(ch);
    // loop to find all occurrences
    while ((ptr = strstr(ptr, ch)) != NULL)  
    {
        count++;
        ptr = ptr + b;   // move pointer ahead by length of substring
    }
    printf("%d : times the substring appeared\n", count);
}

