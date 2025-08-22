#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char arr[100];
     puts("enter string :");
     fgets(arr, 100, stdin);             // read input string
     arr[strcspn(arr, "\n")] = '\0';     // remove trailing newline
     char *amb = arr;   // pointer to traverse string
     while(*amb != '\0')  // loop until end of string
     {
          // if character is uppercase, convert to lowercase
          if(isupper(*amb))
          {
               *amb = tolower(*amb);
          }
          // if character is lowercase, convert to uppercase
          else if(islower(*amb))
          {
               *amb = toupper(*amb);
          }
          amb++;   // move to next character
     }
     printf("Output: %s\n", arr);
}
