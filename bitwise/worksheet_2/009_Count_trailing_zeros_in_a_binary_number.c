/*
 Count trailing zeros in a binary number
 Example: Input = 40 (binary 101000)
 Expected output = 3
*/

#include<stdio.h>
int main()
{
     int a, b = 0;  
     // a = input number
     // b = count of trailing zeros

     printf("enter a number:\n");
     scanf("%d", &a);

     // Special case: if number is 0, it has 32 trailing zeros in 32-bit representation
     if(a == 0) 
     {
          printf("trailing zeros: 32\n");
          return 0;
     }

     // count zeros until we hit the first '1'
     for(int i = 0; i < 32; i++)
     {
          if(((a >> i) & 1) == 0)
               b++;
          else
               break;
     }

     printf("number of trailing zeros: %d\n", b);
}
