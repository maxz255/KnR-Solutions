#include <stdio.h>
#include <math.h>
#include <string.h>

void itoa(int n, char s[], unsigned min_width);
void reverse(char s[]);

int main(void)
{
    int n1 = -2765;
    char s[50];
    unsigned min_width;

    for	(min_width = 0; min_width != 10; ++min_width)
    {
        itoa(n1, s, min_width);
		printf("min width = %u\n", min_width);
        printf("%s\n\n", s);
    }
    return 0;
}

void itoa(int n, char s[], unsigned min_width)
{
    int i, sign;
    sign = n;
    n = abs(n);
    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    while (i < min_width)
    {
        s[i++] = ' ';
    }
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
	int i, j, temp;

    for (i=0, j = strlen(s)-1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}