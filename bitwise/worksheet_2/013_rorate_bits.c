#include<stdio.h>
int main()
{
    int a, b;
    printf("enter an integer and number of rotations:\n");
    scanf("%d %d", &a, &b);
    // Perform b right rotations
    for(int i = 0; i < b; i++)
    {
        // Extract least significant bit
        int lsb = a & 1;
        // Shift right by 1
        a = a >> 1;
        // If LSB was 1, set MSB
        if(lsb == 1)
        {
          a |= (1 << 31);
        }
        else
        {
          a &= ~(1 << 31); 
        }
    }

    // Print final rotated binary
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
}

