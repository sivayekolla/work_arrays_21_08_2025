#include<stdio.h>

// function to check if LSB is set
void check_lsb(int a)
{
     if(a % 2) // if number is odd, LSB is 1
     {
          printf("%d : LSB is set\n", a);
     }
     else      // if number is even, LSB is 0
     {
          printf("%d : LSB is clear\n", a);
     }
}

// function to check if MSB is set
void check_msb(int a)
{
     if((a >> 31) & 1) // shift right 31 bits and AND with 1
     {
          printf("%d : MSB is set\n", a);
     }
     else
     {
          printf("%d : MSB is clear\n", a);
     }
}

// function to check if a bit at specific position is set
void check_at_position(int a, int b)
{
     if((a >> b) & 1)  // shift right b bits and AND with 1
     {
          printf("%d : bit at position %d is set\n", a, b);
     }
     else
     {
          printf("%d : bit at position %d is clear\n", a, b);
     }
}

int main()
{
     int a, b;

     // input number and the bit position to check
     printf("enter number and bit position to check:\n");
     scanf("%d %d", &a, &b);

     check_lsb(a);           // check LSB
     check_msb(a);           // check MSB
     check_at_position(a, b);// check bit at specific position

     return 0;
}
