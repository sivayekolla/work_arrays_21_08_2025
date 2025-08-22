/*
 Get highest set bit of a number
 Question: Write a C program to find the position of the highest set bit in a number.
 Sample data: Input: 18 (binary 10010)
 Expected output: Highest set bit of 18 is at position 4 (zero-based)
*/

#include<stdio.h>
int main()
{
     int a, b = 0;  
     // 'a' will hold the input number
     // 'b' will store the highest set bit position found

     printf("enter a number:\n");
     scanf("%d", &a);

     // loop through all 32 bits
     for(int i = 0; i < 32; i++)
     {
          // right shift 'a' by i
          if((a >> i) & 1)
          {
               //  the bit is 1, update 'b' to this position
               b = i;
          }
     }

     // Print the highest set bit position
     printf("highest set bit of %d is at position %d\n", a, b);
}
