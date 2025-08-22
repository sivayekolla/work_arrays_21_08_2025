/*
 Get lowest set bit of a number
 Question: Write a C program to find the position of the lowest set bit in a number.
 Sample data: Input: 18 (binary 10010)
 Expected output: Lowest set bit of 18 is at position 1 (zero-based)
*/
#include<stdio.h>
int main()
{
     int a, b = -1;  
     // 'a' = input number
     // 'b' = position of the lowest set bit 
     printf("enter a number:\n");
     scanf("%d", &a);
     for(int i = 0; i < 32; i++)
     {
          // Check if bit at position i is set
          if((a >> i) & 1)
          {
               b = i;   // store position
               break;   // stop at the first set bit 
          }
     }
     if(b != -1)
          printf("lowest set bit of %d is at position %d\n", a, b);
     else
          printf("%d has no set bits\n", a);
}
