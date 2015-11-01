// using mask code complete invert function

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void)
{
    printf("%u\n", invert(122, 4, 3)); // output: 102
    printf("%u\n", invert(487, 7, 5)); // output: 287
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask_x = ~(~0 << n) << (p + 1 - n);
    return x ^ mask_x;
}