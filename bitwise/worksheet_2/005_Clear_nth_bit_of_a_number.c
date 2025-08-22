#include<stdio.h>
int main()
{
     int a, b;
     printf("Enter value and bit position to clear:\n");
     scanf("%d %d", &a, &b);

     // and operation with 'a' forces that bit to 0, leaves others unchanged.
     a = a & ~(1 << (b - 1));

     // print 32-bit binary representation of the new value
     for (int i = 31; i >= 0; i--)
     {
          // (a >> i) shifts the i-th bit
          printf("%d", (a >> i) & 1);
     }
}
