#include <stdio.h>

int main() {
    int szam = 21024;
    int tomb[5] = {2, 1, 0, 2, 4};
    int meret = 5;

    int osszeg = 0;
    for (int i = 1; i < meret; i++) {
        int kulonbseg = tomb[i] - tomb[i - 1];
        if (kulonbseg < 0) kulonbseg = -kulonbseg;
        osszeg += kulonbseg;
    }

    printf("A felhokarcolok magassagkulonbsegenek osszege: %d\n", osszeg);

    return 0;
}