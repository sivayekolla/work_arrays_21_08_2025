/*
 Swap two numbers using bitwise operator
 Question: Write a C program to swap two numbers using bitwise XOR operator 
 without using a temporary variable.

 Sample data: 
 Input: a=5, b=9
 Expected output: After swapping: a=9, b=5
*/

#include<stdio.h>

int main()
{
    int a, b;
    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);   // read two integers

    // Step 1: a becomes (a ^ b)
    a = a ^ b;

    //b becomes (b ^ a) = b ^ (a ^ b) = original a
    b = b ^ a;

    //a becomes (a ^ b)=(a ^ b)^original a = original b
    a = a ^ b;

    printf("the swapped numbers are: %d %d\n", a, b);

    return 0;
}
