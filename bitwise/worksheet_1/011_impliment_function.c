#include<stdio.h>
int setbits(int num, int n, int pos)
{
    for(int i = 0; i < n; i++)
    {
        // shift 1 to the correct bit position (pos + i) and OR it with num
        // this sets the bit at that position to 1
        num = num | (1 << (pos + i));
    }
    return num;  
}

int main()
{
    int num, n, pos;

    // prompt user to enter the number, 
    //number of bits to set, and starting position
    printf("enter number, number of bits to set, and starting position:\n");
    scanf("%d %d %d", &num, &n, &pos);

    // call the function to set bits
    int result = setbits(num, n, pos);

    // print the result after setting the bits
    printf("result after setting bits: %d\n", result);

    return 0;
}
