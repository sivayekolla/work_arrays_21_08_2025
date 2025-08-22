#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch;  

     //input string
     puts("enter string :");
     fgets(arr, 100, stdin);              
     arr[strcspn(arr, "\n")] = '\0';// remove newline at end
     //input character to remove
     puts("enter the character to remove in its last position:");
     scanf("%c", &ch);
     char *str = arr;     // pointer to traverse string
     char *ibm = NULL;    // pointer to store last occurrence
     //find the last occurrence of the character
     while(*str != '\0')
     {
          if(*str == ch)
          {
               ibm = str;   // update pointer whenever match found
          }
          str++;            // move to next character
     }

     //if character found, shift rest of string left by 1
     if(ibm != NULL)
     {
          memmove(ibm, ibm + 1, strlen(ibm));
     }

     //print result
     printf("output:\n%s\n", arr);
}
