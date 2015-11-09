#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]);

int main(void)
{
	char s[] = "hello world hello";
    char t1[] = "hello";
    char t2[] = "world";
    char t3[] = "llo";
    char t4[] = "rld";
    char t5[] = " ";
    char t6[] = "ll";
    char t7[] = "l";

    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t1, strrindex(s, t1));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t2, strrindex(s, t2));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t3, strrindex(s, t3));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t4, strrindex(s, t4));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t5, strrindex(s, t5));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t6, strrindex(s, t6));
    printf("strrindex(\"%s\", \"%s\") = %d\n", s, t7, strrindex(s, t7));
	return 0;
}

int strrindex(char s[], char t[])
{
	int i, j, k, res;
	
	for (i = strlen(s)-1; i > -1; i--)
	{
		for (res = j = i-strlen(t)+1, k=0; t[k] != '\0' && s[j]==t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return res;
	}
	return -1;
}