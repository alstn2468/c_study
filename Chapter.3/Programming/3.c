#include <stdio.h>

int main(void)
{
	int height,base,area;

	printf("�ﰢ���� �غ� : ");
	scanf("%d", &base);
	printf("�ﰢ���� ���� : ");
	scanf("%d", &height);

	area = height * base * 0.5;

	printf("�ﰢ���� ���� : %d", area);

	return 0;
}