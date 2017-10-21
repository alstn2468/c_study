#include <stdio.h>

int main()
{
	double x, y;

	printf("x의 값을 입력해주세요. : ");
	scanf("%lf", &x);

	if (x <= 0)
	{
		y = (x* x* x) - (9 * x) + 2;
	}
	else
		y = 7 * x + 2;

	printf("f(x)의 값은 %f", y);

	return 0;
}
