#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10

void reverse_image(int p[HEIGHT][WIDTH], int h, int w);

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

	printf("===========반전 전 정렬=============\n");

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%-3d ", image[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	reverse_image(image, HEIGHT, WIDTH);

	printf("============반전 후 정렬==============\n\n");

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

void reverse_image(int p[HEIGHT][WIDTH], int h, int w)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			p[y][x] = 255 - p[y][x];
		}
	}
}
