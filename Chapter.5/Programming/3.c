#include <stdio.h>

int main()
{
	int x, y, z, max_Value;

	printf("3개의 정수를 입력해주세요 : ");
	scanf("%d %d %d", &x, &y, &z);

	max_Value = (x > y) ? x : y;
	max_Value = (max_Value > z) ? max_Value : z;

	printf("최대값 : %d\n", max_Value);
	return 0;
}
