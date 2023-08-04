#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int denominations[] = {2000, 500, 200, 100, 20, 10, 5, 2, 1};
    int num_notes[sizeof(denominations) / sizeof(denominations[0])];
    int i;

    for (i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++) {
        num_notes[i] = amount / denominations[i];
        amount %= denominations[i];
    }

    printf("Minimum number of notes:\n");

    for (i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++) {
        if (num_notes[i] > 0) {
            printf("%d notes of Rs. %d\n", num_notes[i], denominations[i]);
        }
    }

    return 0;
}

