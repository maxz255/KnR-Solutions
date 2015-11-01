// x &= x - 1 deletes the rightmost 1-bit in x
#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    printf("%d\n", bitcount(15));  //output: 4
    printf("%d\n", bitcount(123)); //output: 6
    return 0;
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= x - 1)
            b++;
    return b;
}