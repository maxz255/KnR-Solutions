#include <stdio.h>
#include <math.h>
#include <string.h>

void itob(int n, char s[], unsigned b);
void reverse(char s[]);

int main(void)
{
    int n1 = 2765;
    int n2 = 5876;
    unsigned base_2 = 2;
    unsigned base_8 = 8;
    unsigned base_16 = 16;
    char s[50];

    itob(n1, s, base_16);
    printf("%d, base %u = %s\n",n1, base_16, s);

    itob(n1, s, base_8);
    printf("%d, base %u = %s\n", n1, base_8, s);

    itob(n1, s, base_2);
    printf("%d, base %u = %s\n", n1, base_2, s);
    puts("---------------------------------------");
    
    itob(n2, s, base_16);
    printf("%d, base %u = %s\n", n2, base_16, s);

    itob(n2, s, base_8);
    printf("%d, base %u = %s\n", n2, base_8, s);

    itob(n2, s, base_2);
    printf("%d, base %u = %s\n", n2, base_2, s);
    return 0;
}

void itob(int n, char s[], unsigned b)
{
    int i, sign, dight;
    sign = n;
    n = abs(n);

    i = 0;
    do
    {
        dight = n % b;
        if (dight > 9)
            dight = 'A' + dight - 10;
        else
            dight = dight + '0';
        s[i++] = dight;
    } while ((n /= b) != 0);

    if (sign < 0)
        s[i++] = '-';
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