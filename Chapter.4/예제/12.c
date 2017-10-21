#include <stdio.h>

int main(void)
{
	double light_speed = 300000;	//빛의 속도를 저장하는 변수(300000km/sec)
	double distance = 149600000;	//태양과 지구사이 거리를 저장하는 변수
					//149600000km로 초기화한다.
	double time;			//시간을 나타내는 변수

	time = distance/light_speed;	//거리를 빛의 속도로 나눈다.

	printf("빛의 속도는 %fkm/sec\n", light_speed);
	printf("태양과 지구의 거리 %fkm\n", distance);
	printf("도달 시간은 %f초\n", time);	//시간을 출력한다.

	return 0;
}