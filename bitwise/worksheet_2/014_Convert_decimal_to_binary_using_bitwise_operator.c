#include<stdio.h>   // standard input-output header

int main()
{
    int a, b;  
    printf("enter an integer and number of rotations:\n");
    scanf("%d %d", &a, &b);

    //right-rotation 'b' times
    for(int i = 0; i < b; i++)
    {
        //save the least significant bit
        int lsb = a & 1;

        //shift the number one bit to the right
        a = a >> 1;

        //if that saved LSB was 1
        if(lsb == 1)
        {
            a |= (1 << 31);  // set MSB to 1
        }
        else
        {
            a &= ~(1 << 31); // clear MSB
        }
    }

    // Finally, print the rotated number
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (a >> i) & 1); // extract each bit 
    }
    printf("\n");  // new line after printing
}
