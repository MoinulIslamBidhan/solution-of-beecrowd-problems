#include <stdio.h>

int main()
{
  double t, as;
  scanf("%lf %lf", &t, &as);
  printf("%.3lf\n", (t * as) / 12);
  return 0;
}