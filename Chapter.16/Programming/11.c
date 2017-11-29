#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define PUBLISHER_SIZE 50

typedef struct BOOK
{
	char tilte[TITLE_SIZE];
	char author[NAME_SIZE];
	char publisher[PUBLISHER_SIZE];
} BOOK;

void add_record(BOOK library[], int count);
void menu();
int get_input();
void search_record(BOOK library[], int count);
void print_record(BOOK library[], int count);

int main()
{
	int num, count = 0;
	BOOK library[30] = { '\0' };

	while (1)
	{
		menu();
		num = get_input();

		switch (num)
		{
		case 1:
			add_record(library, count);
			count++;
			continue;
		case 2:
			print_record(library, count);
			continue;
		case 3:
			search_record(library, count);
			continue;
		case 4:
			return -1;
		}

		return 0;
	}
}

void add_record(BOOK library[], int count)
{
	printf("도서의 이름 : ");
	scanf("%s", library[count].tilte);
	printf("저자 : ");
	scanf("%s", library[count].author);
	printf("출판사 : ");
	scanf("%s", library[count].publisher);
}

void menu()
{
	printf("┌───────────┐\n");
	printf("│  1. 추가  │\n");
	printf("│  2. 출력  │\n");
	printf("│  3. 검색  │\n");
	printf("│  4. 종료  │\n");
	printf("└───────────┘\n");
}

int get_input()
{
	int num;

	printf("번호를 입력하세요 : ");
	scanf(" %d", &num);

	return num;
}

void search_record(BOOK library[], int count)
{
	char title[TITLE_SIZE];

	printf("제목 : ");
	scanf("%s", title);

	for (int i = 0; i < count; i++)
	{
		if (strcmp(title, library[i].tilte) == 0)
		{
			printf("저자 : %s\n", library[i].author);
			printf("출판사 : %s\n", library[i].publisher);
			return;
		}
	}
	printf("찾는 책이 없습니다.\n");
}

void print_record(BOOK library[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("제목 : %s\n", library[i].tilte);
		printf("저자 : %s\n", library[i].author);
		printf("출판사 : %s\n", library[i].publisher);
	}
}
