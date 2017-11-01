#include <stdio.h>

struct point
{
	int x, y;
};

int equal(struct point p1, struct point p2);

int main()
{
	struct point point1;
	struct point point2;

	printf("좌표1의 값을 입력하세요(x , y) : ");
	scanf("%d %d", &point1.x, &point1.y);
	printf("좌표2의 값을 입력하세요(x, y) : ");
	scanf("%d %d", &point2.x, &point2.y);

	if (equal(point1, point2) == 1)
	{
		printf("두개의 좌표는 같습니다.\n");
	}
	else
	{
		printf("두개의 좌표는 다릅니다.\n");
	}
  return 0;
}

int equal(struct point p1, struct point p2)
{
	if (p1.x == p2.x && p1.y == p2.y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
