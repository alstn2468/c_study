#include <stdio.h>
#define GET_BIT(n, pos) ((n) & (1 << (pos)))

void display_bit(int value)
{
	for (int i = 31; i >= 0; i--)
	{
		if (GET_BIT(value, i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}

int main()
{
	int n, dire, dist;

	printf("정수 값을 입력하시오 : ");
	scanf("%d", &n);
	printf("왼쪽 이동은 0 오른쪽 이동은 1 : ");
	scanf("%d", &dire);
	printf("이동시킬 거리 : ");
	scanf("%d", &dist);

	printf("이동 전 : ");
	display_bit(n);
	printf("이동 후 : ");
	if (dire == 0)
	{
		display_bit(n << dist);
	}
	else if (dire == 1)
	{
		display_bit(n >> dist);
	}

	return 0;
}
