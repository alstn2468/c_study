#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int sum;
	int avg;

	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%d", &x);
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%d", &y);
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%d", &z);

	sum = x+y+z;
	avg = sum/3.0;

	printf("�հ�� %d�̰� ��հ��� %d�Դϴ�.", sum,avg);

	return 0;
}