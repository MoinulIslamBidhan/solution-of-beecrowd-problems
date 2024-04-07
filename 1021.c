#include <stdio.h>

int main() {
    float amount;
    scanf("%f", &amount);

    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");

    for (int i = 0; i < 6; i++) {
        int count = amount / notes[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes[i] * 1.0);
        amount -= count * notes[i];
    }

    printf("MOEDAS:\n");

    int remainingCents = round(amount * 100);

    for (int i = 0; i < 6; i++) {
        int count = remainingCents / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
        remainingCents %= coins[i];
    }

    return 0;
}
