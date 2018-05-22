#include <stdio.h>
#define TRUE 1

int money;

void save(int amount)
{
	money += amount;
	printf("현재 잔액은 %d원입니다.\n\n", money);
}

void draw(int amount)
{
	if (money < amount)
		printf("잔액 부족입니다.\n\n");

	else
	{
		money -= amount;
		printf("현재 잔액은 %d원입니다.\n\n", money);
	}
}

int main()
{
	int amount, menu;

	while (TRUE)
	{
		printf("메뉴를 선택하세요 : 저축(1), 인출(2) : ");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("저축할 금액 : ");
			scanf("%d", &amount);

			save(amount);
		}

		else if (menu == 2)
		{
			printf("인출할 금액 : ");
			scanf("%d", &amount);

			draw(amount);
		}

		else
		{
			printf("사용할 수 없는 기능입니다.\n");
		}
	}

	return 0;
}
