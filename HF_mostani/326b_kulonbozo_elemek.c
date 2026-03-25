#include <stdio.h>

int main() {
    int szamok[100] = {0};
    int szam;
    int kulonbozo_db = 0;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");

    while (1) {
        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }

        if (szam < 1 || szam > 99) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue;
        }

        if (szamok[szam] == 0) {
            szamok[szam] = 1;
            kulonbozo_db++;
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", kulonbozo_db);
    printf("Ezek (növekvő sorrendben): ");

    int elso = 1;
    for (int i = 1; i <= 99; i++) {
        if (szamok[i] == 1) {
            if (!elso) {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}