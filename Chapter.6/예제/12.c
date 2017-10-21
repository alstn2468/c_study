// 구구단 출력 프로그램
#include <stdio.h>

int main()
{
	int i = 1;

loop:
	printf("%d * %d = %d \n", 3, i, 3 * i);
	i++;
	if (i == 10) goto end;
	goto loop;

end:

	return 0;
}
