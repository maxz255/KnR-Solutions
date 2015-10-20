#include <stdio.h>

double fahr2celsius(double fahr);

int main(void) 
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n", fahr, fahr2celsius(fahr));
    return 0;
}

double fahr2celsius(double fahr)
{
    return (5.0/9.0)*(fahr-32.0);
}