#include <stdio.h>

int main()
{
  double salary;
  scanf("%lf", &salary);

  double newSalary, increaseAmount, increasePercentage;

  if (salary <= 400.00)
  {
    increasePercentage = 15;
  }
  else if (salary <= 800.00)
  {
    increasePercentage = 12;
  }
  else if (salary <= 1200.00)
  {
    increasePercentage = 10;
  }
  else if (salary <= 2000.00)
  {
    increasePercentage = 7;
  }
  else
  {
    increasePercentage = 4;
  }

  increaseAmount = salary * (increasePercentage / 100);
  newSalary = salary + increaseAmount;

  printf("Novo salario: %.2lf\n", newSalary);
  printf("Reajuste ganho: %.2lf\n", increaseAmount);
  printf("Em percentual: %.0lf %%\n", increasePercentage);

  return 0;
}
