#include <stdio.h>

int contains(int n, int tomb[], int keresett) {
    for (int i = 0; i < n; i++) {
        if (tomb[i] == keresett) {
            return 1;
        }
    }
    return 0;
}

int index(int n, int tomb[], int keresett) {
    for (int i = 0; i < n; i++) {
        if (tomb[i] == keresett) {
            return i;
        }
    }
    return -1;
}

int main() {
    int szamok[10] = {9,8,5,6,6,7,0,8,5,2};
    int meret = 10;
    int keresett = 7;

    if (contains(meret, szamok, keresett)) {
        printf("A tomb tartalmazza a keresett elemet.\n");
    } else {
        printf("Nem talalhato\n");
    }


    int idx = index(meret, szamok, keresett);

    if (idx != -1) {
        printf("A keresett elem indexe: %d\n", idx);
    } else {
        printf("Nem talalhato\n");
    }


    return 0;
}