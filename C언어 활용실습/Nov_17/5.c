#include <stdio.h>

int main()
{
	printf("_DEBUG가 정의된 경우 main함수에 파일명과 라인번호 출력\n");
#ifdef _DEBUG
	printf("파일명 : %s, 라인 번호 : %d\n", __FILE__, __LINE__);
#endif
}
