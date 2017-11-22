#include <stdio.h>

int main()
{
	char s[100];

	printf("문자열을 입력하시오 : ");
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = s[i] ^ 0x20;
	}

	printf("결과 문자열 : %s\n", s);

	return 0;
}
