#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, ch1;
     //input string
     puts("enter string :");
     fgets(arr, 100, stdin);               
     arr[strcspn(arr, "\n")] = '\0';// remove newline character
     //input character to search
     puts("enter character to find first position :");
     scanf("%c", &ch);
     getchar(); 
     //input character to replace it with
     puts("enter character to replace it with :");
     scanf("%c", &ch1);
     char *ptr = arr;   // pointer to traverse string
     //traverse and replace
     while(*ptr != '\0')
     {
          if(*ptr == ch)   // found match
          {
               *ptr = ch1; // replace
               break;      // stop after first occurrence
          }
          ptr++;
     }

     //print modified string
     printf("%s", arr);
}
