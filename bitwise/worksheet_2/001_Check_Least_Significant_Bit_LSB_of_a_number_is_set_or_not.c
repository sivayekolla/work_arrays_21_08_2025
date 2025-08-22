/*
Check Least Significant Bit (LSB) of a number is set or not
Question: Write a C program to check if the Least Significant Bit (LSB) 
of a number is set (1) or not.

Sample data: 
Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)
*/

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);

    // (a >> 0) & 1 → shifts number by 0
    // then AND with 1 extracts only the LSB.
    if ((a >> 0) & 1)
    {
        printf("LSB of %d is set (1)\n", a);
    }
    else
    {
        printf("LSB of %d is not set (0)\n", a);
    }

 }
