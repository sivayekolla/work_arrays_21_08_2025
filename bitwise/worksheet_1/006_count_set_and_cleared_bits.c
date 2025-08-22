#include<stdio.h>

int main()
{
     int s;
     printf("enter the value to find count of set and cleared bits:\n");
     scanf("%d", &s);

     int count0 = 0, count1 = 0; // initialize counters

     // loop through all 32 bits
     for(int i = 0; i < 32; i++)
     {
          if((s >> i) & 1)   // check if i-th bit is set
          {
               count1++;
          }
          else                // if not set, it's a cleared bit
          {
               count0++;
          }
     }

     // rint the counts
     printf("number of 0s: %d\nNumber of 1s: %d\n", count0, count1);

     return 0;
}
