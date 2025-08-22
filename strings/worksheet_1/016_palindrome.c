#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    puts("enter a string:");
    fgets(a, sizeof(a), stdin);
    // Remove newline if present
    a[strcspn(a, "\n")] = '\0';
    char *p, *q;
    p = a;
    q = a + strlen(a) - 1;
    int w = strlen(a) / 2;
    int count = 0;
    for (int i = 0; i < w; i++)
    {
        if (*p == *q)
        {
            count++;
        }
        else
        {
            break; // no need to continue if mismatch found
        }
        p++;
        q--;
    }
    if (count == w)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }
    return 0;
}
