#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("실수를 입력하시오 : ");
	scanf("%d", &x);

	y = 3*(x*x) + 7*x + 11;

	printf("다항식의 값은 %d", y);

	return 0;
}