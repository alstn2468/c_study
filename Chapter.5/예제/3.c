//나머지 연산 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60 //1분은 60초

int main()
{
	int input, minute, second;

	printf("초를 입력하세요 : ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

	return 0;
}
