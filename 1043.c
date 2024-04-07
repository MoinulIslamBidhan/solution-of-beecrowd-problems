#include<stdio.h>

int main()
{
  int X, Y;
  double prices[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
  scanf("%d %d", &X, &Y);
  if (X >= 1 && X <= 5)
  {
    double total = Y * prices[X - 1];
    printf("Total: R$ %.2lf\n", total);
  }
  else
  {
    printf("Invalid product code\n");
  }
  return 0;
}