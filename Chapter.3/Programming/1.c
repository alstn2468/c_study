#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int sum;
	int avg;

	printf("실수를 입력하시오 :");
	scanf("%d", &x);
	printf("실수를 입력하시오 :");
	scanf("%d", &y);
	printf("실수를 입력하시오 :");
	scanf("%d", &z);

	sum = x+y+z;
	avg = sum/3.0;

	printf("합계는 %d이고 평균값은 %d입니다.", sum,avg);

	return 0;
}