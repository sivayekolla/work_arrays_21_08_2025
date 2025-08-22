#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], dmn[50];   // arr = main string, dmn = substring to remove
     puts("enter string :");
     fgets(arr, 100, stdin);   // read input string
     puts("enter sub string :");
     fgets(dmn, 50, stdin);    // read substring
     int e = strlen(dmn);      // length of substring
     // remove trailing newlines
     arr[strcspn(arr, "\n")] = '\0';
     dmn[strcspn(dmn, "\n")] = '\0';
     char *ump;   // pointer to found substring
     // search for substring in arr
     while ((ump = strstr(arr, dmn)) != NULL)
     {
          // shift memory left by substring length
          // overwrites the found substring
          memmove(ump, ump + e, strlen(ump + e) + 1);
     }
     // print modified string
     printf("output: %s\n", arr);
}

