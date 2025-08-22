#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);

     // mask for lowest 8 bits 
     int b = 0xFF;

     //flips only the lowest 8 bits of 'a'
     a = a ^ b;

     // print result in binary (only 8 bits)
     for(int i = 7; i >= 0; i--)
     {
     // AND with 1 to extract each bit
          printf("%d", (a >> i) & 1);
     }
}
