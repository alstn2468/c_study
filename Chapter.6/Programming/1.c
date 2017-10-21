#include <stdio.h>

int main()
{
	char a;

	printf("문자를 입력하세요 : ");
	scanf("%c", &a);

	switch (a)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
	}
	return 0;
}
