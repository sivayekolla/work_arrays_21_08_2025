#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100], ch[20];
    // input the main string
    puts("enter string:");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
      // remove newline
    // input the substring
    puts("enter substring:");
    fgets(ch, 20, stdin);
    ch[strcspn(ch, "\n")] = '\0';
    // remove newline
    // find substring in main string
    char *pos = strstr(arr, ch); 
    // returns pointer to first occurrence
    if(pos != NULL)
    {
        int index = pos - arr;   // calculate position
        printf("substring found at position: %d\n", index + 1);
    }
    else
    {
        printf("substring not found\n");
    }
    return 0;
}
