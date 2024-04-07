#include <stdio.h>

int main()
{
  double N1, N2, N3, N4, N5, N6;
  double count = 0;

  scanf("%lf %lf %lf %lf %lf %lf", &N1, &N2, &N3, &N4, &N5, &N6);

  if (N1 > 0)
  {
    count++;
  }
  if (N2 > 0)
  {
    count++;
  }
  if (N3 > 0)
  {
    count++;
  }
  if (N4 > 0)
  {
    count++;
  }
  if (N5 > 0)
  {
    count++;
  }
  if (N6 > 0)
  {
    count++;
  }

  printf("%.0lf valores positivos\n", count);

  return 0;
}