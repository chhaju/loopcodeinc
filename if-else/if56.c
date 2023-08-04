#include <stdio.h>

int main() {
    int mcw, mwe, tot;
    printf("Enter the marks for MCW and MWE: ");
    scanf("%d%d", &mcw, &mwe);

    tot = mcw + mwe;

    if (mcw > 20 && mwe > 20 && tot > 45) {
        printf("Result: Pass\n");
    } else if (mcw > 20 && mwe > 20 && tot == 45) {
        printf("Result: Pass\n");
    } else if (mcw > 20 && mwe < 20) {
        printf("Result: Technically Fail\n");
    } else if (mcw > 20 && mwe > 20) {
        printf("Result: Pass\n");
    }

    return 0;
}

