#include <stdio.h>

#define PI 3.141592;

double cal_area(double r);

int main()
{
	double radius, area = 0;

	printf("원의 반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	area = cal_area(radius);

	printf("원의 면적은 %f입니다.\n", area);

	return 0;
}

double cal_area(double r)
{
	return r * r * PI;
}
