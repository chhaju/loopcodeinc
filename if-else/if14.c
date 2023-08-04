#include <stdio.h>

int main() {
    int student1[5];
    int student2[5];
    int i;
    
    printf("Enter marks for Student 1:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d: ", i+1);
        scanf("%d", &student1[i]);
    }
    
    printf("\nEnter marks for Student 2:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d: ", i+1);
        scanf("%d", &student2[i]);
    }
    
    int totalMarksStudent1 = 0;
    for (i = 0; i < 5; i++) {
        totalMarksStudent1 += student1[i];
    }
    
    int totalMarksStudent2 = 0;
    for (i = 0; i < 5; i++) {
        totalMarksStudent2 += student2[i];
    }
    
    if (totalMarksStudent1 > totalMarksStudent2) {
        printf("\nStudent 1 is the topper with a total of %d marks.\n", totalMarksStudent1);
    } else if (totalMarksStudent2 > totalMarksStudent1) {
        printf("\nStudent 2 is the topper with a total of %d marks.\n", totalMarksStudent2);
    } else {
        printf("\nBoth students have the same total marks.\n");
    }
    
    return 0;
}





