#include <stdio.h>

struct tri
{
int x;
int y;
};

int main()
{
struct tri t;

printf("밑변의 길이 : ");
scanf("%d", &t.x);
printf("높이 : ");
scanf("%d", &t.y);

printf("삼각형의 넓이 : %d\n", int(0.5 * t.x * t.y));

return 0;
}
