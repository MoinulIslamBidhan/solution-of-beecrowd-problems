#include <stdio.h>

int main()
{
  int ST, ET;
  scanf("%d %d", &ST, &ET);

  int duration;

  if (ST == 0 && ET == 0)
  {
    duration = 24;
  }
  else if (ET > ST)
  {
    duration = ET - ST;
  }
  else
  {
    duration = 24 - ST + ET;
  }

  printf("O JOGO DUROU %d HORA(S)\n", duration);

  return 0;
}
