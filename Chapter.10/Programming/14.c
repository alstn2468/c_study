#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 20
#define COLS 20

int grid[ROWS][COLS];
int ro, co;

void mark_grid(int x, int y);
void print_grid();

int main()
{
	int r, c;
	int i;
	char letters = '*';

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			grid[r][c] = '.';
		}
	}
	srand((unsigned)time(NULL));

	ro = ROWS / 2;
	co = COLS / 2;

	grid[ro][co] = letters;

	for (i = 0; i < 100000; i++)
	{
		int move = rand() % 8;

		switch (move)
		{
		case 0:
			mark_grid(ro + 1, co);
			break;
		case 1:
			mark_grid(ro + 1, co + 1);
			break;
		case 2:
			mark_grid(ro, co + 1);
			break;
		case 3:
			mark_grid(ro - 1, co + 1);
			break;
		case 4:
			mark_grid(ro - 1, co);
			break;
		case 5:
			mark_grid(ro - 1, co - 1);
			break;
		case 6:
			mark_grid(ro, co - 1);
			break;
		case 7:
			mark_grid(ro + 1, co - 1);
			break;
		}
		print_grid();
		if (getch() == 'q')
		{
			break;
		}
	}
	return 0;
}

void mark_grid(int x, int y)
{
	if (x >= 0 && y >= 0 && y < ROWS && x < COLS)
	{
		ro = y;
		co = x;
		if (grid[y][x] == '.')
		{
			grid[y][x] = '*';
		}
	}
}

void print_grid()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			printf("%c ", grid[r][c]);
		}
		printf("\n");
	}
}
