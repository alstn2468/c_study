// while문을 이용한 성적의 평균 구하기 프로그램
#include <Stdio.h>

int main()
{
	int grade, n;
	float sum, average;

	// 필요한 변수 초기화
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오 : \n");

	// 성적을 입력받아서 합계를 구하고 학생 수를 센다.
	while (grade >= 0)
	{
		printf("성적을 입력하세요 : ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;

	// 평균을 계산하고 화면에 출력한다.
	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}
