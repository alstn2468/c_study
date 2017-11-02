#include <stdio.h>
#include <math.h>

enum shape_type {TRIANGLE, RECTANGLE, CIRCLE};

struct shape
{
	int type;
	union
	{
		struct
		{
			int base, height;
		}tri;
		struct
		{
			int weight, height;
		}rect;
		struct
		{
			int radius;
		}circ;
	}p;
};

int main()
{
	struct shape s;
	enum shape_type type;

	printf("도형의 타입을 입력하세요(0 : 삼각형, 1 : 사각형, 2 : 원) : ");
	scanf("%d", &type);

	switch(type)
	{
		case TRIANGLE:
			printf("밑면과 반지름을 입력하세요 ( base, height) : ");
			scanf("%d %d", &s.p.tri.base, &s.p.tri.height);
			printf("면적은 %d이다.\n", (int)(0.5 * s.p.tri.base * s.p.tri.height));
			break;
		case RECTANGLE:
			printf("가로와 세로의 길이를 입력하세요 ( width, height) : ");
			scanf("%d %d", &s.p.rect.weight, &s.p.rect.height);
			printf("면적은 %d이다.\n", (s.p.rect.weight * s.p.rect.height));
			break;
		case CIRCLE:
			printf("반지름을 입력하세요 ( radius ) : ");
			scanf("%d", &s.p.circ.radius);
			printf("면적은 %d이다.\n", (int)(3.14 * s.p.circ.radius * s.p.circ.radius));
			break;
		default:
				break;

	}

	return 0;
}
