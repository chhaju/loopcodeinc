#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, secondMax;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    max = (max > num4) ? max : num4;

    if (num1 != max)
        secondMax = (num1 > secondMax) ? num1 : secondMax;
    if (num2 != max)
        secondMax = (num2 > secondMax) ? num2 : secondMax;
    if (num3 != max)
        secondMax = (num3 > secondMax) ? num3 : secondMax;
    if (num4 != max)
        secondMax = (num4 > secondMax) ? num4 : secondMax;

    printf("The second maximum is: %d\n", secondMax);

    return 0;
}

