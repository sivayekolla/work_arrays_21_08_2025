#include<stdio.h>

// Macros for bit manipulation
#define SETBIT(a,b) ((a) | (1<<(b)))      // Set bit b of a
#define CLEARBIT(a,b) ((a) & ~(1<<(b)))   // Clear bit b of a
#define TOGGLEBIT(a,b) ((a) ^ (1<<(b)))   // Toggle bit b of a

int main()
{
    int a, b;
    printf("enter value and bit position to operate on: ");
    scanf("%d %d", &a, &b);

    int c = SETBIT(a,b);      // Sets the b-th bit of a
    int d = CLEARBIT(a,b);    // Clears the b-th bit of a
    int e = TOGGLEBIT(a,b);   // Toggles the b-th bit of a

    printf("after setting bit: %d\n", c);
    printf("after clearing bit: %d\n", d);
    printf("after toggling bit: %d\n", e);

    return 0;
}
