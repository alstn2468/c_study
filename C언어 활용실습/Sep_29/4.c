#include <stdio.h>

void minmax(int arr[], int size, int *min, int *max)
{
*min = arr[0];
*max = arr[0];

for (int i = 0; i < size; i++)
{
  if (arr[i] > arr[0])
  {
    *max = arr[i];
  }
}
for (int i = 0; i < size; i++)
{
  if (arr[i] < arr[0])
  {
    *min = arr[i];
  }
}
}

int main()
{
int arr[] = { 5,4,2,6,8,10,5 };
int min, max, i;
int size = sizeof(arr) / sizeof(int);

minmax(arr, size, &min, &max);

for (i = 0; i < size; i++)
{
  printf("%d ", arr[i]);
}
printf("\nmin value : %d\nmax value : %d\n", min, max);

return 0;
}
