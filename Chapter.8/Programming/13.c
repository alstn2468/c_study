#include <stdio.h>

long long factorial(int n);

int main()
{
	int number;
	double sum = 1.0;

	printf("어디까지 계산할까요 : ");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++)
	{
		sum += 1.0 / factorial(i);
	}

	printf("오일러의 수는 %f입니다.\n", sum);

	return 0;
}

long long factorial(int n)
{
	long long result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
