#include <stdio.h>

int main()
{
	int grade[] = { 1,2,3,4,5,6 };
	int size;

	size = sizeof(grade) / sizeof(grade[0]);

	for (int i = 0; i < size; i++)
	{
		printf("grade[%d} = %d\n", i, grade[i]);
	}
	return 0;
}
