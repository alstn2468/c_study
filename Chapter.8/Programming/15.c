#include <stdio.h>

double round(double f);

int main()
{
	double number;

	printf("실수를 입력하세요 : ");
	scanf("%lf", &number);

	printf("반올림한 값은 %f입니다.\n", round(number));

	return 0;
}

double round(double f)
{
	return (int)(f + 0.5);
}
