#include <stdio.h>

int main() {
    float salary;
    printf("Enter a salary: ");
    scanf("%f", &salary);
    
    float hra, da;
    
    if (salary <= 10000) {
        hra = (20.0 / 100.0) * salary;
        da = (80.0 / 100.0) * salary;
    } else if (salary <= 20000) {
        hra = (25.0 / 100.0) * salary;
        da = (90.0 / 100.0) * salary;
    } else if (salary >= 20000) {
        hra = (30.0 / 100.0) * salary;
        da = (95.0 / 100.0) * salary;
    }
    
    float grossSalary = salary + hra + da;
    printf("Gross salary: %.2f\n", grossSalary);
    
    return 0;
}

