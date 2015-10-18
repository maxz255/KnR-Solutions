/* Reference http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_1:Exercise_12 */
#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, state;
    
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            state = IN;
            printf("%c", c);
        }
        else if (state == IN) {
            state = OUT;
            printf("\n");
        }
    }
    return 0;
}