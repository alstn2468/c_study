// 문자열 배열
#include <stdio.h>

int main()
{
	int i, n;
	char *fruits[] =
	{
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits) / sizeof(fruits[0]);

	for (i = 0; i < n; i++)
	{
		printf("%s \n", fruits[i]);
	}

	return 0;
}
