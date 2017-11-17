#include <stdio.h>
#define PI 3.141592

int main()
{
	int r;
	double area = 0.0;

	printf("매크로 함수를 이용한 원의 넓이 계산\n");
	printf("반지름 : ");
	scanf("%d", &r);

	area = double(r * r) * PI;

	printf("원의 넓이 : %f\n", area);

	return 0;
}
