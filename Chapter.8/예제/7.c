// 난수생성 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main()
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
	{
		printf("%d ", 1 + rand() % MAX);
	}

	return 0;
}
