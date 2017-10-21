#include <stdio.h>

int main()
{
	int height, weight, ave_weight;

	printf("체중과 키를 입력하시오(키,체중) : ");
	scanf("%d %d", &height, &weight);

	ave_weight = (height - 100) * 0.9;

	if (weight > ave_weight)
		printf("과체중입니다.\n");
	else
		printf("정상 체중입니다.\n");

	return 0;
}
