#include <stdio.h>

int main()
{
	int com = 1;
	int user;

	printf("선택하시오 (1 : 가위 2 : 바위 3 : 보)");
	scanf("%d", &user);

	if (user == 1 && com == 2)
		printf("컴퓨터가 이겼습니다.\n");
	else if (user == 1 && com == 3)
		printf("사용자가 이겼습니다.\n");
	else if (user == 2 && com == 1)
		printf("사용자가 이겼습니다.\n");
	else if (user == 3 && com == 1)
		printf("컴퓨터가 이겼습니다.\n");
	else if (user == 3 && com == 2)
		printf("사용자가 이겼습니다.\n");
	else
		printf("비겼습니다.\n");
	return 0;
}
