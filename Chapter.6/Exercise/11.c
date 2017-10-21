#include <stdio.h>

int main()
{
	int score;

	printf("점수를 입력해주세요 : ");
	scanf("%d", &score);

	if (score > 90)
	{
		printf("장학금\n");
		printf("우등\n");
	}
	else
		printf("좀더 노력하세요\n");

	return 0;
}
