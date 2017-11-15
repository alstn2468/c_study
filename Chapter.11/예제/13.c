#include <stdio.h>
#define SIZE 5

void print_image(int image[][SIZE])
{
	for (int r = 0; r < SIZE; r++)
	{
		for (int c = 0; c < SIZE; c++)
		{
			printf("%03d ", image[r][c]);
		}
		printf("\n");
	}

	printf("\n");
}

void brighten_image(int image[][SIZE])
{
	int *p;

	p = &image[0][0];

	for (int r = 0; r < SIZE; r++)
	{
		for (int c = 0; c < SIZE; c++)
		{
			*p += 10;
			p++;
		}
	}
}

int main()
{
	int image[5][5] =
	{
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50}
	};

	print_image(image);
	brighten_image(image);
	print_image(image);

	return 0;
}
