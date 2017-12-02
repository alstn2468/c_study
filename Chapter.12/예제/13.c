// strcmp() 함수
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100];			// 첫번째 단어를 저장할 문자배열
	char s2[100];			// 두번쨰 단어를 저장할 문자배열
	int result;

	printf("첫번째 단어를 입력하시오 : ");
	scanf("%s", s1);
	printf("두번째 단어를 입력하시오 : ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
	{
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	}
	else if (result == 0)
	{
		printf("%s와 %s가 같습니다.\n", s1, s2);
	}
	else
	{
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
	}

	return 0;
}
