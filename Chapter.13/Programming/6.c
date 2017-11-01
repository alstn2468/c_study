#include <stdio.h>
#include <string.h>

struct email
{
	char title[100];
	char receiver[50];
	char sender[50];
	char content[1000];
	char date[100];
	int priority;
};

int main()
{
	struct email e;

	strcpy(e.title, "이메일");
	strcpy(e.receiver, "alstn2468_@naver.com");
	strcpy(e.sender, "alstn2468_@naver.com");
	strcpy(e.content, "이메일 내용이 들어갈 부분입니다.");
	strcpy(e.date, "2017/11/01");
	e.priority = 1;

	printf("e.title = %s\n", e.title);
	printf("e.receiver = %s\n", e.receiver);
	printf("e.sender = %s\n", e.sender);
	printf("e.content = %s\n", e.content);
	printf("e.date = %s\n", e.date);
	printf("e.priority = %d\n", e.priority);

	return 0;
}
