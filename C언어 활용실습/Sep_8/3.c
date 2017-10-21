#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int arr[100];
	int i;
	int j;
	int x[11] = { 0 };

	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		arr[i] = (rand() % 10) + 1;
		x[arr[i]]++;
	}
	for (i = 1; i<11; i++)
	{
		printf("%d 값은 총 %d번 나왔습니다.\n ", i, x[i]);
	}
}
