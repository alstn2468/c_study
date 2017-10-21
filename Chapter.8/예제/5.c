#include <stdio.h>

int is_prime(int);
int get_integer(void);

int main()
{
	int n, result;

	n = get_integer();
	result = is_prime(n);

	if (result == 1)
	{
		printf("%d는 소수입니다.\n", n);
	}
	else
		printf("%d는 소수가 아닙니다.\n", n);

	return 0;
}
int get_integer()
{
	int n;

	printf("정수르 입력하시오 : ");
	scanf("%d", &n);

	return n;
}
int is_prime(int n)
{
	int divisiors = 0, i;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisiors++;
		}
	}
	return (divisiors == 2);
}
