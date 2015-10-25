#include <stdio.h>
#define MAXLINE 1000

int getline(char *line, int maxline);
int delete_space(char *s);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (delete_space_or_tab(line) > 0)
        {
            printf("%s", line);
        }
    }

    return 0;
}

int delete_space_or_tab(char *s)
{
    int i = 0;

    while (s[i] != '\n')
    {
        ++i;
    }
    --i;

    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    {
        --i;
    }

    if (i >= 0)
    {
        s[++i] = '\n';
        s[++i] = '\0';
    }
    
    return i;
}

int getline(char *s, int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i++] = '\n';
    }
    s[i] = '\0';
    return i;
}