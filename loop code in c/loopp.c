#include <stdio.h>
#include <unistd.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n");
        sleep(1); // Introduce a delay of 1 second
    }

    return 0;
}

