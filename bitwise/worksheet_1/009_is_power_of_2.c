#include<stdio.h>

int main()
{
    int a, found = 0;  // 'a' will store the user input, 'found' is a flag to track if it's a power of 2

    printf("enter a number to check if power of 2:\n");
    scanf("%d", &a);  // take input from the user

    // loop through all possible bit positions of a 32-bit integer
    for(int i = 0; i < 32; i++)
    {
        int r = 0;          // temporary variable to store 2^i
        r = r | (1 << i);   // set the i-th bit of r (this is effectively 2^i)
        
        // check if the input number equals this power of 2
        if(a == r)
        {
            found = 1;      // we found a match
            break;          // no need to check further, exit the loop
        }
    }

    // after checking all bits, print the result
    if(found)
    {
        printf("%d is power of 2", a);
    }
    else
    {
        printf("%d is not a power of 2", a);
    }

}
