#include <stdio.h>
#include <math.h>

struct point
{
	int x, y;
};
struct rectangle
{
	struct point a, b;		// a는 오른쪽 상단, b는 왼쪽 하단을 나타낸다.
};

int area(struct rectangle r);
int perimeter(struct rectangle r);
int is_square(struct rectangle r);

int main()
{
	struct point p1;
	struct point p2;
	struct rectangle r;

	printf("오른쪽 상단 좌표(x, y)를 입력해주세요 : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("왼쪽 하단 좌표(x, y)를 입력해주세요 : ");
	scanf("%d %d", &p2.x, &p2.y);

	r.a = p1;
	r.b = p2;

	printf("사각형의 넓이는 %d입니다.\n", area(r));
	printf("사각형의 둘레는 %d입니다.\n", perimeter(r));
	if (is_square(r) == 1)
	{
		printf("정사각형입니다.\n");
	}
	else
	{
		printf("정사각형이 아닙니다.\n");
	}
	return 0;
}

int area(struct rectangle r)
{
	return (abs(r.a.x - r.b.x) * abs(r.a.y - r.b.y));
}

int perimeter(struct rectangle r)
{
	return 2 * (abs(r.a.x - r.b.x) * abs(r.a.y - r.b.y));
}

int is_square(struct rectangle r)
{
	if (abs(r.a.x - r.b.x) == (r.a.y - r.b.y))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
