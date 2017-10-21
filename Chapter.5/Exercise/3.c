#include <stdio.h>

int main()
{
	printf("%x\n", 0x20 << 2);
  // 0000 0000 0001 0100 >>> 20
  // 0000 0000 0101 0000 >>> 80
	return 0;
}
