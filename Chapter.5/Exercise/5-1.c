#include <stdio.h>

int main()
{
	int n_hou_year, age, member_num, result;

	printf("무주택 기간을 입력해주세요 : ");
	scanf("%d", &n_hou_year);
	printf("가구주의 연령을 입력해주세요 : ");
	scanf("%d", &age);
	printf("가족의 수를 입력해주세요 : ");
	scanf("%d", &member_num);

	result = (n_hou_year >= 3) && (age >= 40) && (member_num >= 3);

	if (result == 1)
	{
		printf("가능합니다.");
	}
	else
	{
		printf("불가능합니다.");
	}

	return 0;
}
