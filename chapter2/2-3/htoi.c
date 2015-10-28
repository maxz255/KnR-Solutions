#include <stdio.h>

int htoi(char *s);

int main(void)
{
    char s1[] = "0xAF";
    char s2[] = "0xaf1";
    char s3[] = "0XAF12";

    int n1 = htoi(s1);
    int n2 = htoi(s2);
    int n3 = htoi(s3);

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}

int htoi(char *s)
{
    int n = 0;
    int i = 0;
    int digit;

    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'X' || s[i] == 'x')
        {
            ++i;
        }
    }
	
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'f')
        {
            digit = 10 + s[i] - 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            digit = 10 + s[i] - 'A';
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';
        }

        n = 16 * n + digit;
        ++i;
    }
    
    return n;
}