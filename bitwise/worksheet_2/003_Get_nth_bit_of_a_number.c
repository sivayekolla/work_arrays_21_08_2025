#include<stdio.h>
int main()
{
     int a, b;
     printf("enter value and bit position to check:\n");
     scanf("%d %d", &a, &b);

     // shift the number 'a' right by (b-1) places
     // then "& 1" checks whether that bit is 1 or 0.
     if ((a >> (b - 1)) & 1)
     {
          // if condition is true → that bit is 1
          printf("bit at position %d of %d is 1\n", b, a);
     }
     else
     {
          // otherwise that bit is 0
          printf("bit at position %d of %d is 0\n", b, a);
     }
}
