#include <stdio.h>

struct circle
{
	int x;
	int y;
	int r;
};

int main()
{
	struct circle c1, c2;
	struct circle *p1, *p2;

	p1 = &c1;
	p2 = &c2;

	printf("Define Circle Struct and compare via struct pointer.\n");
	printf("Circle 1 point(x, y) : ");
	scanf("%d %d", &p1->x, &p1->y);
	printf("Circle 1 radius : ");
	scanf("%d", &p1->r);

	printf("\nDefine Circle Struct and compare via struct pointer.\n");
	printf("Circle 2 point(x, y) : ");
	scanf("%d %d", &p2->x, &p2->y);
	printf("Circle 2 radius : ");
	scanf("%d", &p2->r);

	if (p1->x == p2->y && p1->y == p2->y && p1->r == p2->r)
	{
		printf("Circle 1 and Circle 2 are same values.\n");
	}
	else
	{
		printf("Circle 1 and Circle 2 are diffrent values.\n");
	}

	return 0;
}
