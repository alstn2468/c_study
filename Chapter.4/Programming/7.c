#include <stdio.h>

int main(void)
{
	double kenergy, mass, speed;

	printf("���� : ");
	scanf("%lf", &mass);
	printf("�ӵ� : ");
	scanf("%lf", &speed);

	kenergy = (1.0/2.0)*mass*speed*speed;
	
	printf("������� : %lf\n", kenergy);

	return 0;
}