#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(void)
{
    printf("%u\n", rightrot(122, 3)); // output: 1073741839
    printf("%u\n", rightrot(127, 3)); // output: 3758096399
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    unsigned rightbit;
    int wordsize = sizeof(int) * 8;
    int wordsize_minus_one = wordsize - 1;
    
    while (n-- > 0)
    {
        rightbit = (x & 1) << wordsize_minus_one;
        x >>= 1;
        x |= rightbit;
    }
    return x;
}