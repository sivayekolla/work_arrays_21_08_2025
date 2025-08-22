#include<stdio.h>

// set all bits of the least significant byte
void set_lsb_byte(int a)
{
    unsigned int c = 0x000000FF;  // mask for LSB
    a = a | c;                     // or operation sets LSB bits
    printf("LSB byte set: %d\n", a);
}

// set all bits of the most significant byte
void set_msb__byte(int a)
{
    unsigned int c = 0xFF000000;  // mask for MSB
    a = a | c;                     // or operation sets MSB bits
    printf("MSB byte set: %d\n", a);
}

// set all bits of the least significant nibble
void set_lsb_nibble(int a)
{
    unsigned int c = 0x0000000F;  // mask for LSB nibble
    a = a | c;
    printf("LSB nibble set: %d\n", a);
}

// set all bits of the most significant nibble to 1
void set_msb_nibble(int a)
{
    unsigned int c = 0xF0000000;  // mask for MSB nibble
    a = a | c;
    printf(" nibble set: %d\n", a);
}

// set first 'b' bits from LSB to 1
void set_n_bits(int a, int b)
{
    for(int i = 0; i < b; i++)
    {
        a = a | (1 << i);  // OR each bit with 1
    }
    printf("first %d bits set: %d\n", b, a);
}

// clear first 'b' bits from LSB 
void toggle_msb(int a, int b)
{
    for(int i = 0; i < b; i++)
    {
        a = a & ~(1 << i);  
    }
    printf("first %d bits cleared: %d\n", b, a);
}

// toggle first 'b' bits from LSB
void at_n_toggle(int a, int b)
{
    for(int i = 0; i < b; i++)
    {
        a = a ^ (1 << i);   // XOR with 1 toggles bits
    }
    printf("first %d bits toggled: %d\n", b, a);
}

int main()
{
    int i, o;
    printf("enter a number and number of bits to set/clear/toggle:\n");
    scanf("%d %d", &i, &o);

    // call all bitwise operations
    set_lsb_byte(i);
    set_msb__byte(i);
    set_lsb_nibble(i);
    set_msb_nibble(i);
    set_n_bits(i, o);
    toggle_msb(i, o);
    at_n_toggle(i, o);

    return 0;
}
