#include <stdio.h>
#define MIN(x,y) (x) < (y) ? (x) : (y)
#define GET_MIN(x, y, z)  (MIN(x, y)) < (z) ? (MIN(x, y)) : (z)

int main()
{
	int x, y, z, result;

	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &x, &y, &z);

	result = GET_MIN(x, y, z);

	printf("최소값은 %d입니다.\n", result);

	return 0;
}
