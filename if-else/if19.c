#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    if (sum >= 15 && sum <= 20) {
        sum = 20;
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}

