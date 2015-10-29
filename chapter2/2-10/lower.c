#include <stdio.h>

int lower(int c);

int main(void)
{
    printf("%c\n", lower('H'));
    printf("%c\n", lower('E'));
    printf("%c\n", lower('L'));
    printf("%c\n", lower('L'));
    printf("%c\n", lower('O'));
    return 0;
}

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 32) : c;
}