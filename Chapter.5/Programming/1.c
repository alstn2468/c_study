#include <stdio.h>

int main()
{
	int x, y;

	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	printf("몫 : %d 나머지 : %d\n", x/y, x%y);

	return 0;
}
