#include <stdio.h>

int main(void)
{
	int c,t;

	printf("화씨값을 입력하시오 : ");
	scanf("%d", &t);

	c = (5.0/9.0)*(t-32.0);

	printf("섭씨값은 %d도 입니다.", c);

	return 0;
}