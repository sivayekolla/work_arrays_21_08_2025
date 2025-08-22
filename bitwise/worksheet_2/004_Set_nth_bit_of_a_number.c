#include<stdio.h>
int main()
{
     int a, b;
     printf("enter value and bit position to set:\n");
     scanf("%d %d", &a, &b);

     // or operation turns that bit on in 'a'
     a = a | (1 << b);

     // print the binary representation of 'a'
     for (int i = 31; i >= 0; i--)
     {
          printf("%d", (a >> i) & 1);
     }
}
