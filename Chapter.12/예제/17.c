#include <stdio.h>

int main()
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value);
	printf("%d\n", value);
	sprintf(s2, "%d", value);
	printf("%s\n", s2);

	return 0;
}
