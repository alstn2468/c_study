#include <stdio.h>

int main()
{
	int x = 4, y, z;

	y = --x;		// x = 3, y = 3
	z = x--;		// z = 3 논리연산자 실행후 후위 감소연산자 실행 x = 2

	printf("%d , %d, %d\n", x, y, z);

	return 0;
}
