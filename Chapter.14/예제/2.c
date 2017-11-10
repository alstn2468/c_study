#include <stdio.h>

void set_pointer(char **q);
char *proverb = "All that glisters is not gold.";

int main()
{
	char *p = "zzz";

	set_pointer(&p);

	printf("%s \n", p);

	return 0;
}

void set_pointer(char **q)
{
	*q = proverb;
}
