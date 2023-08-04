#include <stdio.h>
#include <limits.h>

int main() {
    int num1, num2, num3;
    int max = INT_MIN;
    int secondMax = INT_MIN;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > max) {
        secondMax = max;
        max = num1;
    } else if (num1 > secondMax) {
        secondMax = num1;
    }

    if (num2 > max) {
        secondMax = max;
        max = num2;
    } else if (num2 > secondMax) {
        secondMax = num2;
    }

    if (num3 > max) {
        secondMax = max;
        max = num3;
    } else if (num3 > secondMax) {
        secondMax = num3;
    }

    printf("The second maximum is: %d\n", secondMax);

    return 0;
}

