#include <stdio.h>

int main(void)
{
	float inch, mm;
	
	printf("��ġ ������ �Է� : ");
	scanf("%f", &inch);
	
	mm = inch * 25.4;

	printf("%f ��ġ = %f mm", inch, mm);

	return 0;
}