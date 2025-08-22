#include<stdio.h>
int main()
{
    int num; // number in which we will manipulate bits
    printf("enter the value\n");
    scanf("%d",&num);
    int pos; // bit position (0-based index)
    printf("enter the pos\n");
    scanf("%d",&pos);
    // (1 << pos) creates a mask with 1 at 'pos'
    printf("set pos (OR) : %d\n", num |= (1 << pos));
    // ~(1 << pos) creates mask with all 1s except 0 at 'pos'
    printf("clear pos (AND): %d\n", num &= ~(1 << pos));
    // toggle bit at 'pos' (using XOR)
    printf("toggle (XOR): %d\n", num ^= (1 << pos));
}
