// main 함수의 인수 활용
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double mile, km;

	if (argc != 2)
	{
		printf("사용 방법 : mile2km 거리\n");

		return 1;
	}

	mile = atof(argv[1]);

	km = 1.609 * mile;

	printf("입력된 거리는 %f km입니다.\n", km);

	return 0;
}
