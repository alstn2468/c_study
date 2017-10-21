#include <stdio.h>

int main()
{
	int height, age;

	printf("키를 입력해주세요(cm) : ");
	scanf("%d", &height);
	printf("나이를 입력해주세요 : ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("타도 좋습니다.\n");
	else
		printf("탈수 없습니다.\n");

	return 0;
}
