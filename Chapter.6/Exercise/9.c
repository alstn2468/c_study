#include <stdio.h>

int main()
{
	int x;

	printf("x값을 입력해주세요.");
	scanf("%d", &x);

	if (x == 0)
		printf("x는 0이다.\n");

	return 0;
}
