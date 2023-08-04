#include <stdio.h>

int main() {
    int amount;
    int notes[] = {2000, 500, 200, 100, 20, 10, 5, 2, 1};
    int numNotes[sizeof(notes) / sizeof(notes[0])];  

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
        numNotes[i] = 0;
    }
    if (amount >= 2000) {
        numNotes[0] = amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500) {
        numNotes[1] = amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        numNotes[2] = amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        numNotes[3] = amount / 100;
        amount %= 100;
    }
    if (amount >= 20) {
        numNotes[4] = amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        numNotes[5] = amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        numNotes[6] = amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        numNotes[7] = amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        numNotes[8] = amount;
    }

    // Print the result
    printf("Minimum number of notes needed:\n");
    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
        if (numNotes[i] > 0) {
            printf("%d Rupee note(s) of denomination %d\n", numNotes[i], notes[i]);
        }
    }

    return 0;
}

