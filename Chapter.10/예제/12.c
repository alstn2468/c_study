#include <stdio.h>

#define STUDENTS 5

int main()
{
	int grade[STUDENTS] = { 30,20,10,40,50 };

	for (int i = 0; i < STUDENTS; i++)
	{
		printf("번호 %d : ", i);

		for (int s = 0; s < grade[i]; s++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
