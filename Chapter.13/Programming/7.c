#include <stdio.h>
#include <math.h>

struct food
{
	char name[100];
	int cal;
};

int cal_total(struct food array[], int size);

int main()
{
	struct food array[3] =
	{
		{"hamburger", 900},
		{"bulgogi", 500},
		{"sushi", 700}
	};
	int total = cal_total(array, 3);

	for (int i = 0; i < 3; i++)
	{
		printf("%s의 칼로리 : %d\n", array[i].name, array[i].cal);
	}

	printf("합계 칼로리 = %d\n", total);

	return 0;
}

int cal_total(struct food array[], int size)
{
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += array[i].cal;
	}

	return total;
}
