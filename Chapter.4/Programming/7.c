#include <stdio.h>

int main(void)
{
	double kenergy, mass, speed;

	printf("질량 : ");
	scanf("%lf", &mass);
	printf("속도 : ");
	scanf("%lf", &speed);

	kenergy = (1.0/2.0)*mass*speed*speed;
	
	printf("운동에너지 : %lf\n", kenergy);

	return 0;
}