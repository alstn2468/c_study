#include <stdio.h>
#include <string.h>

#define TITLE_SIZE 50
#define NAME_SIZE 50
#define LOCATION_SIZE 50

enum MUSIC_TYPE {KPOP, POP, CLASSIC, SCREEN_MUSIC};

typedef struct music
{
	char title[TITLE_SIZE];
	char singer[NAME_SIZE];
	char location[LOCATION_SIZE];
	enum MUSIC_TYPE genre;
} MUSIC;

void add_record(MUSIC library[], int count);
void menu();
int get_input();
void search_record(MUSIC library[], int count);
void print_record(MUSIC libaray[], int count);

int main()
{
	int num, count = 0;
	MUSIC library[30] = { NULL };

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

void add_record(MUSIC library[], int count)
{
	int type;

	printf("제목 : ");
	scanf("%s", library[count].title);
	printf("가수 : ");
	scanf("%s", library[count].singer);
	printf("위치 : ");
	scanf("%s", library[count].location);
	printf("장르 ( 0 : 가요, 1 : 팝, 2 : 클래식, 3 : 영화음악) : ");
	scanf("%d", &type);

	if (type >= KPOP && type <= SCREEN_MUSIC)
	{
		library[count].genre = MUSIC_TYPE(type);
	}
	else
	{
		library[count].genre = KPOP;
	}
}

void menu()
{
	printf("====================\n");
	printf("  1. 추가\n");
	printf("  2. 출력\n");
	printf("  3. 검색\n");
	printf("  4. 종료\n");
	printf("====================\n");
}

int get_input()
{
	int num;

	printf("메뉴를 선택하시오 : ");
	scanf("%d", &num);

	return num;
}

void search_record(MUSIC library[], int count)
{
	char title[TITLE_SIZE];

	printf("제목 : ");
	scanf("%s", title);

	for (int i = 0; i < count; i++)
	{
		if (strcmp(title, library[i].title) == 0)
		{
			printf("저장된 위치는 %s\n", library[i].location);
			return;
		}
	}
	printf("찾는 음악이 테이블에 없습니다.\n");
}

void print_record(MUSIC library[], int count)
{

	for (int i = 0; i < count; i++)
	{
		printf("제목 : %s\n", library[i].title);
		printf("가수 : %s\n", library[i].singer);
		printf("위치 : %s\n", library[i].location);

		if (library[i].genre == 0)
		{
			printf("장르 : 가요\n");
		}
		else if (library[i].genre == 1)
		{
			printf("장르 : 팝\n");
		}
		else if (library[i].genre == 2)
		{
			printf("장르 : 클래식\n");
		}
		else if (library[i].genre == 3)
		{
			printf("장르 : 영화음악\n");
		}
	}
}
