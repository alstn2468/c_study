#include <stdio.h>

union Number
{
	int int_num;
	float flo_num;
};

int main()
{
	union Number n;

	printf("Define Number union and check values\n");
	printf("input integer : ");
	scanf("%d", &n.int_num);

	printf("result is %f\n", n.flo_num);

	printf("\ninput float : ");
	scanf("%f", &n.flo_num);

	printf("result is %d\n", n.int_num);

	return 0;
}
