#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH]);
void array_print(int a[][WIDTH]);

int score[HEIGHT][WIDTH] =
{
	{ 100, 30, 67 },
	{ 89, 59, 12 },
	{ 19, 60, 90 }
};

int tmp[HEIGHT][WIDTH];

int main()
{
	array_copy(score, tmp);
	array_print(tmp);

	return 0;
}

void array_print(int a[][WIDTH])
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void array_copy(int src[][WIDTH], int dst[][WIDTH])
{
	int *p = &src[0][0];
	int *end = &src[HEIGHT - 1][WIDTH - 1];
	int *q = &dst[0][0];

	while (p <= end)
	{
		*q++ = *p++;
	}
}
