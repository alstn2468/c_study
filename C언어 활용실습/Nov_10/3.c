#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
	int data1 = 44, data2 = 55;

	printf("data1 : %d\n", data1);
	printf("data2 : %d\n", data2);

	swap(&data1, &data2);
	printf("swap\n");

	printf("data1 : %d\n", data1);
	printf("data2 : %d\n", data2);

	return 0;
}

void swap(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
