#include <stdio.h>

int main()
{
	int speed;

	printf("속도를 입력해주세요 : ");
	scanf("%d", &speed);

	if (speed > 150)
		printf("벌금 9만원\n");
	else if (speed > 120)
		printf("벌금 6만원\n");
	else
		printf("OK\n");

	return 0;
}
