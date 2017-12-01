#include <stdio.h>

void get_gcd_lcm(int x, int y, int *p_lcm, int *p_gcd);

int main()
{
	int x, y, g, l;

	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	get_gcd_lcm(x, y, &l, &g);

	printf("최소공배수는 %d입니다.\n", l);
	printf("최대공약수는 %d입니다.\n", g);

	return 0;
}

void get_gcd_lcm(int x, int y, int *p_lcm, int *p_gcd)
{
	int org_x = x;
	int org_y = y;
	int tmp = 0;

	while (y != 0)
	{
		tmp = y;
		y = x % y;
		x = tmp;
	}

	*p_gcd = x;
	*p_lcm = org_x * org_y / *p_gcd;
}
