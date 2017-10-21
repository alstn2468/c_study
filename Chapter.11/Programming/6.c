#include <stdio.h>
#define N_DATA 10

void array_copy(int *a, int *b, int size);
void array_print(int *a, int size);

int main()
{
  int A[N_DATA] = {1, 2, 3};
  int B[N_DATA] = {0};

  array_copy(A, B, N_DATA);
  array_print(B, N_DATA);

  return 0;
}

void array_copy(int *a, int *b, int size)
{
  for(int i = 0; i < size; i++)
  {
    b[i] = a[i];
  }
}

void array_print(int *a, int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%d", a[i]);
  }
  printf("\n");
}
