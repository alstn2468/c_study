#include <stdio.h>

int main()
{
	int value;

	printf("정수를 입력하세요 : ");
	scanf("%d", &value);

	value = ~value;
	value += 0x1;

	printf("2의 보수 : %d\n", value);

	return 0;
}
