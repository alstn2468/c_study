#include <stdio.h>

int main(void)
{
	float inch, mm;
	
	printf("인치 단위로 입력 : ");
	scanf("%f", &inch);
	
	mm = inch * 25.4;

	printf("%f 인치 = %f mm", inch, mm);

	return 0;
}