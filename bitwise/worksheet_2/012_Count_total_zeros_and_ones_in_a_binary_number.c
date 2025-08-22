/*
Count total zeros and ones in a binary number
Question: Write a C program to count the total number of zeros and ones 
in the binary representation of a number.

Sample data: 
Input: 15 (binary 00001111)
Expected output: Number of ones: 4, Number of zeros: 4 (assuming 8-bit)
*/

#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);

     // counters for zeros and ones
     int count0 = 0, count1 = 0;

     // loop through 8 bits
     for(int i = 0; i < 8; i++)
     {
          // check if ith bit is set (1) or not (0)
          if((a >> i) & 1)
          {
               count1++;   // increment ones count
          }
          else
          {
               count0++;   // increment zeros count
          }
     }

     // print results
     printf("number of ones: %d\n", count1);
     printf("number of zeros: %d\n", count0);
}
