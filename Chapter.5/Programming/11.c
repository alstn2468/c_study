#include <stdio.h>

int main()
{
	int cir_angle = 360;
	double  angle = 7.2, dis = 900.0, earth_dis, earth_r;

	earth_dis = (cir_angle * dis) / angle;
	earth_r = earth_dis / (2.0 * 3.14);

	printf("지구의 반지름은 : %f", earth_r);

	return 0;
}
