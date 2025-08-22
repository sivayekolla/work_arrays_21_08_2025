#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);

     // invert all odd-positioned bits
     for(int i=31;i>=0;i--)
     {
          if(i % 2 == 1)
          {
               a ^= (1 << i); 
          // XOR with 1 at position i to invert
          }
     }

     // print the result in binary
     for(int i=31;i>=0;i--)
     {
          printf("%d", (a >> i) & 1);
     }
}

