#include <stdio.h>

void expand(char *s1, char *s2);

int main(void)
{
    char *from1 = "a-z";
    char *from2 = "a-b-c";
    char *from3 = "a-z0-9";
    char *from4 = "-a-z-";
    char *from5 = "-a-b-f-";
    char *from6 = "-6-6-6";
    char to[100];

    expand(from1, to);
    printf("%s\n", to);

    expand(from2, to);
    printf("%s\n", to);

    expand(from3, to);
    printf("%s\n", to);

    expand(from4, to);
    printf("%s\n", to);

    expand(from5, to);
    printf("%s\n", to);

    expand(from6, to);
    printf("%s\n", to);
    return 0;
}

void expand(char *s1, char *s2)
{
    char start, end;
    while (*s1 != '\0')
    {
        if (*(s1 + 1) == '-' && *(s1 + 2) >= *s1)
        {
            start = *s1;
            end = *(s1 + 2);
            while (start < end)
                *s2++ = start++;
            s1 += 2;
        }
        else
        {
            *s2++ = *s1++;
        }
    }
    *s2 = '\0';
}