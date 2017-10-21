#include <stdio.h>

int f(int x);

int main()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	printf("0부터 %d까지의 합은 %d입니다.\n", n, f(n));

	return 0;
}

int f(int x)
{
	int i, sum = 0;

	for (i = 0; i <= x; i++)
	{
		sum += i;
	}
	return sum;
}
