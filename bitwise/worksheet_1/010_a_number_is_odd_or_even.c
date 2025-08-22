#include <stdio.h>

int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d", &a);

    // check the least significant bit 
    // the number is odd; if 0, it's even
    if(a & 1)
    {
        printf("%d is an odd number\n", a);
    }
    else
    {
        printf("%d is an even number\n", a);
    }
}
