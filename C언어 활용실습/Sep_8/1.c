#include <stdio.h>

int main()
{
    int x;

    printf("input number : ");
    scanf("%d", &x);

    if(x % 10 == 0)
    {
      printf("A multiple of five and multiple of two\n");
    }
    else if(x % 2 == 1)
    {
      printf("odd\n");
    }
    else if(x % 2 == 0)
    {
      printf("even\n");
    }

  return 0;
}
