#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100]; 
    int count = 0;
    // ask user for input string
    puts("enter string :");
    fgets(arr, 100, stdin);// read string
    // remove newline character added by fgets
    arr[strcspn(arr, "\n")] = '\0';
    char *awm = arr;   
    // pointer to start of string
    //remove leading space if it exists
    if (*awm == ' ')
    {
        // memmove handles overlapping memory safely
        memmove(awm, awm + 1, strlen(arr));
    }
    //remove trailing space if it exists
    int len = strlen(arr);    // current length of string
    if (arr[len - 1] == ' ')
    {
        arr[len - 1] = '\0';  // cut the last space
    }
    // Print the modified string
    printf("%s", arr);
    return 0;
}
