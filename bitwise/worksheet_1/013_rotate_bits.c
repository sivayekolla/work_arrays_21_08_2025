#include<stdio.h>
int main()
{
     int a;
     int b;
    printf("enter a number and number of rotations:\n");
    scanf("%u %d", &a, &b);

    // right rotate b times
    a = (a >> b) | (a << (32 - b));

    // print binary
    for(int i = 31; i >= 0; i--)
        printf("%d", (a >> i) & 1);

    printf("\n");
}
