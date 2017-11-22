#include <stdio.h>

void display(char *arr);

int main()
{
	char data[100],key;

	key = "12345678";

	printf("데이터를 입력하세요 : ");
	gets(data);

	display(data);
	printf("는");
	for (int i = 0; data[i] != NULL; i++)
	{
		data[i] = data[i] ^ key;
	}
	display(data);
	printf("로 암호화\n");

	display(data);
	printf("는");
	for (int i = 0; data[i] != NULL; i++)
	{
		data[i] = data[i] ^ key;
	}
	display(data);
	printf("로 복호화\n");


	return 0;
}

void display(char *arr)
{
	for (int i = 0; arr[i] != NULL; i++)
	{
		printf("%c", arr[i]);
	}
}
