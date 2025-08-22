#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100], ch;
    // ask the user to enter a string
    puts("enter string :");
    fgets(arr, 100, stdin);   // read string including spaces
    // remove newline character added by fgets
    arr[strcspn(arr, "\n")] = '\0';
    // ask user for the character to search
    puts("enter character to find last position :");
    scanf("%c", &ch);
    getchar(); // clear newline left in input buffer
    char *ptr = arr;  // pointer to traverse the string
    int a = -1, b;    // 'a' counts index, 'b' stores last found position
    // traverse through each character in string
    while (*ptr != '\0')
    {
        a++;                 // move index forward
        if (*ptr == ch)      // if current char matches search char
        {
            b = a;           // update last found index
        }
        ptr++;               // move pointer to next character
    }
    // Print the last position
    printf("%d", b);
    return 0;
}
