#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; ++i)
  {
    double num1, num2, num3;
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    double weightedAverage = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
    printf("%.1lf\n", weightedAverage);
  }

  return 0;
}