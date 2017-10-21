##include <stdio.h>

int main()
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x < 5)
			continue;
		else
			break;
		printf("Hello World!");
	}
	return 0;
}

// 한번도 출력되지 않는다.
