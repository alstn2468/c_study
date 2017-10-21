#include <stdio.h>

int main()
{
	int x = 9;		//1001
	int y = 10;		//1010

	printf("비트 AND = %08X\n",x & y);		// 00001000
	printf("비트 OR = %08X\n", x | y);		// 00001011
	printf("비트 XOR = %08X\n", x ^ y);		// 00000011
	printf("비트 NOT = %08X\n", ~x);		// 11110110

	return 0;
}
