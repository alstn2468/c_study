// 소문자를 대문자로 변경한다.
#include <stdio.h>

int main()
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오 : ");
		scanf(" %c", &letter);					// 공백문자 제외

		if (letter == 'Q')
			break;
		if (letter <'a' || letter > 'z')
			continue;

		letter -= 32;							// 소문자 > 대문자
		printf("변환된 대문자는 %c입니다.\n", letter);
	}

	return 0;
}
