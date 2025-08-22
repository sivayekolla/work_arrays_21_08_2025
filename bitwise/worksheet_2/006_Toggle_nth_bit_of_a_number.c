#include<stdio.h>
int main()
{
     int a, b;
     printf("enter value and bit position to toggle:\n");
     scanf("%d %d", &a, &b);
     // - if the bit was 1 → becomes 0
     // - if the bit was 0 → becomes 1
     a = a ^ (1 << b);
     // Print the 32-bit binary representation after toggling
     for (int i = 31; i >= 0; i--)
     {
          printf("%d", (a >> i) & 1);
     }
}
