#include <stdio.h>

int main()
{
	int x, y;

	printf("x와 y값을 입력하세요 : ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("x와 y는 모두 양수\n");
	}
	else if (x < 0)
	{
		printf("x가 양수가 아님\n");
	}
	else
	{
		printf("y가 양수가 아님\n");
	}
	return 0;
}
