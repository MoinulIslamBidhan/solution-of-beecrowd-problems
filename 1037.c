#include<stdio.h>
#include<math.h>
int main()
{
  float Number;
  scanf("%f", &Number);
  if (Number < 0 || Number > 100)
  {
    printf("Fora de intervalo\n");
  }
  else if (Number <= 25)
  {
    printf("Intervalo [0,25]\n");
  }
  else if (Number <= 50)
  {
    printf("Intervalo (25,50]\n");
  }
  else if (Number <= 75)
  {
    printf("Intervalo (50,75]\n");
  }
  else
  {
    printf("Intervalo (75,100]\n");
  }
  return 0;
}