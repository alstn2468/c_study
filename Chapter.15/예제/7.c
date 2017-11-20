#include <stdio.h>

#define DELUXE

int main()
{
#ifdef DELUXE
	printf("딜럭스 버전입니다.\n");
#endif
	return 0;
}
