#include <stdio.h>
#define MAXLINE 1000

int getline(char *s, int lim);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("%s", line);
    }
}

int getline(char *s, int lim)
{
    int c, i;

    //for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    //    s[i] = c;
    i = 0;
    while (i < lim-1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    if (c == '\n')
    {
        s[i++] = '\n';
    }
    s[i] = '\0';
    return i;
}