#include <Stdio.h>
#include <limits.h>

int main()
{
	int number, min_Value = INT_MAX;

	printf("정수를 입력하시오\n종료는 Cltr + z\n");

	while (scanf("%d", &number) != EOF)
	{
		if (number < min_Value)
			min_Value = number;
	}
	printf("최소값은 %d\n", min_Value);

	return 0;
}
