#include <stdio.h>

struct point
{
	int x, y;
};

int quadrant(struct point *p);

int main()
{
	struct point point1;

	printf("좌표의 값을 입력하세요(x , y) : ");
	scanf("%d %d", &point1.x, &point1.y);

	switch (quadrant(&point1))
	{
		case 1:
			printf("1사분면 입니다.\n");
			break;
		case 2:
			printf("2사분면 입니다.\n");
			break;
		case 3:
			printf("3사분면 입니다.\n");
			break;
		case 4:
			printf("4사분면 입니다.\n");
			break;
	}
	return 0;
}

int quadrant(struct point *p)
{
	if (p->x > 0 && p->y > 0)
	{
		return 1;
	}
	else if (p->x < 0 && p->y > 0)
	{
		return 2;
	}
	else if (p->x < 0 && p->y < 0)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
