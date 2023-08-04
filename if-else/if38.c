#include <stdio.h>
#include <math.h>

int main(){
    int yearsOfService, salary, bonas;
    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);
    printf("Enter the salary: ");
    scanf("%d", &salary);
    if (yearsOfService > 5) {
        
        float amount = 0.05 * salary;
        float  bonus = amount + salary;
        printf("Net bonus amount: %.2f\n", bonus);
    } else {
        printf("No bonus.\n");
    }

    return 0;
}

