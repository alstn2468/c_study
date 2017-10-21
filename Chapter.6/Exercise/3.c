#include <stdio.h>

int main()
{
	int x;

	printf("정수를 입력해주세요.");
	scanf("%d", &x);

	if (x > 10 && x < 20)
	{
		printf("%d\n", x);
	}
	return 0;
}
