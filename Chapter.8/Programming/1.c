#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	if (even(n) == 1)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
	}

	printf("absolute()의 결과 : %d\n", absolute(n));

	printf("sign()의 결과 : ");
	if (sign(n) == 1)
	{
		printf("양수\n");
	}
	else
		printf("음수\n");

	return 0;
}

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return (n > 0) ? n : -n;
}

int sign(int n)
{
	return (n > 0) ? 1 : -1;
}
