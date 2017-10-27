#include <stdio.h>

struct Point
{
	int x;
	int y;
};

struct Point midPoint(struct Point p1, struct Point p2);

int main()
{
	struct Point p1;
	struct Point p2;
	struct Point result;

	printf("Define Point Struct and calculate middle Point via function\n");
	printf("Input point1(x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input point2(x y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	result = midPoint(p1, p2);

	printf("middle Point is %d, %d\n", result.x, result.y);

	return 0;
}

struct Point midPoint(struct Point p1, struct Point p2)
{
	struct Point result;

	result.x = (p1.x + p2.x) / 2;
	result.y = (p1.y + p2.y) / 2;

	return result;
}
