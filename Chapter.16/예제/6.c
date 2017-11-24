#include <stdio.h>

int main()
{
	char ch;

	while (1)
	{
		scanf(" %c", &ch);
		// fflush(stdin); << 작동하지 않음, "%c" >> " %c" 사용
		printf("%d", ch);
	}

	return 0;
}
