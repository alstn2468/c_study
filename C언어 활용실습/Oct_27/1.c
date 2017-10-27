#include <stdio.h>

struct Rect
{
	int width;
	int height;
};

int main()
{
	struct Rect r;
	struct Rect *pr;
	int periphery, area;

	pr = &r;

	printf("Define Rect Struct and input and calculate via struct point\n");
	printf("Input width : ");
	scanf("%d", &(*pr).width);
	printf("Input height : ");
	scanf("%d", &(*pr).height);

	periphery = 2 * (pr->height + pr->width);
	area = (pr->height * pr->width);

	printf("Periphery : %d\n", periphery);
	printf("Area : %d\n", area);

	return 0;
}
