#include <stdio.h>

int main()
{
    int a, count = 0;
    printf("enter a number:\n");
    scanf("%d", &a);

    // loop from the highest bit to the lowest
    for(int i = 31; i >= 0; i--)
    {
        if((a >> i) & 1)  // check if the i-th bit is set
        {
            count++;       // count this bit
            break;         // stop at the first set bit from the left
        }
        count++;           // count the zero bits before MSB
    }

    // calculate MSB position from right
    a = 32 - count;
    printf("%d\n", a + 1);  // print the position of MSB
}
