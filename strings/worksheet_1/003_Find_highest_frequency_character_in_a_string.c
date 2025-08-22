#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100], ch, fnd;
     puts("enter string :\n");
     fgets(arr, 100, stdin);
     // remove the newline character added by fgets
     arr[strcspn(arr, "\n")] = '\0';
     int p = strlen(arr);
     int max = -1;   // to keep track of maximum frequency
     // check frequency for each character in the string
     for (int i = 0; i < p; i++)
     {
          char *ptr = arr;
          int count = 0;
          ch = arr[i];   // current character to check

          // count how many times 'ch' appears
          while (*ptr != '\0')
          {
               if (*ptr == ch)
               {
                    count++;
               }
               ptr++;
          }

          // update max frequency and character if needed
          if (count > max)
          {
               max = count;
               fnd = ch;
          }
     }

     // display result
     printf("'%c' appears %d times\n", fnd, max);
}
