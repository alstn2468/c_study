#include <stdio.h>
#include <Stdlib.h>

void init_board(char board[][3]);
int get_player_move(int player, char board[][3]);
void disp_board(char board[][3]);

int main()
{
	char board[3][3];
	int quit = 0;

	init_board(board);

	do {
		disp_board(board);
		quit = get_player_move(0, board);
		if (quit == 1)
		{
			break;
		}
		disp_board(board);
		quit = get_player_move(1, board);
		if (quit == 1)
		{
			break;
		}
	}while (quit == 0);

	return 0;
}

void init_board(char board[][3])
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}
}

int get_player_move(int player, char board[3][3])
{
	int x, y, done = 0;

	while (done != 1)
	{
		printf("(x,y) 좌표(종료 -1, -1) : ");
		scanf("%d %d", &x, &y);

		if (x == -1 && y == -1)
		{
			return 1;
		}
		if (board[x][y] == ' ')			//올바른 위치면 반복 루프를 나간다.
		{
			break;
		}
		else
		{
			printf("잘못된 위치입니다.\n");
		}
	}
		if (player == 0)
		{
			board[x][y] = 'X';
		}
		else
		{
			board[x][y] = '0';
		}
		return 0;
}

void disp_board(char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		printf("---|---|---\n");
		printf("%c  | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
	}
	printf("---|---|---\n");
}
