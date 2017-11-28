#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct student
{
	int number;		// 학번
	char name[20];	// 이름
	double gpa;		// 평점
};

int main()
{
	struct student table[SIZE] =
	{
		{ 1, "kim", 3.99 },
		{ 2, "Min", 2.68 },
		{ 3, "Lee", 4.01 }
	};
	struct student s;
	FILE *fp = NULL;

	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("student.dat", "wb")) == NULL)
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 배열을 파일에 저장한다.
	fwrite(table, sizeof(struct student), SIZE, fp);
	fclose(fp);

	// 이진 파일을 읽기 모드로 연다.
	if ((fp = fopen("student.dat", "rb")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
	{
		fread(&s, sizeof(struct student), 1, fp);
		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.gpa);
	}
	fclose(fp);

	return 0;
}
