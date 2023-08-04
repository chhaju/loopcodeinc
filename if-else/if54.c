#include <stdio.h>

int main() {
    float side1, side2, side3, side4, angle;

    printf("Enter the lengths of the four sides: ");
    scanf("%f %f %f %f", &side1, &side2, &side3, &side4);

    printf("Enter the internal angle in degrees: ");
    scanf("%f", &angle);

    if (side1 == side2 && side2 == side3 && side3 == side4) {
        printf("It is a square.\n");
    } else if (side1 == side2 && side3 == side4) {
        printf("It is a rectangle.\n");
    } else if (side1 == side3 && side2 == side4) {
        printf("It is a parallelogram.\n");
    } else if (side1 == side3 && side2 == side4 && side1 != side2) {
        printf("It is a rhombus.\n");
    } else {
        printf("It is an irregular quadrilateral.\n");
    }

    return 0;
}

