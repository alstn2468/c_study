#include <stdio.h>

int main()
{
	int x, y, z, min_Value;

	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y)
	{
		if (z < x)
			min_Value = z;
		else
			min_Value = x;
	}
	else
	{
		if (z < y)
			min_Value = z;
		else
			min_Value = y;
	}

	printf("제일작은 정수는 %d입니다.\n", min_Value);

	return 0;
}
