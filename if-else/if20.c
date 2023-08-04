#include <stdio.h>

int main() {
    int quantity;
    float unitCost, totalCost;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    printf("Enter the cost per unit: ");
    scanf("%f", &unitCost);

    totalCost = quantity * unitCost;

    if (totalCost > 1000) {
        totalCost -= totalCost * 0.1;  // Applying a 10% discount
    }

    printf("Total cost: %.2f\n", totalCost);

    return 0;
}


