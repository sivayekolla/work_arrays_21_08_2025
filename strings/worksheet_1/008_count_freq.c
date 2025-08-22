#include <stdio.h>
#include <string.h>
// function to check if character already exists in "dup" array
int check(char ch, char *dup, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (dup[i] == ch)
        {
            return 1;  // character already exists
        }
    }
    return 0;  // not found
}

// function to count frequency of characters
void count(char *str)
{
    int size = strlen(str), k = 0;
    char freq[256] = {0};     // frequency array for all ASCII chars
    char dup[256];            // to store unique characters already printed

    // count frequency of each character
    for (int i = 0; i < size; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    // print only once for each unique character
    for (int i = 0; i < size; i++)
    {
        if (check(str[i], dup, k)) // if already processed, skip
        {
            continue;
        }
        else
        {
            printf("%c = %d\n", str[i], freq[(unsigned char)str[i]]);
            dup[k++] = str[i];  // store this character as processed
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);   
    // reads single word Use fgets for sentences
    count(str);
}
