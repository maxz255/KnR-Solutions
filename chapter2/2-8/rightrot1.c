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
    unsigned mask =  ~((unsigned)~0 >> 1);
    
    while (n-- > 0)
    {
        if (x & 1 == 1)
            x = (x >> 1) | mask;
        else
            x >>= 1;
    }
    return x;
}