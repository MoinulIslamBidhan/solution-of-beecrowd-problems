#include <stdio.h>

int main()
{
  int N;

  printf("Enter an integer N (N < 10000): ");
  scanf("%d", &N);

  for (int i = 1; i <= 10000; i++)
  {
    if (i % N == 2)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}