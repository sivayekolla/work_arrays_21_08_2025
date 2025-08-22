#include<stdio.h>

int main()
{
     int a, count = 0;

     // input an integer from user
     printf("enter a value:\n");
     scanf("%d", &a);

     // loop through all 32 bits of the integer
     for(int i = 0; i < 32; i++)
     {
          // check if the i-th bit is set (1)
          if((a >> i) & 1)
          {
               count++;  // increment counter if bit is 1
          }
     }

     // print the total number of set bits
     printf("%d is the number of set bits in %d\n", count, a);

     return 0;
}
