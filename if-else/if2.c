#include <stdio.h>
#include <string.h>

int main() {
    char Day[4];
    printf("Enter a Day: ");
    scanf("%s", Day);

    if (strcmp(Day, "sun") == 0) {
        printf("Noodles\n");
    }
    else if (strcmp(Day, "Mon") == 0) {
        printf("Poha\n");
    }
    else if (strcmp(Day, "Tue")==0) {
        printf("idli\n");
    }
    else if (strcmp(Day,"Wed") == 0) {
    printf("Paratha\n");
    }
    else if (strcmp(Day,"Thur") == 0) {
    printf("chhole\n");
    }
    else if (strcmp(Day,"Fri") == 0) {
    printf("Maggi\n");
    }
    else if (strcmp(Day,"Satr") == 0){
    printf("Upama\n");
    }

    return 0;
}

