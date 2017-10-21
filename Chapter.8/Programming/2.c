#include <stdio.h>

double f_to_c(double temp);

int main()
{
	double f = 0, c = 0;

	printf("화씨온도를 입력하시오 : ");
	scanf("%lf", &f);

	c = f_to_c(f);

	printf("섭씨온도는 %f입니다.\n", c);

	return 0;
}

double f_to_c(double temp)
{
	return (5.0 / 9.0) * (temp - 32.0);
}
