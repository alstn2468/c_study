#include <stdio.h>

int main(void)
{
	double width, length, height;
	double volume;

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf("%lf %lf %lf", &width, &length, &height);

	volume = length * width * height;

	printf("������ ���Ǵ� %f�Դϴ�", volume);

	return 0;
}