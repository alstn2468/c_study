#include <stdio.h>

int main(void)
{
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ��� : \n");
	printf("id :     \b\b\b\b");
	scanf("%d", &id);
	printf("pass :    \b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);

	return 0;
}