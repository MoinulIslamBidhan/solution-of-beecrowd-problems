#include <stdio.h>
int main()
{
  double x, y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  printf("%.3lf km/l\n", x / y);
  return 0;
}