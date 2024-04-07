#include <stdio.h>

int main()
{
  int num;
  int evenCount = 0;

  for (int i = 0; i < 5; ++i)
  {
    scanf("%d", &num);

    if (num % 2 == 0)
    {
      evenCount++;
    }
  }

  printf("%d valores pares\n", evenCount);

  return 0;
}

