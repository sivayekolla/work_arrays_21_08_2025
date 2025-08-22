/*
 Count leading zeros in a 32-bit number
 Example: Input = 16 (binary 000...00010000)
 Expected output = 27
*/

#include<stdio.h>
int main()
{
    int a, b = 0;
    printf("enter a number:\n");
    scanf("%d", &a);

    //if number is 0, all 32 bits are zeros
    if (a == 0)
    {
        printf("number of leading zeros: 32\n");
        return 0;
    }

    // check from downwards
    for (int i = 31; i >= 0; i--)
    {
        if (((a >> i) & 1) == 0)
            b++;
        else
            break;
    }

    printf("number of leading zeros: %d\n", b);
}
