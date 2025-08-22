#include<stdio.h>
int main()
{
    int a;
    printf("enter a value:\n");
    scanf("%d", &a);

    // invert all even-positioned bits
    for(int i = 31; i >= 0; i--)
    {
        if(i % 2 == 0)
        {
            a ^= (1 << i);  // XOR flips the bit
        }
    }

    // print binary representation
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (a >> i) & 1);
    }
}
