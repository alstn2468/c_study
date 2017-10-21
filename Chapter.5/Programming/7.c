#include <stdio.h>

int main()
{
	int num, x;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &x);

	printf("%d << %d의 값 : %d", num, x, num << x);

	return 0;
}
