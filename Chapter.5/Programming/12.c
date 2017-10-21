#include <stdio.h>

int main()
{
	unsigned int value;
	char c1, c2, c3, c4;

	printf("첫번째 문자를 입력하시오 : ");
	scanf(" %c", &c1);
	printf("두번째 문자를 입력하시오 : ");
	scanf(" %c", &c2);
	printf("세번째 문자를 입력하시오 : ");
	scanf(" %c", &c3);
	printf("네번째 문자를 입력하시오 : ");
	scanf(" %c", &c4);

	value = (c4 << 24) | (c3 << 16) | (c2 << 8) | c1;
	printf("결과값 : %x", value);

	return 0;
}
