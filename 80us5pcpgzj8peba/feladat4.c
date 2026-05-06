#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char szoveg[50];
    int darab = 0;

    while (1) {
        printf("URL (vege: q): ");

        fgets(szoveg, 50, stdin);

        szoveg[strcspn(szoveg, "\n")] = '\0';

        if (strcmp(szoveg, "q") == 0) {
            break;
        }

        if (strncmp(szoveg, "http://", 7) == 0) {
            darab++;
        }
    }

    printf("\nOsszesen %d darab 'http://' kezdetu URL-t adtal meg.\n", darab);

    return 0;
}