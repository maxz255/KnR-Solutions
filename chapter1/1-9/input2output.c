#include <stdio.h>

int main(void)
{
    int c;
    int cnt_sapce = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++cnt_sapce;
            if (cnt_sapce == 1) {
                printf("%c", c);
            }
        }
        else {
            printf("%c", c);
            cnt_sapce = 0;
        }
    }
    return 0;
}
