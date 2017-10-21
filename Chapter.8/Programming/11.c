#include <stdio.h>
#include <math.h>

double get_distance(double x1, double x2, double y1, double y2);

int main()
{
	int x1, x2, y1, y2;

	printf("첫번째 점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &x2, &y2);

	printf("두점사이의 거리는 %f입니다.\n", get_distance(x1, x2, y1, y2));

	return 0;
}

double get_distance(double x1, double x2, double y1, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
