#include <stdio.h>
#include <string.h>

int main()
{
	char *p1 = "HelloWorld";
	char p2[] = "HelloWotld";

	// strcpy(p1, "Goodbye"); >> 실행오류!

	printf("p1 = %p\n", p1);
	printf("p1 = %s\n", p1);
	printf("\"HelloWorld\" 주소 = %p\n\n", "HelloWorld");

	p1 = "Goodbye";		// 가능
	printf("p1을 \"Goodbye\"를 가리키도록 변경\n\n");
	printf("p1 = %p\n", p1);
	printf("p1 = %s\n", p1);
	printf("\"Goodbye\" 주소 = %p\n\n", "Goodbye");

	strcpy(p2, "Goodbye");
	printf("p2 = %p\n", p2);
	printf("p2 = %s\n", p2);

	return 0;
}
