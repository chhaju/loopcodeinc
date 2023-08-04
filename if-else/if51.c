#include <stdio.h>

int main() {
    int age, days;
    char gender;
    float wage_per_day;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if ((age >= 18 && age < 30) && (gender == 'M' || gender == 'F')) {
        wage_per_day = (gender == 'M') ? 700 : 750;
    } else if ((age >= 30 && age <= 40) && (gender == 'M' || gender == 'F')) {
        wage_per_day = (gender == 'M') ? 800 : 850;
    } else {
        printf("Enter appropriate age and gender (M/F)\n");
        return 0;
    }

    float total_wage = wage_per_day * days;
    printf("Total wages: Rs. %.2f\n", total_wage);

    return 0;
}

