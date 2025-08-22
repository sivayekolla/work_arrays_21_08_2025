#include <stdio.h>

int main()
{
    unsigned int a = 0x12345678; // original number

    // swap bytes manually
    unsigned int b = (
        (a & 0x000000FF) << 24 |  // move the least significant byte to the most significant byte
        (a & 0x0000FF00) << 8  |  // move the 2nd byte to 3rd position
        (a & 0x00FF0000) >> 8  |  // move the 3rd byte to 2nd position
        (a & 0xFF000000) >> 24    // move the most significant byte to least significant position
    );

    printf("%x\n", b); // print the result in hexadecimal
}
