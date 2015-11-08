#include <stdio.h>

void escape(char *s, char *t);
void unescape(char *s, char *t);

int main(void)
{
    char t[] = "hello world\nhello\tworld\aworld";
    //char t[] = { '\0' };
    char s[50];
    
    printf("%s\n\n", t);
    puts("-------escape-------");
    escape(s, t);
    printf("%s\n\n", s);
    

    puts("------unescape------");
    unescape(t, s);
    printf("%s\n", t);
    return 0;
}

void escape(char *s, char *t)
{
    do
    {
        switch (*t)
        {
        case '\n':
            *s++ = '\\';
            *s++ = 'n';
            break;
        case '\t':
            *s++ = '\\';
            *s++ = 't';
            break;
        case '\a':
            *s++ = '\\';
            *s++ = 'a';
            break;
        case '\b':
            *s++ = '\\';
            *s++ = 'b';
            break;
        case '\f':
            *s++ = '\\';
            *s++ = 'f';
            break;
        case '\r':
            *s++ = '\\';
            *s++ = 'r';
            break;
        case '\v':
            *s++ = '\\';
            *s++ = 'v';
            break;
        case '\\':
            *s++ = '\\';
            *s++ = '\\';
            break;
        case '\?':
            *s++ = '\\';
            *s++ = '?';
            break;
        case '\'':
            *s++ = '\\';
            *s++ = '\'';
            break;
        case '\"':
            *s++ = '\\';
            *s++ = '\"';
            break;
        default:
            *s++ = *t;
            break;
        }
    } while (*t++ != '\0');
}

void unescape(char *s, char *t)
{
    do
    {
        if (*t == '\\')
        {
            switch (*++t)
            {
            case 'n':
                *s++ = '\n';
                break;
            case 't':
                *s++ = '\t';
                break;
            case 'a':
                *s++ = '\a';
                break;
            case 'b':
                *s++ = '\b';
                break;
            case 'f':
                *s++ = '\f';
                break;
            case 'r':
                *s++ = '\r';
                break;
            case 'v':
                *s++ = '\v';
                break;
            case '\\':
                *s++ = '\\';
                break;
            case '?':
                *s++ = '\?';
                break;
            case '\'':
                *s++ = '\'';
                break;
            case '\"':
                *s++ = '\"';
                break;
            default:
                break;
            }
        }
        else
            *s++ = *t;
    } while (*t++ != '\0');
}