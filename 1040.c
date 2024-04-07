#include <stdio.h>

int main()
{
  double N1, N2, N3, N4;
  scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

  double average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);
  printf("Media: %.1lf\n", average);

  if (average >= 7.0)
  {
    printf("Aluno aprovado.\n");
  }
  else if (average < 5.0)
  {
    printf("Aluno reprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");

    while (average >= 5.0 && average <= 6.9)
    {
      double exam;
      scanf("%lf", &exam);
      printf("Nota do exame: %.1lf\n", exam);

      double average2 = (exam + average) / 2;

      if (average2 >= 5.0)
      {
        printf("Aluno aprovado.\n");
      }
      else
      {
        printf("Aluno reprovado.\n");
      }
      printf("Media final: %.1lf\n", average2);
      break;
    }
  }
  return 0;
}