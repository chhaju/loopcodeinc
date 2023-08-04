#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    switch (month) {
        case 2:
            printf("Enter the year: ");
            int year;
            scanf("%d", &year);

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("February has 29 days.\n");
            } else {
                printf("February has 28 days.\n");
            }
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The month has 30 days.\n");
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The month has 31 days.\n");
            break;

        default:
            printf("Invalid month number.\n");
    }

    return 0;
}

