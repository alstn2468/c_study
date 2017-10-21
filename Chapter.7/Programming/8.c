#include <stdio.h>

int main()
{
	int i, j, height;

	while (1)
	{
		printf("막대의 높이(종료 : -1) : ");
		scanf("%d", &height);

		if (height == -1)
		{
			break;
		}
		for (j = 0; j < height; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
