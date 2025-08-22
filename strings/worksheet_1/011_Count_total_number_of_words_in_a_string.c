#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100]; 
     int count = 0;   // word counter
     puts("enter string :");
     fgets(arr, 100, stdin);   // read full line with spaces
     arr[strcspn(arr, "\n")] = '\0'; // remove trailing newline
     char *awm = arr;   // pointer to traverse the string
     // loop through each character
     while(*awm != '\0')
     {
          // if current char is not space
          //marks end of a word
          if(*awm != ' ' && *(awm+1) == ' ')
          {
               count++;
          }
          awm++;  // move pointer to next character
     }
     printf("%d", count);
}
