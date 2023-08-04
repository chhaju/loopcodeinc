#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    
    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);
    
    printf("Enter marks for Biology: ");
    scanf("%d", &biology);
    
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mathematics);
    
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);
    
    int totalMarks = physics + chemistry + biology + mathematics + computer;
    float percentage = (float)totalMarks / 5;
    
    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    
    return 0;
}

