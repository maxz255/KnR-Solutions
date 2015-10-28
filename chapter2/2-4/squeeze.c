#include <stdio.h>

void squeeze(char *s1, char *s2);
void squeeze_char(char s[], int c);

int main(void)
{
    char s1[] = "helloworld";
    char s2[] = "hello";
    squeeze(s1, s2);
    printf("%s\n", s1);
}

void squeeze_char(char s[], int c)
{
    int i, j;

    for (i = j = 0; i < s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

void squeeze(char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
        squeeze_char(s1, s2[i++]);
}