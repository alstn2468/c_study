#include <stdio.h>

int main()
{
	double x, y, result;
  //double형 값을 입력받으면 결과값도 double형

	printf("두개의 실수를 입력하시오 : ");
	scanf("%lf %lf", &x, &y);
	result = x + y;
	printf("%f + %f = %f\n", x, y, result);

	result = x - y;
	printf("%f - %f = %f\n", x, y, result);

	result = x * y;
	printf("%f * %f = %f\n", x, y, result);

	result = x / y;
	printf("%f / %f = %f\n", x, y, result);

	return 0;
}
