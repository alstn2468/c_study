#include <stdio.h>

struct card
{
	int value;		// 1~13의 카드
	char suit;		// 'c' = 클로버 'd' = 다이아 'h' = 하트 's' = 스페이드
};

int main()
{
	struct card cards[52];
	char suit;

	printf("카드의 종류를 고르세요(c = 클로버, d = 다이아몬드 h = 하트 s = 스페이드) : ");
	scanf("%c", &suit);

	if (suit == 'c')
	{
		for (int i = 0; i < 13; i++)
		{
			cards[i].value = i % 13 + 1;
			cards[i].suit = suit;
			printf("카드의 숫자는 %d이고 그림은 클로버다.\n", cards[i].value);
		}
	}
	else if (suit == 'd')
	{
		for (int i = 0; i < 13; i++)
		{
			cards[i].value = i % 13 + 1;
			cards[i].suit = suit;
			printf("카드의 숫자는 %d이고 그림은 다이아몬드다.\n", cards[i].value);
		}
	}
	else if (suit == 'h')
	{
		for (int i = 0; i < 13; i++)
		{
			cards[i].value = i % 13 + 1;
			cards[i].suit = suit;
			printf("카드의 숫자는 %d이고 그림은 하트다.\n", cards[i].value);
		}
	}
	else if (suit == 's')
	{
		for (int i = 0; i < 13; i++)
		{
			cards[i].value = i % 13 + 1;
			cards[i].suit = suit;
			printf("카드의 숫자는 %d이고 그림은 스페이드다.\n", cards[i].value);
		}
	}
	else
	{
		printf("카드의 종류를 잘못 골랐습니다.\n");
	}

	return 0;
}
