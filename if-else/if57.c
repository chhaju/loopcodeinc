#include <stdio.h>

int main() {
    int pay, bonus;
    printf("Enter a pay: ");
    scanf("%d", &pay);

    if (pay > 3000) {
        bonus = 300;
    } else if (pay > 1600) {
        bonus = pay * 10 / 100;
        if (bonus > 240) {
            bonus = 240;
        } else {
            bonus = 0;
        }
    } else {
        if (pay < 100) {
            bonus = 100;
        } else {
            bonus = pay * 15 / 100;
        }
    }

    printf("Bonus: %d\n", bonus);

    return 0;
}

