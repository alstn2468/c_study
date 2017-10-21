#include <stdio.h>

int main()
{
	int n, i;
	double r, result;

	printf("실수의 값을 입력하시오 : ");
	scanf("%lf", &r);
	printf("거듭제곱횟수를 입력하시오 : ");
	scanf("%d", &n);

	result = 1.0;

	for (i = 0; i < n; i++)
	{
		result *= r;
	}
	printf("결과값은 %f\n", result);

	return 0;
}
