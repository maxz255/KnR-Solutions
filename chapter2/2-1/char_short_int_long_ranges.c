#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("---------using limits.h and float.h---------\n");
    printf("minimum signed char value \t%d\n", SCHAR_MIN);
    printf("maximum signed char value \t%d\n", SCHAR_MAX);
    printf("maximum unsigned char value \t%u\n", UCHAR_MAX);

    printf("minimum signed short value \t%d\n", SHRT_MIN);
    printf("maximum signed short value \t%d\n", SHRT_MAX);
    printf("maximum unsigned short value \t%u\n", USHRT_MAX);

    printf("minimum signed int value \t%d\n", INT_MIN);
    printf("maximum signed int value \t%d\n", INT_MAX);
    printf("maximum unsigned int value \t%u\n", UINT_MAX);

    printf("minimum signed long value \t%ld\n", LONG_MIN);
    printf("maximum signed long value \t%ld\n", LONG_MAX);
    printf("maximum unsigned long value \t%lu\n", ULONG_MAX);
    putchar('\n');
    
    printf("-----------------another way----------------\n");
    printf("minimum signed char value \t%d\n", -((char)((unsigned char)~0 >> 1) + 1));
    printf("maximum signed char value \t%d\n", (char)((unsigned char)~0 >> 1));
    printf("maximum unsigned char value \t%u\n", (unsigned char)~0);

    printf("minimum signed short value \t%d\n", -((short)((unsigned short)~0 >> 1) + 1));
    printf("maximum signed short value \t%d\n", (short)((unsigned short)~0 >> 1));
    printf("maximum unsigned short value \t%u\n", (unsigned short)~0);

    printf("minimum signed int value \t%d\n", -((int)((unsigned int)~0 >> 1) + 1));
    printf("maximum signed int value \t%d\n", (int)((unsigned int)~0 >> 1));
    printf("maximum unsigned int value \t%u\n", (unsigned int)~0);

    printf("minimum signed long value \t%ld\n", -((long)((unsigned long)~0 >> 1) + 1));
    printf("maximum signed long value \t%ld\n", (long)((unsigned long)~0 >> 1));
    printf("maximum unsigned long value \t%lu\n", (unsigned long)~0);
    return 0;
}