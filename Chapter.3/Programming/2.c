#include <stdio.h>

int main(void)
{
	float mile;
	double meter;

	printf("마일을 입력하시오 : ");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%f마일은 %lf미터 입니다.\n", mile, meter);

	return 0;
}