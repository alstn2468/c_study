#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10
#define ALIVE 1
#define DEAD 0

void print_board(int board[HEIGHT][WIDTH])
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (board[i][j] == ALIVE)
			{
				printf("X");
			}
			else
			{
				printf("O");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void clear_board(int board[HEIGHT][WIDTH])
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			board[i][j] = DEAD;
		}
	}
}

int get_value(int board[HEIGHT][WIDTH], int row, int col)
{
	if (row < 0 || row >= HEIGHT || col < 0 || col >= WIDTH || board[row][col] != ALIVE)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int get_neighbor_count(int board[HEIGHT][WIDTH], int row, int col)
{
	int neighbor = 0;

	if (row == 0 || col == 0 || row == (HEIGHT - 1) || col == (WIDTH - 1))
	{
		neighbor += get_value(board, row - 1, col - 1);
		neighbor += get_value(board, row - 1, col);
		neighbor += get_value(board, row - 1, col + 1);
		neighbor += get_value(board, row, col - 1);
		neighbor += get_value(board, row, col + 1);
		neighbor += get_value(board, row + 1, col - 1);
		neighbor += get_value(board, row + 1, col);
		neighbor += get_value(board, row + 1, col + 1);
	}
	else
	{
		int *p = &(board[row][col]);

		neighbor += p[-WIDTH - 1];
		neighbor += p[-WIDTH];
		neighbor += p[- WIDTH + 1];
		neighbor += p[ - 1];
		neighbor += p[ + 1];
		neighbor += p[ + WIDTH - 1];
		neighbor += p[ + WIDTH];
		neighbor += p[+WIDTH + 1];
	}

	return neighbor;
}

void do_generation(int board[HEIGHT][WIDTH])
{
	int tmp_board[HEIGHT][WIDTH];
	int neighbor;

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			neighbor = get_neighbor_count(board, i, j);

			if (neighbor == 3)
			{
				tmp_board[i][j] = ALIVE;
			}
			else if (neighbor == 2 && board[i][j] == ALIVE)
			{
				tmp_board[i][j] = ALIVE;
			}
			else if (neighbor >= 4 && board[i][j] == ALIVE)
			{
				tmp_board[i][j] = DEAD;
			}
			else
			{
				tmp_board[i][j] = DEAD;
			}
		}
	}

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			board[i][j] = tmp_board[i][j];
		}
	}
}

void initialize_board(int board[HEIGHT][WIDTH])
{
	board[3][4] = ALIVE;
	board[3][5] = ALIVE;
	board[3][6] = ALIVE;
	board[4][6] = ALIVE;
	board[5][5] = ALIVE;
}

int main()
{
	int board[HEIGHT][WIDTH];

	char user;
	int generation = 0;

	clear_board(board);
	initialize_board(board);
	print_board(board);

	do
	{
		do_generation(board);
		print_board(board);

		printf("generation %d\n", ++generation);

		printf("종료하려면 q, 계속하려면 m : ");
		scanf(" %c", &user);
		printf("\n");
	} while (user != 'q');

	return 0;
}
