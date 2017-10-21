#include <stdio.h>

int is_multiple(int n, int m);

int main()
{
	int number1, number2;

	printf("첫번째 정수를 입력하세요 : ");
	scanf("%d", &number1);
	printf("두번째 정수를 입력하세요 : ");
	scanf("%d", &number2);

	if (is_multiple(number1, number2) == 1)
	{
		printf("%d는 %d의 배수 입니다.\n", number1, number2);
	}
	else
		printf("%d는 %d의 배수가 아닙니다.\n", number1, number2);

	return 0;
}

int is_multiple(int n, int m)
{
	if (n % m == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
