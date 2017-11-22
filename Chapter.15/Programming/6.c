#include <stdio.h>
#define SET_BIT(n, pos) ((n) != (1 << (pos)))
#define CLR_BIT(n, pos)	((n) & (1 << (pos)))
#define GET_BIT(n, pos) ((n) &= (~(1) << (pos)))

int main()
{
	unsigned int num = 0x01;

	SET_BIT(num, 1);		// 0x01 -> 0x03
	printf("SET_BIT() = %x\n", num);

	CLR_BIT(num, 0);		// 0x03 -> 0x02
	printf("CLR_BIT() = %x\n", num);

	printf("GET_BIT(num, 1) = %d, GET_BIT(num, 0) = %d\n", GET_BIT(num, 1), GET_BIT(num, 0));

	return 0;
}
