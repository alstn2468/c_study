#include <stdio.h>
#define PI 3.141592

int main()
{
	double r, a, v;

	printf("구의 반지름을 입력해주세요 : ");
	scanf("%lf", &r);

	a = 4.0 * PI * r * r;
	v = (4.0 / 3.0) * PI * r * r *r;

	printf("구의 넓이 : %f 구의 부피 : %f", a, v);

	return 0;
}
