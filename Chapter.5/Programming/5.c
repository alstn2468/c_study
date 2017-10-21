#include <stdio.h>

int main()
{
	int x, y, z;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	y = x / 10;
	z = x % 10;

	printf("십의 자리 : %d", y);
	printf("일의 자리 : %d", z);

	return 0;
}
