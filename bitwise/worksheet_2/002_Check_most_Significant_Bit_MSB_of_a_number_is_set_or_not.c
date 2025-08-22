#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);

     // Here we right shift the number by 7 bits.
     // Then "& 1" checks if that bit is 1 or 0.
     if((a >> 7) & 1)
     {
          // If true, it means the 8th bit (from right) is set.
          printf("bit of %d is set\n", a);
     }
     else
     {}
}