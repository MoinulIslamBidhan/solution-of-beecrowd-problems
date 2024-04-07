#include <stdio.h>

int main()
{
  int startHour, startMinute, endHour, endMinute;
  scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

  int totalStartMinutes = startHour * 60 + startMinute;
  int totalEndMinutes = endHour * 60 + endMinute;

  int durationMinutes;

  if (totalEndMinutes > totalStartMinutes)
  {
    durationMinutes = totalEndMinutes - totalStartMinutes;
  }
  else
  {
    durationMinutes = 24 * 60 - totalStartMinutes + totalEndMinutes;
  }

  int durationHours = durationMinutes / 60;
  int remainingMinutes = durationMinutes % 60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, remainingMinutes);
  return 0;
}
Sent
    Write to
