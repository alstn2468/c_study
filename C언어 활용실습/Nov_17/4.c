#include <stdio.h>

int main()
{
	printf("내장 매크로를 이용하여 소스의 컴파일 날짜와 시간을 출력하시오\n");
	printf("컴파일 날짜 : %s\n", __DATE__);
	printf("컴파일 시간 : %s\n", __TIME__);

	return 0;
}
