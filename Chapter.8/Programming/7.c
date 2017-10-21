#include <stdio.h>
#include <stdlib.h>

int b_rand();

int main()
{
	int answer, coin;
	char c;

	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf("%d", &answer);

		coin = b_rand();

		if (coin == answer)
		{
			printf("맞았습니다.\n");
		}
		else
		{
			printf("틀렸습니다.\n");
		}
		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf(" %c", &c);

		if (c == 'n')
		{
			break;
		}
	}
	return 0;
}


int b_rand()
{
	return rand() % 2;
}
