#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	y = 3*(x*x) + 7*x + 11;

	printf("���׽��� ���� %d", y);

	return 0;
}