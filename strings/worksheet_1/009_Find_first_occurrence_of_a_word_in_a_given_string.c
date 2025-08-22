#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch[20];   // arr = main string, ch = substring

     puts("enter string :");
     fgets(arr, 100, stdin);               // read input string
     arr[strcspn(arr, "\n")] = '\0';       // remove trailing newline

     puts("enter sub string :");
     fgets(ch, 20, stdin);                 // read substring
     ch[strcspn(ch, "\n")] = '\0';         // remove trailing newline

     // strstr returns pointer to first occurrence of substring
     char *awm = strstr(arr, ch);

     // find index: subtract base address of arr from position pointer
     int p = awm - arr;

     // print position
     printf("%d", (p + 1));
}
