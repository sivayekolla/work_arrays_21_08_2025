#include<stdio.h>
int main()
{
    int a, b, count = 0;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);

    int x = a ^ b;  // XOR gives 1 for differing bits

    // count set bits in x
    while(x)
    {
        count += x & 1;
        x >>= 1;
    }

    printf("%d\n", count);
}
