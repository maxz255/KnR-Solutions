#include <stdio.h>

int main(void)
{
	double fahr;
	int celsius;

	printf("celsius fahr\n");
	for (celsius = 0; celsius <= 100; celsius += 10)
        printf("%3d %6.1f\n", celsius, (9.0/5.0)*celsius+32);
	return 0;
}
