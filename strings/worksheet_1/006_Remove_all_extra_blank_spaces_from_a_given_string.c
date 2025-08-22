#include<stdio.h>
#include<string.h>
int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");

     // Input string
     fgets(arr, 100, stdin);

     // Remove newline from fgets
     arr[strcspn(arr, "\n")] = '\0';

     char *str = arr;
     int p = strlen(arr);

     //Remove multiple spaces between words
     while (*str != '\0')
     {
          // If two consecutive spaces are found
          if (*str == ' ' && *(str + 1) == ' ')
          {
               // Shift the string left by 1 character
               memmove(str, str + 1, p);
          }
          else
          {
               str++;  // otherwise move ahead
          }
          // Update length after modification
          p = strlen(arr);
     }

     // Reset pointer to start
     str = arr;

     // Remove leading spaces 
     while (*str == ' ')
     {
         // Shift left until first char is not space
         memmove(str, str + 1, strlen(arr));
     }

     int len = strlen(arr);

     //Final Output
     printf("output:\n%s\n", arr);
}
