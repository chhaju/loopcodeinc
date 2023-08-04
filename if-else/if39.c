#include <stdio.h>

int main() {
    // Step 1: Enter the number of classes held
    int classesHeld;
    printf("Enter the number of classes held: ");
    scanf("%d", &classesHeld);

    // Step 2: Enter the number of classes attended
    int classesAttended;
    printf("Enter the number of classes attended: ");
    scanf("%d", &classesAttended);

    // Step 3: Calculate attendance percentage
    float attendancePercentage = (float) classesAttended / classesHeld * 100;

    // Step 4: Check if attendance is greater than or equal to 75%
    if (attendancePercentage >= 75) {
        printf("Attendance Percentage: %.2f%%\n", attendancePercentage);
        printf("Allowed to sit in the exam.\n");
    } else {
        printf("Attendance Percentage: %.2f%%\n", attendancePercentage);
        printf("Not allowed to sit in the exam.\n");
    }

    return 0;
}

