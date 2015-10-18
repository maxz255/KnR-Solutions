#include <stdio.h>

int main(void)
{
    int c;
    int cnt_space = 0;
    int cnt_tab  = 0;
    int cnt_newline = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++cnt_space;
        else if (c == '\t')
            ++cnt_tab;
        else if (c == '\n')
            ++cnt_newline;
    }
    printf("space=%d, tab=%d, newline=%d\n", cnt_space, cnt_tab, cnt_newline);
    return 0;
}