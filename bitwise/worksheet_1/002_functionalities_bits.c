#include<stdio.h>
// macros for bit manipulation
// LSB operations 
#define SET_LSB(a)        ((a) |  (1 << 1))
#define CLEAR_LSB(a)      ((a) & ~(1 << 1))
#define TOGGLE_LSB(a)     ((a) ^  (1 << 1))
// MSB operations 
#define SET_MSB(a)        ((a) |  (1 << 31))
#define CLEAR_MSB(a)      ((a) & ~(1 << 31))
#define TOGGLE_MSB(a)     ((a) ^  (1 << 31))
// Specific position operations
#define SET_AT(a, b)      ((a) |  (1 << (b)))
#define CLEAR_AT(a, b)    ((a) & ~(1 << (b)))
#define TOGGLE_AT(a, b)   ((a) ^  (1 << (b)))
int main()
{
    int i, o;
    printf("enter a number and a position:\n");
    scanf("%d %d", &i, &o);
    printf("set LSB: %d\n", SET_LSB(i));
    printf("clear LSB: %d\n", CLEAR_LSB(i));
    printf("toggle LSB: %d\n", TOGGLE_LSB(i));
    printf("set MSB: %d\n", SET_MSB(i));
    printf("clear MSB: %d\n", CLEAR_MSB(i));
    printf("toggle MSB: %d\n", TOGGLE_MSB(i));
    printf("set at pos %d: %d\n", o, SET_AT(i, o));
    printf("clear at pos %d: %d\n", o, CLEAR_AT(i, o));
    printf("toggle at pos %d: %d\n", o, TOGGLE_AT(i, o));
}
