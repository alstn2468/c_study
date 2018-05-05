#include <stdio.h>
#include <stdlib.h>

void print_menu();
void check_menu_number();
void menu_ham();
void menu_cheese();
void menu_sand();

int main()
{
	check_menu_number();

	return 0;
}

void menu_ham()
{
	printf("1번 메뉴가 선택되었습니다.\n");
}

void menu_cheese()
{
	printf("2번 메뉴가 선택되었습니다.\n");
}

void menu_sand()
{
	printf("3번 메뉴가 선택되었습니다.\n");
}

void print_menu()
{
	printf("1. 햄버거\n");
	printf("2. 치즈버거\n");
	printf("3. 샌드위치\n");
	printf("4. 종료\n");

	printf("원하는 메뉴를 선택하시오 : ");
}

void check_menu_number()
{
	int value;

	while (1)
	{
		print_menu();
		scanf("%d", &value);

		if (value < 1 || value > 4)
		{
			continue;
		}
		else if (value == 1)
		{
			menu_ham();
		}
		else if (value == 2)
		{
			menu_cheese();
		}
		else if (value == 3)
		{
			menu_sand();
		}
		else if (value == 4)
		{
			break;
		}
	}
}
