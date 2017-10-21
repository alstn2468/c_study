#include <stdio.h>

int main()
{
	int age;

	printf("나이를 입력해주세요 : ");
	scanf("%d", &age);

	if (age > 18)
		printf("성인\n");
	else
		printf("청소년\n");

	return 0;
}
