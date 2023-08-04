#include <stdio.h>

int main() {
    float costPrice;
    
    printf("Enter the cost price of the bike: ");
    scanf("%f", &costPrice);
    
    float roadTax;
    if (costPrice <= 50000) {
        roadTax = 0.05 * costPrice;
    } else if (costPrice <= 100000) {
        roadTax = 0.10 * costPrice;
    } else {
        roadTax = 0.15 * costPrice;
    }
    
    printf("Road Tax: %.2f\n", roadTax);
    
    return 0;
}

