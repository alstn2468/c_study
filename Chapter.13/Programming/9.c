#include <stdio.h>
#include <string.h>

struct phone_book
{
	char name[20];
	char Home_num[20];
	char Tel_num[20];
};

int main()
{
	struct phone_book pb[5];
	char name[20];

	for (int i = 0; i < 5; i++)
	{
		printf("이름을 입력하세요 : ");
		scanf("%s", pb[i].name);
		printf("집 전화번호를 입력하세요 : ");
		scanf("%s", pb[i].Home_num);
		printf("휴대폰 번호를 입력하세요 : ");
		scanf("%s", pb[i].Tel_num);
	}

	printf("검색할 이름을 입력하세요 : ");
	scanf("%s", name);

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(name, pb[i].name) == 0)
		{
			printf("집 전화번호 = %s\n", pb[i].Home_num);
			printf("휴대폰 번호 = %s\n", pb[i].Tel_num);

			return 0;
		}
	}
	printf("검색이 실패했습니다.\n");

	return 0;
}
