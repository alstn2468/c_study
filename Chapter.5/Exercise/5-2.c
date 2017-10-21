#include <stdio.h>

int main()
{
	int age, height, parents, result;

	printf("나이를 입력해주세요 : ");
	scanf("%d", &age);
	printf("키를 입력해주세요 : ");
	scanf("%d", &height);
	printf("보호자가 있나요? 있으면 1 없으면 0을 입력해주세요.");
	scanf("%d", &parents);

	result = (age >= 6) && (height >= 150) || (parents == 1);

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
