#include <stdio.h>

int main() {
    int magassag;

    printf("Magasság: ");
    scanf("%d", &magassag);

    while (magassag <= 0 || magassag % 2 == 0) {
        printf("Magasság (pozitív páratlan szám!): ");
        scanf("%d", &magassag);
    }

    int mag_fel = magassag / 2;

    for (int i = 0; i <= mag_fel; i++) {
        for (int j = 0; j < mag_fel - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mag_fel - 1; i >= 0; i--) {
        for (int j = 0; j < mag_fel - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}