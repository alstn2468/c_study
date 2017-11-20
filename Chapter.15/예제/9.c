// main.c
#include <stdio.h>
#include "power.h"

int main()
{
	int x, y;

	printf("x의 값을 입력하시오 : ");
	scanf("%d", &x);
	printf("y의 값을 입력하시오 : ");
	scanf("%d", &y);

	printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));

	return 0;
}

// power.c
#include "power.h"

double power(int x, int y)
{
	double result = 1.0;

	for (int i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}

// power.c에 대한 헤더파일
double power(int x, int y);			//함수 원형 정의
