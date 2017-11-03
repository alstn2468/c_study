#include <stdio.h>

union ip_adress
{
	unsigned long ladder;
	unsigned char sadder[4];
};

int main()
{
	union ip_adress addr;

	addr.sadder[0] = 1;
	addr.sadder[1] = 0;
	addr.sadder[2] = 0;
	addr.sadder[3] = 127;

	printf("%x\n", addr.ladder);

	return 0;
}
