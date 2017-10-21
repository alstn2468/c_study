#include <stdio.h>

int main()
{
	double a, b, c, d;

	printf("막대기의 길이를 입력해주세요 : ");
	scanf("%lf", &c);
	printf("막대기의 그림자의 길이를 입력해주세요 : ");
	scanf("%lf", &a);
	printf("피라미드의 그림자의 길이를 입력해주세요 : ");
	scanf("%lf", &b);

	d = (b * c) / a;

	printf("피라미드의 높이는 %f입니다.", d);

	return 0;
}
