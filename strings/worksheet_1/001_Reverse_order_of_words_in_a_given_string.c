#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    // take input string from user
    printf("Enter string: ");
    fgets(arr, 100, stdin);
    
    // remove trailing newline 
    arr[strcspn(arr, "\n")] = '\0';

    int a = strlen(arr);

    // reverse the entire string first
    char *st = arr;
    char *en = arr + a - 1;
    for (int i = 0; i < (a / 2); i++) 
    {
        char temp = *st;
        *st = *en;
        *en = temp;
        st++;
        en--;
    }

    // now reverse each word individually to restore word order
    st = arr;
    for (int i = 0; i <= a; i++) 
    {
        if (arr[i] == ' ' || arr[i] == '\0') 
        {
            en = arr + i - 1;
            char *word = st;

            while (word < en)   // reverse current word
            {
                char temp = *word;
                *word = *en;
                *en = temp;
                word++;
                en--;
            }
            st = arr + i + 1;  // move start to next word
        }
    }

    // final string has words reversed in order
    printf("reversed word order: %s\n", arr);
}
