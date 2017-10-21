#include <stdio.h>
#include <conio.h>


int main()
{
	int x, y;

	for (y = 1; y < 10000; y++)			// 중첩 루프
	{
		for (x = 1; x < y; x++)
		{
			if (_kbhit())
				goto OUT;				// 키가눌려지면 OUT으로 점프;
			printf("*");
		}
		printf("\n");
	}
	OUT:
	return 0;
}
