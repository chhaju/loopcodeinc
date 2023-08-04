#include <stdio.h>

int main() {
    
    float A, B;
    printf("Enter the first number (A): ");
    scanf("%f", &A);
    printf("Enter the second number (B): ");
    scanf("%f", &B);
    char operator;
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
 float result;
    switch (operator) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            if (B != 0) {
                result = A / B;
            } else {
                printf("Error: Division by zero!\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }
    printf("Result: %.2f\n", result);

    return 0;
}

