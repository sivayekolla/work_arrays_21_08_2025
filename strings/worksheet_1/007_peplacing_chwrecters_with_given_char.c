#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, ch1;

     // ask user to enter a string
     puts("enter string :\n");
     fgets(arr, 100, stdin);

     // remove trailing newline added by fgets
     arr[strcspn(arr, "\n")] = '\0';

     // ask for the character to be replaced
     puts("enter character to be replaced :\n");
     scanf("%c", &ch);

     //consumes the leftover newline from scanf
     getchar();

     // ask for the replacement character
     puts("enter character to replace with :\n");
     scanf("%c", &ch1);
   
     // pointer to traverse the string
     char *ptr = arr;

     // traverse each character until end of string
     while (*ptr != '\0')
     {
          // if current char matches 'ch'
          if (*ptr == ch)
          {
               *ptr = ch1;
          }
          ptr++;   // move to next character
     }

     // print final modified string
     printf("%s", arr);
}
