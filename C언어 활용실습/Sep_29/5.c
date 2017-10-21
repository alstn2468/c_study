#include <stdio.h>

struct student
{
	char std_name[10];
	int std_idt;
	int test_score_kor;
	int test_score_en;
	int test_score_math;
};

int main()
{
	struct student s;

	printf("Student Name : ");
	scanf("%s", s.std_name);
	printf("Studnet Identity : ");
	scanf("%d", &s.std_idt);
	printf("%s score of Korean : ", s.std_name);
	scanf("%d", &s.test_score_kor);
	printf("%s score of English : ", s.std_name);
	scanf("%d", &s.test_score_en);
	printf("%s score of Math : ", s.std_name);
	scanf("%d", &s.test_score_math);

	return 0;
}
