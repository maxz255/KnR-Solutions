// using getbits and setbits complete invert function

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);

int main(void)
{
    printf("%u\n", invert(122, 4, 3)); // output: 102
    printf("%u\n", invert(487, 7, 5)); // output: 287
    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n) & ~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    int mask_x = ~(~(~0 << n) << (p + 1 - n));
    int mask_y = ~(~0 << n);

    x = x & mask_x;
    y = (y & mask_y) << (p + 1 - n);

    return x | y;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned temp = getbits(x, p, n);
    x = setbits(x, p, n, ~temp);
    return x;
}