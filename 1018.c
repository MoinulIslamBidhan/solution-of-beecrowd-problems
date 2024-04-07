#include <stdio.h>
#include <math.h>
int main()
{
  int value;
  scanf("%d", &value);
  printf("%d\n", value);
  int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
  int num_banknotes;
  for (int i = 0; i < 7; i++)
  {
    num_banknotes = value / banknotes[i];
    value = value % banknotes[i];

    if (num_banknotes > 0)
    {
      printf("%d nota(s) de R$ %d\n", num_banknotes, banknotes[i]);
    }
    else
    {
      ("0 nota(s) de R$ %d\n", banknotes[i]);
    }
  }
  return 0;
}