#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    printf("%u\n", setbits(122, 4, 3, 9)); // out: 102
    printf("%u\n", setbits(122, 4, 3, 15));  // out: 126
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    int mask_x = ~(~(~0 << n) << (p + 1 - n));
    int mask_y = ~(~0 << n);

    x = x & mask_x;
    y = (y & mask_y) << (p + 1 - n);

    return x | y;
}