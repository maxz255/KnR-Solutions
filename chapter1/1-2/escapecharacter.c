#include <stdio.h>

int main(void)
{
	/* \w is not a escape character, so it will output 'w' */
	printf("\w");
	return 0;
}
