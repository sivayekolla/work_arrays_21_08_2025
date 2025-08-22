#include<stdio.h>
int main()
{
     int a, count = 0;
     // input a number from the user
     printf("enter a number:\n");
     scanf("%d", &a);
     // count the total number of set bits 
     for(int i = 0; i < 32; i++)
     {
          if((a >> i) & 1) // shift i-th bit to lsb and check if it's 1
          {
               count++;
          }
     }
     printf("%d is the count of set bits\n", count);
     // check if the 20th bit 
     if((a >> 20) & 1)
     {
          printf("the bit in 20th position is set\n");
     }
     else
     {
          printf("the bit in 20th position is clear\n");
     }
     return 0;
}
