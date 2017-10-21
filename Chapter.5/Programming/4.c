#include <stdio.h>

int main()
{
	int cm, feet;
	double inch;
	const double CM_PER_FEET = (12 * 2.54);

	printf("키를 입력하세요 : ");
	scanf("%d", &cm);

	feet = cm / (int)(CM_PER_FEET);
	inch = (cm - feet * CM_PER_FEET) / 2.54;

	printf("%d는 %d피트 %f인치 입니다.\n", cm, feet, inch);

	return 0;
}
