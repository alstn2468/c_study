#include <stdio.h>

int main()
{
	int x, y;

	printf("x좌표를 입력해주세요 : ");
	scanf("%d", &x);
	printf("y좌표를 입력해주세요 : ");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1사분면\n") : printf("4사분면\n")) : ((y > 0) ? printf("2사분면\n") : printf("3사분면\n"));

	return 0;
}
