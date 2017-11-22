#include <stdio.h>
#define PI 3.141592
#define VOLUME(r, h) (PI * (r) * (r) * (h))

int main()
{
	int r, h;
	double volume = 0.0;

	printf("반지름을 입력하세요 : ");
	scanf("%d", &r);
	printf("높이를 입력하세요 : ");
	scanf("%d", &h);

	volume = VOLUME(r, h);

	printf("원기둥의 부피는 %f입니다.\n", volume);

	return 0;
}
