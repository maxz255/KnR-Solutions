#include <stdio.h>
#define MAXLINE 1000

char *reverse(char *s);
int getline(char *s, int lim);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("%s\n", reverse(line));
    }
    
    return 0;
}

char *reverse(char *s)
{
    int i = 0;
    int j = 0;
	
    while (s[j] != '\0')
    {
        ++j;
    }
    --j;

    for (; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

int getline(char *s, int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}