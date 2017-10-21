#include <stdio.h>

int main()
{
	int a = 100, b = 200, c;

	c = (a == 100 || b > 200);
  // a ==  100 >> 1 따라서 뒤에 계산 x해도 c = 1
	printf("%d\n", c);

	return 0;
}
