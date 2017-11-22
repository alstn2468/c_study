#include <stdio.h>
#define IS_SPACE(c) ((c) == ' ' || (c) == '\t' || (c) == '\n')

int main()
{
	char str[100];
	int i = 0,count = 0;

	printf("문자열을 입력하세요 : ");
	gets(str);

	while (str[i] != NULL)
	{
		if (IS_SPACE(str[i]))
		{
			count++;
		}
		i++;
	}

	printf("공백문자의 개수 : %d\n", count);

	return 0;
}
