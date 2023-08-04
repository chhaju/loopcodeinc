#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid set of triangle.\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid set of triangle.\n");
    }
    else if (a == b && b == c) {
        printf("Equilateral triangle.\n");
    }
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        printf("Right angle triangle.\n");
    }
    else if (a > 90 || b > 90 || c > 90) {
        printf("Obtuse angle triangle.\n");
    }
    else {
        printf("Acute angle triangle.\n");
    }

    return 0;
}

