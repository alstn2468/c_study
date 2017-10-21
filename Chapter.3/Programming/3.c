#include <stdio.h>

int main(void)
{
	int height,base,area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf("%d", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf("%d", &height);

	area = height * base * 0.5;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %d", area);

	return 0;
}