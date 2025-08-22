#include<stdio.h>
int main()
{
    int a;
    // Input a 32-bit integer
    scanf("%d",&a);

    // Print the original binary representation
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", ((a >> i) & 1));
    }
    printf("\n");

    int j = 0;  // j will run from 0 to 15

    // Loop i from 31 to 16
    for(int i = 31; i >= 16; i--, j++)
    {
        //upper half at position i
        int b = ((a >> i) & 1);

        //lower half at position j
        int c = ((a >> j) & 1);

        // lower half at position j
        if(b == 1)
        {
            a |= (1 << j);     // set bit j
        }
        else
        {
            a &= ~(1 << j);    // clear bit j
        }

        //upper half at position i
        if(c == 1)
        {
            a |= (1 << i);     // set bit i
        }
        else
        {
            a &= ~(1 << i);    // clear bit i
        }
    }

    // print the modified binary representation 
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", ((a >> i) & 1));
    }
    printf("\n");
}
