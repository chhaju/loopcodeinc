#include <stdio.h>

int main() {
    int rh, ts, grade;
    float cc;

    printf("Enter the value of rh: ");
    scanf("%d", &rh);

    printf("Enter the value of ts: ");
    scanf("%d", &ts);

    printf("Enter the value of cc: ");
    scanf("%f", &cc);

    if (rh > 50 && ts > 5600) {
        if (cc > 7)
            grade = 10;
        else if (cc < 7)
            grade = 7;
   
    }
    else if (rh < 50 && ts < 5600 && cc > 7)
        grade = 9;
    else if (rh < 50 && ts>5600 && cc > 7)
        grade = 8;
    else
        grade = 0;

    printf("Grade: %d\n", grade);

    return 0;
}

