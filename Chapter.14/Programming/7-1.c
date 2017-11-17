#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10

void threshold_image(int p[HEIGHT][WIDTH], int h, int w);

int main()
{
	int image[HEIGHT][WIDTH] =
	{
		{ 0, 0, 0, 0, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 9, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 9, 0, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 8, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 7, 0, 0, 0, 0 ,0 },
		{ 0, 0, 0, 0, 8, 0 ,0 ,0 ,0 ,0 },
		{ 0, 0, 0, 0, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 9, 0, 0, 0, 0, 0 },
		{ 0, 0, 6, 6, 9, 7, 7, 0, 0, 0 }
	};

	printf("===========이진화 전 정렬============\n\n");

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%-3d ", image[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	threshold_image(image, HEIGHT, WIDTH);

	printf("===========이진화 후 정렬============\n\n");

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%-3d ", image[i][j]);

		}
		printf("\n");
	}

	return 0;
}

void threshold_image(int p[HEIGHT][WIDTH], int h, int w)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (p[y][x] > 5)
			{
				p[y][x] = 255;
			}
			else
			{
				p[y][x] = 0;
			}
		}
	}
}
