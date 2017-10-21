#include <stdio.h>

int main()
{
	char alp;

	printf("문자를 입력해주세요 : ");
	scanf("%c", &alp);

	if (alp == 'R')
		printf("Rectangle\n");
	else if (alp == 'T')
		printf("Triangle\n");
	else if (alp == 'C')
		printf("Circel\n");
	else
		printf("Unknown\n");

	return 0;
}
